
void * Convert_RGB(void)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  void *_Memory;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint unaff_EBX;
  int unaff_ESI;
  void *unaff_RDI;
  byte *pbVar7;
  int unaff_R12D;
  uint unaff_R15D;
  
  if ((((((-1 < unaff_ESI) && (-1 < (int)unaff_EBX)) &&
        ((unaff_EBX == 0 || (unaff_ESI <= (int)(0x7fffffff / (ulonglong)unaff_EBX))))) &&
       ((iVar5 = unaff_ESI * unaff_EBX, -1 < iVar5 && (-1 < (int)unaff_R15D)))) &&
      ((unaff_R15D == 0 || (iVar5 <= (int)(0x7fffffff / (ulonglong)unaff_R15D))))) &&
     (_Memory = malloc((longlong)(int)(iVar5 * unaff_R15D)), _Memory != (void *)0x0)) {
    iVar5 = 0;
    if (0 < (int)unaff_R15D) {
      do {
        pbVar7 = (byte *)((ulonglong)(iVar5 * unaff_R12D * unaff_EBX) + (longlong)unaff_RDI);
        pbVar4 = (byte *)((ulonglong)(iVar5 * unaff_ESI * unaff_EBX) + (longlong)_Memory);
        switch(unaff_R12D * 8 + -10 + unaff_ESI) {
        case 0:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            pbVar4[1] = 0xff;
            pbVar4 = pbVar4 + 2;
          }
          break;
        case 1:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar7 = pbVar7 + 1;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 3;
          }
          break;
        case 2:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar7 = pbVar7 + 1;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4[3] = 0xff;
            pbVar4 = pbVar4 + 4;
          }
          break;
        default:
          free(unaff_RDI);
          free(_Memory);
                    /* WARNING: Load size is inaccurate */
          *(char **)(*ThreadLocalStoragePointer + 0x10) = "unsupported";
          return (void *)0x0;
        case 7:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar4 = pbVar4 + 1;
            pbVar7 = pbVar7 + 2;
          }
          break;
        case 9:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar7 = pbVar7 + 2;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 3;
          }
          break;
        case 10:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4[3] = pbVar7[1];
            pbVar7 = pbVar7 + 2;
            pbVar4 = pbVar4 + 4;
          }
          break;
        case 0xf:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = (byte)((uint)pbVar7[1] * 0x96 + (uint)pbVar7[2] * 0x1d + (uint)*pbVar7 * 0x4d
                            >> 8);
            pbVar7 = pbVar7 + 3;
            pbVar4 = pbVar4 + 1;
          }
          break;
        case 0x10:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = pbVar7[1];
            bVar2 = pbVar7[2];
            bVar3 = *pbVar7;
            pbVar4[1] = 0xff;
            *pbVar4 = (byte)((uint)bVar1 * 0x96 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x4d >> 8);
            pbVar7 = pbVar7 + 3;
            pbVar4 = pbVar4 + 2;
          }
          break;
        case 0x12:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar4[1] = pbVar7[1];
            pbVar4[2] = pbVar7[2];
            pbVar4[3] = 0xff;
            pbVar7 = pbVar7 + 3;
            pbVar4 = pbVar4 + 4;
          }
          break;
        case 0x17:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = (byte)((uint)pbVar7[1] * 0x96 + (uint)pbVar7[2] * 0x1d + (uint)*pbVar7 * 0x4d
                            >> 8);
            pbVar7 = pbVar7 + 4;
            pbVar4 = pbVar4 + 1;
          }
          break;
        case 0x18:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = (byte)((uint)pbVar7[1] * 0x96 + (uint)pbVar7[2] * 0x1d + (uint)*pbVar7 * 0x4d
                            >> 8);
            pbVar4[1] = pbVar7[3];
            pbVar7 = pbVar7 + 4;
            pbVar4 = pbVar4 + 2;
          }
          break;
        case 0x19:
          for (iVar6 = unaff_EBX - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar4[1] = pbVar7[1];
            pbVar4[2] = pbVar7[2];
            pbVar7 = pbVar7 + 4;
            pbVar4 = pbVar4 + 3;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)unaff_R15D);
    }
    free(unaff_RDI);
    return _Memory;
  }
  free(unaff_RDI);
                    /* WARNING: Load size is inaccurate */
  *(char **)(*ThreadLocalStoragePointer + 0x10) = "outofmem";
  return (void *)0x0;
}


void Convert_Pixel(void)
{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_RDI;
  int in_R11D;
  void *unaff_R14;
  int unaff_R15D;
  int in_stack_00000060;
  
  if (in_R11D < in_stack_00000060) {
    do {
      puVar1 = (ushort *)
               ((longlong)unaff_RDI + (ulonglong)(uint)(in_R11D * unaff_R15D * unaff_EBX) * 2);
      puVar2 = (ushort *)
               ((longlong)unaff_R14 + (ulonglong)(uint)(in_R11D * unaff_EBP * unaff_EBX) * 2);
      switch(unaff_R15D * 8 + -10 + unaff_EBP) {
      case 0:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2[1] = 0xffff;
          puVar2 = puVar2 + 2;
        }
        break;
      case 1:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar3 = *puVar1;
          puVar2[2] = uVar3;
          puVar1 = puVar1 + 1;
          puVar2[1] = uVar3;
          *puVar2 = uVar3;
          puVar2 = puVar2 + 3;
        }
        break;
      case 2:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar3 = *puVar1;
          puVar2[2] = uVar3;
          puVar1 = puVar1 + 1;
          puVar2[1] = uVar3;
          *puVar2 = uVar3;
          puVar2[3] = 0xffff;
          puVar2 = puVar2 + 4;
        }
        break;
      default:
        free(unaff_RDI);
        free(unaff_R14);
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "unsupported";
        return;
      case 7:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar1;
          puVar2 = puVar2 + 1;
          puVar1 = puVar1 + 2;
        }
        break;
      case 9:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar3 = *puVar1;
          puVar2[2] = uVar3;
          puVar1 = puVar1 + 2;
          puVar2[1] = uVar3;
          *puVar2 = uVar3;
          puVar2 = puVar2 + 3;
        }
        break;
      case 10:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar3 = *puVar1;
          puVar2[2] = uVar3;
          puVar2[1] = uVar3;
          *puVar2 = uVar3;
          puVar2[3] = puVar1[1];
          puVar1 = puVar1 + 2;
          puVar2 = puVar2 + 4;
        }
        break;
      case 0xf:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = (ushort)((uint)puVar1[1] * 0x96 + (uint)puVar1[2] * 0x1d + (uint)*puVar1 * 0x4d
                            >> 8);
          puVar1 = puVar1 + 3;
          puVar2 = puVar2 + 1;
        }
        break;
      case 0x10:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = *puVar1;
          puVar2[1] = 0xffff;
          *puVar2 = (ushort)((uint)uVar3 * 0x96 + (uint)uVar4 * 0x1d + (uint)uVar5 * 0x4d >> 8);
          puVar1 = puVar1 + 3;
          puVar2 = puVar2 + 2;
        }
        break;
      case 0x12:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2[2] = puVar1[2];
          puVar2[3] = 0xffff;
          puVar1 = puVar1 + 3;
          puVar2 = puVar2 + 4;
        }
        break;
      case 0x17:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = (ushort)((uint)puVar1[1] * 0x96 + (uint)puVar1[2] * 0x1d + (uint)*puVar1 * 0x4d
                            >> 8);
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 1;
        }
        break;
      case 0x18:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = (ushort)((uint)puVar1[1] * 0x96 + (uint)puVar1[2] * 0x1d + (uint)*puVar1 * 0x4d
                            >> 8);
          puVar2[1] = puVar1[3];
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 2;
        }
        break;
      case 0x19:
        for (iVar6 = unaff_EBX + -1; -1 < iVar6; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2[2] = puVar1[2];
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + 3;
        }
      }
      in_R11D = in_R11D + 1;
    } while (in_R11D < in_stack_00000060);
  }
  free(unaff_RDI);
  return;
}



void DecodePNGFilter(undefined8 param_1,undefined8 param_2,int param_3,byte *param_4)
{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  int in_R11D;
  undefined4 unaff_R13D;
  longlong lVar14;
  int in_stack_00000078;
  longlong in_stack_00000088;
  
  lVar9 = (longlong)in_stack_00000078;
  lVar5 = (longlong)param_3;
  if (0 < in_stack_00000078) {
    lVar14 = -lVar5;
    lVar8 = lVar9;
    pbVar13 = param_4;
    do {
      switch(unaff_R13D) {
      case 1:
      case 5:
      case 6:
        bVar2 = *pbVar13;
        break;
      case 2:
        bVar2 = *pbVar13 - pbVar13[lVar14];
        break;
      case 3:
        bVar2 = *pbVar13 - (pbVar13[lVar14] >> 1);
        break;
      case 4:
        bVar2 = 0;
        if (pbVar13[lVar14] != 0) {
          bVar2 = pbVar13[lVar14];
        }
        bVar2 = *pbVar13 - bVar2;
        break;
      default:
        goto switchD_140012893_default;
      }
      pbVar13[in_stack_00000088 - (longlong)param_4] = bVar2;
switchD_140012893_default:
      pbVar13 = pbVar13 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  switch(unaff_R13D) {
  case 1:
    if (lVar9 < in_R11D * in_stack_00000078) {
      pbVar13 = param_4 + lVar9;
      lVar5 = in_R11D * in_stack_00000078 - lVar9;
      do {
        pbVar13[in_stack_00000088 - (longlong)param_4] = *pbVar13 - pbVar13[-lVar9];
        pbVar13 = pbVar13 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    break;
  case 2:
    if (lVar9 < in_R11D * in_stack_00000078) {
      pbVar13 = param_4 + lVar9;
      lVar9 = in_R11D * in_stack_00000078 - lVar9;
      do {
        pbVar13[in_stack_00000088 - (longlong)param_4] = *pbVar13 - pbVar13[-lVar5];
        pbVar13 = pbVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    break;
  case 3:
    if (lVar9 < in_R11D * in_stack_00000078) {
      lVar8 = lVar9 - (longlong)param_4;
      lVar14 = in_R11D * in_stack_00000078 - lVar9;
      do {
        bVar2 = *param_4;
        pbVar13 = param_4 + (lVar9 - lVar5);
        param_4 = param_4 + 1;
        param_4[in_stack_00000088 + lVar8 + -1] =
             param_4[lVar9 + -1] - (char)((uint)*pbVar13 + (uint)bVar2 >> 1);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    break;
  case 4:
    if (lVar9 < in_R11D * in_stack_00000078) {
      pbVar13 = param_4 + (lVar9 - lVar5);
      lVar8 = in_R11D * in_stack_00000078 - lVar9;
      do {
        bVar2 = pbVar13[lVar5 - lVar9];
        bVar1 = pbVar13[-lVar9];
        uVar10 = (uint)bVar2 - (uint)bVar1;
        iVar6 = uVar10 + *pbVar13;
        uVar12 = iVar6 - (uint)bVar1;
        uVar3 = iVar6 - (uint)bVar2;
        uVar4 = (int)uVar3 >> 0x1f;
        iVar7 = (uVar3 ^ uVar4) - uVar4;
        iVar6 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
        uVar3 = (int)uVar12 >> 0x1f;
        iVar11 = (uVar12 ^ uVar3) - uVar3;
        if (((iVar6 < iVar7) || (iVar11 < iVar7)) && (bVar2 = bVar1, iVar6 <= iVar11)) {
          bVar2 = *pbVar13;
        }
        pbVar13[(lVar5 - (longlong)param_4) + in_stack_00000088] = pbVar13[lVar5] - bVar2;
        pbVar13 = pbVar13 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    break;
  case 5:
    if (lVar9 < in_R11D * in_stack_00000078) {
      pbVar13 = param_4 + lVar9;
      lVar5 = in_R11D * in_stack_00000078 - lVar9;
      do {
        pbVar13[in_stack_00000088 - (longlong)param_4] = *pbVar13 - (pbVar13[-lVar9] >> 1);
        pbVar13 = pbVar13 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    break;
  case 6:
    if (lVar9 < in_R11D * in_stack_00000078) {
      pbVar13 = param_4 + lVar9;
      lVar5 = in_R11D * in_stack_00000078 - lVar9;
      do {
        pbVar13[in_stack_00000088 - (longlong)param_4] = *pbVar13 - pbVar13[-lVar9];
        pbVar13 = pbVar13 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}



undefined8 ScanLineAndFilter(longlong *param_1,byte *param_2,uint param_3,uint param_4,uint param_5, uint param_6,uint param_7,int param_8)
{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  uint uVar66;
  undefined2 *puVar67;
  char *pcVar68;
  ulonglong uVar69;
  byte bVar70;
  byte bVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  byte *pbVar75;
  byte *pbVar76;
  longlong lVar77;
  int iVar78;
  uint uVar79;
  undefined1 *puVar80;
  uint uVar81;
  uint uVar82;
  int iVar83;
  uint uVar84;
  longlong lVar85;
  longlong lVar86;
  char *pcVar87;
  char *pcVar88;
  undefined2 *puVar89;
  uint uVar90;
  longlong lVar91;
  size_t _Size;
  char cVar92;
  int iVar93;
  ulonglong uVar94;
  undefined1 *puVar95;
  uint uVar96;
  undefined1 *puVar97;
  longlong lVar98;
  longlong lVar99;
  byte *local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  byte *local_b0;
  longlong local_90;
  
  uVar73 = 0;
  iVar93 = (param_7 == 0x10) + 1;
  iVar78 = iVar93 * param_4;
  local_c0 = param_5;
  uVar66 = iVar78 * param_5;
  uVar96 = *(uint *)(*param_1 + 8);
  local_b8 = uVar96 * iVar93;
  if (((((int)param_5 < 0) || ((int)param_6 < 0)) ||
      ((param_6 != 0 && ((int)(0x7fffffff / (ulonglong)param_6) < (int)param_5)))) ||
     ((((int)(param_5 * param_6) < 0 || (iVar78 < 0)) ||
      ((iVar78 != 0 && ((int)(0x7fffffff / (longlong)iVar78) < (int)(param_5 * param_6))))))) {
    param_1[3] = 0;
  }
  else {
    puVar67 = (undefined2 *)malloc((longlong)(int)(iVar78 * param_5 * param_6));
    param_1[3] = (longlong)puVar67;
    if (puVar67 != (undefined2 *)0x0) {
      uVar94 = (ulonglong)(int)uVar96;
      if ((((int)uVar96 < 0) ||
          ((((param_5 != 0 && ((int)(0x7fffffff / (ulonglong)param_5) < (int)uVar96)) ||
            (uVar72 = uVar96 * param_5, (int)uVar72 < 0)) || ((int)param_7 < 0)))) ||
         (((param_7 != 0 && ((int)(0x7fffffff / (ulonglong)param_7) < (int)uVar72)) ||
          (0x7ffffff8 < (int)(uVar72 * param_7))))) {
                    /* WARNING: Load size is inaccurate */
        lVar77 = *ThreadLocalStoragePointer;
        pcVar68 = "too large";
      }
      else {
        uVar81 = uVar72 * param_7 + 7 >> 3;
        if (param_3 < (uVar81 + 1) * param_6) {
                    /* WARNING: Load size is inaccurate */
          lVar77 = *ThreadLocalStoragePointer;
          pcVar68 = "not enough pixels";
        }
        else {
          local_bc = 0;
          if (param_6 == 0) {
LAB_14000a037:
            uVar94 = (ulonglong)(int)param_7;
            if ((int)param_7 < 8) {
              if (param_6 != 0) {
                pcVar68 = &DAT_140022320 + uVar94;
                do {
                  pbVar76 = (byte *)(((ulonglong)(param_4 * param_5) - (ulonglong)uVar81) +
                                     (ulonglong)(uVar73 * uVar66) + (longlong)puVar67);
                  pcVar88 = (char *)((ulonglong)(uVar73 * uVar66) + (longlong)puVar67);
                  if (param_8 == 0) {
                    cVar92 = *pcVar68;
                  }
                  else {
                    cVar92 = '\x01';
                  }
                  iVar78 = (int)uVar94;
                  if (iVar78 == 4) {
                    pcVar87 = pcVar88;
                    uVar79 = uVar72;
                    if (1 < (int)uVar72) {
                      uVar94 = (ulonglong)(uVar72 >> 1);
                      uVar79 = (uVar72 >> 1) * -2 + uVar72;
                      do {
                        *pcVar87 = (*pbVar76 >> 4) * cVar92;
                        bVar71 = *pbVar76;
                        pbVar76 = pbVar76 + 1;
                        pcVar87[1] = (bVar71 & 0xf) * cVar92;
                        pcVar87 = pcVar87 + 2;
                        uVar94 = uVar94 - 1;
                      } while (uVar94 != 0);
                    }
                    if (0 < (int)uVar79) {
                      *pcVar87 = (*pbVar76 >> 4) * cVar92;
                    }
                  }
                  else {
                    pcVar87 = pcVar88;
                    if (iVar78 == 2) {
                      uVar79 = uVar72;
                      if (3 < (int)uVar72) {
                        uVar94 = (ulonglong)(uVar72 >> 2);
                        uVar79 = (uVar72 >> 2) * -4 + uVar72;
                        do {
                          *pcVar87 = (*pbVar76 >> 6) * cVar92;
                          pcVar87[1] = (*pbVar76 >> 4 & 3) * cVar92;
                          pcVar87[2] = (*pbVar76 >> 2 & 3) * cVar92;
                          bVar71 = *pbVar76;
                          pbVar76 = pbVar76 + 1;
                          pcVar87[3] = (bVar71 & 3) * cVar92;
                          pcVar87 = pcVar87 + 4;
                          uVar94 = uVar94 - 1;
                        } while (uVar94 != 0);
                      }
                      if (0 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 6) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (1 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 4 & 3) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (2 < (int)uVar79) {
                        bVar71 = *pbVar76 >> 2 & 3;
LAB_14000a3be:
                        *pcVar87 = bVar71 * cVar92;
                      }
                    }
                    else if (iVar78 == 1) {
                      uVar79 = uVar72;
                      if (7 < (int)uVar72) {
                        uVar94 = (ulonglong)(uVar72 >> 3);
                        uVar79 = (uVar72 >> 3) * -8 + uVar72;
                        do {
                          *pcVar87 = -((char)*pbVar76 >> 7) * cVar92;
                          pcVar87[1] = (*pbVar76 >> 6 & 1) * cVar92;
                          pcVar87[2] = (*pbVar76 >> 5 & 1) * cVar92;
                          pcVar87[3] = (*pbVar76 >> 4 & 1) * cVar92;
                          pcVar87[4] = (*pbVar76 >> 3 & 1) * cVar92;
                          pcVar87[5] = (*pbVar76 >> 2 & 1) * cVar92;
                          pcVar87[6] = (*pbVar76 >> 1 & 1) * cVar92;
                          bVar71 = *pbVar76;
                          pbVar76 = pbVar76 + 1;
                          pcVar87[7] = (bVar71 & 1) * cVar92;
                          pcVar87 = pcVar87 + 8;
                          uVar94 = uVar94 - 1;
                        } while (uVar94 != 0);
                      }
                      if (0 < (int)uVar79) {
                        *pcVar87 = -((char)*pbVar76 >> 7) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (1 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 6 & 1) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (2 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 5 & 1) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (3 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 4 & 1) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (4 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 3 & 1) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (5 < (int)uVar79) {
                        *pcVar87 = (*pbVar76 >> 2 & 1) * cVar92;
                        pcVar87 = pcVar87 + 1;
                      }
                      if (6 < (int)uVar79) {
                        bVar71 = *pbVar76 >> 1 & 1;
                        goto LAB_14000a3be;
                      }
                    }
                  }
                  if (uVar96 != param_4) {
                    lVar77 = (longlong)(int)param_5 + -1;
                    if (uVar96 == 1) {
                      for (; -1 < lVar77; lVar77 = lVar77 + -1) {
                        pcVar88[lVar77 * 2 + 1] = -1;
                        pcVar88[lVar77 * 2] = pcVar88[lVar77];
                      }
                    }
                    else if (-1 < lVar77) {
                      pcVar87 = pcVar88 + lVar77 * 4 + 2;
                      pcVar88 = pcVar88 + lVar77 * 3 + 1;
                      do {
                        lVar77 = lVar77 + -1;
                        pcVar87[1] = -1;
                        *pcVar87 = pcVar88[1];
                        pcVar87[-1] = *pcVar88;
                        pcVar87[-2] = pcVar88[-1];
                        pcVar87 = pcVar87 + -4;
                        pcVar88 = pcVar88 + -3;
                      } while (-1 < lVar77);
                    }
                  }
                  uVar94 = (ulonglong)param_7;
                  uVar73 = uVar73 + 1;
                  if (param_6 <= uVar73) {
                    return 1;
                  }
                } while( true );
              }
            }
            else if ((param_7 == 0x10) && (uVar96 = param_4 * param_5 * param_6, uVar96 != 0)) {
              uVar94 = (ulonglong)uVar96;
              puVar89 = puVar67;
              do {
                uVar3 = *(undefined1 *)puVar67;
                puVar67 = puVar67 + 1;
                *puVar89 = CONCAT11(uVar3,*(undefined1 *)((longlong)puVar89 + 1));
                uVar94 = uVar94 - 1;
                puVar89 = puVar89 + 1;
              } while (uVar94 != 0);
            }
            return 1;
          }
          lVar77 = (longlong)(int)local_b8;
          lVar99 = (longlong)iVar78;
          uVar69 = uVar94;
          local_90 = lVar77;
LAB_1400095c0:
          puVar97 = (undefined1 *)((ulonglong)(local_bc * uVar66) + (longlong)puVar67);
          bVar71 = *param_2;
          pbVar76 = param_2 + 1;
          if (bVar71 < 5) {
            puVar80 = puVar97;
            if ((int)param_7 < 8) {
              if (param_5 < uVar81) {
                    /* WARNING: Load size is inaccurate */
                lVar77 = *ThreadLocalStoragePointer;
                pcVar68 = "invalid width";
                goto LAB_14000a4f9;
              }
              lVar77 = 1;
              local_b8 = 1;
              local_90 = 1;
              puVar80 = puVar97 + (param_4 * param_5 - uVar81);
              local_c0 = uVar81;
            }
            if (local_bc == 0) {
              bVar71 = (&DAT_140022254)[bVar71];
            }
            uVar79 = (uint)uVar69;
            if (0 < lVar77) {
              puVar95 = puVar80 + (-(longlong)pbVar76 - (ulonglong)uVar66);
              lVar91 = (longlong)puVar80 - (longlong)pbVar76;
              pbVar75 = pbVar76;
              lVar85 = lVar77;
              do {
                uVar79 = uVar96;
                switch(bVar71) {
                case 0:
                  goto switchD_14000967a_caseD_0;
                case 1:
                  goto switchD_14000967a_caseD_1;
                case 2:
                  goto switchD_14000967a_caseD_2;
                case 3:
                  goto switchD_14000967a_caseD_3;
                case 4:
                  goto switchD_14000967a_caseD_4;
                case 5:
                  goto switchD_14000967a_caseD_5;
                case 6:
                  goto switchD_14000967a_caseD_6;
                }
                pbVar75 = pbVar75 + 1;
                lVar85 = lVar85 + -1;
              } while (lVar85 != 0);
            }
            goto LAB_14000977e;
          }
                    /* WARNING: Load size is inaccurate */
          lVar77 = *ThreadLocalStoragePointer;
          pcVar68 = "invalid filter";
        }
      }
      goto LAB_14000a4f9;
    }
  }
                    /* WARNING: Load size is inaccurate */
  lVar77 = *ThreadLocalStoragePointer;
  pcVar68 = "outofmem";
LAB_14000a4f9:
  *(char **)(lVar77 + 0x10) = pcVar68;
  return 0;
switchD_14000967a_caseD_6:
  do {
    pbVar75[lVar91] = *pbVar75;
    pbVar75 = pbVar75 + 1;
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
  goto LAB_14000977e;
switchD_14000967a_caseD_5:
  do {
    pbVar75[lVar91] = *pbVar75;
    pbVar75 = pbVar75 + 1;
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
  goto LAB_14000977e;
switchD_14000967a_caseD_4:
  do {
    bVar70 = 0;
    if (pbVar75[(longlong)puVar95] != 0) {
      bVar70 = pbVar75[(longlong)puVar95];
    }
    (pbVar75 + 1)[lVar91 + -1] = bVar70 + *pbVar75;
    lVar85 = lVar85 + -1;
    pbVar75 = pbVar75 + 1;
  } while (lVar85 != 0);
  goto LAB_14000977e;
switchD_14000967a_caseD_3:
  do {
    (pbVar75 + 1)[lVar91 + -1] = (pbVar75[(longlong)puVar95] >> 1) + *pbVar75;
    lVar85 = lVar85 + -1;
    pbVar75 = pbVar75 + 1;
  } while (lVar85 != 0);
  goto LAB_14000977e;
switchD_14000967a_caseD_2:
  do {
    pbVar75[lVar91] = pbVar75[(longlong)puVar95] + *pbVar75;
    pbVar75 = pbVar75 + 1;
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
LAB_14000977e:
  if (param_7 == 8) {
    if (uVar79 != param_4) {
      puVar80[uVar94] = 0xff;
    }
    param_2 = pbVar76 + uVar94;
    local_b0 = puVar80 + ((longlong)(int)param_4 - (ulonglong)uVar66);
    local_c8 = puVar80 + (int)param_4;
LAB_140009808:
    if (uVar96 != param_4) {
      switch(bVar71) {
      case 0:
        if (param_5 - 1 != 0) {
          uVar69 = (ulonglong)(param_5 - 1);
          do {
            if (0 < lVar77) {
              pbVar76 = local_c8;
              lVar85 = lVar77;
              do {
                *pbVar76 = pbVar76[(longlong)param_2 - (longlong)local_c8];
                pbVar76 = pbVar76 + 1;
                lVar85 = lVar85 + -1;
              } while (lVar85 != 0);
            }
            local_c8[lVar77] = 0xff;
            param_2 = param_2 + (int)local_b8;
            local_c8 = local_c8 + lVar99;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
        break;
      case 1:
        if (param_5 - 1 != 0) {
          uVar69 = (ulonglong)(param_5 - 1);
          do {
            if (0 < lVar77) {
              pbVar76 = param_2;
              lVar85 = lVar77;
              do {
                pbVar76[(longlong)local_c8 - (longlong)param_2] =
                     pbVar76[(longlong)(local_c8 + (-(longlong)param_2 - lVar99))] + *pbVar76;
                pbVar76 = pbVar76 + 1;
                lVar85 = lVar85 + -1;
              } while (lVar85 != 0);
            }
            local_c8[lVar77] = 0xff;
            param_2 = param_2 + (int)local_b8;
            local_c8 = local_c8 + lVar99;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
        break;
      case 2:
        if (param_5 - 1 != 0) {
          lVar85 = 0;
          uVar69 = (ulonglong)(param_5 - 1);
          do {
            lVar91 = lVar85;
            if ((0 < (int)local_b8) && (0x3f < local_b8)) {
              iVar78 = local_b8 - 1;
              lVar91 = 0;
              if (((param_2 + iVar78 < local_c8) || (local_c8 + iVar78 < param_2)) &&
                 ((local_b0 + iVar78 < local_c8 || (local_c8 + iVar78 < local_b0)))) {
                uVar79 = local_b8 & 0x8000003f;
                if ((int)uVar79 < 0) {
                  uVar79 = (uVar79 - 1 | 0xffffffc0) + 1;
                }
                lVar98 = (longlong)local_b0 - (longlong)param_2;
                lVar86 = (longlong)local_c8 - (longlong)param_2;
                pbVar76 = param_2 + 0x10;
                lVar91 = lVar85;
                do {
                  bVar71 = pbVar76[-0xf];
                  bVar70 = pbVar76[-0xe];
                  bVar4 = pbVar76[-0xd];
                  bVar5 = pbVar76[-0xc];
                  bVar6 = pbVar76[-0xb];
                  bVar7 = pbVar76[-10];
                  bVar8 = pbVar76[-9];
                  bVar9 = pbVar76[-8];
                  bVar10 = pbVar76[-7];
                  bVar11 = pbVar76[-6];
                  bVar12 = pbVar76[-5];
                  bVar13 = pbVar76[-4];
                  bVar14 = pbVar76[-3];
                  bVar15 = pbVar76[-2];
                  bVar16 = pbVar76[-1];
                  lVar91 = lVar91 + 0x40;
                  pbVar1 = pbVar76 + lVar98 + -0x10;
                  bVar17 = pbVar1[1];
                  bVar18 = pbVar1[2];
                  bVar19 = pbVar1[3];
                  bVar20 = pbVar1[4];
                  bVar21 = pbVar1[5];
                  bVar22 = pbVar1[6];
                  bVar23 = pbVar1[7];
                  bVar24 = pbVar1[8];
                  bVar25 = pbVar1[9];
                  bVar26 = pbVar1[10];
                  bVar27 = pbVar1[0xb];
                  bVar28 = pbVar1[0xc];
                  bVar29 = pbVar1[0xd];
                  bVar30 = pbVar1[0xe];
                  bVar31 = pbVar1[0xf];
                  pbVar75 = pbVar76 + lVar98;
                  bVar32 = *pbVar75;
                  bVar33 = pbVar75[1];
                  bVar34 = pbVar75[2];
                  bVar35 = pbVar75[3];
                  bVar36 = pbVar75[4];
                  bVar37 = pbVar75[5];
                  bVar38 = pbVar75[6];
                  bVar39 = pbVar75[7];
                  bVar40 = pbVar75[8];
                  bVar41 = pbVar75[9];
                  bVar42 = pbVar75[10];
                  bVar43 = pbVar75[0xb];
                  bVar44 = pbVar75[0xc];
                  bVar45 = pbVar75[0xd];
                  bVar46 = pbVar75[0xe];
                  bVar47 = pbVar75[0xf];
                  pbVar75 = pbVar76 + 0x40;
                  bVar48 = *pbVar76;
                  bVar49 = pbVar76[1];
                  bVar50 = pbVar76[2];
                  bVar51 = pbVar76[3];
                  bVar52 = pbVar76[4];
                  bVar53 = pbVar76[5];
                  bVar54 = pbVar76[6];
                  bVar55 = pbVar76[7];
                  bVar56 = pbVar76[8];
                  bVar57 = pbVar76[9];
                  bVar58 = pbVar76[10];
                  bVar59 = pbVar76[0xb];
                  bVar60 = pbVar76[0xc];
                  bVar61 = pbVar76[0xd];
                  bVar62 = pbVar76[0xe];
                  bVar63 = pbVar76[0xf];
                  pbVar2 = pbVar75 + lVar86 + -0x50;
                  *pbVar2 = *pbVar1 + pbVar76[-0x10];
                  pbVar2[1] = bVar17 + bVar71;
                  pbVar2[2] = bVar18 + bVar70;
                  pbVar2[3] = bVar19 + bVar4;
                  pbVar2[4] = bVar20 + bVar5;
                  pbVar2[5] = bVar21 + bVar6;
                  pbVar2[6] = bVar22 + bVar7;
                  pbVar2[7] = bVar23 + bVar8;
                  pbVar2[8] = bVar24 + bVar9;
                  pbVar2[9] = bVar25 + bVar10;
                  pbVar2[10] = bVar26 + bVar11;
                  pbVar2[0xb] = bVar27 + bVar12;
                  pbVar2[0xc] = bVar28 + bVar13;
                  pbVar2[0xd] = bVar29 + bVar14;
                  pbVar2[0xe] = bVar30 + bVar15;
                  pbVar2[0xf] = bVar31 + bVar16;
                  bVar71 = pbVar76[0x10];
                  bVar70 = pbVar76[0x11];
                  bVar4 = pbVar76[0x12];
                  bVar5 = pbVar76[0x13];
                  bVar6 = pbVar76[0x14];
                  bVar7 = pbVar76[0x15];
                  bVar8 = pbVar76[0x16];
                  bVar9 = pbVar76[0x17];
                  bVar10 = pbVar76[0x18];
                  bVar11 = pbVar76[0x19];
                  bVar12 = pbVar76[0x1a];
                  bVar13 = pbVar76[0x1b];
                  bVar14 = pbVar76[0x1c];
                  bVar15 = pbVar76[0x1d];
                  bVar16 = pbVar76[0x1e];
                  bVar17 = pbVar76[0x1f];
                  pbVar1 = pbVar75 + lVar98 + -0x30;
                  bVar18 = *pbVar1;
                  bVar19 = pbVar1[1];
                  bVar20 = pbVar1[2];
                  bVar21 = pbVar1[3];
                  bVar22 = pbVar1[4];
                  bVar23 = pbVar1[5];
                  bVar24 = pbVar1[6];
                  bVar25 = pbVar1[7];
                  bVar26 = pbVar1[8];
                  bVar27 = pbVar1[9];
                  bVar28 = pbVar1[10];
                  bVar29 = pbVar1[0xb];
                  bVar30 = pbVar1[0xc];
                  bVar31 = pbVar1[0xd];
                  bVar64 = pbVar1[0xe];
                  bVar65 = pbVar1[0xf];
                  pbVar1 = pbVar76 + lVar86;
                  *pbVar1 = bVar32 + bVar48;
                  pbVar1[1] = bVar33 + bVar49;
                  pbVar1[2] = bVar34 + bVar50;
                  pbVar1[3] = bVar35 + bVar51;
                  pbVar1[4] = bVar36 + bVar52;
                  pbVar1[5] = bVar37 + bVar53;
                  pbVar1[6] = bVar38 + bVar54;
                  pbVar1[7] = bVar39 + bVar55;
                  pbVar1[8] = bVar40 + bVar56;
                  pbVar1[9] = bVar41 + bVar57;
                  pbVar1[10] = bVar42 + bVar58;
                  pbVar1[0xb] = bVar43 + bVar59;
                  pbVar1[0xc] = bVar44 + bVar60;
                  pbVar1[0xd] = bVar45 + bVar61;
                  pbVar1[0xe] = bVar46 + bVar62;
                  pbVar1[0xf] = bVar47 + bVar63;
                  bVar32 = pbVar76[0x20];
                  bVar33 = pbVar76[0x21];
                  bVar34 = pbVar76[0x22];
                  bVar35 = pbVar76[0x23];
                  bVar36 = pbVar76[0x24];
                  bVar37 = pbVar76[0x25];
                  bVar38 = pbVar76[0x26];
                  bVar39 = pbVar76[0x27];
                  bVar40 = pbVar76[0x28];
                  bVar41 = pbVar76[0x29];
                  bVar42 = pbVar76[0x2a];
                  bVar43 = pbVar76[0x2b];
                  bVar44 = pbVar76[0x2c];
                  bVar45 = pbVar76[0x2d];
                  bVar46 = pbVar76[0x2e];
                  bVar47 = pbVar76[0x2f];
                  pbVar76 = pbVar75 + lVar98 + -0x20;
                  bVar48 = *pbVar76;
                  bVar49 = pbVar76[1];
                  bVar50 = pbVar76[2];
                  bVar51 = pbVar76[3];
                  bVar52 = pbVar76[4];
                  bVar53 = pbVar76[5];
                  bVar54 = pbVar76[6];
                  bVar55 = pbVar76[7];
                  bVar56 = pbVar76[8];
                  bVar57 = pbVar76[9];
                  bVar58 = pbVar76[10];
                  bVar59 = pbVar76[0xb];
                  bVar60 = pbVar76[0xc];
                  bVar61 = pbVar76[0xd];
                  bVar62 = pbVar76[0xe];
                  bVar63 = pbVar76[0xf];
                  pbVar76 = pbVar75 + lVar86 + -0x30;
                  *pbVar76 = bVar18 + bVar71;
                  pbVar76[1] = bVar19 + bVar70;
                  pbVar76[2] = bVar20 + bVar4;
                  pbVar76[3] = bVar21 + bVar5;
                  pbVar76[4] = bVar22 + bVar6;
                  pbVar76[5] = bVar23 + bVar7;
                  pbVar76[6] = bVar24 + bVar8;
                  pbVar76[7] = bVar25 + bVar9;
                  pbVar76[8] = bVar26 + bVar10;
                  pbVar76[9] = bVar27 + bVar11;
                  pbVar76[10] = bVar28 + bVar12;
                  pbVar76[0xb] = bVar29 + bVar13;
                  pbVar76[0xc] = bVar30 + bVar14;
                  pbVar76[0xd] = bVar31 + bVar15;
                  pbVar76[0xe] = bVar64 + bVar16;
                  pbVar76[0xf] = bVar65 + bVar17;
                  pbVar76 = pbVar75 + lVar86 + -0x20;
                  *pbVar76 = bVar48 + bVar32;
                  pbVar76[1] = bVar49 + bVar33;
                  pbVar76[2] = bVar50 + bVar34;
                  pbVar76[3] = bVar51 + bVar35;
                  pbVar76[4] = bVar52 + bVar36;
                  pbVar76[5] = bVar53 + bVar37;
                  pbVar76[6] = bVar54 + bVar38;
                  pbVar76[7] = bVar55 + bVar39;
                  pbVar76[8] = bVar56 + bVar40;
                  pbVar76[9] = bVar57 + bVar41;
                  pbVar76[10] = bVar58 + bVar42;
                  pbVar76[0xb] = bVar59 + bVar43;
                  pbVar76[0xc] = bVar60 + bVar44;
                  pbVar76[0xd] = bVar61 + bVar45;
                  pbVar76[0xe] = bVar62 + bVar46;
                  pbVar76[0xf] = bVar63 + bVar47;
                  pbVar76 = pbVar75;
                } while (lVar91 < (int)(local_b8 - uVar79));
              }
            }
            if (lVar91 < lVar77) {
              pbVar76 = param_2 + lVar91;
              lVar91 = lVar77 - lVar91;
              do {
                pbVar76[(longlong)local_c8 - (longlong)param_2] =
                     pbVar76[(longlong)local_b0 - (longlong)param_2] + *pbVar76;
                pbVar76 = pbVar76 + 1;
                lVar91 = lVar91 + -1;
              } while (lVar91 != 0);
            }
            local_c8[lVar77] = 0xff;
            param_2 = param_2 + (int)local_b8;
            local_c8 = local_c8 + lVar99;
            local_b0 = local_b0 + lVar99;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
        break;
      case 3:
        if (param_5 - 1 != 0) {
          uVar69 = (ulonglong)(param_5 - 1);
          do {
            if (0 < lVar77) {
              pbVar76 = local_b0;
              lVar85 = lVar77;
              do {
                pbVar75 = pbVar76 + (longlong)(local_c8 + (-(longlong)local_b0 - lVar99));
                bVar71 = *pbVar76;
                pbVar76 = pbVar76 + 1;
                pbVar76[(longlong)(local_c8 + (-1 - (longlong)local_b0))] =
                     (char)((uint)*pbVar75 + (uint)bVar71 >> 1) +
                     pbVar76[(longlong)(param_2 + (-1 - (longlong)local_b0))];
                lVar85 = lVar85 + -1;
              } while (lVar85 != 0);
            }
            local_c8[lVar77] = 0xff;
            param_2 = param_2 + (int)local_b8;
            local_c8 = local_c8 + lVar99;
            local_b0 = local_b0 + lVar99;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
        break;
      case 4:
        if (param_5 - 1 != 0) {
          pbVar76 = local_c8 + lVar77;
          lVar85 = lVar99 + lVar77;
          uVar69 = (ulonglong)(param_5 - 1);
          lVar91 = lVar99 - (longlong)local_c8;
          do {
            if (0 < lVar77) {
              pbVar75 = pbVar76 + -lVar85;
              lVar98 = lVar77;
              do {
                bVar71 = *pbVar75;
                bVar70 = pbVar75[(longlong)local_b0 - (longlong)local_c8];
                uVar82 = (uint)bVar71 - (uint)bVar70;
                iVar78 = uVar82 + (local_b0 + lVar91)[(longlong)pbVar75];
                uVar90 = iVar78 - (uint)bVar70;
                uVar79 = iVar78 - (uint)bVar71;
                uVar74 = (int)uVar79 >> 0x1f;
                iVar93 = (uVar79 ^ uVar74) - uVar74;
                iVar83 = (uVar82 ^ (int)uVar82 >> 0x1f) - ((int)uVar82 >> 0x1f);
                uVar79 = (int)uVar90 >> 0x1f;
                iVar78 = (uVar90 ^ uVar79) - uVar79;
                if (((iVar83 < iVar93) || (iVar78 < iVar93)) && (bVar71 = bVar70, iVar83 <= iVar78))
                {
                  bVar71 = (local_b0 + lVar91)[(longlong)pbVar75];
                }
                pbVar75[lVar99] = (param_2 + lVar91)[(longlong)pbVar75] + bVar71;
                pbVar75 = pbVar75 + 1;
                lVar98 = lVar98 + -1;
                lVar77 = local_90;
              } while (lVar98 != 0);
            }
            local_c8 = local_c8 + lVar99;
            *pbVar76 = 0xff;
            pbVar76 = pbVar76 + lVar99;
            lVar91 = lVar91 - lVar99;
            local_b0 = local_b0 + lVar99;
            param_2 = param_2 + (int)local_b8;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
        break;
      case 5:
        if (param_5 - 1 != 0) {
          uVar69 = (ulonglong)(param_5 - 1);
          do {
            if (0 < lVar77) {
              pbVar76 = param_2;
              lVar85 = lVar77;
              do {
                (pbVar76 + 1)[(longlong)(local_c8 + (-1 - (longlong)param_2))] =
                     (pbVar76[(longlong)(local_c8 + (-(longlong)param_2 - lVar99))] >> 1) + *pbVar76
                ;
                lVar85 = lVar85 + -1;
                pbVar76 = pbVar76 + 1;
              } while (lVar85 != 0);
            }
            local_c8[lVar77] = 0xff;
            param_2 = param_2 + (int)local_b8;
            local_c8 = local_c8 + lVar99;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
        break;
      case 6:
        if (param_5 - 1 != 0) {
          uVar69 = (ulonglong)(param_5 - 1);
          do {
            if (0 < lVar77) {
              pbVar76 = param_2;
              lVar85 = lVar77;
              do {
                pbVar76[(longlong)local_c8 - (longlong)param_2] =
                     pbVar76[(longlong)(local_c8 + (-(longlong)param_2 - lVar99))] + *pbVar76;
                pbVar76 = pbVar76 + 1;
                lVar85 = lVar85 + -1;
              } while (lVar85 != 0);
            }
            local_c8[lVar77] = 0xff;
            param_2 = param_2 + (int)local_b8;
            local_c8 = local_c8 + lVar99;
            uVar69 = uVar69 - 1;
          } while (uVar69 != 0);
        }
      }
      if ((param_7 == 0x10) && (param_5 != 0)) {
        uVar69 = (ulonglong)param_5;
        do {
          puVar97[lVar77 + 1] = 0xff;
          puVar97 = puVar97 + lVar99;
          uVar69 = uVar69 - 1;
        } while (uVar69 != 0);
      }
      goto LAB_140009fba;
    }
  }
  else {
    if (param_7 == 0x10) {
      if (uVar79 != param_4) {
        *(undefined2 *)(puVar80 + lVar77) = 0xffff;
      }
      local_b0 = puVar80 + (lVar99 - (ulonglong)uVar66);
      param_2 = pbVar76 + (int)local_b8;
      local_c8 = puVar80 + lVar99;
      goto LAB_140009808;
    }
    param_2 = param_2 + 2;
    local_b0 = puVar80 + (1 - (ulonglong)uVar66);
    local_c8 = puVar80 + 1;
    if (7 < (int)param_7) goto LAB_140009808;
  }
  uVar79 = (local_c0 - 1) * local_b8;
  if (bVar71 < 7) {
    _Size = (size_t)(int)uVar79;
    switch(bVar71) {
    case 0:
      memcpy(local_c8,param_2,_Size);
      break;
    case 1:
      if (0 < (int)uVar79) {
        pbVar76 = param_2;
        do {
          pbVar76[(longlong)local_c8 - (longlong)param_2] =
               pbVar76[((longlong)local_c8 - (longlong)param_2) - lVar77] + *pbVar76;
          pbVar76 = pbVar76 + 1;
          _Size = _Size - 1;
        } while (_Size != 0);
      }
      break;
    case 2:
      lVar91 = 0;
      lVar85 = lVar91;
      if ((0 < (int)uVar79) && (0x3f < uVar79)) {
        iVar78 = uVar79 - 1;
        lVar85 = 0;
        if (((param_2 + iVar78 < local_c8) || (local_c8 + iVar78 < param_2)) &&
           ((local_b0 + iVar78 < local_c8 || (local_c8 + iVar78 < local_b0)))) {
          uVar74 = uVar79 & 0x8000003f;
          if ((int)uVar74 < 0) {
            uVar74 = (uVar74 - 1 | 0xffffffc0) + 1;
          }
          lVar98 = (longlong)local_b0 - (longlong)param_2;
          lVar86 = (longlong)local_c8 - (longlong)param_2;
          pbVar76 = param_2 + 0x10;
          lVar85 = lVar91;
          do {
            bVar71 = pbVar76[-0xf];
            bVar70 = pbVar76[-0xe];
            bVar4 = pbVar76[-0xd];
            bVar5 = pbVar76[-0xc];
            bVar6 = pbVar76[-0xb];
            bVar7 = pbVar76[-10];
            bVar8 = pbVar76[-9];
            bVar9 = pbVar76[-8];
            bVar10 = pbVar76[-7];
            bVar11 = pbVar76[-6];
            bVar12 = pbVar76[-5];
            bVar13 = pbVar76[-4];
            bVar14 = pbVar76[-3];
            bVar15 = pbVar76[-2];
            bVar16 = pbVar76[-1];
            lVar85 = lVar85 + 0x40;
            pbVar1 = pbVar76 + lVar98 + -0x10;
            bVar17 = pbVar1[1];
            bVar18 = pbVar1[2];
            bVar19 = pbVar1[3];
            bVar20 = pbVar1[4];
            bVar21 = pbVar1[5];
            bVar22 = pbVar1[6];
            bVar23 = pbVar1[7];
            bVar24 = pbVar1[8];
            bVar25 = pbVar1[9];
            bVar26 = pbVar1[10];
            bVar27 = pbVar1[0xb];
            bVar28 = pbVar1[0xc];
            bVar29 = pbVar1[0xd];
            bVar30 = pbVar1[0xe];
            bVar31 = pbVar1[0xf];
            pbVar75 = pbVar76 + lVar98;
            bVar32 = *pbVar75;
            bVar33 = pbVar75[1];
            bVar34 = pbVar75[2];
            bVar35 = pbVar75[3];
            bVar36 = pbVar75[4];
            bVar37 = pbVar75[5];
            bVar38 = pbVar75[6];
            bVar39 = pbVar75[7];
            bVar40 = pbVar75[8];
            bVar41 = pbVar75[9];
            bVar42 = pbVar75[10];
            bVar43 = pbVar75[0xb];
            bVar44 = pbVar75[0xc];
            bVar45 = pbVar75[0xd];
            bVar46 = pbVar75[0xe];
            bVar47 = pbVar75[0xf];
            pbVar75 = pbVar76 + 0x40;
            bVar48 = *pbVar76;
            bVar49 = pbVar76[1];
            bVar50 = pbVar76[2];
            bVar51 = pbVar76[3];
            bVar52 = pbVar76[4];
            bVar53 = pbVar76[5];
            bVar54 = pbVar76[6];
            bVar55 = pbVar76[7];
            bVar56 = pbVar76[8];
            bVar57 = pbVar76[9];
            bVar58 = pbVar76[10];
            bVar59 = pbVar76[0xb];
            bVar60 = pbVar76[0xc];
            bVar61 = pbVar76[0xd];
            bVar62 = pbVar76[0xe];
            bVar63 = pbVar76[0xf];
            pbVar2 = pbVar75 + lVar86 + -0x50;
            *pbVar2 = *pbVar1 + pbVar76[-0x10];
            pbVar2[1] = bVar17 + bVar71;
            pbVar2[2] = bVar18 + bVar70;
            pbVar2[3] = bVar19 + bVar4;
            pbVar2[4] = bVar20 + bVar5;
            pbVar2[5] = bVar21 + bVar6;
            pbVar2[6] = bVar22 + bVar7;
            pbVar2[7] = bVar23 + bVar8;
            pbVar2[8] = bVar24 + bVar9;
            pbVar2[9] = bVar25 + bVar10;
            pbVar2[10] = bVar26 + bVar11;
            pbVar2[0xb] = bVar27 + bVar12;
            pbVar2[0xc] = bVar28 + bVar13;
            pbVar2[0xd] = bVar29 + bVar14;
            pbVar2[0xe] = bVar30 + bVar15;
            pbVar2[0xf] = bVar31 + bVar16;
            bVar71 = pbVar76[0x10];
            bVar70 = pbVar76[0x11];
            bVar4 = pbVar76[0x12];
            bVar5 = pbVar76[0x13];
            bVar6 = pbVar76[0x14];
            bVar7 = pbVar76[0x15];
            bVar8 = pbVar76[0x16];
            bVar9 = pbVar76[0x17];
            bVar10 = pbVar76[0x18];
            bVar11 = pbVar76[0x19];
            bVar12 = pbVar76[0x1a];
            bVar13 = pbVar76[0x1b];
            bVar14 = pbVar76[0x1c];
            bVar15 = pbVar76[0x1d];
            bVar16 = pbVar76[0x1e];
            bVar17 = pbVar76[0x1f];
            pbVar1 = pbVar75 + lVar98 + -0x30;
            bVar18 = *pbVar1;
            bVar19 = pbVar1[1];
            bVar20 = pbVar1[2];
            bVar21 = pbVar1[3];
            bVar22 = pbVar1[4];
            bVar23 = pbVar1[5];
            bVar24 = pbVar1[6];
            bVar25 = pbVar1[7];
            bVar26 = pbVar1[8];
            bVar27 = pbVar1[9];
            bVar28 = pbVar1[10];
            bVar29 = pbVar1[0xb];
            bVar30 = pbVar1[0xc];
            bVar31 = pbVar1[0xd];
            bVar64 = pbVar1[0xe];
            bVar65 = pbVar1[0xf];
            pbVar1 = pbVar76 + lVar86;
            *pbVar1 = bVar32 + bVar48;
            pbVar1[1] = bVar33 + bVar49;
            pbVar1[2] = bVar34 + bVar50;
            pbVar1[3] = bVar35 + bVar51;
            pbVar1[4] = bVar36 + bVar52;
            pbVar1[5] = bVar37 + bVar53;
            pbVar1[6] = bVar38 + bVar54;
            pbVar1[7] = bVar39 + bVar55;
            pbVar1[8] = bVar40 + bVar56;
            pbVar1[9] = bVar41 + bVar57;
            pbVar1[10] = bVar42 + bVar58;
            pbVar1[0xb] = bVar43 + bVar59;
            pbVar1[0xc] = bVar44 + bVar60;
            pbVar1[0xd] = bVar45 + bVar61;
            pbVar1[0xe] = bVar46 + bVar62;
            pbVar1[0xf] = bVar47 + bVar63;
            bVar32 = pbVar76[0x20];
            bVar33 = pbVar76[0x21];
            bVar34 = pbVar76[0x22];
            bVar35 = pbVar76[0x23];
            bVar36 = pbVar76[0x24];
            bVar37 = pbVar76[0x25];
            bVar38 = pbVar76[0x26];
            bVar39 = pbVar76[0x27];
            bVar40 = pbVar76[0x28];
            bVar41 = pbVar76[0x29];
            bVar42 = pbVar76[0x2a];
            bVar43 = pbVar76[0x2b];
            bVar44 = pbVar76[0x2c];
            bVar45 = pbVar76[0x2d];
            bVar46 = pbVar76[0x2e];
            bVar47 = pbVar76[0x2f];
            pbVar76 = pbVar75 + lVar98 + -0x20;
            bVar48 = *pbVar76;
            bVar49 = pbVar76[1];
            bVar50 = pbVar76[2];
            bVar51 = pbVar76[3];
            bVar52 = pbVar76[4];
            bVar53 = pbVar76[5];
            bVar54 = pbVar76[6];
            bVar55 = pbVar76[7];
            bVar56 = pbVar76[8];
            bVar57 = pbVar76[9];
            bVar58 = pbVar76[10];
            bVar59 = pbVar76[0xb];
            bVar60 = pbVar76[0xc];
            bVar61 = pbVar76[0xd];
            bVar62 = pbVar76[0xe];
            bVar63 = pbVar76[0xf];
            pbVar76 = pbVar75 + lVar86 + -0x30;
            *pbVar76 = bVar18 + bVar71;
            pbVar76[1] = bVar19 + bVar70;
            pbVar76[2] = bVar20 + bVar4;
            pbVar76[3] = bVar21 + bVar5;
            pbVar76[4] = bVar22 + bVar6;
            pbVar76[5] = bVar23 + bVar7;
            pbVar76[6] = bVar24 + bVar8;
            pbVar76[7] = bVar25 + bVar9;
            pbVar76[8] = bVar26 + bVar10;
            pbVar76[9] = bVar27 + bVar11;
            pbVar76[10] = bVar28 + bVar12;
            pbVar76[0xb] = bVar29 + bVar13;
            pbVar76[0xc] = bVar30 + bVar14;
            pbVar76[0xd] = bVar31 + bVar15;
            pbVar76[0xe] = bVar64 + bVar16;
            pbVar76[0xf] = bVar65 + bVar17;
            pbVar76 = pbVar75 + lVar86 + -0x20;
            *pbVar76 = bVar48 + bVar32;
            pbVar76[1] = bVar49 + bVar33;
            pbVar76[2] = bVar50 + bVar34;
            pbVar76[3] = bVar51 + bVar35;
            pbVar76[4] = bVar52 + bVar36;
            pbVar76[5] = bVar53 + bVar37;
            pbVar76[6] = bVar54 + bVar38;
            pbVar76[7] = bVar55 + bVar39;
            pbVar76[8] = bVar56 + bVar40;
            pbVar76[9] = bVar57 + bVar41;
            pbVar76[10] = bVar58 + bVar42;
            pbVar76[0xb] = bVar59 + bVar43;
            pbVar76[0xc] = bVar60 + bVar44;
            pbVar76[0xd] = bVar61 + bVar45;
            pbVar76[0xe] = bVar62 + bVar46;
            pbVar76[0xf] = bVar63 + bVar47;
            pbVar76 = pbVar75;
          } while (lVar85 < (int)(uVar79 - uVar74));
        }
      }
      if (lVar85 < (longlong)_Size) {
        pbVar76 = param_2 + lVar85;
        lVar85 = _Size - lVar85;
        do {
          pbVar76[(longlong)local_c8 - (longlong)param_2] =
               pbVar76[(longlong)local_b0 - (longlong)param_2] + *pbVar76;
          pbVar76 = pbVar76 + 1;
          lVar85 = lVar85 + -1;
        } while (lVar85 != 0);
      }
      break;
    case 3:
      if (0 < (int)uVar79) {
        pbVar76 = local_b0;
        do {
          pbVar75 = pbVar76 + (longlong)(local_c8 + (-lVar77 - (longlong)local_b0));
          bVar71 = *pbVar76;
          pbVar76 = pbVar76 + 1;
          pbVar76[(longlong)(local_c8 + (-1 - (longlong)local_b0))] =
               (char)((uint)*pbVar75 + (uint)bVar71 >> 1) +
               pbVar76[(longlong)(param_2 + (-1 - (longlong)local_b0))];
          _Size = _Size - 1;
        } while (_Size != 0);
      }
      break;
    case 4:
      if (0 < (int)uVar79) {
        pbVar76 = local_c8 + -lVar77;
        do {
          bVar71 = *pbVar76;
          bVar70 = pbVar76[(longlong)local_b0 - (longlong)local_c8];
          uVar82 = (uint)bVar71 - (uint)bVar70;
          iVar78 = pbVar76[lVar77 + ((longlong)local_b0 - (longlong)local_c8)] + uVar82;
          uVar84 = iVar78 - (uint)bVar70;
          uVar74 = iVar78 - (uint)bVar71;
          uVar90 = (int)uVar74 >> 0x1f;
          iVar83 = (uVar74 ^ uVar90) - uVar90;
          iVar93 = (uVar82 ^ (int)uVar82 >> 0x1f) - ((int)uVar82 >> 0x1f);
          uVar74 = (int)uVar84 >> 0x1f;
          iVar78 = (uVar84 ^ uVar74) - uVar74;
          if (((iVar93 < iVar83) || (iVar78 < iVar83)) && (bVar71 = bVar70, iVar93 <= iVar78)) {
            bVar71 = pbVar76[lVar77 + ((longlong)local_b0 - (longlong)local_c8)];
          }
          pbVar76[lVar77] = pbVar76[(longlong)(param_2 + (lVar77 - (longlong)local_c8))] + bVar71;
          pbVar76 = pbVar76 + 1;
          _Size = _Size - 1;
        } while (_Size != 0);
      }
      break;
    case 5:
      if (0 < (int)uVar79) {
        pbVar76 = param_2;
        do {
          (pbVar76 + 1)[(longlong)(local_c8 + (-1 - (longlong)param_2))] =
               (pbVar76[(longlong)(local_c8 + (-lVar77 - (longlong)param_2))] >> 1) + *pbVar76;
          _Size = _Size - 1;
          pbVar76 = pbVar76 + 1;
        } while (_Size != 0);
      }
      break;
    case 6:
      if (0 < (int)uVar79) {
        pbVar76 = param_2;
        do {
          pbVar76[(longlong)local_c8 - (longlong)param_2] =
               pbVar76[((longlong)local_c8 - (longlong)param_2) - lVar77] + *pbVar76;
          pbVar76 = pbVar76 + 1;
          _Size = _Size - 1;
        } while (_Size != 0);
      }
    }
  }
  param_2 = param_2 + (int)uVar79;
LAB_140009fba:
  local_bc = local_bc + 1;
  if (param_6 <= local_bc) goto LAB_14000a037;
  uVar69 = (ulonglong)uVar96;
  goto LAB_1400095c0;
switchD_14000967a_caseD_1:
  do {
    pbVar75[lVar91] = *pbVar75;
    pbVar75 = pbVar75 + 1;
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
  goto LAB_14000977e;
switchD_14000967a_caseD_0:
  do {
    pbVar75[lVar91] = *pbVar75;
    pbVar75 = pbVar75 + 1;
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
  goto LAB_14000977e;
}



int* PackPNGTexture(void *param_1,size_t param_2,undefined8 param_3,undefined8 param_4,int *param_5 ,undefined8 param_6,undefined8 param_7,longlong param_8,longlong param_9, longlong *param_10)
{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  byte bVar11;
  uint uVar12;
  void *pvVar13;
  void *pvVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  size_t sVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *unaff_RBX;
  longlong unaff_RSI;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  longlong *unaff_R14;
  ulonglong uVar28;
  uint local_res20;
  int *in_stack_00000070;
  
  puVar7 = (undefined4 *)realloc(param_1,param_2);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = (int)unaff_RBX;
    unaff_RBX = puVar7 + 2;
    *puVar7 = 2;
    param_5 = unaff_RBX;
  }
  *(undefined1 *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = 0x78;
  unaff_RBX[-1] = unaff_RBX[-1] + 1;
  iVar23 = unaff_RBX[-2];
  if (iVar23 <= unaff_RBX[-1] + 1) {
    iVar23 = iVar23 * 2 + 1;
    sVar18 = (longlong)iVar23 + 8;
    if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
      sVar18 = 0xffffffffffffffff;
    }
    piVar8 = (int *)realloc(unaff_RBX + -2,sVar18);
    if (piVar8 != (int *)0x0) {
      unaff_RBX = piVar8 + 2;
      *piVar8 = iVar23;
      param_5 = unaff_RBX;
    }
  }
  param_6._4_4_ = 3;
  local_res20 = 3;
  *(undefined1 *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = 0x5e;
  unaff_RBX[-1] = unaff_RBX[-1] + 1;
  memset(unaff_R14,0,0x20000);
  iVar23 = 0;
  param_7._0_4_ = 0;
  uVar16 = 3;
  uVar25 = 3;
  if (0 < param_7._4_4_ + -3) {
    do {
      lVar21 = 0;
      lVar9 = (longlong)(int)param_7;
      pbVar1 = (byte *)(unaff_RSI + lVar9);
      uVar16 = (uint)*(byte *)(unaff_RSI + 2 + lVar9) * 0x10000 + (uint)pbVar1[1] * 0x100 +
               (uint)*pbVar1;
      param_6._0_4_ = 3;
      param_8 = 0;
      uVar16 = uVar16 ^ uVar16 * 8;
      uVar16 = uVar16 + (uVar16 >> 5);
      uVar16 = uVar16 ^ uVar16 * 0x10;
      uVar16 = uVar16 + (uVar16 >> 0x11);
      uVar16 = (uVar16 >> 6) + uVar16 & 0x3fff;
      plVar24 = unaff_R14 + uVar16;
      pvVar14 = (void *)unaff_R14[uVar16];
      if (pvVar14 == (void *)0x0) {
        iVar23 = 0;
      }
      else {
        iVar23 = *(int *)((longlong)pvVar14 + -4);
      }
      pvVar13 = pvVar14;
      if (0 < iVar23) {
        uVar16 = 3;
        do {
          lVar22 = *(longlong *)((longlong)pvVar14 + lVar21 * 8);
          if ((longlong)((int)param_7 + -0x8000) < lVar22 - param_9) {
            uVar25 = 0;
            if (0 < param_7._4_4_ - (int)param_7) {
              uVar19 = 0;
              uVar28 = 0;
              do {
                uVar25 = (uint)uVar28;
                if ((0x101 < uVar19) ||
                   (*(char *)(uVar19 + lVar22) !=
                    ((char *)(uVar19 + lVar22))[(param_9 - lVar22) + lVar9])) break;
                uVar25 = uVar25 + 1;
                uVar28 = (ulonglong)uVar25;
                uVar19 = uVar19 + 1;
              } while ((longlong)uVar19 < (longlong)(param_7._4_4_ - (int)param_7));
            }
            if ((int)uVar16 <= (int)uVar25) {
              uVar16 = uVar25;
              param_6._0_4_ = uVar25;
              param_8 = lVar22;
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar23);
        pvVar13 = (void *)*plVar24;
        unaff_RBX = param_5;
      }
      if ((pvVar14 != (void *)0x0) && (*(int *)((longlong)pvVar14 + -4) == 0x10)) {
        memmove(pvVar14,(void *)((longlong)pvVar14 + 0x40),0x40);
        *(undefined4 *)(*plVar24 + -4) = 8;
        pvVar13 = (void *)*plVar24;
      }
      if (pvVar13 == (void *)0x0) {
LAB_140011902:
        iVar23 = 2;
        pvVar14 = (void *)0x0;
LAB_140011909:
        sVar18 = (longlong)(iVar23 * 8) + 8;
        if (0xfffffffffffffff7 < (ulonglong)(longlong)(iVar23 * 8)) {
          sVar18 = 0xffffffffffffffff;
        }
        piVar8 = (int *)realloc(pvVar14,sVar18);
        if (piVar8 != (int *)0x0) {
          if (*plVar24 == 0) {
            piVar8[1] = 0;
          }
          *plVar24 = (longlong)(piVar8 + 2);
          *piVar8 = iVar23;
        }
      }
      else if (*(int *)((longlong)pvVar13 + -8) <= *(int *)((longlong)pvVar13 + -4) + 1) {
        if (pvVar13 == (void *)0x0) goto LAB_140011902;
        pvVar14 = (void *)((longlong)pvVar13 + -8);
        iVar23 = *(int *)((longlong)pvVar13 + -8) * 2 + 1;
        goto LAB_140011909;
      }
      *(byte **)(*plVar24 + (longlong)*(int *)(*plVar24 + -4) * 8) = pbVar1;
      *(int *)(*plVar24 + -4) = *(int *)(*plVar24 + -4) + 1;
      bVar11 = (byte)local_res20;
      param_5 = unaff_RBX;
      if (param_8 == 0) {
LAB_14001207f:
        bVar3 = *pbVar1;
        if (bVar3 < 0x90) {
          uVar16 = bVar3 + 0x30;
          piVar8 = (int *)0x0;
          iVar23 = 8;
          do {
            iVar5 = iVar23;
            uVar25 = uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
            uVar25 = (int)piVar8 * 2 | uVar25;
            piVar8 = (int *)(ulonglong)uVar25;
            iVar23 = iVar5 + -1;
          } while (iVar23 != 0);
          local_res20 = local_res20 + 8;
          param_6._4_4_ = param_6._4_4_ | uVar25 << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              piVar8 = (int *)0x0;
              iVar23 = iVar5;
              if (unaff_RBX == (int *)0x0) {
LAB_140012113:
                iVar23 = iVar23 + 1;
                sVar18 = (longlong)iVar23 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (unaff_RBX == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  unaff_RBX = piVar8 + 2;
                  *piVar8 = iVar23;
                }
              }
              else {
                iVar23 = unaff_RBX[-2];
                if (iVar23 <= unaff_RBX[-1] + 1) {
                  piVar8 = unaff_RBX + -2;
                  iVar23 = iVar23 * 2;
                  goto LAB_140012113;
                }
              }
              *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)param_6._4_4_;
              unaff_RBX[-1] = unaff_RBX[-1] + 1;
              param_6._4_4_ = param_6._4_4_ >> 8;
              uVar19 = uVar19 - 1;
              param_5 = unaff_RBX;
            } while (uVar19 != 0);
          }
        }
        else {
          uVar16 = bVar3 + 0x100;
          piVar8 = (int *)0x0;
          iVar23 = 9;
          do {
            iVar5 = iVar23;
            uVar25 = uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
            uVar25 = (int)piVar8 * 2 | uVar25;
            piVar8 = (int *)(ulonglong)uVar25;
            iVar23 = iVar5 + -1;
          } while (iVar23 != 0);
          local_res20 = local_res20 + 9;
          param_6._4_4_ = param_6._4_4_ | uVar25 << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              piVar8 = (int *)0x0;
              iVar23 = iVar5;
              if (unaff_RBX == (int *)0x0) {
LAB_1400121e3:
                iVar23 = iVar23 + 1;
                sVar18 = (longlong)iVar23 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (unaff_RBX == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  unaff_RBX = piVar8 + 2;
                  *piVar8 = iVar23;
                }
              }
              else {
                iVar23 = unaff_RBX[-2];
                if (iVar23 <= unaff_RBX[-1] + 1) {
                  piVar8 = unaff_RBX + -2;
                  iVar23 = iVar23 * 2;
                  goto LAB_1400121e3;
                }
              }
              *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)param_6._4_4_;
              unaff_RBX[-1] = unaff_RBX[-1] + 1;
              param_6._4_4_ = param_6._4_4_ >> 8;
              uVar19 = uVar19 - 1;
              param_5 = unaff_RBX;
            } while (uVar19 != 0);
          }
        }
        param_6._0_4_ = 1;
      }
      else {
        lVar22 = 0;
        uVar16 = (uint)pbVar1[3] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1];
        uVar16 = uVar16 ^ uVar16 * 8;
        uVar16 = uVar16 + (uVar16 >> 5);
        uVar16 = uVar16 ^ uVar16 * 0x10;
        uVar16 = uVar16 + (uVar16 >> 0x11);
        lVar21 = param_10[(uVar16 >> 6) + uVar16 & 0x3fff];
        if (lVar21 == 0) {
          iVar23 = 0;
        }
        else {
          iVar23 = *(int *)(lVar21 + -4);
        }
        if (0 < iVar23) {
          do {
            lVar4 = *(longlong *)(lVar21 + lVar22 * 8);
            if ((longlong)((int)param_7 + -0x7fff) < lVar4 - param_9) {
              iVar26 = 0;
              uVar19 = 0;
              iVar5 = (param_7._4_4_ - (int)param_7) + -1;
              if (0 < iVar5) {
                do {
                  if ((0x101 < uVar19) ||
                     (*(char *)(uVar19 + lVar4) !=
                      ((char *)(uVar19 + lVar4))[(param_9 - lVar4) + lVar9 + 1])) break;
                  iVar26 = iVar26 + 1;
                  uVar19 = uVar19 + 1;
                } while ((longlong)uVar19 < (longlong)iVar5);
              }
              if ((int)(uint)param_6 < iVar26) goto LAB_14001207f;
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < iVar23);
        }
        uVar20 = 0;
        uVar16 = 0;
        iVar23 = ((int)param_9 - (int)param_8) + (int)param_7;
        uVar19 = uVar20;
        uVar28 = uVar20;
        if (3 < (int)(uint)param_6) {
          do {
            puVar2 = &DAT_140022484 + uVar28;
            uVar28 = uVar28 + 1;
            uVar16 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar16;
          } while ((int)(*puVar2 - 1) < (int)(uint)param_6);
        }
        iVar5 = uVar16 + 0x101;
        if (iVar5 < 0x90) {
          uVar16 = uVar16 + 0x131;
          iVar5 = 8;
          do {
            iVar26 = iVar5;
            uVar25 = uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
            uVar25 = (int)uVar20 * 2 | uVar25;
            uVar20 = (ulonglong)uVar25;
            iVar5 = iVar26 + -1;
          } while (iVar5 != 0);
          local_res20 = local_res20 + 8;
          uVar16 = param_6._4_4_ | uVar25 << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              piVar8 = (int *)0x0;
              iVar5 = iVar26;
              if (unaff_RBX == (int *)0x0) {
LAB_140011b33:
                iVar5 = iVar5 + 1;
                sVar18 = (longlong)iVar5 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (unaff_RBX == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  unaff_RBX = piVar8 + 2;
                  *piVar8 = iVar5;
                }
              }
              else {
                piVar8 = unaff_RBX + -2;
                if (*piVar8 <= unaff_RBX[-1] + 1) {
                  iVar5 = *piVar8 * 2;
                  goto LAB_140011b33;
                }
              }
              *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar16;
              unaff_RBX[-1] = unaff_RBX[-1] + 1;
              uVar16 = uVar16 >> 8;
              uVar19 = uVar19 - 1;
              param_5 = unaff_RBX;
            } while (uVar19 != 0);
          }
        }
        else if (iVar5 < 0x100) {
          uVar16 = uVar16 + 0x201;
          iVar5 = 9;
          do {
            iVar26 = iVar5;
            uVar25 = uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
            uVar25 = (int)uVar20 * 2 | uVar25;
            uVar20 = (ulonglong)uVar25;
            iVar5 = iVar26 + -1;
          } while (iVar5 != 0);
          local_res20 = local_res20 + 9;
          uVar16 = param_6._4_4_ | uVar25 << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              piVar8 = (int *)0x0;
              iVar5 = iVar26;
              if (unaff_RBX == (int *)0x0) {
LAB_140011bf9:
                iVar5 = iVar5 + 1;
                sVar18 = (longlong)iVar5 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (unaff_RBX == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  unaff_RBX = piVar8 + 2;
                  *piVar8 = iVar5;
                }
              }
              else {
                piVar8 = unaff_RBX + -2;
                if (*piVar8 <= unaff_RBX[-1] + 1) {
                  iVar5 = *piVar8 * 2;
                  goto LAB_140011bf9;
                }
              }
              *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar16;
              unaff_RBX[-1] = unaff_RBX[-1] + 1;
              uVar16 = uVar16 >> 8;
              uVar19 = uVar19 - 1;
              param_5 = unaff_RBX;
            } while (uVar19 != 0);
          }
        }
        else if (iVar5 < 0x118) {
          uVar16 = uVar16 + 1;
          iVar5 = 7;
          do {
            iVar26 = iVar5;
            uVar25 = uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
            uVar25 = (int)uVar20 * 2 | uVar25;
            uVar20 = (ulonglong)uVar25;
            iVar5 = iVar26 + -1;
          } while (iVar5 != 0);
          local_res20 = local_res20 + 7;
          uVar16 = param_6._4_4_ | uVar25 << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              piVar8 = (int *)0x0;
              iVar5 = iVar26;
              if (unaff_RBX == (int *)0x0) {
LAB_140011cb9:
                iVar5 = iVar5 + 1;
                sVar18 = (longlong)iVar5 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (unaff_RBX == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  unaff_RBX = piVar8 + 2;
                  *piVar8 = iVar5;
                }
              }
              else {
                piVar8 = unaff_RBX + -2;
                if (*piVar8 <= unaff_RBX[-1] + 1) {
                  iVar5 = *piVar8 * 2;
                  goto LAB_140011cb9;
                }
              }
              *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar16;
              unaff_RBX[-1] = unaff_RBX[-1] + 1;
              uVar16 = uVar16 >> 8;
              uVar19 = uVar19 - 1;
              param_5 = unaff_RBX;
            } while (uVar19 != 0);
          }
        }
        else {
          uVar16 = uVar16 + 0xa9;
          iVar5 = 8;
          do {
            iVar26 = iVar5;
            uVar25 = uVar16 & 1;
            uVar16 = (int)uVar16 >> 1;
            uVar25 = (int)uVar20 * 2 | uVar25;
            uVar20 = (ulonglong)uVar25;
            iVar5 = iVar26 + -1;
          } while (iVar5 != 0);
          local_res20 = local_res20 + 8;
          uVar16 = param_6._4_4_ | uVar25 << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              piVar8 = (int *)0x0;
              iVar5 = iVar26;
              if (unaff_RBX == (int *)0x0) {
LAB_140011d79:
                iVar5 = iVar5 + 1;
                sVar18 = (longlong)iVar5 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (unaff_RBX == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  unaff_RBX = piVar8 + 2;
                  *piVar8 = iVar5;
                }
              }
              else {
                piVar8 = unaff_RBX + -2;
                if (*piVar8 <= unaff_RBX[-1] + 1) {
                  iVar5 = *piVar8 * 2;
                  goto LAB_140011d79;
                }
              }
              *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar16;
              unaff_RBX[-1] = unaff_RBX[-1] + 1;
              uVar16 = uVar16 >> 8;
              uVar19 = uVar19 - 1;
              param_5 = unaff_RBX;
            } while (uVar19 != 0);
          }
        }
        uVar25 = local_res20;
        if ((&UNK_140022c50)[uVar28] != 0) {
          uVar25 = local_res20 + (byte)(&UNK_140022c50)[uVar28];
          uVar16 = uVar16 | (uint)param_6 - *(ushort *)(&UNK_140022480 + uVar28 * 2) <<
                            ((byte)local_res20 & 0x1f);
          if (7 < (int)uVar25) {
            uVar19 = (ulonglong)(uVar25 >> 3);
            uVar25 = uVar25 + (uVar25 >> 3) * -8;
            do {
              if (param_5 == (int *)0x0) {
                iVar5 = 2;
                piVar8 = (int *)0x0;
LAB_140011e4a:
                sVar18 = (longlong)iVar5 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (param_5 == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  param_5 = piVar8 + 2;
                  *piVar8 = iVar5;
                }
              }
              else {
                piVar8 = param_5 + -2;
                if (*piVar8 <= param_5[-1] + 1) {
                  iVar5 = *piVar8 * 2 + 1;
                  goto LAB_140011e4a;
                }
              }
              *(char *)((longlong)param_5[-1] + (longlong)param_5) = (char)uVar16;
              param_5[-1] = param_5[-1] + 1;
              uVar16 = uVar16 >> 8;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        uVar20 = 0;
        uVar19 = uVar20;
        uVar28 = uVar20;
        if (1 < iVar23) {
          do {
            puVar2 = &DAT_140022a44 + uVar28;
            uVar28 = uVar28 + 1;
            uVar19 = (ulonglong)((int)uVar19 + 1);
          } while ((int)(*puVar2 - 1) < iVar23);
        }
        iVar5 = 5;
        do {
          iVar26 = iVar5;
          uVar17 = (uint)uVar19;
          uVar19 = (ulonglong)(uint)((int)uVar17 >> 1);
          uVar17 = (int)uVar20 * 2 | uVar17 & 1;
          uVar20 = (ulonglong)uVar17;
          iVar5 = iVar26 + -1;
        } while (iVar5 != 0);
        local_res20 = uVar25 + 5;
        param_6._4_4_ = uVar16 | uVar17 << ((byte)uVar25 & 0x1f);
        if (7 < (int)local_res20) {
          uVar19 = (ulonglong)(local_res20 >> 3);
          local_res20 = local_res20 + (local_res20 >> 3) * -8;
          do {
            piVar8 = (int *)0x0;
            iVar5 = iVar26;
            if (param_5 == (int *)0x0) {
LAB_140011f45:
              iVar5 = iVar5 + 1;
              sVar18 = (longlong)iVar5 + 8;
              if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
                sVar18 = 0xffffffffffffffff;
              }
              piVar8 = (int *)realloc(piVar8,sVar18);
              if (piVar8 != (int *)0x0) {
                if (param_5 == (int *)0x0) {
                  piVar8[1] = 0;
                }
                param_5 = piVar8 + 2;
                *piVar8 = iVar5;
              }
            }
            else {
              piVar8 = param_5 + -2;
              if (*piVar8 <= param_5[-1] + 1) {
                iVar5 = *piVar8 * 2;
                goto LAB_140011f45;
              }
            }
            *(char *)((longlong)param_5[-1] + (longlong)param_5) = (char)param_6._4_4_;
            param_5[-1] = param_5[-1] + 1;
            param_6._4_4_ = param_6._4_4_ >> 8;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if ((&UNK_140022c08)[uVar28] != 0) {
          bVar11 = (byte)local_res20;
          local_res20 = local_res20 + (byte)(&UNK_140022c08)[uVar28];
          param_6._4_4_ =
               param_6._4_4_ |
               iVar23 - (uint)*(ushort *)(&UNK_140022a40 + uVar28 * 2) << (bVar11 & 0x1f);
          if (7 < (int)local_res20) {
            uVar19 = (ulonglong)(local_res20 >> 3);
            local_res20 = local_res20 + (local_res20 >> 3) * -8;
            do {
              if (param_5 == (int *)0x0) {
                iVar23 = 2;
                piVar8 = (int *)0x0;
LAB_140012023:
                sVar18 = (longlong)iVar23 + 8;
                if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
                  sVar18 = 0xffffffffffffffff;
                }
                piVar8 = (int *)realloc(piVar8,sVar18);
                if (piVar8 != (int *)0x0) {
                  if (param_5 == (int *)0x0) {
                    piVar8[1] = 0;
                  }
                  param_5 = piVar8 + 2;
                  *piVar8 = iVar23;
                }
              }
              else {
                piVar8 = param_5 + -2;
                if (*piVar8 <= param_5[-1] + 1) {
                  iVar23 = *piVar8 * 2 + 1;
                  goto LAB_140012023;
                }
              }
              *(char *)((longlong)param_5[-1] + (longlong)param_5) = (char)param_6._4_4_;
              param_5[-1] = param_5[-1] + 1;
              param_6._4_4_ = param_6._4_4_ >> 8;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
      }
      iVar23 = (int)param_7 + (uint)param_6;
      unaff_RBX = param_5;
      unaff_RSI = param_9;
      unaff_R14 = param_10;
      uVar16 = local_res20;
      uVar25 = param_6._4_4_;
      param_7._0_4_ = iVar23;
    } while (iVar23 < param_7._4_4_ + -3);
  }
  iVar5 = 2;
  lVar21 = (longlong)param_7._4_4_;
  for (lVar9 = (longlong)iVar23; bVar11 = (byte)uVar16, lVar9 < lVar21; lVar9 = lVar9 + 1) {
    uVar17 = 0;
    bVar3 = *(byte *)(unaff_RSI + lVar9);
    if (bVar3 < 0x90) {
      uVar12 = bVar3 + 0x30;
      iVar23 = 8;
      do {
        uVar6 = uVar12 & 1;
        uVar12 = (int)uVar12 >> 1;
        uVar17 = uVar17 * 2 | uVar6;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      uVar16 = uVar16 + 8;
      uVar25 = uVar25 | uVar17 << (bVar11 & 0x1f);
      if (7 < (int)uVar16) {
        uVar19 = (ulonglong)(uVar16 >> 3);
        uVar16 = uVar16 + (uVar16 >> 3) * -8;
        do {
          piVar8 = (int *)0x0;
          if (unaff_RBX == (int *)0x0) {
            iVar23 = 2;
LAB_140012303:
            sVar18 = (longlong)iVar23 + 8;
            if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
              sVar18 = 0xffffffffffffffff;
            }
            piVar8 = (int *)realloc(piVar8,sVar18);
            if (piVar8 != (int *)0x0) {
              if (unaff_RBX == (int *)0x0) {
                piVar8[1] = 0;
              }
              unaff_RBX = piVar8 + 2;
              *piVar8 = iVar23;
            }
          }
          else {
            piVar8 = unaff_RBX + -2;
            if (*piVar8 <= unaff_RBX[-1] + 1) {
              iVar23 = *piVar8 * 2 + 1;
              goto LAB_140012303;
            }
          }
          *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar25;
          unaff_RBX[-1] = unaff_RBX[-1] + 1;
          uVar25 = uVar25 >> 8;
          uVar19 = uVar19 - 1;
          unaff_RSI = param_9;
        } while (uVar19 != 0);
      }
    }
    else {
      uVar12 = bVar3 + 0x100;
      iVar23 = 9;
      do {
        uVar6 = uVar12 & 1;
        uVar12 = (int)uVar12 >> 1;
        uVar17 = uVar17 * 2 | uVar6;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      uVar16 = uVar16 + 9;
      uVar25 = uVar25 | uVar17 << (bVar11 & 0x1f);
      if (7 < (int)uVar16) {
        uVar19 = (ulonglong)(uVar16 >> 3);
        uVar16 = uVar16 + (uVar16 >> 3) * -8;
        do {
          piVar8 = (int *)0x0;
          if (unaff_RBX == (int *)0x0) {
            iVar23 = 2;
LAB_1400123b3:
            sVar18 = (longlong)iVar23 + 8;
            if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
              sVar18 = 0xffffffffffffffff;
            }
            piVar8 = (int *)realloc(piVar8,sVar18);
            if (piVar8 != (int *)0x0) {
              if (unaff_RBX == (int *)0x0) {
                piVar8[1] = 0;
              }
              unaff_RBX = piVar8 + 2;
              *piVar8 = iVar23;
            }
          }
          else {
            piVar8 = unaff_RBX + -2;
            if (*piVar8 <= unaff_RBX[-1] + 1) {
              iVar23 = *piVar8 * 2 + 1;
              goto LAB_1400123b3;
            }
          }
          *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar25;
          unaff_RBX[-1] = unaff_RBX[-1] + 1;
          uVar25 = uVar25 >> 8;
          uVar19 = uVar19 - 1;
          unaff_RSI = param_9;
        } while (uVar19 != 0);
      }
    }
  }
  iVar23 = 7;
  do {
    iVar23 = iVar23 + -1;
  } while (iVar23 != 0);
  uVar16 = uVar16 + 7;
  uVar25 = uVar25 | 0 << (bVar11 & 0x1f);
  if (7 < (int)uVar16) {
    uVar19 = (ulonglong)(uVar16 >> 3);
    uVar16 = uVar16 + (uVar16 >> 3) * -8;
    do {
      piVar8 = (int *)0x0;
      if (unaff_RBX == (int *)0x0) {
        iVar23 = 2;
LAB_140012473:
        sVar18 = (longlong)iVar23 + 8;
        if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
          sVar18 = 0xffffffffffffffff;
        }
        piVar8 = (int *)realloc(piVar8,sVar18);
        if (piVar8 != (int *)0x0) {
          if (unaff_RBX == (int *)0x0) {
            piVar8[1] = 0;
          }
          unaff_RBX = piVar8 + 2;
          *piVar8 = iVar23;
        }
      }
      else {
        piVar8 = unaff_RBX + -2;
        if (*piVar8 <= unaff_RBX[-1] + 1) {
          iVar23 = *piVar8 * 2 + 1;
          goto LAB_140012473;
        }
      }
      *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar25;
      unaff_RBX[-1] = unaff_RBX[-1] + 1;
      uVar25 = uVar25 >> 8;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  while (uVar16 != 0) {
    uVar16 = uVar16 + 1;
    if (7 < (int)uVar16) {
      uVar19 = (ulonglong)(uVar16 >> 3);
      uVar16 = uVar16 + (uVar16 >> 3) * -8;
      do {
        piVar8 = (int *)0x0;
        if (unaff_RBX == (int *)0x0) {
          iVar23 = 2;
LAB_140012516:
          sVar18 = (longlong)iVar23 + 8;
          if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
            sVar18 = 0xffffffffffffffff;
          }
          piVar8 = (int *)realloc(piVar8,sVar18);
          if (piVar8 != (int *)0x0) {
            if (unaff_RBX == (int *)0x0) {
              piVar8[1] = 0;
            }
            unaff_RBX = piVar8 + 2;
            *piVar8 = iVar23;
          }
        }
        else {
          piVar8 = unaff_RBX + -2;
          if (*piVar8 <= unaff_RBX[-1] + 1) {
            iVar23 = *piVar8 * 2 + 1;
            goto LAB_140012516;
          }
        }
        *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar25;
        unaff_RBX[-1] = unaff_RBX[-1] + 1;
        uVar25 = uVar25 >> 8;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  lVar9 = 0x4000;
  plVar24 = param_10;
  do {
    if (*plVar24 != 0) {
      free((void *)(*plVar24 + -8));
    }
    plVar24 = plVar24 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  free(param_10);
  piVar10 = (int *)0x0;
  uVar16 = 1;
  piVar8 = piVar10;
  if (0 < lVar21) {
    lVar9 = (longlong)(param_7._4_4_ % 0x15b0);
    piVar27 = piVar10;
    do {
      if (0 < lVar9) {
        piVar15 = piVar10;
        do {
          pbVar1 = (byte *)(param_9 + (longlong)piVar27 + (longlong)piVar15);
          piVar15 = (int *)((longlong)piVar15 + 1);
          uVar16 = uVar16 + *pbVar1;
          piVar8 = (int *)(ulonglong)((int)piVar8 + uVar16);
        } while ((longlong)piVar15 < lVar9);
      }
      piVar27 = (int *)((longlong)piVar27 + lVar9);
      lVar9 = 0x15b0;
      uVar16 = uVar16 % 0xfff1;
      piVar8 = (int *)(ulonglong)(uint)((int)piVar8 + (int)((ulonglong)piVar8 / 0xfff1) * -0xfff1);
    } while ((longlong)piVar27 < lVar21);
  }
  if (unaff_RBX == (int *)0x0) {
    piVar27 = (int *)0xfffffffffffffff8;
  }
  else {
    piVar27 = unaff_RBX + -2;
    if (unaff_RBX[-1] + 1 < *piVar27) goto LAB_14001268e;
    iVar5 = *piVar27 * 2 + 1;
  }
  sVar18 = (longlong)iVar5 + 8;
  if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar5) {
    sVar18 = 0xffffffffffffffff;
  }
  piVar15 = piVar27;
  if (unaff_RBX == (int *)0x0) {
    piVar15 = piVar10;
  }
  piVar10 = (int *)realloc(piVar15,sVar18);
  if (piVar10 != (int *)0x0) {
    if (unaff_RBX == (int *)0x0) {
      piVar10[1] = 0;
    }
    unaff_RBX = piVar10 + 2;
    *piVar10 = iVar5;
    piVar27 = piVar10;
  }
LAB_14001268e:
  *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)((ulonglong)piVar8 >> 8);
  unaff_RBX[-1] = unaff_RBX[-1] + 1;
  if (*piVar27 <= unaff_RBX[-1] + 1) {
    iVar23 = *piVar27 * 2 + 1;
    sVar18 = (longlong)iVar23 + 8;
    if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
      sVar18 = 0xffffffffffffffff;
    }
    piVar10 = (int *)realloc(piVar27,sVar18);
    if (piVar10 != (int *)0x0) {
      unaff_RBX = piVar10 + 2;
      *piVar10 = iVar23;
      piVar27 = piVar10;
    }
  }
  *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)piVar8;
  unaff_RBX[-1] = unaff_RBX[-1] + 1;
  if (*piVar27 <= unaff_RBX[-1] + 1) {
    iVar23 = *piVar27 * 2 + 1;
    sVar18 = (longlong)iVar23 + 8;
    if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
      sVar18 = 0xffffffffffffffff;
    }
    piVar8 = (int *)realloc(piVar27,sVar18);
    if (piVar8 != (int *)0x0) {
      unaff_RBX = piVar8 + 2;
      *piVar8 = iVar23;
      piVar27 = piVar8;
    }
  }
  *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)(uVar16 >> 8);
  unaff_RBX[-1] = unaff_RBX[-1] + 1;
  if (*piVar27 <= unaff_RBX[-1] + 1) {
    iVar23 = *piVar27 * 2 + 1;
    sVar18 = (longlong)iVar23 + 8;
    if (0xfffffffffffffff7 < (ulonglong)(longlong)iVar23) {
      sVar18 = 0xffffffffffffffff;
    }
    piVar8 = (int *)realloc(piVar27,sVar18);
    if (piVar8 != (int *)0x0) {
      unaff_RBX = piVar8 + 2;
      *piVar8 = iVar23;
      piVar27 = piVar8;
    }
  }
  *(char *)((longlong)unaff_RBX[-1] + (longlong)unaff_RBX) = (char)uVar16;
  unaff_RBX[-1] = unaff_RBX[-1] + 1;
  iVar23 = unaff_RBX[-1];
  *in_stack_00000070 = iVar23;
  memmove(piVar27,unaff_RBX,(longlong)iVar23);
  return piVar27;
}



ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)
{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000200; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002f0;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_14001ebee;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_14001ebee:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}


undefined8 UnZipSDF(void)
{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  short *unaff_R14;
  IMAGE_DOS_HEADER *unaff_R15;
  longlong in_stack_00000070;
  int in_stack_00000078;
  short *in_stack_00000080;
  
  unaff_R14[0] = 0;
  unaff_R14[1] = 0;
  unaff_R14[2] = 0;
  unaff_R14[3] = 0;
  unaff_R14[4] = 0;
  unaff_R14[5] = 0;
  unaff_R14[6] = 0;
  unaff_R14[7] = 0;
  unaff_R14[8] = 0;
  unaff_R14[9] = 0;
  unaff_R14[10] = 0;
  unaff_R14[0xb] = 0;
  unaff_R14[0xc] = 0;
  unaff_R14[0xd] = 0;
  unaff_R14[0xe] = 0;
  unaff_R14[0xf] = 0;
  unaff_R14[0x10] = 0;
  unaff_R14[0x11] = 0;
  unaff_R14[0x12] = 0;
  unaff_R14[0x13] = 0;
  unaff_R14[0x14] = 0;
  unaff_R14[0x15] = 0;
  unaff_R14[0x16] = 0;
  unaff_R14[0x17] = 0;
  unaff_R14[0x18] = 0;
  unaff_R14[0x19] = 0;
  unaff_R14[0x1a] = 0;
  unaff_R14[0x1b] = 0;
  unaff_R14[0x1c] = 0;
  unaff_R14[0x1d] = 0;
  unaff_R14[0x1e] = 0;
  unaff_R14[0x1f] = 0;
  unaff_R14[0x20] = 0;
  unaff_R14[0x21] = 0;
  unaff_R14[0x22] = 0;
  unaff_R14[0x23] = 0;
  unaff_R14[0x24] = 0;
  unaff_R14[0x25] = 0;
  unaff_R14[0x26] = 0;
  unaff_R14[0x27] = 0;
  unaff_R14[0x28] = 0;
  unaff_R14[0x29] = 0;
  unaff_R14[0x2a] = 0;
  unaff_R14[0x2b] = 0;
  unaff_R14[0x2c] = 0;
  unaff_R14[0x2d] = 0;
  unaff_R14[0x2e] = 0;
  unaff_R14[0x2f] = 0;
  unaff_R14[0x30] = 0;
  unaff_R14[0x31] = 0;
  unaff_R14[0x32] = 0;
  unaff_R14[0x33] = 0;
  unaff_R14[0x34] = 0;
  unaff_R14[0x35] = 0;
  unaff_R14[0x36] = 0;
  unaff_R14[0x37] = 0;
  unaff_R14[0x38] = 0;
  unaff_R14[0x39] = 0;
  unaff_R14[0x3a] = 0;
  unaff_R14[0x3b] = 0;
  unaff_R14[0x3c] = 0;
  unaff_R14[0x3d] = 0;
  unaff_R14[0x3e] = 0;
  unaff_R14[0x3f] = 0;
  if (unaff_EDI != 0) {
    iVar9 = *(int *)((longlong)unaff_RBX + 0x4824);
    if (iVar9 < (int)unaff_EDI) {
      loop_sdf_blending(unaff_RBX);
      iVar9 = *(int *)((longlong)unaff_RBX + 0x4824);
    }
    uVar11 = *(uint *)(unaff_RBX + 0x904);
    bVar5 = (byte)unaff_EDI & 0x1f;
    uVar12 = uVar11 << bVar5 | uVar11 >> 0x20 - bVar5;
    if (unaff_EDI < 0x11) {
      *(uint *)((longlong)unaff_RBX + 0x4824) = iVar9 - unaff_EDI;
      uVar3 = *(uint *)(unaff_R15[0x444].e_res[4] + (longlong)(int)unaff_EDI * 2 + -6);
      uVar10 = *(uint *)(unaff_R15[0x43e].e_program + (longlong)(int)unaff_EDI * 4 + 0x20);
      *(uint *)(unaff_RBX + 0x904) = ~uVar3 & uVar12;
      iVar9 = (~((int)uVar11 >> 0x1f) & uVar10) + (uVar3 & uVar12);
      goto LAB_140003131;
    }
  }
  iVar9 = 0;
LAB_140003131:
  iVar8 = 1;
  iVar9 = (int)unaff_RBX[(longlong)in_stack_00000078 * 0xc + 0x8d7] + iVar9;
  *(int *)(unaff_RBX + (longlong)in_stack_00000078 * 0xc + 0x8d7) = iVar9;
  *unaff_R14 = (short)iVar9 * *in_stack_00000080;
  do {
    iVar9 = *(int *)((longlong)unaff_RBX + 0x4824);
    if (iVar9 < 0x10) {
      loop_sdf_blending(unaff_RBX);
      iVar9 = *(int *)((longlong)unaff_RBX + 0x4824);
    }
    uVar11 = *(uint *)(unaff_RBX + 0x904);
    sVar2 = *(short *)(in_stack_00000070 + (ulonglong)(uVar11 >> 0x17) * 2);
    if (sVar2 == 0) {
      if (iVar9 < 0x10) {
        loop_sdf_blending(unaff_RBX);
        uVar11 = *(uint *)(unaff_RBX + 0x904);
      }
      bVar5 = *(byte *)((ulonglong)(uVar11 >> 0x17) + unaff_RBP);
      uVar6 = (ulonglong)bVar5;
      if (bVar5 == 0xff) {
        puVar1 = (uint *)(unaff_RBP + 0x62c);
        iVar9 = 10;
        lVar13 = 10;
        uVar12 = *puVar1;
        while (uVar12 <= uVar11 >> 0x10) {
          iVar9 = iVar9 + 1;
          puVar1 = puVar1 + 1;
          lVar13 = lVar13 + 1;
          uVar12 = *puVar1;
        }
        iVar7 = *(int *)((longlong)unaff_RBX + 0x4824);
        if (iVar9 == 0x11) {
          *(int *)((longlong)unaff_RBX + 0x4824) = iVar7 + -0x10;
LAB_1400033a5:
                    /* WARNING: Load size is inaccurate */
          *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad huffman code";
          return 0;
        }
        if (iVar7 < iVar9) goto LAB_1400033a5;
        bVar5 = (byte)iVar9;
        iVar7 = iVar7 - iVar9;
        uVar6 = (ulonglong)
                (int)((uVar11 >> (0x20 - bVar5 & 0x1f) &
                      *(uint *)(unaff_R15[0x444].e_res[4] + lVar13 * 2 + -6)) +
                     *(int *)(unaff_RBP + 0x64c + lVar13 * 4));
      }
      else {
        bVar5 = *(byte *)(uVar6 + 0x500 + unaff_RBP);
        if (*(int *)((longlong)unaff_RBX + 0x4824) < (int)(uint)bVar5) goto LAB_1400033a5;
        iVar7 = *(int *)((longlong)unaff_RBX + 0x4824) - (uint)bVar5;
      }
      uVar11 = uVar11 << (bVar5 & 0x1f);
      *(int *)((longlong)unaff_RBX + 0x4824) = iVar7;
      *(uint *)(unaff_RBX + 0x904) = uVar11;
      bVar5 = *(byte *)(uVar6 + 0x400 + unaff_RBP);
      uVar12 = bVar5 & 0xf;
      if ((bVar5 & 0xf) == 0) {
        if (bVar5 != 0xf0) {
          return 1;
        }
        iVar8 = iVar8 + 0x10;
      }
      else {
        iVar9 = iVar8 + (uint)(bVar5 >> 4);
        iVar8 = iVar9 + 1;
        bVar5 = unaff_R15[0x441].e_program[iVar9];
        if (iVar7 < (int)uVar12) {
          loop_sdf_blending(unaff_RBX);
          uVar11 = *(uint *)(unaff_RBX + 0x904);
          iVar7 = *(int *)((longlong)unaff_RBX + 0x4824);
        }
        uVar10 = uVar11 << (sbyte)uVar12 | uVar11 >> 0x20 - (sbyte)uVar12;
        uVar3 = *(uint *)(&DAT_140022210 + (ulonglong)uVar12 * 4);
        uVar4 = *(undefined4 *)(&DAT_140021f60 + (ulonglong)uVar12 * 4);
        *(uint *)((longlong)unaff_RBX + 0x4824) = iVar7 - uVar12;
        *(uint *)(unaff_RBX + 0x904) = ~uVar3 & uVar10;
        unaff_R15 = &IMAGE_DOS_HEADER_140000000;
        unaff_R14[bVar5] =
             in_stack_00000080[bVar5] *
             ((~(ushort)((int)uVar11 >> 0x1f) & (ushort)uVar4) + ((ushort)uVar3 & (ushort)uVar10));
      }
    }
    else {
      uVar12 = (int)sVar2 & 0xf;
      iVar7 = iVar8 + ((int)sVar2 >> 4 & 0xfU);
      *(uint *)(unaff_RBX + 0x904) = uVar11 << (sbyte)uVar12;
      iVar8 = iVar7 + 1;
      *(uint *)((longlong)unaff_RBX + 0x4824) = iVar9 - uVar12;
      unaff_R14[unaff_R15[0x441].e_program[iVar7]] =
           in_stack_00000080[unaff_R15[0x441].e_program[iVar7]] * (short)(char)((ushort)sVar2 >> 8);
    }
    if (0x3f < iVar8) {
      return 1;
    }
  } while( true );
}



int jpeg_segment_internal_fast(longlong param_1)
{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar3 = *(byte **)(param_1 + 0xc0);
  pbVar5 = *(byte **)(param_1 + 200);
  if (pbVar5 <= pbVar3) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar6 = 0;
      goto LAB_140001f33;
    }
    read_sdf_internal_ptr(param_1);
    pbVar3 = *(byte **)(param_1 + 0xc0);
    pbVar5 = *(byte **)(param_1 + 200);
  }
  bVar1 = *pbVar3;
  pbVar4 = pbVar3 + 1;
  *(byte **)(param_1 + 0xc0) = pbVar4;
  uVar6 = (uint)bVar1;
  if (pbVar4 < pbVar5) {
    bVar2 = *pbVar4;
    *(byte **)(param_1 + 0xc0) = pbVar3 + 2;
    return (uint)bVar2 + (uint)bVar1 * 0x100;
  }
LAB_140001f33:
  if (*(int *)(param_1 + 0x30) != 0) {
    read_sdf_internal_ptr(param_1);
    bVar1 = **(byte **)(param_1 + 0xc0);
    *(byte **)(param_1 + 0xc0) = *(byte **)(param_1 + 0xc0) + 1;
    return (uint)bVar1 + uVar6 * 0x100;
  }
  return uVar6 * 0x100;
}



undefined8 jpeg_segment_internal(void *param_1,uint *param_2)
{
  uint uVar1;
  uint uVar2;
  byte bVar4;
  byte *pbVar5;
  ushort *puVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar3;
  
  uVar7 = 0;
  uVar3 = uVar7;
  uVar12 = uVar7;
  uVar11 = uVar7;
  do {
    uVar8 = *param_2;
    if (0 < (int)uVar8) {
      memset((void *)((longlong)param_1 + uVar12 + 0x500),(int)uVar3 + 1,(ulonglong)uVar8);
      uVar11 = (ulonglong)((int)uVar11 + uVar8);
      uVar12 = uVar12 + uVar8;
    }
    uVar8 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar8;
    param_2 = param_2 + 1;
  } while ((int)uVar8 < 0x10);
  piVar13 = (int *)((longlong)param_1 + 0x608);
  uVar8 = 1;
  *(undefined1 *)((longlong)(int)uVar11 + 0x500 + (longlong)param_1) = 0;
  iVar9 = 0xf;
  uVar3 = uVar7;
  uVar12 = uVar7;
  uVar11 = uVar7;
  do {
    uVar2 = (uint)uVar3;
    pbVar5 = (byte *)((longlong)param_1 + uVar11 + 0x500);
    piVar13[0x12] = (int)uVar12 - uVar2;
    if (*pbVar5 == uVar8) {
      puVar10 = (undefined2 *)((longlong)param_1 + uVar11 * 2 + 0x200);
      do {
        *puVar10 = (short)uVar3;
        pbVar5 = pbVar5 + 1;
        puVar10 = puVar10 + 1;
        uVar1 = (uint)uVar3;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        uVar11 = uVar11 + 1;
        uVar2 = uVar1 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (*pbVar5 == uVar8);
      if ((uint)(1 << ((byte)uVar8 & 0x1f)) <= uVar1) {
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad code lengths";
        return 0;
      }
    }
    uVar3 = (ulonglong)(uVar2 * 2);
    *piVar13 = uVar2 << ((byte)iVar9 & 0x1f);
    uVar8 = uVar8 + 1;
    piVar13 = piVar13 + 1;
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) {
      *(undefined4 *)((longlong)param_1 + (longlong)(int)uVar8 * 4 + 0x604) = 0xffffffff;
      memset(param_1,0xff,0x200);
      if (0 < (int)uVar12) {
        pbVar5 = (byte *)((longlong)param_1 + 0x500);
        puVar6 = (ushort *)((longlong)param_1 + 0x200);
        do {
          if (*pbVar5 < 10) {
            bVar4 = 9 - *pbVar5;
            iVar9 = 1 << (bVar4 & 0x1f);
            if (0 < iVar9) {
              memset((void *)((longlong)(int)((uint)*puVar6 << (bVar4 & 0x1f)) + (longlong)param_1),
                     (uint)uVar7 & 0xff,(longlong)iVar9);
            }
          }
          uVar8 = (uint)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
          puVar6 = puVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while ((int)uVar8 < (int)uVar12);
      }
      return 1;
    }
  } while( true );
}



void JPEG_Segment_Parser(longlong *param_1,int param_2)
{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  sbyte sVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint *puVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  uint local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_140028008 ^ (ulonglong)auStack_a8;
  if (param_2 == 0xc4) {
    iVar9 = jpeg_segment_internal_fast(*param_1);
    iVar9 = iVar9 + -2;
    while (0 < iVar9) {
      iVar20 = 0;
      lVar18 = *param_1;
      pbVar17 = *(byte **)(lVar18 + 0xc0);
      if (pbVar17 < *(byte **)(lVar18 + 200)) {
        bVar13 = *pbVar17;
        *(byte **)(lVar18 + 0xc0) = pbVar17 + 1;
      }
      else if (*(int *)(lVar18 + 0x30) == 0) {
        bVar13 = 0;
      }
      else {
        read_sdf_internal_ptr(lVar18);
        bVar13 = **(byte **)(lVar18 + 0xc0);
        *(byte **)(lVar18 + 0xc0) = *(byte **)(lVar18 + 0xc0) + 1;
      }
      bVar1 = bVar13 >> 4;
      if ((1 < bVar1) || (3 < (bVar13 & 0xf))) {
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad DHT header";
        break;
      }
      puVar21 = local_78;
      lVar18 = 0x10;
      do {
        lVar22 = *param_1;
        pbVar17 = *(byte **)(lVar22 + 0xc0);
        if (pbVar17 < *(byte **)(lVar22 + 200)) {
          bVar14 = *pbVar17;
          *(byte **)(lVar22 + 0xc0) = pbVar17 + 1;
        }
        else if (*(int *)(lVar22 + 0x30) == 0) {
          bVar14 = 0;
        }
        else {
          read_sdf_internal_ptr(lVar22);
          bVar14 = **(byte **)(lVar22 + 0xc0);
          *(byte **)(lVar22 + 0xc0) = *(byte **)(lVar22 + 0xc0) + 1;
        }
        *puVar21 = (uint)bVar14;
        iVar20 = iVar20 + (uint)bVar14;
        puVar21 = puVar21 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      local_84 = iVar9 + -0x11;
      uVar16 = (ulonglong)(bVar13 & 0xf);
      local_88 = iVar20;
      if (bVar1 == 0) {
        uVar11 = jpeg_segment_internal(param_1 + uVar16 * 0xd2 + 1,local_78);
        if ((int)uVar11 == 0) break;
        lVar18 = 0x408;
      }
      else {
        uVar11 = jpeg_segment_internal(param_1 + uVar16 * 0xd2 + 0x349,local_78);
        if ((int)uVar11 == 0) break;
        lVar18 = 0x1e48;
      }
      lVar19 = (longlong)local_88;
      lVar22 = 0;
      if (0 < lVar19) {
        do {
          lVar3 = *param_1;
          puVar4 = *(undefined1 **)(lVar3 + 0xc0);
          if (puVar4 < *(undefined1 **)(lVar3 + 200)) {
            uVar15 = *puVar4;
            *(undefined1 **)(lVar3 + 0xc0) = puVar4 + 1;
          }
          else if (*(int *)(lVar3 + 0x30) == 0) {
            uVar15 = 0;
          }
          else {
            read_sdf_internal_ptr(lVar3);
            uVar15 = **(undefined1 **)(lVar3 + 0xc0);
            *(undefined1 **)(lVar3 + 0xc0) = *(undefined1 **)(lVar3 + 0xc0) + 1;
          }
          *(undefined1 *)((longlong)param_1 + lVar22 + lVar18 + uVar16 * 0x690) = uVar15;
          lVar22 = lVar22 + 1;
        } while (lVar22 < lVar19);
      }
      iVar9 = 0;
      if (bVar1 != 0) {
        plVar23 = param_1 + uVar16 * 0x80 + 0x6d1;
        pbVar17 = (byte *)(param_1 + uVar16 * 0xd2 + 0x349);
        do {
          bVar13 = *pbVar17;
          *(undefined2 *)plVar23 = 0;
          if (bVar13 != 0xff) {
            bVar1 = *(byte *)((longlong)param_1 + (ulonglong)bVar13 + 0x1e48 + uVar16 * 0x690);
            bVar13 = *(byte *)((longlong)param_1 + (ulonglong)bVar13 + 0x1f48 + uVar16 * 0x690);
            uVar8 = bVar1 & 0xf;
            if (((bVar1 & 0xf) != 0) && ((ushort)(bVar13 + uVar8) < 10)) {
              sVar5 = (sbyte)uVar8;
              iVar20 = (int)(iVar9 << (bVar13 & 0x1f) & 0x1ffU) >> (9U - sVar5 & 0x1f);
              if (iVar20 < 1 << (sVar5 - 1U & 0x1f)) {
                iVar20 = iVar20 + (1 - (1 << sVar5));
              }
              if (iVar20 + 0x80U < 0x100) {
                *(ushort *)plVar23 =
                     ((short)iVar20 * 0x10 + (ushort)(bVar1 >> 4)) * 0x10 + uVar8 + (ushort)bVar13;
              }
            }
          }
          iVar9 = iVar9 + 1;
          pbVar17 = pbVar17 + 1;
          plVar23 = (longlong *)((longlong)plVar23 + 2);
        } while (iVar9 < 0x200);
      }
      iVar9 = local_84 - local_88;
    }
  }
  else if (param_2 == 0xdb) {
    iVar9 = jpeg_segment_internal_fast(*param_1);
    for (iVar9 = iVar9 + -2; 0 < iVar9; iVar9 = iVar9 - iVar20) {
      lVar18 = *param_1;
      pbVar17 = *(byte **)(lVar18 + 0xc0);
      if (pbVar17 < *(byte **)(lVar18 + 200)) {
        uVar16 = (ulonglong)*pbVar17;
        *(byte **)(lVar18 + 0xc0) = pbVar17 + 1;
      }
      else if (*(int *)(lVar18 + 0x30) == 0) {
        uVar16 = 0;
      }
      else {
        read_sdf_internal_ptr(lVar18);
        uVar16 = (ulonglong)**(byte **)(lVar18 + 0xc0);
        *(byte **)(lVar18 + 0xc0) = *(byte **)(lVar18 + 0xc0) + 1;
      }
      uVar10 = (uint)uVar16 & 0xf;
      uVar16 = uVar16 >> 4;
      if (1 < (uint)uVar16) {
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad DQT type";
        break;
      }
      if (3 < uVar10) {
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad DQT table";
        break;
      }
      lVar18 = 0;
      do {
        lVar22 = *param_1;
        if (uVar16 == 0) {
          pbVar17 = *(byte **)(lVar22 + 0xc0);
          if (pbVar17 < *(byte **)(lVar22 + 200)) {
            bVar13 = *pbVar17;
            *(byte **)(lVar22 + 0xc0) = pbVar17 + 1;
          }
          else if (*(int *)(lVar22 + 0x30) == 0) {
            bVar13 = 0;
          }
          else {
            read_sdf_internal_ptr(lVar22);
            bVar13 = **(byte **)(lVar22 + 0xc0);
            *(byte **)(lVar22 + 0xc0) = *(byte **)(lVar22 + 0xc0) + 1;
          }
          uVar8 = (ushort)bVar13;
        }
        else {
          iVar20 = jpeg_segment_internal_fast(lVar22);
          uVar8 = (ushort)iVar20;
        }
        pbVar17 = &DAT_1400220c0 + lVar18;
        lVar18 = lVar18 + 1;
        *(ushort *)
         ((longlong)param_1 + ((ulonglong)*pbVar17 + (ulonglong)uVar10 * 0x40) * 2 + 0x3488) = uVar8
        ;
      } while (lVar18 < 0x40);
      iVar20 = 0x41;
      if (uVar16 != 0) {
        iVar20 = 0x81;
      }
    }
  }
  else if (param_2 == 0xdd) {
    iVar9 = jpeg_segment_internal_fast(*param_1);
    if (iVar9 == 4) {
      iVar9 = jpeg_segment_internal_fast(*param_1);
      *(int *)(param_1 + 0x90d) = iVar9;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad DRI len";
    }
  }
  else if (param_2 == 0xff) {
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "expected marker";
  }
  else if ((param_2 - 0xe0U < 0x10) || (param_2 == 0xfe)) {
    iVar9 = jpeg_segment_internal_fast(*param_1);
    if (iVar9 < 2) {
                    /* WARNING: Load size is inaccurate */
      if (param_2 == 0xfe) {
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad COM len";
      }
      else {
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad APP len";
      }
    }
    else {
      iVar20 = iVar9 + -2;
      if (param_2 == 0xe0) {
        if (4 < iVar20) {
          lVar18 = 0;
          bVar7 = true;
          do {
            lVar22 = *param_1;
            pcVar2 = *(char **)(lVar22 + 0xc0);
            if (pcVar2 < *(char **)(lVar22 + 200)) {
              cVar12 = *pcVar2;
              *(char **)(lVar22 + 0xc0) = pcVar2 + 1;
            }
            else if (*(int *)(lVar22 + 0x30) == 0) {
              cVar12 = '\0';
            }
            else {
              read_sdf_internal_ptr(lVar22);
              cVar12 = **(char **)(lVar22 + 0xc0);
              *(char **)(lVar22 + 0xc0) = *(char **)(lVar22 + 0xc0) + 1;
            }
            bVar6 = false;
            if (cVar12 == (&DAT_1400229d0)[lVar18]) {
              bVar6 = bVar7;
            }
            lVar18 = lVar18 + 1;
            bVar7 = bVar6;
          } while (lVar18 < 5);
          iVar20 = iVar9 + -7;
          if (bVar6) {
            *(undefined4 *)(param_1 + 0x909) = 1;
          }
        }
      }
      else if ((param_2 == 0xee) && (0xb < iVar20)) {
        lVar18 = 0;
        bVar7 = true;
        do {
          lVar22 = *param_1;
          pcVar2 = *(char **)(lVar22 + 0xc0);
          if (pcVar2 < *(char **)(lVar22 + 200)) {
            cVar12 = *pcVar2;
            *(char **)(lVar22 + 0xc0) = pcVar2 + 1;
          }
          else if (*(int *)(lVar22 + 0x30) == 0) {
            cVar12 = '\0';
          }
          else {
            read_sdf_internal_ptr(lVar22);
            cVar12 = **(char **)(lVar22 + 0xc0);
            *(char **)(lVar22 + 0xc0) = *(char **)(lVar22 + 0xc0) + 1;
          }
          bVar6 = false;
          if (cVar12 == (&DAT_140022bf0)[lVar18]) {
            bVar6 = bVar7;
          }
          lVar18 = lVar18 + 1;
          bVar7 = bVar6;
        } while (lVar18 < 6);
        iVar20 = iVar9 + -8;
        if (bVar6) {
          lVar18 = *param_1;
          if (*(ulonglong *)(lVar18 + 0xc0) < *(ulonglong *)(lVar18 + 200)) {
            *(ulonglong *)(lVar18 + 0xc0) = *(ulonglong *)(lVar18 + 0xc0) + 1;
          }
          else if (*(int *)(lVar18 + 0x30) != 0) {
            read_sdf_internal_ptr(lVar18);
            *(longlong *)(lVar18 + 0xc0) = *(longlong *)(lVar18 + 0xc0) + 1;
          }
          jpeg_segment_internal_fast(*param_1);
          jpeg_segment_internal_fast(*param_1);
          lVar18 = *param_1;
          pbVar17 = *(byte **)(lVar18 + 0xc0);
          if (pbVar17 < *(byte **)(lVar18 + 200)) {
            bVar13 = *pbVar17;
            *(byte **)(lVar18 + 0xc0) = pbVar17 + 1;
          }
          else if (*(int *)(lVar18 + 0x30) == 0) {
            bVar13 = 0;
          }
          else {
            read_sdf_internal_ptr(lVar18);
            bVar13 = **(byte **)(lVar18 + 0xc0);
            *(byte **)(lVar18 + 0xc0) = *(byte **)(lVar18 + 0xc0) + 1;
          }
          iVar20 = iVar9 + -0xe;
          *(uint *)((longlong)param_1 + 0x484c) = (uint)bVar13;
        }
      }
      lVar18 = *param_1;
      if (iVar20 != 0) {
        if (iVar20 < 0) {
          *(undefined8 *)(lVar18 + 0xc0) = *(undefined8 *)(lVar18 + 200);
        }
        else if ((*(longlong *)(lVar18 + 0x10) == 0) ||
                (iVar9 = *(int *)(lVar18 + 200) - *(int *)(lVar18 + 0xc0), iVar20 <= iVar9)) {
          *(longlong *)(lVar18 + 0xc0) = *(longlong *)(lVar18 + 0xc0) + (longlong)iVar20;
        }
        else {
          *(undefined8 *)(lVar18 + 0xc0) = *(undefined8 *)(lVar18 + 200);
          (**(code **)(lVar18 + 0x18))(*(undefined8 *)(lVar18 + 0x28),iVar20 - iVar9);
        }
      }
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "unknown marker";
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_a8);
  return;
}







// 展開した DC（低周波）と AC（高周波）データを合成して最終的な SDF マップを作る
// ここで、両者を加算したり反転したりしながら、距離フィールドとして意味を持つデータに組み上げ
undefined8 PackSDFData(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
{
  uint *puVar1;
  ushort *puVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ushort uVar23;
  ushort uVar24;
  
  iVar18 = *(int *)((longlong)param_1 + 0x4834);
  uVar17 = (ulonglong)iVar18;
  if (iVar18 == 0) {
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "can\'t merge dc and ac";
    return 0;
  }
  iVar19 = *(int *)((longlong)param_1 + 0x4844);
  bVar9 = (byte)(int)param_1[0x908];
  if (*(int *)((longlong)param_1 + 0x483c) == 0) {
    if (iVar19 == 0) {
      do {
        iVar18 = *(int *)((longlong)param_1 + 0x4824);
        if (iVar18 < 0x10) {
          loop_sdf_blending(param_1);
          iVar18 = *(int *)((longlong)param_1 + 0x4824);
        }
        uVar12 = *(uint *)(param_1 + 0x904);
        sVar4 = *(short *)(param_4 + (ulonglong)(uVar12 >> 0x17) * 2);
        iVar15 = (int)uVar17;
        if (sVar4 == 0) {
          if (iVar18 < 0x10) {
            loop_sdf_blending(param_1);
            uVar12 = *(uint *)(param_1 + 0x904);
          }
          bVar3 = *(byte *)((ulonglong)(uVar12 >> 0x17) + param_3);
          uVar17 = (ulonglong)bVar3;
          if (bVar3 == 0xff) {
            puVar1 = (uint *)(param_3 + 0x62c);
            iVar18 = 10;
            lVar21 = 10;
            uVar10 = *puVar1;
            while (uVar10 <= uVar12 >> 0x10) {
              iVar18 = iVar18 + 1;
              puVar1 = puVar1 + 1;
              lVar21 = lVar21 + 1;
              uVar10 = *puVar1;
            }
            iVar19 = *(int *)((longlong)param_1 + 0x4824);
            if (iVar18 == 0x11) {
LAB_140003ca4:
              *(int *)((longlong)param_1 + 0x4824) = iVar19 + -0x10;
LAB_140003caa:
                    /* WARNING: Load size is inaccurate */
              *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad huffman code";
              return 0;
            }
            if (iVar19 < iVar18) goto LAB_140003caa;
            iVar19 = iVar19 - iVar18;
            uVar10 = *(uint *)(&DAT_140022210 + lVar21 * 4);
            iVar6 = *(int *)(param_3 + 0x64c + lVar21 * 4);
            uVar11 = uVar12 << ((byte)iVar18 & 0x1f);
            *(uint *)(param_1 + 0x904) = uVar11;
            uVar17 = (ulonglong)(int)((uVar12 >> (0x20 - (byte)iVar18 & 0x1f) & uVar10) + iVar6);
          }
          else {
            bVar3 = *(byte *)(uVar17 + 0x500 + param_3);
            if (*(int *)((longlong)param_1 + 0x4824) < (int)(uint)bVar3) goto LAB_140003caa;
            uVar11 = uVar12 << (bVar3 & 0x1f);
            *(uint *)(param_1 + 0x904) = uVar11;
            iVar19 = *(int *)((longlong)param_1 + 0x4824) - (uint)bVar3;
          }
          *(int *)((longlong)param_1 + 0x4824) = iVar19;
          bVar3 = *(byte *)(uVar17 + 0x400 + param_3);
          bVar8 = bVar3 >> 4;
          uVar12 = bVar3 & 0xf;
          uVar10 = (uint)bVar8;
          if ((bVar3 & 0xf) == 0) {
            if (uVar10 < 0xf) {
              iVar18 = 1 << bVar8;
              *(int *)((longlong)param_1 + 0x4844) = iVar18;
              if (bVar8 != 0) {
                if (iVar19 < (int)(uint)bVar8) {
                  loop_sdf_blending(param_1);
                  iVar19 = *(int *)((longlong)param_1 + 0x4824);
                  iVar18 = *(int *)((longlong)param_1 + 0x4844);
                  uVar11 = *(uint *)(param_1 + 0x904);
                }
                uVar12 = *(uint *)(&DAT_140022210 + (ulonglong)bVar8 * 4);
                *(uint *)((longlong)param_1 + 0x4824) = iVar19 - uVar10;
                uVar10 = uVar11 << bVar8 | uVar11 >> 0x20 - bVar8;
                *(uint *)(param_1 + 0x904) = ~uVar12 & uVar10;
                iVar18 = (uVar12 & uVar10) + iVar18;
              }
              *(int *)((longlong)param_1 + 0x4844) = iVar18 + -1;
              return 1;
            }
            uVar16 = iVar15 + 0x10;
          }
          else {
            uVar16 = iVar15 + uVar10 + 1;
            bVar3 = (&DAT_1400220c0)[(int)(iVar15 + uVar10)];
            if (iVar19 < (int)uVar12) {
              loop_sdf_blending(param_1);
              uVar11 = *(uint *)(param_1 + 0x904);
              iVar19 = *(int *)((longlong)param_1 + 0x4824);
            }
            uVar20 = uVar11 << (sbyte)uVar12 | uVar11 >> 0x20 - (sbyte)uVar12;
            uVar10 = *(uint *)(&DAT_140022210 + (ulonglong)uVar12 * 4);
            uVar7 = *(undefined4 *)(&DAT_140021f60 + (ulonglong)uVar12 * 4);
            *(uint *)((longlong)param_1 + 0x4824) = iVar19 - uVar12;
            *(uint *)(param_1 + 0x904) = ~uVar10 & uVar20;
            *(ushort *)(param_2 + (ulonglong)bVar3 * 2) =
                 ((ushort)uVar7 & ~(ushort)((int)uVar11 >> 0x1f)) +
                 ((ushort)uVar10 & (ushort)uVar20) << (bVar9 & 0x1f);
          }
        }
        else {
          uVar10 = (int)sVar4 & 0xf;
          iVar15 = iVar15 + ((int)sVar4 >> 4 & 0xfU);
          uVar16 = iVar15 + 1;
          *(uint *)(param_1 + 0x904) = uVar12 << (sbyte)uVar10;
          *(uint *)((longlong)param_1 + 0x4824) = iVar18 - uVar10;
          *(short *)(param_2 + (ulonglong)(byte)(&DAT_1400220c0)[iVar15] * 2) =
               (short)(char)((ushort)sVar4 >> 8) << (bVar9 & 0x1f);
        }
        uVar17 = (ulonglong)uVar16;
      } while ((int)uVar16 <= (int)param_1[0x907]);
    }
    else {
      *(int *)((longlong)param_1 + 0x4844) = iVar19 + -1;
    }
  }
  else {
    uVar23 = 1 << (bVar9 & 0x1f);
    uVar22 = uVar17;
    if (iVar19 == 0) {
LAB_140003a41:
      if (*(int *)((longlong)param_1 + 0x4824) < 0x10) {
        loop_sdf_blending(param_1);
      }
      uVar12 = *(uint *)(param_1 + 0x904);
      bVar9 = *(byte *)((ulonglong)(uVar12 >> 0x17) + param_3);
      uVar14 = (ulonglong)bVar9;
      if (bVar9 == 0xff) {
        puVar1 = (uint *)(param_3 + 0x62c);
        iVar18 = 10;
        lVar21 = 10;
        uVar10 = *puVar1;
        while (uVar10 <= uVar12 >> 0x10) {
          iVar18 = iVar18 + 1;
          puVar1 = puVar1 + 1;
          lVar21 = lVar21 + 1;
          uVar10 = *puVar1;
        }
        iVar19 = *(int *)((longlong)param_1 + 0x4824);
        if (iVar18 == 0x11) goto LAB_140003ca4;
        if (iVar19 < iVar18) goto LAB_140003caa;
        bVar9 = (byte)iVar18;
        iVar19 = iVar19 - iVar18;
        uVar14 = (ulonglong)
                 (int)((uVar12 >> (0x20 - bVar9 & 0x1f) & *(uint *)(&DAT_140022210 + lVar21 * 4)) +
                      *(int *)(param_3 + 0x64c + lVar21 * 4));
      }
      else {
        bVar9 = *(byte *)(uVar14 + 0x500 + param_3);
        if (*(int *)((longlong)param_1 + 0x4824) < (int)(uint)bVar9) goto LAB_140003caa;
        iVar19 = *(int *)((longlong)param_1 + 0x4824) - (uint)bVar9;
      }
      uVar12 = uVar12 << (bVar9 & 0x1f);
      *(int *)((longlong)param_1 + 0x4824) = iVar19;
      *(uint *)(param_1 + 0x904) = uVar12;
      bVar9 = *(byte *)(uVar14 + 0x400 + param_3);
      bVar3 = bVar9 >> 4;
      uVar14 = (ulonglong)bVar3;
      uVar24 = bVar9 & 0xf;
      if ((bVar9 & 0xf) == 0) {
        if (bVar3 < 0xf) {
          iVar18 = (1 << bVar3) + -1;
          *(int *)((longlong)param_1 + 0x4844) = iVar18;
          if (bVar3 != 0) {
            if (iVar19 < (int)(uint)bVar3) {
              loop_sdf_blending(param_1);
              iVar19 = *(int *)((longlong)param_1 + 0x4824);
              iVar18 = *(int *)((longlong)param_1 + 0x4844);
              uVar12 = *(uint *)(param_1 + 0x904);
            }
            uVar10 = uVar12 << bVar3 | uVar12 >> 0x20 - bVar3;
            uVar12 = *(uint *)(&DAT_140022210 + uVar14 * 4);
            *(uint *)((longlong)param_1 + 0x4824) = iVar19 - (uint)bVar3;
            *(uint *)(param_1 + 0x904) = ~uVar12 & uVar10;
            *(uint *)((longlong)param_1 + 0x4844) = (uVar12 & uVar10) + iVar18;
          }
          uVar14 = 0x40;
        }
      }
      else {
        if (uVar24 != 1) goto LAB_140003caa;
        if (iVar19 < 1) {
          loop_sdf_blending(param_1);
          iVar19 = *(int *)((longlong)param_1 + 0x4824);
          uVar12 = *(uint *)(param_1 + 0x904);
        }
        *(uint *)(param_1 + 0x904) = uVar12 * 2;
        *(int *)((longlong)param_1 + 0x4824) = iVar19 + -1;
        uVar24 = uVar23;
        if (-1 < (int)uVar12) {
          uVar24 = -uVar23;
        }
      }
      if ((int)param_1[0x907] < (int)uVar17) {
        return 1;
      }
      do {
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar12;
        puVar2 = (ushort *)(param_2 + (ulonglong)(byte)(&DAT_1400220c0)[uVar22] * 2);
        uVar22 = uVar22 + 1;
        if (*puVar2 == 0) {
          if ((int)uVar14 == 0) goto LAB_140003c82;
          uVar14 = (ulonglong)((int)uVar14 - 1);
        }
        else {
          iVar18 = *(int *)((longlong)param_1 + 0x4824);
          if (iVar18 < 1) {
            loop_sdf_blending(param_1);
            iVar18 = *(int *)((longlong)param_1 + 0x4824);
          }
          lVar21 = param_1[0x904];
          *(int *)(param_1 + 0x904) = (int)lVar21 * 2;
          *(int *)((longlong)param_1 + 0x4824) = iVar18 + -1;
          if (((int)lVar21 < 0) && (uVar5 = *puVar2, (uVar23 & uVar5) == 0)) {
            if ((short)uVar5 < 1) {
              *puVar2 = uVar5 - uVar23;
            }
            else {
              *puVar2 = uVar5 + uVar23;
            }
          }
        }
        if ((int)param_1[0x907] < (int)uVar12) {
          return 1;
        }
      } while( true );
    }
    *(int *)((longlong)param_1 + 0x4844) = iVar19 + -1;
    if (iVar18 <= (int)param_1[0x907]) {
      pbVar13 = &DAT_1400220c0 + uVar17;
      do {
        puVar2 = (ushort *)(param_2 + (ulonglong)*pbVar13 * 2);
        if (*(short *)(param_2 + (ulonglong)*pbVar13 * 2) != 0) {
          iVar18 = *(int *)((longlong)param_1 + 0x4824);
          if (iVar18 < 1) {
            loop_sdf_blending(param_1);
            iVar18 = *(int *)((longlong)param_1 + 0x4824);
          }
          lVar21 = param_1[0x904];
          *(int *)(param_1 + 0x904) = (int)lVar21 * 2;
          *(int *)((longlong)param_1 + 0x4824) = iVar18 + -1;
          if (((int)lVar21 < 0) && (uVar24 = *puVar2, (uVar23 & uVar24) == 0)) {
            uVar5 = uVar23;
            if ((short)uVar24 < 1) {
              uVar5 = -uVar23;
            }
            *puVar2 = uVar24 + uVar5;
          }
        }
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar12;
        pbVar13 = pbVar13 + 1;
      } while ((int)uVar12 <= (int)param_1[0x907]);
    }
  }
  return 1;
LAB_140003c82:
  *puVar2 = uVar24;
  if ((int)param_1[0x907] < (int)uVar12) {
    return 1;
  }
  goto LAB_140003a41;
}



void loop_sdf_blending(longlong *param_1)
{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  do {
    if (*(int *)((longlong)param_1 + 0x482c) == 0) {
      lVar2 = *param_1;
      pbVar3 = *(byte **)(lVar2 + 0xc0);
      if (pbVar3 < *(byte **)(lVar2 + 200)) {
        bVar5 = *pbVar3;
        *(byte **)(lVar2 + 0xc0) = pbVar3 + 1;
      }
      else if (*(int *)(lVar2 + 0x30) == 0) {
        bVar5 = 0;
      }
      else {
        read_sdf_internal_ptr(lVar2);
        bVar5 = **(byte **)(lVar2 + 0xc0);
        *(byte **)(lVar2 + 0xc0) = *(byte **)(lVar2 + 0xc0) + 1;
      }
      uVar7 = (uint)bVar5;
      if (bVar5 == 0xff) {
        lVar2 = *param_1;
        pcVar4 = *(char **)(lVar2 + 0xc0);
        if (pcVar4 < *(char **)(lVar2 + 200)) {
          cVar6 = *pcVar4;
          *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          cVar6 = '\0';
        }
        else {
          read_sdf_internal_ptr(lVar2);
          cVar6 = **(char **)(lVar2 + 0xc0);
          *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
        }
        while (cVar6 == -1) {
          lVar2 = *param_1;
          pcVar4 = *(char **)(lVar2 + 0xc0);
          if (pcVar4 < *(char **)(lVar2 + 200)) {
            cVar6 = *pcVar4;
            *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
          }
          else if (*(int *)(lVar2 + 0x30) == 0) {
            cVar6 = '\0';
          }
          else {
            read_sdf_internal_ptr(lVar2);
            cVar6 = **(char **)(lVar2 + 0xc0);
            *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
          }
        }
        if (cVar6 != '\0') {
          *(char *)(param_1 + 0x905) = cVar6;
          *(undefined4 *)((longlong)param_1 + 0x482c) = 1;
          return;
        }
      }
    }
    else {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x904) =
         *(uint *)(param_1 + 0x904) |
         uVar7 << (0x18U - (char)*(int *)((longlong)param_1 + 0x4824) & 0x1f);
    iVar1 = *(int *)((longlong)param_1 + 0x4824) + 8;
    *(int *)((longlong)param_1 + 0x4824) = iVar1;
    if (0x18 < iVar1) {
      return;
    }
  } while( true );
}







//
// まず埋め込まれた SDF テクスチャ（DC／AC 部分）をメモリに展開し、各テクスチャの生データを読み出し
// この段階で UnZipSDF を呼び出して DEFLATE 圧縮を解除し、距離フィールドデータを取得
//
void * ReadSDF_Textures(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  void *_Memory;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uStack0000000000000030;
  uint local_4e8;
  int local_4e4;
  int local_4e0;
  int local_4dc;
  int local_4d4;
  int local_4c0;
  int local_4bc;
  longlong local_4b0;
  int local_488;
  int local_484;
  int local_480;
  uint local_47c;
  uint local_478;
  uint local_474;
  uint local_470;
  uint local_46c;
  int local_468;
  ulonglong local_460;
  ulonglong local_458;
  ulonglong local_450;
  ulonglong local_448;
  undefined1 auStack_438 [1024];
  
  local_46c = 0xff;
  local_4dc = 0;
  lVar4 = read_sdf_internal((int *)param_1,&local_488);
  if (lVar4 == 0) {
    return (void *)0x0;
  }
  uVar13 = param_1[1];
  uVar2 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
  param_1[1] = uVar2;
  if ((uVar2 < 0x1000001) && (*param_1 < 0x1000001)) {
    uStack0000000000000030 = local_46c;
    if (local_480 == 0xc) {
      if (0x17 < local_488) goto LAB_14000bdb6;
      local_4dc = ((local_484 - local_468) + -0x18) / 3;
LAB_14000bdac:
      if (local_4dc == 0) goto LAB_14000bdb6;
    }
    else {
      if (local_488 < 0x10) {
        local_4dc = (local_484 - local_468) - local_480 >> 2;
        goto LAB_14000bdac;
      }
LAB_14000bdb6:
      if ((longlong)local_484 !=
          (((longlong)(int)param_1[0x2e] + *(longlong *)(param_1 + 0x30)) - (longlong)param_1) +
          -0x38) {
                    /* WARNING: Load size is inaccurate */
        lVar4 = *ThreadLocalStoragePointer;
        pcVar5 = "bad offset";
        goto LAB_14000cc50;
      }
    }
    if ((local_488 == 0x18) && (local_470 == 0xff000000)) {
      local_4e8 = 3;
    }
    else {
      local_4e8 = (local_470 != 0) + 3;
    }
    param_1[2] = local_4e8;
    uVar2 = *param_1;
    uVar15 = param_1[1];
    if (2 < (int)param_5) {
      local_4e8 = param_5;
    }
    if ((((-1 < (int)uVar2) &&
         (((uVar2 == 0 || ((int)local_4e8 <= (int)(0x7fffffff / (longlong)(int)uVar2))) &&
          (iVar12 = uVar2 * local_4e8, -1 < iVar12)))) && (-1 < (int)uVar15)) &&
       ((uVar15 == 0 || (iVar12 <= (int)(0x7fffffff / (longlong)(int)uVar15))))) {
      if ((((uVar2 != 0) && ((int)(0x7fffffff / (longlong)(int)uVar2) < (int)local_4e8)) ||
          ((uVar15 != 0 && ((int)(0x7fffffff / (longlong)(int)uVar15) < iVar12)))) ||
         (_Memory = malloc((longlong)(int)(local_4e8 * uVar2 * uVar15)), _Memory == (void *)0x0)) {
                    /* WARNING: Load size is inaccurate */
        lVar4 = *ThreadLocalStoragePointer;
        pcVar5 = "outofmem";
        goto LAB_14000cc50;
      }
      if (local_488 < 0x10) {
        uVar16 = 0;
        if ((local_4dc == 0) || (0x100 < local_4dc)) {
          free(_Memory);
                    /* WARNING: Load size is inaccurate */
          lVar4 = *ThreadLocalStoragePointer;
          pcVar5 = "invalid";
          goto LAB_14000cc50;
        }
        if (0 < local_4dc) {
          puVar7 = *(undefined1 **)(param_1 + 0x30);
          lVar4 = 0;
          do {
            puVar22 = *(undefined1 **)(param_1 + 0x32);
            if (puVar7 < puVar22) {
LAB_14000bf37:
              puVar6 = puVar7 + 1;
              auStack_438[lVar4 * 4 + 2] = *puVar7;
              *(undefined1 **)(param_1 + 0x30) = puVar6;
              puVar7 = puVar6;
              if (puVar22 <= puVar6) goto LAB_14000bf6b;
LAB_14000bf86:
              uVar10 = *puVar6;
              puVar7 = puVar6 + 1;
              *(undefined1 **)(param_1 + 0x30) = puVar7;
              auStack_438[lVar4 * 4 + 1] = uVar10;
              if (puVar22 <= puVar7) goto LAB_14000bfb1;
              uVar10 = *puVar7;
              puVar7 = puVar6 + 2;
              *(undefined1 **)(param_1 + 0x30) = puVar7;
            }
            else {
              if (param_1[0xc] != 0) {
                read_sdf_internal_ptr((longlong)param_1);
                puVar7 = *(undefined1 **)(param_1 + 0x30);
                puVar22 = *(undefined1 **)(param_1 + 0x32);
                goto LAB_14000bf37;
              }
              auStack_438[lVar4 * 4 + 2] = 0;
LAB_14000bf6b:
              if (param_1[0xc] != 0) {
                read_sdf_internal_ptr((longlong)param_1);
                puVar6 = *(undefined1 **)(param_1 + 0x30);
                puVar22 = *(undefined1 **)(param_1 + 0x32);
                goto LAB_14000bf86;
              }
              auStack_438[lVar4 * 4 + 1] = 0;
LAB_14000bfb1:
              if (param_1[0xc] == 0) {
                uVar10 = 0;
              }
              else {
                read_sdf_internal_ptr((longlong)param_1);
                uVar10 = **(undefined1 **)(param_1 + 0x30);
                puVar7 = *(undefined1 **)(param_1 + 0x30) + 1;
                *(undefined1 **)(param_1 + 0x30) = puVar7;
              }
            }
            lVar21 = lVar4 * 4;
            auStack_438[lVar21] = uVar10;
            if (local_480 != 0xc) {
              if (puVar7 < *(undefined1 **)(param_1 + 0x32)) {
                puVar7 = puVar7 + 1;
                *(undefined1 **)(param_1 + 0x30) = puVar7;
              }
              else if (param_1[0xc] != 0) {
                read_sdf_internal_ptr((longlong)param_1);
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
                puVar7 = *(undefined1 **)(param_1 + 0x30);
              }
            }
            lVar4 = lVar4 + 1;
            auStack_438[lVar21 + 3] = 0xff;
          } while (lVar4 < local_4dc);
        }
        local_480 = ((local_484 - ((local_480 != 0xc) + 3) * local_4dc) - local_468) - local_480;
        if (local_480 != 0) {
          if (local_480 < 0) {
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
          }
          else if ((*(longlong *)(param_1 + 4) == 0) ||
                  (uVar2 = param_1[0x30], local_480 <= (int)(param_1[0x32] - uVar2))) {
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (longlong)local_480;
          }
          else {
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
            (**(code **)(param_1 + 6))
                      (*(undefined8 *)(param_1 + 10),local_480 - (param_1[0x32] - uVar2));
          }
        }
        if (local_488 == 1) {
          uVar2 = *param_1 + 7 >> 3;
        }
        else if (local_488 == 4) {
          uVar2 = *param_1 + 1 >> 1;
        }
        else {
          if (local_488 != 8) {
            free(_Memory);
                    /* WARNING: Load size is inaccurate */
            lVar4 = *ThreadLocalStoragePointer;
            pcVar5 = "bad bpp";
            goto LAB_14000cc50;
          }
          uVar2 = *param_1;
        }
        uVar3 = param_1[1];
        uVar2 = -uVar2 & 3;
        if (local_488 == 1) {
          local_4e0 = 0;
          if (0 < (int)uVar3) {
            do {
              pbVar19 = *(byte **)(param_1 + 0x30);
              iVar12 = 7;
              if (pbVar19 < *(byte **)(param_1 + 0x32)) {
                bVar11 = *pbVar19;
                *(byte **)(param_1 + 0x30) = pbVar19 + 1;
              }
              else if (param_1[0xc] == 0) {
                bVar11 = 0;
              }
              else {
                read_sdf_internal_ptr((longlong)param_1);
                bVar11 = **(byte **)(param_1 + 0x30);
                *(byte **)(param_1 + 0x30) = *(byte **)(param_1 + 0x30) + 1;
              }
              uVar15 = *param_1;
              uVar23 = 0;
              uVar3 = (uint)bVar11;
              uVar14 = uVar16;
              if (0 < (int)uVar15) {
                do {
                  lVar4 = (ulonglong)((int)uVar3 >> ((byte)iVar12 & 0x1f) & 1) * 4;
                  *(undefined1 *)(uVar14 + (longlong)_Memory) = auStack_438[lVar4];
                  *(undefined1 *)(uVar14 + 1 + (longlong)_Memory) = auStack_438[lVar4 + 1];
                  *(undefined1 *)(uVar14 + 2 + (longlong)_Memory) = auStack_438[lVar4 + 2];
                  uVar16 = uVar14 + 3;
                  if (local_4e8 == 4) {
                    *(undefined1 *)(uVar16 + (longlong)_Memory) = 0xff;
                    uVar16 = uVar14 + 4;
                  }
                  uVar23 = uVar23 + 1;
                  if (uVar23 == uVar15) break;
                  iVar12 = iVar12 + -1;
                  if (iVar12 < 0) {
                    pbVar19 = *(byte **)(param_1 + 0x30);
                    iVar12 = 7;
                    if (pbVar19 < *(byte **)(param_1 + 0x32)) {
                      bVar11 = *pbVar19;
                      *(byte **)(param_1 + 0x30) = pbVar19 + 1;
                    }
                    else if (param_1[0xc] == 0) {
                      bVar11 = 0;
                    }
                    else {
                      read_sdf_internal_ptr((longlong)param_1);
                      bVar11 = **(byte **)(param_1 + 0x30);
                      *(byte **)(param_1 + 0x30) = *(byte **)(param_1 + 0x30) + 1;
                    }
                    uVar3 = (uint)bVar11;
                  }
                  uVar15 = *param_1;
                  uVar14 = uVar16;
                } while ((int)uVar23 < (int)uVar15);
              }
              if (uVar2 != 0) {
                if ((*(longlong *)(param_1 + 4) == 0) ||
                   (uVar15 = param_1[0x30], (int)uVar2 <= (int)(param_1[0x32] - uVar15))) {
                  *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)uVar2;
                }
                else {
                  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
                  (**(code **)(param_1 + 6))
                            (*(undefined8 *)(param_1 + 10),uVar2 - (param_1[0x32] - uVar15));
                }
              }
              uVar3 = param_1[1];
              local_4e0 = local_4e0 + 1;
            } while (local_4e0 < (int)uVar3);
          }
        }
        else {
          local_4e4 = 0;
          if (0 < (int)uVar3) {
            do {
              iVar12 = 0;
              if (0 < (int)*param_1) {
                do {
                  pbVar19 = *(byte **)(param_1 + 0x30);
                  if (pbVar19 < *(byte **)(param_1 + 0x32)) {
                    bVar11 = *pbVar19;
                    pbVar19 = pbVar19 + 1;
                    *(byte **)(param_1 + 0x30) = pbVar19;
                  }
                  else if (param_1[0xc] == 0) {
                    bVar11 = 0;
                  }
                  else {
                    read_sdf_internal_ptr((longlong)param_1);
                    bVar11 = **(byte **)(param_1 + 0x30);
                    pbVar19 = *(byte **)(param_1 + 0x30) + 1;
                    *(byte **)(param_1 + 0x30) = pbVar19;
                  }
                  uVar14 = 0;
                  if (local_488 == 4) {
                    uVar14 = (ulonglong)(bVar11 & 0xf);
                    bVar11 = bVar11 >> 4;
                  }
                  iVar18 = (int)uVar16;
                  lVar4 = (ulonglong)bVar11 * 4;
                  *(undefined1 *)((longlong)iVar18 + (longlong)_Memory) = auStack_438[lVar4];
                  *(undefined1 *)((longlong)(iVar18 + 1) + (longlong)_Memory) =
                       auStack_438[lVar4 + 1];
                  uVar15 = iVar18 + 3;
                  *(undefined1 *)((longlong)(iVar18 + 2) + (longlong)_Memory) =
                       auStack_438[lVar4 + 2];
                  if (local_4e8 == 4) {
                    lVar4 = (longlong)(int)uVar15;
                    uVar15 = iVar18 + 4;
                    *(undefined1 *)(lVar4 + (longlong)_Memory) = 0xff;
                  }
                  uVar16 = (ulonglong)uVar15;
                  uVar3 = *param_1;
                  if (iVar12 + 1U == uVar3) break;
                  if (local_488 == 8) {
                    if (pbVar19 < *(byte **)(param_1 + 0x32)) {
                      bVar11 = *pbVar19;
                      *(byte **)(param_1 + 0x30) = pbVar19 + 1;
                    }
                    else if (param_1[0xc] == 0) {
                      bVar11 = 0;
                    }
                    else {
                      read_sdf_internal_ptr((longlong)param_1);
                      bVar11 = **(byte **)(param_1 + 0x30);
                      *(byte **)(param_1 + 0x30) = *(byte **)(param_1 + 0x30) + 1;
                      uVar3 = *param_1;
                    }
                    uVar14 = (ulonglong)bVar11;
                  }
                  lVar4 = uVar14 * 4;
                  *(undefined1 *)((longlong)(int)uVar15 + (longlong)_Memory) = auStack_438[lVar4];
                  *(undefined1 *)((longlong)(int)(uVar15 + 1) + (longlong)_Memory) =
                       auStack_438[lVar4 + 1];
                  uVar23 = uVar15 + 3;
                  *(undefined1 *)((longlong)(int)(uVar15 + 2) + (longlong)_Memory) =
                       auStack_438[lVar4 + 2];
                  if (local_4e8 == 4) {
                    lVar4 = (longlong)(int)uVar23;
                    uVar23 = uVar15 + 4;
                    *(undefined1 *)(lVar4 + (longlong)_Memory) = 0xff;
                  }
                  uVar16 = (ulonglong)uVar23;
                  iVar12 = iVar12 + 2;
                } while (iVar12 < (int)uVar3);
              }
              if (uVar2 != 0) {
                if ((*(longlong *)(param_1 + 4) == 0) ||
                   (uVar15 = param_1[0x30], (int)uVar2 <= (int)(param_1[0x32] - uVar15))) {
                  *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)uVar2;
                }
                else {
                  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
                  (**(code **)(param_1 + 6))
                            (*(undefined8 *)(param_1 + 10),uVar2 - (param_1[0x32] - uVar15));
                }
              }
              uVar3 = param_1[1];
              local_4e4 = local_4e4 + 1;
            } while (local_4e4 < (int)uVar3);
          }
        }
        goto LAB_14000cb0c;
      }
      local_4dc = 0;
      local_4c0 = 0;
      local_4bc = 0;
      uVar16 = 0;
      local_4e0 = 0;
      iVar12 = 0;
      local_480 = (local_484 - local_468) - local_480;
      if (local_480 != 0) {
        if (local_480 < 0) {
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
        }
        else if ((*(longlong *)(param_1 + 4) == 0) ||
                (uVar2 = param_1[0x30], local_480 <= (int)(param_1[0x32] - uVar2))) {
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (longlong)local_480;
        }
        else {
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
          (**(code **)(param_1 + 6))
                    (*(undefined8 *)(param_1 + 10),local_480 - (param_1[0x32] - uVar2));
        }
      }
      uVar20 = 0;
      uVar14 = 0;
      uVar2 = 0;
      if (local_488 == 0x18) {
        iVar18 = *param_1 * 3;
      }
      else if (local_488 == 0x10) {
        iVar18 = *param_1 * 2;
      }
      else {
        iVar18 = 0;
      }
      uVar15 = -iVar18 & 3;
      if (local_488 == 0x18) {
        lVar4 = 1;
        local_4b0 = 1;
LAB_14000c751:
        uVar3 = param_1[1];
        local_4d4 = 0;
        if (0 < (int)uVar3) {
          local_460 = uVar20 & 0xffffffff;
          local_458 = (ulonglong)uVar2;
          local_450 = uVar16;
          local_448 = uVar14;
          do {
            if (lVar4 == 0) {
              lVar4 = local_4b0;
              if (0 < (int)*param_1) {
                iVar18 = 0;
                puVar7 = (undefined1 *)((longlong)iVar12 + (longlong)_Memory);
                do {
                  uVar3 = read_sdf_deep((longlong)param_1);
                  if (local_488 != 0x10) {
                    uVar23 = read_sdf_deep((longlong)param_1);
                    uVar3 = uVar23 * 0x10000 + uVar3;
                  }
                  uVar23 = (uVar3 & local_47c) << (-(byte)local_4dc & 0x1f);
                  if (-1 < local_4dc) {
                    uVar23 = (uVar3 & local_47c) >> ((byte)local_4dc & 0x1f);
                  }
                  *puVar7 = (char)((int)((uVar23 >> (8U - (char)uVar20 & 0x1f)) *
                                        *(int *)(&DAT_1400223f0 + local_460 * 4)) >>
                                  ((byte)*(undefined4 *)(&DAT_140022c28 + local_460 * 4) & 0x1f));
                  uVar23 = (uVar3 & local_478) << (-(byte)local_4c0 & 0x1f);
                  if (-1 < local_4c0) {
                    uVar23 = (uVar3 & local_478) >> ((byte)local_4c0 & 0x1f);
                  }
                  puVar7[1] = (char)((int)((uVar23 >> (8U - (char)uVar2 & 0x1f)) *
                                          *(int *)(&DAT_1400223f0 + local_458 * 4)) >>
                                    ((byte)*(undefined4 *)(&DAT_140022c28 + local_458 * 4) & 0x1f));
                  uVar23 = (uVar3 & local_474) << (-(byte)local_4bc & 0x1f);
                  if (-1 < local_4bc) {
                    uVar23 = (uVar3 & local_474) >> ((byte)local_4bc & 0x1f);
                  }
                  puVar7[2] = (char)((int)((uVar23 >> (8U - (char)uVar16 & 0x1f)) *
                                          *(int *)(&DAT_1400223f0 + local_450 * 4)) >>
                                    ((byte)*(undefined4 *)(&DAT_140022c28 + local_450 * 4) & 0x1f));
                  puVar22 = puVar7 + 3;
                  if (local_470 == 0) {
                    uVar3 = 0xff;
                  }
                  else {
                    uVar23 = (uVar3 & local_470) << (-(byte)local_4e0 & 0x1f);
                    if (-1 < local_4e0) {
                      uVar23 = (uVar3 & local_470) >> ((byte)local_4e0 & 0x1f);
                    }
                    uVar3 = (int)((uVar23 >> (8U - (char)uVar14 & 0x1f)) *
                                 *(int *)(&DAT_1400223f0 + local_448 * 4)) >>
                            ((byte)*(undefined4 *)(&DAT_140022c28 + local_448 * 4) & 0x1f);
                  }
                  uStack0000000000000030 = uStack0000000000000030 | uVar3;
                  iVar1 = iVar12 + 3;
                  if (local_4e8 == 4) {
                    *puVar22 = (char)uVar3;
                    puVar22 = puVar7 + 4;
                    iVar1 = iVar12 + 4;
                  }
                  iVar12 = iVar1;
                  iVar18 = iVar18 + 1;
                  puVar7 = puVar22;
                } while (iVar18 < (int)*param_1);
              }
            }
            else {
              iVar18 = 0;
              if (0 < (int)*param_1) {
                pbVar19 = (byte *)((longlong)iVar12 + (longlong)_Memory);
                do {
                  pbVar17 = *(byte **)(param_1 + 0x32);
                  pbVar9 = *(byte **)(param_1 + 0x30);
                  if (pbVar9 < pbVar17) {
LAB_14000c81f:
                    bVar11 = *pbVar9;
                    pbVar8 = pbVar9 + 1;
                    *(byte **)(param_1 + 0x30) = pbVar8;
                    pbVar19[2] = bVar11;
                    pbVar9 = pbVar8;
                    if (pbVar17 <= pbVar8) goto LAB_14000c83a;
LAB_14000c856:
                    bVar11 = *pbVar8;
                    pbVar9 = pbVar8 + 1;
                    *(byte **)(param_1 + 0x30) = pbVar9;
                    pbVar19[1] = bVar11;
                    if (pbVar17 <= pbVar9) goto LAB_14000c87e;
                    bVar11 = *pbVar9;
                    pbVar9 = pbVar8 + 2;
                    *(byte **)(param_1 + 0x30) = pbVar9;
                  }
                  else {
                    if (param_1[0xc] != 0) {
                      read_sdf_internal_ptr((longlong)param_1);
                      pbVar9 = *(byte **)(param_1 + 0x30);
                      pbVar17 = *(byte **)(param_1 + 0x32);
                      goto LAB_14000c81f;
                    }
                    pbVar19[2] = 0;
LAB_14000c83a:
                    if (param_1[0xc] != 0) {
                      read_sdf_internal_ptr((longlong)param_1);
                      pbVar8 = *(byte **)(param_1 + 0x30);
                      pbVar17 = *(byte **)(param_1 + 0x32);
                      goto LAB_14000c856;
                    }
                    pbVar19[1] = 0;
LAB_14000c87e:
                    if (param_1[0xc] == 0) {
                      bVar11 = 0;
                    }
                    else {
                      read_sdf_internal_ptr((longlong)param_1);
                      bVar11 = **(byte **)(param_1 + 0x30);
                      pbVar9 = *(byte **)(param_1 + 0x30) + 1;
                      *(byte **)(param_1 + 0x30) = pbVar9;
                    }
                  }
                  *pbVar19 = bVar11;
                  pbVar17 = pbVar19 + 3;
                  if (lVar4 == 2) {
                    if (pbVar9 < *(byte **)(param_1 + 0x32)) {
                      bVar11 = *pbVar9;
                      *(byte **)(param_1 + 0x30) = pbVar9 + 1;
                    }
                    else if (param_1[0xc] == 0) {
                      bVar11 = 0;
                    }
                    else {
                      read_sdf_internal_ptr((longlong)param_1);
                      bVar11 = **(byte **)(param_1 + 0x30);
                      *(byte **)(param_1 + 0x30) = *(byte **)(param_1 + 0x30) + 1;
                    }
                  }
                  else {
                    bVar11 = 0xff;
                  }
                  uStack0000000000000030 = uStack0000000000000030 | bVar11;
                  iVar1 = iVar12 + 3;
                  if (local_4e8 == 4) {
                    *pbVar17 = bVar11;
                    pbVar17 = pbVar19 + 4;
                    iVar1 = iVar12 + 4;
                  }
                  iVar12 = iVar1;
                  iVar18 = iVar18 + 1;
                  pbVar19 = pbVar17;
                } while (iVar18 < (int)*param_1);
              }
            }
            if (uVar15 != 0) {
              if ((*(longlong *)(param_1 + 4) == 0) ||
                 (uVar3 = param_1[0x30], (int)uVar15 <= (int)(param_1[0x32] - uVar3))) {
                *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)uVar15;
              }
              else {
                *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x32);
                (**(code **)(param_1 + 6))
                          (*(undefined8 *)(param_1 + 10),uVar15 - (param_1[0x32] - uVar3));
              }
            }
            uVar3 = param_1[1];
            local_4d4 = local_4d4 + 1;
          } while (local_4d4 < (int)uVar3);
        }
LAB_14000cb0c:
        if (((local_4e8 == 4) && (uStack0000000000000030 == 0)) &&
           (iVar12 = uVar3 * *param_1 * 4 + -1, lVar4 = (longlong)iVar12, -1 < iVar12)) {
          do {
            *(undefined1 *)(lVar4 + (longlong)_Memory) = 0xff;
            lVar4 = lVar4 + -4;
          } while (-1 < lVar4);
        }
        if (0 < (int)uVar13) {
          uVar13 = param_1[1];
          iVar12 = 0;
          if (0 < (int)(uVar13 & 0xfffffffe)) {
            do {
              uVar2 = *param_1;
              iVar18 = 0;
              uVar16 = (ulonglong)(((uVar13 - iVar12) + -1) * uVar2 * local_4e8);
              puVar7 = (undefined1 *)(uVar16 + (longlong)_Memory);
              if (0 < (int)(uVar2 * local_4e8)) {
                lVar4 = uVar2 * iVar12 * local_4e8 - uVar16;
                do {
                  iVar18 = iVar18 + 1;
                  uVar10 = puVar7[lVar4];
                  puVar7[lVar4] = *puVar7;
                  *puVar7 = uVar10;
                  puVar7 = puVar7 + 1;
                } while (iVar18 < (int)(*param_1 * local_4e8));
              }
              uVar13 = param_1[1];
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)uVar13 >> 1);
          }
        }
        if (((param_5 != 0) && (param_5 != local_4e8)) &&
           (_Memory = read_sdf_texture_mem(_Memory,local_4e8,param_5,*param_1,param_1[1]),
           _Memory == (void *)0x0)) {
          return (void *)0x0;
        }
        *param_2 = *param_1;
        *param_3 = param_1[1];
        if (param_4 != (uint *)0x0) {
          *param_4 = param_1[2];
          return _Memory;
        }
        return _Memory;
      }
      if ((((local_488 == 0x20) && (local_474 == 0xff)) && (local_478 == 0xff00)) &&
         (local_47c == 0xff0000)) {
        if (local_470 == 0xff000000) {
          lVar4 = 2;
          local_4b0 = 2;
          goto LAB_14000c751;
        }
LAB_14000c5c0:
        uVar14 = (ulonglong)local_474;
        uVar16 = (ulonglong)local_47c;
        local_4dc = read_sdf_texture_step(local_47c);
        local_4dc = local_4dc + -7;
        uVar2 = ((uint)(uVar16 >> 1) & 0x55555555) + ((uint)uVar16 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = (uVar2 >> 4) + uVar2 & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        uVar20 = (ulonglong)((uVar2 >> 0x10) + uVar2 & 0xff);
        local_4c0 = read_sdf_texture_step(local_478);
        local_4c0 = local_4c0 + -7;
        uVar2 = (local_478 >> 1 & 0x55555555) + (local_478 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = (uVar2 >> 4) + uVar2 & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        uVar2 = (uVar2 >> 0x10) + uVar2 & 0xff;
        local_4bc = read_sdf_texture_step((uint)uVar14);
        local_4bc = local_4bc + -7;
        uVar3 = ((uint)(uVar14 >> 1) & 0x55555555) + ((uint)uVar14 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = (uVar3 >> 4) + uVar3 & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        uVar23 = (uVar3 >> 0x10) + uVar3 & 0xff;
        uVar16 = (ulonglong)uVar23;
        local_4e0 = read_sdf_texture_step(local_470);
        local_4e0 = local_4e0 + -7;
        uVar3 = (local_470 >> 1 & 0x55555555) + (local_470 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = (uVar3 >> 4) + uVar3 & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        uVar3 = (uVar3 >> 0x10) + uVar3 & 0xff;
        uVar14 = (ulonglong)uVar3;
        if ((((uint)uVar20 < 9) && (uVar2 < 9)) && (uVar23 < 9)) {
          lVar4 = 0;
          local_4b0 = 0;
          if (uVar3 < 9) goto LAB_14000c751;
        }
      }
      else if (((local_47c != 0) && (local_478 != 0)) && (local_474 != 0)) goto LAB_14000c5c0;
      free(_Memory);
                    /* WARNING: Load size is inaccurate */
      lVar4 = *ThreadLocalStoragePointer;
      pcVar5 = "bad masks";
      goto LAB_14000cc50;
    }
  }
                    /* WARNING: Load size is inaccurate */
  lVar4 = *ThreadLocalStoragePointer;
  pcVar5 = "too large";
LAB_14000cc50:
  *(char **)(lVar4 + 0x10) = pcVar5;
  return (void *)0x0;
}



undefined8 read_sdf_internal(int *param_1,int *param_2)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  pcVar5 = *(char **)(param_1 + 0x30);
  if (*(char **)(param_1 + 0x32) <= pcVar5) {
    if (param_1[0xc] == 0) goto read_sdf_internal_fast_call;
    read_sdf_internal_ptr((longlong)param_1);
    pcVar5 = *(char **)(param_1 + 0x30);
  }
  cVar1 = *pcVar5;
  pcVar5 = pcVar5 + 1;
  *(char **)(param_1 + 0x30) = pcVar5;
  if (cVar1 != 'B') {
read_sdf_internal_fast_call:
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "not BMP";
    return 0;
  }
  if (*(char **)(param_1 + 0x32) <= pcVar5) {
    if (param_1[0xc] == 0) goto read_sdf_internal_fast_call;
    read_sdf_internal_ptr((longlong)param_1);
    pcVar5 = *(char **)(param_1 + 0x30);
  }
  cVar1 = *pcVar5;
  *(char **)(param_1 + 0x30) = pcVar5 + 1;
  if (cVar1 != 'M') goto read_sdf_internal_fast_call;
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  uVar2 = read_sdf_deep((longlong)param_1);
  uVar3 = read_sdf_deep((longlong)param_1);
  param_2[1] = uVar3 * 0x10000 + uVar2;
  uVar2 = read_sdf_deep((longlong)param_1);
  uVar3 = read_sdf_deep((longlong)param_1);
  param_2[8] = 0xe;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar2 = uVar3 * 0x10000 + uVar2;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = uVar2;
  if (param_2[1] < 0) {
LAB_14000b962:
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad BMP";
    uVar6 = return_null_fast();
    return uVar6;
  }
  if ((((0x38 < uVar2) || ((0x100010000001000U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) &&
      (uVar2 != 0x6c)) && (uVar2 != 0x7c)) {
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "unknown BMP";
    uVar6 = return_null_fast();
    return uVar6;
  }
  uVar3 = read_sdf_deep((longlong)param_1);
  if (uVar2 == 0xc) {
    *param_1 = uVar3;
    uVar4 = read_sdf_deep((longlong)param_1);
  }
  else {
    uVar4 = read_sdf_deep((longlong)param_1);
    *param_1 = uVar4 * 0x10000 + uVar3;
    uVar4 = read_sdf_deep((longlong)param_1);
    uVar3 = read_sdf_deep((longlong)param_1);
    uVar4 = uVar3 * 0x10000 + uVar4;
  }
  param_1[1] = uVar4;
  uVar3 = read_sdf_deep((longlong)param_1);
  if (uVar3 != 1) goto LAB_14000b962;
  uVar3 = read_sdf_deep((longlong)param_1);
  *param_2 = uVar3;
  if (uVar2 == 0xc) {
    return 1;
  }
  uVar3 = read_sdf_deep((longlong)param_1);
  uVar4 = read_sdf_deep((longlong)param_1);
  iVar8 = uVar4 * 0x10000 + uVar3;
  if (iVar8 - 1U < 2) {
                    /* WARNING: Load size is inaccurate */
    lVar7 = *ThreadLocalStoragePointer;
    pcVar5 = "BMP RLE";
    goto LAB_14000bc41;
  }
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  read_sdf_deep((longlong)param_1);
  if (uVar2 == 0x28) {
LAB_14000bb58:
    if ((*param_2 - 0x10U & 0xffffffef) != 0) {
      return 1;
    }
    if (iVar8 == 0) {
      if (*param_2 == 0x20) {
        param_2[6] = -0x1000000;
        param_2[7] = 0;
        param_2[3] = 0xff0000;
        param_2[4] = 0xff00;
        param_2[5] = 0xff;
        return 1;
      }
      param_2[3] = 0x7c00;
      param_2[4] = 0x3e0;
      param_2[5] = 0x1f;
      return 1;
    }
    if (iVar8 == 3) {
      uVar2 = read_sdf_deep((longlong)param_1);
      uVar3 = read_sdf_deep((longlong)param_1);
      param_2[3] = uVar3 * 0x10000 + uVar2;
      uVar2 = read_sdf_deep((longlong)param_1);
      uVar3 = read_sdf_deep((longlong)param_1);
      param_2[4] = uVar3 * 0x10000 + uVar2;
      uVar2 = read_sdf_deep((longlong)param_1);
      uVar3 = read_sdf_deep((longlong)param_1);
      param_2[8] = param_2[8] + 0xc;
      iVar8 = uVar3 * 0x10000 + uVar2;
      param_2[5] = iVar8;
      if (param_2[3] != param_2[4]) {
        return 1;
      }
      if (param_2[4] != iVar8) {
        return 1;
      }
    }
  }
  else {
    if (uVar2 == 0x38) {
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      goto LAB_14000bb58;
    }
    if ((uVar2 - 0x6c & 0xffffffef) == 0) {
      uVar3 = read_sdf_deep((longlong)param_1);
      uVar4 = read_sdf_deep((longlong)param_1);
      param_2[3] = uVar4 * 0x10000 + uVar3;
      uVar3 = read_sdf_deep((longlong)param_1);
      uVar4 = read_sdf_deep((longlong)param_1);
      param_2[4] = uVar4 * 0x10000 + uVar3;
      uVar3 = read_sdf_deep((longlong)param_1);
      uVar4 = read_sdf_deep((longlong)param_1);
      param_2[5] = uVar4 * 0x10000 + uVar3;
      uVar3 = read_sdf_deep((longlong)param_1);
      uVar4 = read_sdf_deep((longlong)param_1);
      param_2[6] = uVar4 * 0x10000 + uVar3;
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      lVar7 = 0xc;
      do {
        read_sdf_deep((longlong)param_1);
        read_sdf_deep((longlong)param_1);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (uVar2 != 0x7c) {
        return 1;
      }
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      read_sdf_deep((longlong)param_1);
      return 1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  lVar7 = *ThreadLocalStoragePointer;
  pcVar5 = "bad BMP";
LAB_14000bc41:
  *(char **)(lVar7 + 0x10) = pcVar5;
  return 0;
}



void read_sdf_internal_ptr(longlong param_1)
{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x38);
  iVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x28),puVar1,*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  *(undefined1 **)(param_1 + 0xc0) = puVar1;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 200) = param_1 + 0x39;
    *puVar1 = 0;
    return;
  }
  *(longlong *)(param_1 + 200) = param_1 + 0x38 + (longlong)iVar2;
  return;
}



uint read_sdf_deep(longlong param_1)
{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar3 = *(byte **)(param_1 + 0xc0);
  pbVar5 = *(byte **)(param_1 + 200);
  if (pbVar5 <= pbVar3) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar6 = 0;
      goto LAB_140001ff3;
    }
    read_sdf_internal_ptr(param_1);
    pbVar3 = *(byte **)(param_1 + 0xc0);
    pbVar5 = *(byte **)(param_1 + 200);
  }
  bVar1 = *pbVar3;
  pbVar4 = pbVar3 + 1;
  *(byte **)(param_1 + 0xc0) = pbVar4;
  uVar6 = (uint)bVar1;
  if (pbVar4 < pbVar5) {
    bVar2 = *pbVar4;
    *(byte **)(param_1 + 0xc0) = pbVar3 + 2;
    return (uint)bVar2 * 0x100 + (uint)bVar1;
  }
LAB_140001ff3:
  if (*(int *)(param_1 + 0x30) != 0) {
    read_sdf_internal_ptr(param_1);
    bVar1 = **(byte **)(param_1 + 0xc0);
    *(byte **)(param_1 + 0xc0) = *(byte **)(param_1 + 0xc0) + 1;
    return (uint)bVar1 * 0x100 + uVar6;
  }
  return uVar6;
}



void return_null_fast(void)
{
/*
**************************************************************
*                          FUNCTION                          *
**************************************************************
undefined __fastcall return_null_fast(void)
assume GS_OFFSET = 0xff00000000
undefined         <UNASSIGNED>   <RETURN>
undefined8        Stack[0x20]:8  local_res20                             XREF[1]:     14000bc56(R)  
return_null_fast                                XREF[3]:     FUN_14000b851:14000b90f(c), 
                                           FUN_14000b851:14000b980(c), 
                                               140029588(*)  
 14000bc4c 48 8b 7c        MOV        RDI,qword ptr [RSP + Stack[0x48]]
 24 48
*/
  return;
}



int read_sdf_texture_step(uint param_1)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_1 >> 0x10;
    if (param_1 < 0x10000) {
      uVar2 = param_1;
    }
    iVar3 = 0x10;
    if (param_1 < 0x10000) {
      iVar3 = 0;
    }
    if (0xff < uVar2) {
      iVar3 = iVar3 + 8;
      uVar2 = uVar2 >> 8;
    }
    uVar4 = uVar2 >> 4;
    iVar1 = iVar3 + 4;
    if (uVar2 < 0x10) {
      uVar4 = uVar2;
      iVar1 = iVar3;
    }
    iVar3 = iVar1 + 2;
    if (uVar4 < 4) {
      iVar3 = iVar1;
    }
    uVar2 = uVar4 >> 2;
    if (uVar4 < 4) {
      uVar2 = uVar4;
    }
    iVar1 = iVar3 + 1;
    if (uVar2 < 2) {
      iVar1 = iVar3;
    }
    return iVar1;
  }
  return -1;
}



void * read_sdf_texture_mem(void *param_1,int param_2,int param_3,uint param_4,uint param_5)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  void *_Memory;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  if (param_3 == param_2) {
    return param_1;
  }
  if ((((((-1 < param_3) && (-1 < (int)param_4)) &&
        ((param_4 == 0 || (param_3 <= (int)(0x7fffffff / param_4))))) &&
       ((iVar5 = param_3 * param_4, -1 < iVar5 && (-1 < (int)param_5)))) &&
      ((param_5 == 0 || (iVar5 <= (int)(0x7fffffff / (ulonglong)param_5))))) &&
     (_Memory = malloc((longlong)(int)(iVar5 * param_5)), _Memory != (void *)0x0)) {
    iVar5 = 0;
    if (0 < (int)param_5) {
      do {
        pbVar7 = (byte *)((ulonglong)(iVar5 * param_2 * param_4) + (longlong)param_1);
        pbVar4 = (byte *)((ulonglong)(iVar5 * param_3 * param_4) + (longlong)_Memory);
        switch(param_2 * 8 + -10 + param_3) {
        case 0:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            pbVar4[1] = 0xff;
            pbVar4 = pbVar4 + 2;
          }
          break;
        case 1:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar7 = pbVar7 + 1;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 3;
          }
          break;
        case 2:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar7 = pbVar7 + 1;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4[3] = 0xff;
            pbVar4 = pbVar4 + 4;
          }
          break;
        default:
          free(param_1);
          free(_Memory);
                    /* WARNING: Load size is inaccurate */
          *(char **)(*ThreadLocalStoragePointer + 0x10) = "unsupported";
          return (void *)0x0;
        case 7:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar4 = pbVar4 + 1;
            pbVar7 = pbVar7 + 2;
          }
          break;
        case 9:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar7 = pbVar7 + 2;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 3;
          }
          break;
        case 10:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = *pbVar7;
            pbVar4[2] = bVar1;
            pbVar4[1] = bVar1;
            *pbVar4 = bVar1;
            pbVar4[3] = pbVar7[1];
            pbVar7 = pbVar7 + 2;
            pbVar4 = pbVar4 + 4;
          }
          break;
        case 0xf:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = (byte)((uint)pbVar7[1] * 0x96 + (uint)pbVar7[2] * 0x1d + (uint)*pbVar7 * 0x4d
                            >> 8);
            pbVar7 = pbVar7 + 3;
            pbVar4 = pbVar4 + 1;
          }
          break;
        case 0x10:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            bVar1 = pbVar7[1];
            bVar2 = pbVar7[2];
            bVar3 = *pbVar7;
            pbVar4[1] = 0xff;
            *pbVar4 = (byte)((uint)bVar1 * 0x96 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x4d >> 8);
            pbVar7 = pbVar7 + 3;
            pbVar4 = pbVar4 + 2;
          }
          break;
        case 0x12:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar4[1] = pbVar7[1];
            pbVar4[2] = pbVar7[2];
            pbVar4[3] = 0xff;
            pbVar7 = pbVar7 + 3;
            pbVar4 = pbVar4 + 4;
          }
          break;
        case 0x17:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = (byte)((uint)pbVar7[1] * 0x96 + (uint)pbVar7[2] * 0x1d + (uint)*pbVar7 * 0x4d
                            >> 8);
            pbVar7 = pbVar7 + 4;
            pbVar4 = pbVar4 + 1;
          }
          break;
        case 0x18:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = (byte)((uint)pbVar7[1] * 0x96 + (uint)pbVar7[2] * 0x1d + (uint)*pbVar7 * 0x4d
                            >> 8);
            pbVar4[1] = pbVar7[3];
            pbVar7 = pbVar7 + 4;
            pbVar4 = pbVar4 + 2;
          }
          break;
        case 0x19:
          for (iVar6 = param_4 - 1; -1 < iVar6; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar7;
            pbVar4[1] = pbVar7[1];
            pbVar4[2] = pbVar7[2];
            pbVar7 = pbVar7 + 4;
            pbVar4 = pbVar4 + 3;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_5);
    }
    free(param_1);
    return _Memory;
  }
  free(param_1);
                    /* WARNING: Load size is inaccurate */
  *(char **)(*ThreadLocalStoragePointer + 0x10) = "outofmem";
  return (void *)0x0;
}





undefined8 pack_deflate_internal_size(longlong param_1,undefined8 param_2,uint param_3)
{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "output buffer limit";
    return 0;
  }
  uVar3 = (int)param_2 - *(int *)(param_1 + 0x20);
  uVar2 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20);
  if (param_3 <= ~uVar3) {
    while( true ) {
      if (uVar3 + param_3 <= uVar2) {
        pvVar1 = realloc(*(void **)(param_1 + 0x20),(ulonglong)uVar2);
        if (pvVar1 != (void *)0x0) {
          *(void **)(param_1 + 0x20) = pvVar1;
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar3 + (longlong)pvVar1;
          *(ulonglong *)(param_1 + 0x28) = (ulonglong)uVar2 + (longlong)pvVar1;
          return 1;
        }
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "outofmem";
        return 0;
      }
      if (0x7fffffff < uVar2) break;
      uVar2 = uVar2 * 2;
    }
  }
                    /* WARNING: Load size is inaccurate */
  *(char **)(*ThreadLocalStoragePointer + 0x10) = "outofmem";
  return 0;
}



ulonglong pack_deflate_internal(longlong param_1,longlong param_2)
{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar3 = (int)uVar1 >> 1 & 0x5555U | (uVar1 & 0x5555) * 2;
  uVar3 = uVar3 >> 2 & 0x3333 | (uVar3 & 0x3333) << 2;
  uVar3 = uVar3 >> 4 & 0xf0f | (uVar3 & 0xf0f) << 4;
  piVar2 = (int *)(param_2 + 0x448);
  uVar4 = (uVar3 & 0xff) << 8 | uVar3 >> 8;
  uVar3 = 10;
  if (*piVar2 <= (int)uVar4) {
    do {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (*piVar2 <= (int)uVar4);
    if (0xf < (int)uVar3) {
      return 0xffffffff;
    }
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x464 + (longlong)(int)uVar3 * 2) +
          (((int)uVar4 >> (0x10 - (byte)uVar3 & 0x1f)) -
          (uint)*(ushort *)(param_2 + 0x400 + (longlong)(int)uVar3 * 2));
  if ((uVar4 < 0x120) && (*(byte *)((longlong)(int)uVar4 + 0x484 + param_2) == uVar3)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
    *(uint *)(param_1 + 0x14) = uVar1 >> ((byte)uVar3 & 0x1f);
    return (ulonglong)*(ushort *)(param_2 + 0x5a4 + (longlong)(int)uVar4 * 2);
  }
  return 0xffffffff;
}



undefined8 PackDeflate(undefined8 *param_1)
{
  ushort uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *_Dst;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  _Dst = (byte *)param_1[3];
LAB_1400084a0:
  do {
    iVar9 = *(int *)(param_1 + 2);
    if (iVar9 < 0x10) {
      pbVar6 = (byte *)param_1[1];
      if (pbVar6 <= (byte *)*param_1) goto LAB_140008826;
      uVar10 = *(uint *)((longlong)param_1 + 0x14);
      iVar12 = iVar9;
      if (uVar10 < (uint)(1 << ((byte)iVar9 & 0x1f))) {
        do {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 < pbVar6) {
            bVar5 = *pbVar2;
            *param_1 = pbVar2 + 1;
          }
          else {
            bVar5 = 0;
          }
          iVar9 = iVar12 + 8;
          *(int *)(param_1 + 2) = iVar9;
          uVar10 = uVar10 | (uint)bVar5 << ((byte)iVar12 & 0x1f);
          *(uint *)((longlong)param_1 + 0x14) = uVar10;
          if (0x18 < iVar9) goto LAB_140008514;
          iVar12 = iVar9;
        } while (uVar10 < (uint)(1 << ((byte)iVar9 & 0x1f)));
      }
      *param_1 = pbVar6;
    }
LAB_140008514:
    uVar1 = *(ushort *)
             ((longlong)param_1 +
             (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x1ff) * 2 + 0x34);
    if (uVar1 == 0) {
      uVar4 = pack_deflate_internal((longlong)param_1,(longlong)param_1 + 0x34);
      uVar10 = (uint)uVar4;
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) =
           *(uint *)((longlong)param_1 + 0x14) >> ((byte)(uVar1 >> 9) & 0x1f);
      uVar10 = uVar1 & 0x1ff;
      *(uint *)(param_1 + 2) = iVar9 - (uint)(uVar1 >> 9);
    }
    if (0xff < (int)uVar10) {
      if (uVar10 == 0x100) {
        param_1[3] = _Dst;
        return 1;
      }
      iVar9 = *(int *)(param_1 + 2);
      iVar12 = *(int *)("blendingtimes" + (longlong)(int)uVar10 * 4 + 4);
      uVar10 = *(uint *)("ambiguous short option: -" + (longlong)(int)uVar10 * 4 + 0xc);
      if (iVar12 != 0) {
        if (iVar9 < iVar12) {
          uVar11 = *(uint *)((longlong)param_1 + 0x14);
          if (uVar11 < (uint)(1 << ((byte)iVar9 & 0x1f))) {
            iVar7 = iVar9;
            do {
              pbVar6 = (byte *)*param_1;
              if (pbVar6 < (byte *)param_1[1]) {
                bVar5 = *pbVar6;
                *param_1 = pbVar6 + 1;
              }
              else {
                bVar5 = 0;
              }
              iVar9 = iVar7 + 8;
              *(int *)(param_1 + 2) = iVar9;
              uVar11 = uVar11 | (uint)bVar5 << ((byte)iVar7 & 0x1f);
              *(uint *)((longlong)param_1 + 0x14) = uVar11;
              if (0x18 < iVar9) goto LAB_14000861d;
              iVar7 = iVar9;
            } while (uVar11 < (uint)(1 << ((byte)iVar9 & 0x1f)));
          }
          *param_1 = param_1[1];
        }
LAB_14000861d:
        uVar11 = *(uint *)((longlong)param_1 + 0x14);
        iVar9 = iVar9 - iVar12;
        *(uint *)((longlong)param_1 + 0x14) = uVar11 >> ((byte)iVar12 & 0x1f);
        *(int *)(param_1 + 2) = iVar9;
        uVar10 = uVar10 + ((1 << ((byte)iVar12 & 0x1f)) - 1U & uVar11);
      }
      if (iVar9 < 0x10) {
        pbVar6 = (byte *)param_1[1];
        if (pbVar6 <= (byte *)*param_1) {
LAB_140008826:
                    /* WARNING: Load size is inaccurate */
          *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad huffman code";
          return 0;
        }
        uVar11 = *(uint *)((longlong)param_1 + 0x14);
        iVar12 = iVar9;
        if (uVar11 < (uint)(1 << ((byte)iVar9 & 0x1f))) {
          do {
            pbVar2 = (byte *)*param_1;
            if (pbVar2 < pbVar6) {
              bVar5 = *pbVar2;
              *param_1 = pbVar2 + 1;
            }
            else {
              bVar5 = 0;
            }
            iVar9 = iVar12 + 8;
            *(int *)(param_1 + 2) = iVar9;
            uVar11 = uVar11 | (uint)bVar5 << ((byte)iVar12 & 0x1f);
            *(uint *)((longlong)param_1 + 0x14) = uVar11;
            if (0x18 < iVar9) goto LAB_1400086b2;
            iVar12 = iVar9;
          } while (uVar11 < (uint)(1 << ((byte)iVar9 & 0x1f)));
        }
        *param_1 = pbVar6;
      }
LAB_1400086b2:
      uVar1 = *(ushort *)
               ((longlong)param_1 +
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x1ff) * 2 + 0x818);
      if (uVar1 == 0) {
        uVar4 = pack_deflate_internal((longlong)param_1,(longlong)(param_1 + 0x103));
        uVar11 = (uint)uVar4;
      }
      else {
        *(uint *)((longlong)param_1 + 0x14) =
             *(uint *)((longlong)param_1 + 0x14) >> ((byte)(uVar1 >> 9) & 0x1f);
        uVar11 = uVar1 & 0x1ff;
        *(uint *)(param_1 + 2) = iVar9 - (uint)(uVar1 >> 9);
      }
      if ((int)uVar11 < 0) goto LAB_140008826;
      iVar9 = *(int *)(&DAT_140022360 + (longlong)(int)uVar11 * 4);
      iVar12 = *(int *)(&DAT_140022190 + (longlong)(int)uVar11 * 4);
      if (iVar9 != 0) {
        iVar7 = *(int *)(param_1 + 2);
        if (iVar7 < iVar9) {
          uVar11 = *(uint *)((longlong)param_1 + 0x14);
          if (uVar11 < (uint)(1 << ((byte)iVar7 & 0x1f))) {
            iVar8 = iVar7;
            do {
              pbVar6 = (byte *)*param_1;
              if (pbVar6 < (byte *)param_1[1]) {
                bVar5 = *pbVar6;
                *param_1 = pbVar6 + 1;
              }
              else {
                bVar5 = 0;
              }
              iVar7 = iVar8 + 8;
              *(int *)(param_1 + 2) = iVar7;
              uVar11 = uVar11 | (uint)bVar5 << ((byte)iVar8 & 0x1f);
              *(uint *)((longlong)param_1 + 0x14) = uVar11;
              if (0x18 < iVar7) goto LAB_14000877f;
              iVar8 = iVar7;
            } while (uVar11 < (uint)(1 << ((byte)iVar7 & 0x1f)));
          }
          *param_1 = param_1[1];
        }
LAB_14000877f:
        uVar11 = *(uint *)((longlong)param_1 + 0x14);
        *(uint *)((longlong)param_1 + 0x14) = uVar11 >> ((byte)iVar9 & 0x1f);
        *(int *)(param_1 + 2) = iVar7 - iVar9;
        iVar12 = iVar12 + ((1 << ((byte)iVar9 & 0x1f)) - 1U & uVar11);
      }
      if ((longlong)_Dst - param_1[4] < (longlong)iVar12) {
                    /* WARNING: Load size is inaccurate */
        *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad dist";
        return 0;
      }
      if ((byte *)param_1[5] < _Dst + (int)uVar10) {
        uVar3 = pack_deflate_internal_size((longlong)param_1,_Dst,uVar10);
        if ((int)uVar3 == 0) {
          return 0;
        }
        _Dst = (byte *)param_1[3];
      }
      pbVar6 = _Dst + -(longlong)iVar12;
      if (iVar12 == 1) {
        if (uVar10 != 0) {
          memset(_Dst,(uint)*pbVar6,(ulonglong)uVar10);
          _Dst = _Dst + uVar10;
        }
      }
      else {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          bVar5 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *_Dst = bVar5;
          _Dst = _Dst + 1;
        }
      }
      goto LAB_1400084a0;
    }
    if ((int)uVar10 < 0) goto LAB_140008826;
    if ((byte *)param_1[5] <= _Dst) {
      uVar3 = pack_deflate_internal_size((longlong)param_1,_Dst,1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      _Dst = (byte *)param_1[3];
    }
    *_Dst = (byte)uVar10;
    _Dst = _Dst + 1;
  } while( true );
}





undefined8 Read_BitBuffer(longlong *param_1,short *param_2,longlong param_3,longlong param_4,longlong param_5, int param_6,short *param_7)
{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  if ((*(int *)((longlong)param_1 + 0x4824) < 0x10) &&
     (loop_sdf_blending(param_1), *(int *)((longlong)param_1 + 0x4824) < 0x10)) {
    loop_sdf_blending(param_1);
  }
  uVar12 = *(uint *)(param_1 + 0x904);
  bVar2 = *(byte *)((ulonglong)(uVar12 >> 0x17) + param_3);
  if (bVar2 != 0xff) {
    bVar2 = *(byte *)((ulonglong)bVar2 + 0x500 + param_3);
    if ((int)(uint)bVar2 <= *(int *)((longlong)param_1 + 0x4824)) {
      *(uint *)(param_1 + 0x904) = uVar12 << (bVar2 & 0x1f);
      *(uint *)((longlong)param_1 + 0x4824) = *(int *)((longlong)param_1 + 0x4824) - (uint)bVar2;
      uVar5 = UnZipSDF();
      return uVar5;
    }
LAB_14000301c:
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad huffman code";
    return 0;
  }
  puVar1 = (uint *)(param_3 + 0x62c);
  iVar11 = 10;
  uVar7 = *puVar1;
  while (uVar7 <= uVar12 >> 0x10) {
    iVar11 = iVar11 + 1;
    puVar1 = puVar1 + 1;
    uVar7 = *puVar1;
  }
  iVar9 = *(int *)((longlong)param_1 + 0x4824);
  if (iVar11 == 0x11) {
    *(int *)((longlong)param_1 + 0x4824) = iVar9 + -0x10;
    goto LAB_14000301c;
  }
  if (iVar9 < iVar11) goto LAB_14000301c;
  uVar7 = *(uint *)(&DAT_140022210 + (longlong)iVar11 * 4);
  iVar8 = *(int *)(param_3 + 0x64c + (longlong)iVar11 * 4);
  *(int *)((longlong)param_1 + 0x4824) = iVar9 - iVar11;
  *(uint *)(param_1 + 0x904) = uVar12 << ((byte)iVar11 & 0x1f);
  bVar2 = *(byte *)((longlong)(int)((uVar12 >> (0x20 - (byte)iVar11 & 0x1f) & uVar7) + iVar8) +
                    0x400 + param_3);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  if (bVar2 != 0) {
    iVar11 = *(int *)((longlong)param_1 + 0x4824);
    uVar12 = (uint)bVar2;
    if (iVar11 < (int)uVar12) {
      loop_sdf_blending(param_1);
      iVar11 = *(int *)((longlong)param_1 + 0x4824);
    }
    uVar7 = *(uint *)(param_1 + 0x904);
    uVar13 = uVar7 << (bVar2 & 0x1f) | uVar7 >> 0x20 - (bVar2 & 0x1f);
    if (uVar12 < 0x11) {
      *(uint *)((longlong)param_1 + 0x4824) = iVar11 - uVar12;
      uVar12 = *(uint *)(&DAT_140022210 + (longlong)(int)(uint)bVar2 * 4);
      uVar10 = *(uint *)(&DAT_140021f60 + (longlong)(int)(uint)bVar2 * 4);
      *(uint *)(param_1 + 0x904) = ~uVar12 & uVar13;
      iVar11 = (~((int)uVar7 >> 0x1f) & uVar10) + (uVar12 & uVar13);
      goto LAB_140003131;
    }
  }
  iVar11 = 0;
LAB_140003131:
  iVar9 = 1;
  iVar11 = (int)param_1[(longlong)param_6 * 0xc + 0x8d7] + iVar11;
  *(int *)(param_1 + (longlong)param_6 * 0xc + 0x8d7) = iVar11;
  *param_2 = (short)iVar11 * *param_7;
  do {
    iVar11 = *(int *)((longlong)param_1 + 0x4824);
    if (iVar11 < 0x10) {
      loop_sdf_blending(param_1);
      iVar11 = *(int *)((longlong)param_1 + 0x4824);
    }
    uVar12 = *(uint *)(param_1 + 0x904);
    sVar3 = *(short *)(param_5 + (ulonglong)(uVar12 >> 0x17) * 2);
    if (sVar3 == 0) {
      if (iVar11 < 0x10) {
        loop_sdf_blending(param_1);
        uVar12 = *(uint *)(param_1 + 0x904);
      }
      bVar2 = *(byte *)((ulonglong)(uVar12 >> 0x17) + param_4);
      uVar6 = (ulonglong)bVar2;
      if (bVar2 == 0xff) {
        puVar1 = (uint *)(param_4 + 0x62c);
        iVar11 = 10;
        lVar14 = 10;
        uVar7 = *puVar1;
        while (uVar7 <= uVar12 >> 0x10) {
          iVar11 = iVar11 + 1;
          puVar1 = puVar1 + 1;
          lVar14 = lVar14 + 1;
          uVar7 = *puVar1;
        }
        iVar8 = *(int *)((longlong)param_1 + 0x4824);
        if (iVar11 == 0x11) {
          *(int *)((longlong)param_1 + 0x4824) = iVar8 + -0x10;
LAB_1400033a5:
                    /* WARNING: Load size is inaccurate */
          *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad huffman code";
          return 0;
        }
        if (iVar8 < iVar11) goto LAB_1400033a5;
        bVar2 = (byte)iVar11;
        iVar8 = iVar8 - iVar11;
        uVar6 = (ulonglong)
                (int)((uVar12 >> (0x20 - bVar2 & 0x1f) & *(uint *)(&DAT_140022210 + lVar14 * 4)) +
                     *(int *)(param_4 + 0x64c + lVar14 * 4));
      }
      else {
        bVar2 = *(byte *)(uVar6 + 0x500 + param_4);
        if (*(int *)((longlong)param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_1400033a5;
        iVar8 = *(int *)((longlong)param_1 + 0x4824) - (uint)bVar2;
      }
      uVar12 = uVar12 << (bVar2 & 0x1f);
      *(int *)((longlong)param_1 + 0x4824) = iVar8;
      *(uint *)(param_1 + 0x904) = uVar12;
      bVar2 = *(byte *)(uVar6 + 0x400 + param_4);
      uVar7 = bVar2 & 0xf;
      if ((bVar2 & 0xf) == 0) {
        if (bVar2 != 0xf0) {
          return 1;
        }
        iVar9 = iVar9 + 0x10;
      }
      else {
        iVar11 = iVar9 + (uint)(bVar2 >> 4);
        iVar9 = iVar11 + 1;
        bVar2 = (&DAT_1400220c0)[iVar11];
        if (iVar8 < (int)uVar7) {
          loop_sdf_blending(param_1);
          uVar12 = *(uint *)(param_1 + 0x904);
          iVar8 = *(int *)((longlong)param_1 + 0x4824);
        }
        uVar10 = uVar12 << (sbyte)uVar7 | uVar12 >> 0x20 - (sbyte)uVar7;
        uVar13 = *(uint *)(&DAT_140022210 + (ulonglong)uVar7 * 4);
        uVar4 = *(undefined4 *)(&DAT_140021f60 + (ulonglong)uVar7 * 4);
        *(uint *)((longlong)param_1 + 0x4824) = iVar8 - uVar7;
        *(uint *)(param_1 + 0x904) = ~uVar13 & uVar10;
        param_2[bVar2] =
             param_7[bVar2] *
             ((~(ushort)((int)uVar12 >> 0x1f) & (ushort)uVar4) + ((ushort)uVar13 & (ushort)uVar10));
      }
    }
    else {
      uVar7 = (int)sVar3 & 0xf;
      iVar8 = iVar9 + ((int)sVar3 >> 4 & 0xfU);
      *(uint *)(param_1 + 0x904) = uVar12 << (sbyte)uVar7;
      iVar9 = iVar8 + 1;
      *(uint *)((longlong)param_1 + 0x4824) = iVar11 - uVar7;
      param_2[(byte)(&DAT_1400220c0)[iVar8]] =
           param_7[(byte)(&DAT_1400220c0)[iVar8]] * (short)(char)((ushort)sVar3 >> 8);
    }
    if (0x3f < iVar9) {
      return 1;
    }
  } while( true );
}




undefined8 FUN_14000b851(void)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint *unaff_RBX;
  uint *unaff_RSI;
  longlong lVar6;
  int iVar7;
  
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  uVar1 = read_sdf_deep((longlong)unaff_RBX);
  uVar2 = read_sdf_deep((longlong)unaff_RBX);
  unaff_RSI[1] = uVar2 * 0x10000 + uVar1;
  uVar1 = read_sdf_deep((longlong)unaff_RBX);
  uVar2 = read_sdf_deep((longlong)unaff_RBX);
  unaff_RSI[8] = 0xe;
  unaff_RSI[5] = 0;
  unaff_RSI[6] = 0;
  uVar1 = uVar2 * 0x10000 + uVar1;
  unaff_RSI[3] = 0;
  unaff_RSI[4] = 0;
  unaff_RSI[2] = uVar1;
  if ((int)unaff_RSI[1] < 0) {
LAB_14000b962:
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "bad BMP";
    uVar4 = return_null_fast();
    return uVar4;
  }
  if ((((0x38 < uVar1) || ((0x100010000001000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)) &&
      (uVar1 != 0x6c)) && (uVar1 != 0x7c)) {
                    /* WARNING: Load size is inaccurate */
    *(char **)(*ThreadLocalStoragePointer + 0x10) = "unknown BMP";
    uVar4 = return_null_fast();
    return uVar4;
  }
  uVar2 = read_sdf_deep((longlong)unaff_RBX);
  if (uVar1 == 0xc) {
    *unaff_RBX = uVar2;
    uVar3 = read_sdf_deep((longlong)unaff_RBX);
  }
  else {
    uVar3 = read_sdf_deep((longlong)unaff_RBX);
    *unaff_RBX = uVar3 * 0x10000 + uVar2;
    uVar3 = read_sdf_deep((longlong)unaff_RBX);
    uVar2 = read_sdf_deep((longlong)unaff_RBX);
    uVar3 = uVar2 * 0x10000 + uVar3;
  }
  unaff_RBX[1] = uVar3;
  uVar2 = read_sdf_deep((longlong)unaff_RBX);
  if (uVar2 != 1) goto LAB_14000b962;
  uVar2 = read_sdf_deep((longlong)unaff_RBX);
  *unaff_RSI = uVar2;
  if (uVar1 == 0xc) {
    return 1;
  }
  uVar2 = read_sdf_deep((longlong)unaff_RBX);
  uVar3 = read_sdf_deep((longlong)unaff_RBX);
  iVar7 = uVar3 * 0x10000 + uVar2;
  if (iVar7 - 1U < 2) {
                    /* WARNING: Load size is inaccurate */
    lVar6 = *ThreadLocalStoragePointer;
    pcVar5 = "BMP RLE";
    goto LAB_14000bc41;
  }
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  read_sdf_deep((longlong)unaff_RBX);
  if (uVar1 == 0x28) {
LAB_14000bb58:
    if ((*unaff_RSI - 0x10 & 0xffffffef) != 0) {
      return 1;
    }
    if (iVar7 == 0) {
      if (*unaff_RSI == 0x20) {
        unaff_RSI[6] = 0xff000000;
        unaff_RSI[7] = 0;
        unaff_RSI[3] = 0xff0000;
        unaff_RSI[4] = 0xff00;
        unaff_RSI[5] = 0xff;
        return 1;
      }
      unaff_RSI[3] = 0x7c00;
      unaff_RSI[4] = 0x3e0;
      unaff_RSI[5] = 0x1f;
      return 1;
    }
    if (iVar7 == 3) {
      uVar1 = read_sdf_deep((longlong)unaff_RBX);
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[3] = uVar2 * 0x10000 + uVar1;
      uVar1 = read_sdf_deep((longlong)unaff_RBX);
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[4] = uVar2 * 0x10000 + uVar1;
      uVar1 = read_sdf_deep((longlong)unaff_RBX);
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[8] = unaff_RSI[8] + 0xc;
      uVar1 = uVar2 * 0x10000 + uVar1;
      unaff_RSI[5] = uVar1;
      if (unaff_RSI[3] != unaff_RSI[4]) {
        return 1;
      }
      if (unaff_RSI[4] != uVar1) {
        return 1;
      }
    }
  }
  else {
    if (uVar1 == 0x38) {
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      goto LAB_14000bb58;
    }
    if ((uVar1 - 0x6c & 0xffffffef) == 0) {
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      uVar3 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[3] = uVar3 * 0x10000 + uVar2;
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      uVar3 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[4] = uVar3 * 0x10000 + uVar2;
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      uVar3 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[5] = uVar3 * 0x10000 + uVar2;
      uVar2 = read_sdf_deep((longlong)unaff_RBX);
      uVar3 = read_sdf_deep((longlong)unaff_RBX);
      unaff_RSI[6] = uVar3 * 0x10000 + uVar2;
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      lVar6 = 0xc;
      do {
        read_sdf_deep((longlong)unaff_RBX);
        read_sdf_deep((longlong)unaff_RBX);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (uVar1 != 0x7c) {
        return 1;
      }
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      read_sdf_deep((longlong)unaff_RBX);
      return 1;
    }
  }
                    /* WARNING: Load size is inaccurate */
  lVar6 = *ThreadLocalStoragePointer;
  pcVar5 = "bad BMP";
LAB_14000bc41:
  *(char **)(lVar6 + 0x10) = pcVar5;
  return 0;
}




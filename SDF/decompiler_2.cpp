int64_t sub_140001000() __pure
{
    return &data_140028da0;
}

struct std::exception::VTable** std::_Parallelism_resources_exhausted::_Parallelism_resources_exhausted(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    return arg1;
}

int64_t std::exception::~exception(struct std::exception::VTable** arg1)
{
    *arg1 = &std::exception::`vftable';
    /* tailcall */
    return __std_exception_destroy(&arg1[1]);
}

char const* const sub_140001070(void* arg1)
{
    char* result = *(arg1 + 8);

    if (result)
        return result;

    return "Unknown exception";
}

struct std::exception::VTable** std::exception::`scalar deleting destructor'(struct std::exception::VTable** arg1, char arg2)
{
    *arg1 = &std::exception::`vftable';
    __std_exception_destroy(&arg1[1]);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

struct std::exception::std::bad_alloc::VTable** sub_1400010e0(struct std::exception::std::bad_alloc::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad allocation";
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::std::bad_array_new_length::VTable** sub_140001110(struct std::exception::std::bad_array_new_length::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad array new length";
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::exception'};
    return arg1;
}

void stdext::threads::_Throw_lock_error() __noreturn
{
    void pExceptionObject;
    sub_140001110(&pExceptionObject);
    _CxxThrowException(&pExceptionObject, &data_1400261b8);
    /* no return */
}

struct std::exception::VTable** sub_140001160(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::VTable** sub_1400011a0(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

void sub_1400011e0() __noreturn
{
    std::_Xlength_error("string too long");
    /* no return */
}

struct std::exception::std::bad_cast::VTable** sub_140001200(struct std::exception::std::bad_cast::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad cast";
    *arg1 = &std::bad_cast::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::VTable** sub_140001230(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_cast::`vftable'{for `std::exception'};
    return arg1;
}

int64_t sub_140001270(FILE* arg1, int64_t arg2, int32_t arg3)
{
    /* tailcall */
    return fread(arg2, 1, arg3, arg1);
}

int32_t sub_140001290(FILE* arg1, int32_t arg2)
{
    fseek(arg1, arg2, 1);
    int32_t result = fgetc(arg1);

    if (result == 0xffffffff)
        return result;

    /* tailcall */
    return ungetc(result, arg1);
}

int32_t sub_1400012d0(FILE* arg1)
{
    if (!feof(arg1))
    {
        int32_t result = ferror(arg1);

        if (!result)
            return result;
    }

    return 1;
}

char* sub_140001310(uint64_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, uint32_t arg5, int64_t* arg6)
{
    void var_d8;
    int64_t rax_1 = __security_cookie ^ &var_d8;
    uint32_t r14 = arg5;
    int32_t r12 = 8;
    int64_t i_1 = 0;
    *arg6 = 8;
    arg6[1] = 0;
    int64_t* rax_3 = malloc(0x4888);
    *rax_3 = arg1;
    sub_1400076d0(rax_3);
    rax_3[0x909] = 0;
    *(rax_3 + 0x484c) = 0xffffffff;
    rax_3[0x905] = 0xff;
    int32_t rbx;
    TEB* gsbase;

    if (sub_140004b40(rax_3) == 0xd8)
        rbx = 1;
    else
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no SOI";
        rbx = 0;
    }

    *(arg1 + 0xc0) = *(arg1 + 0xd0);
    *(arg1 + 0xc8) = *(arg1 + 0xd8);
    free(rax_3);
    char* result;

    if (!rbx)
    {
        int32_t rax_9 = TypeTiIter::next(arg1);
        char* rcx_8 = *(arg1 + 0xd0);
        int64_t rdx_1 = *(arg1 + 0xd8);
        *(arg1 + 0xc0) = rcx_8;
        *(arg1 + 0xc8) = rdx_1;

        if (rax_9)
        {
            uint64_t var_78 = arg1;
            char* result_2 = nullptr;

            if (r14 > 4)
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad req_comp";
                result = nullptr;
            }
            else
            {
                char* result_3;

                if (!sub_14000a930(&var_78, 0, r14))
                {
                    label_140001537:
                    free(result_3);
                    int64_t var_60 = 0;
                    int64_t var_68;
                    free(var_68);
                    int64_t var_68_1 = 0;
                    int64_t var_70;
                    free(var_70);
                    result = result_2;
                }
                else
                {
                    int32_t var_58;

                    if (var_58 <= 8)
                        goto label_1400014b1;

                    if (var_58 != 0x10)
                    {
                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad bits_per_channel";
                        result = nullptr;
                    }
                    else
                    {
                        r12 = var_58;
                        label_1400014b1:
                        *arg6 = r12;
                        result_2 = result_3;
                        uint64_t rcx_10 = var_78;
                        result_3 = nullptr;

                        if (!r14)
                            goto label_14000151c;

                        int32_t rdx_2 = *(rcx_10 + 0xc);

                        if (r14 == rdx_2)
                            goto label_14000151c;

                        int32_t rax_13 = *(rcx_10 + 4);
                        int32_t r9_1 = *rcx_10;
                        char* result_4;

                        if (*arg6 != 8)
                            result_4 = sub_140002510(result_2, rdx_2, r14, r9_1, rax_13);
                        else
                            result_4 = sub_140002040(result_2, rdx_2, r14, r9_1, rax_13);

                        result_2 = result_4;
                        *(var_78 + 0xc) = r14;

                        if (result_2)
                        {
                            rcx_10 = var_78;
                            label_14000151c:
                            *arg2 = *rcx_10;
                            *arg3 = *(rcx_10 + 4);

                            if (arg4)
                                *arg4 = *(rcx_10 + 8);

                            goto label_140001537;
                        }

                        result = nullptr;
                    }
                }
            }
        }
        else
        {
            void* rax_19;
            char rdx_4;

            if (rcx_8 >= rdx_1)
            {
                if (*(arg1 + 0x30))
                {
                    sub_140001d70(arg1);
                    char* rax_20 = *(arg1 + 0xc0);
                    rdx_4 = *rax_20;
                    rax_19 = &rax_20[1];
                    goto label_1400015da;
                }

                label_1400016c8:
                *(arg1 + 0xc0) = *(arg1 + 0xd0);
                *(arg1 + 0xc8) = *(arg1 + 0xd8);
                label_1400016d8:
                int32_t rax_31 = sub_14000f1b0(arg1);
                *(arg1 + 0xc0) = *(arg1 + 0xd0);
                *(arg1 + 0xc8) = *(arg1 + 0xd8);

                if (!rax_31)
                {
                    int32_t rax_32 = sub_140001ec0(arg1);
                    int32_t rcx_35 = sub_140001ec0(arg1) + (rax_32 << 0x10);
                    *(arg1 + 0xc0) = *(arg1 + 0xd0);
                    *(arg1 + 0xc8) = *(arg1 + 0xd8);

                    if (rcx_35 != 0x38425053)
                    {
                        if (!sub_14000e7e0(arg1, &data_140021aa8))
                        {
                            label_140001834:
                            char* rax_46 = *(arg1 + 0xd0);
                            uint64_t rcx_41 = *(arg1 + 0xd8);
                            *(arg1 + 0xc0) = rax_46;
                            *(arg1 + 0xc8) = rcx_41;

                            if (rax_46 < rcx_41)
                                goto label_140001871;

                            int32_t rbx_4;

                            if (!*(arg1 + 0x30))
                            {
                                rbx_4 = 0;
                                label_14000188c:

                                if (!*(arg1 + 0x30))
                                    rcx_41 = 0;
                                else
                                {
                                    sub_140001d70(arg1);
                                    char* rax_49 = *(arg1 + 0xc0);
                                    rcx_41 = *rax_49;
                                    *(arg1 + 0xc0) = &rax_49[1];
                                }
                            }
                            else
                            {
                                sub_140001d70(arg1);
                                rax_46 = *(arg1 + 0xc0);
                                rcx_41 = *(arg1 + 0xc8);
                                label_140001871:
                                rbx_4 = *rax_46;
                                *(arg1 + 0xc0) = &rax_46[1];

                                if (&rax_46[1] >= rcx_41)
                                    goto label_14000188c;

                                rcx_41 = rax_46[1];
                                *(arg1 + 0xc0) = &rax_46[2];
                            }

                            if (rbx_4 == 0x50)
                                rcx_41 -= 0x35;

                            if (rbx_4 != 0x50 || rcx_41 > 1)
                            {
                                *(arg1 + 0xc0) = *(arg1 + 0xd0);
                                *(arg1 + 0xc8) = *(arg1 + 0xd8);
                                int32_t rax_53 = sub_140010500(arg1, "#?RADIANCE\n");
                                *(arg1 + 0xc0) = *(arg1 + 0xd0);
                                *(arg1 + 0xc8) = *(arg1 + 0xd8);
                                int32_t rax_54;

                                if (!rax_53)
                                {
                                    rax_54 = sub_140010500(arg1, "#?RGBE\n");
                                    *(arg1 + 0xc0) = *(arg1 + 0xd0);
                                    *(arg1 + 0xc8) = *(arg1 + 0xd8);
                                }

                                if (rax_53 || rax_54)
                                {
                                    int32_t* r13_2 = arg3;
                                    int32_t* r12_2 = arg2;
                                    int64_t* var_b0_4 = arg6;
                                    int32_t* rax_59 = sub_140010870(arg1, r12_2, r13_2, arg4, r14);

                                    if (!r14)
                                        r14 = *arg4;

                                    result = sub_1400029d0(rax_59, *r12_2, *r13_2, r14);
                                }
                                else if (!sub_14000cc80(arg1))
                                {
                                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unknown image type";
                                    result = nullptr;
                                }
                                else
                                {
                                    int64_t* var_b0_3 = arg6;
                                    result = sub_14000cf40(arg1, arg2, arg3, arg4, r14);
                                }
                            }
                            else
                                result = sub_140011060(arg1, arg2, arg3, arg4, r14);
                        }
                        else
                        {
                            int64_t i_2 = 0x54;
                            int64_t i;

                            do
                            {
                                int64_t rax_38 = *(arg1 + 0xc0);

                                if (rax_38 < *(arg1 + 0xc8))
                                    *(arg1 + 0xc0) = rax_38 + 1;
                                else if (*(arg1 + 0x30))
                                {
                                    sub_140001d70(arg1);
                                    *(arg1 + 0xc0) += 1;
                                }

                                i = i_2;
                                i_2 -= 1;
                            } while (i != 1);

                            do
                            {
                                char* rax_40 = *(arg1 + 0xc0);
                                char rcx_37;

                                if (rax_40 < *(arg1 + 0xc8))
                                {
                                    rcx_37 = *rax_40;
                                    *(arg1 + 0xc0) = &rax_40[1];
                                }
                                else if (!*(arg1 + 0x30))
                                    rcx_37 = 0;
                                else
                                {
                                    sub_140001d70(arg1);
                                    char* rax_42 = *(arg1 + 0xc0);
                                    rcx_37 = *rax_42;
                                    *(arg1 + 0xc0) = &rax_42[1];
                                }

                                if (rcx_37 != (*"PICT")[i_1])
                                    goto label_140001834;

                                i_1 += 1;
                            } while (i_1 < 4);

                            *(arg1 + 0xc0) = *(arg1 + 0xd0);
                            *(arg1 + 0xc8) = *(arg1 + 0xd8);
                            result = sub_14000ef50(arg1, arg2, arg3, arg4, r14);
                        }
                    }
                    else
                        result = sub_14000db50(arg1, arg2, arg3, arg4, r14, arg6);
                }
                else
                {
                    uint32_t var_b8_4 = r14;
                    result = sub_140010410(arg1, arg2, arg3, arg4);
                }
            }
            else
            {
                rdx_4 = *rcx_8;
                rax_19 = &rcx_8[1];
                label_1400015da:
                *(arg1 + 0xc0) = rax_19;

                if (rdx_4 != 0x42)
                    goto label_1400016c8;

                if (rax_19 >= *(arg1 + 0xc8))
                {
                    if (!*(arg1 + 0x30))
                        goto label_1400016c8;

                    sub_140001d70(arg1);
                    rax_19 = *(arg1 + 0xc0);
                }

                char rcx_19 = *rax_19;
                *(arg1 + 0xc0) = rax_19 + 1;

                if (rcx_19 != 0x4d)
                    goto label_1400016c8;

                sub_140001f80(arg1);
                sub_140001f80(arg1);
                sub_140001f80(arg1);
                sub_140001f80(arg1);
                sub_140001f80(arg1);
                sub_140001f80(arg1);
                int32_t rax_22 = sub_140001f80(arg1);
                uint64_t rax_25 = (sub_140001f80(arg1) << 0x10) + rax_22;
                int32_t rcx_28;

                if (rax_25 > 0x38)
                {
                    if (rax_25 != 0x6c)
                        goto label_140001672;

                    rcx_28 = 1;
                }
                else if (TEST_BITQ(0x100010000001000, rax_25) || rax_25 == 0x6c)
                    rcx_28 = 1;
                else
                {
                    label_140001672:
                    rcx_28 = 0;

                    if (rax_25 == 0x7c)
                        rcx_28 = 1;
                }

                *(arg1 + 0xc0) = *(arg1 + 0xd0);
                *(arg1 + 0xc8) = *(arg1 + 0xd8);

                if (!rcx_28)
                    goto label_1400016d8;

                int64_t* var_b0_1 = arg6;
                result = sub_14000bcb0(arg1, arg2, arg3, arg4, r14);
            }
        }
    }
    else
    {
        void** rax_8 = malloc(0x4888);
        *rax_8 = arg1;
        sub_1400076d0(rax_8);
        char* result_1 = sub_140007750(rax_8, arg2, arg3, arg4, r14);
        free(rax_8);
        result = result_1;
    }

    __security_check_cookie(rax_1 ^ &var_d8);
    return result;
}

int64_t sub_140001a00(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    void var_878;
    int64_t rax_1 = __security_cookie ^ &var_878;
    int64_t r12 = arg1;
    int64_t result = arg2;
    int32_t i_2 = arg3 >> 1;
    int64_t r15_1 = arg4 * result;

    if (i_2 > 0)
    {
        result = arg3 - 1;
        int64_t rbx_3 = result * r15_1 + r12;
        uint64_t i_1 = i_2;
        uint64_t i;

        do
        {
            int64_t rsi_1 = r12;
            int64_t rbp_1 = rbx_3;
            int64_t r14_1 = r15_1;

            if (r15_1)
            {
                int64_t rdi_1;
                int64_t temp1_1;

                do
                {
                    rdi_1 = 0x800;

                    if (r14_1 < 0x800)
                        rdi_1 = r14_1;

                    void var_858;
                    memcpy(&var_858, rsi_1, rdi_1);
                    memcpy(rsi_1, rbp_1, rdi_1);
                    result = memcpy(rbp_1, &var_858, rdi_1);
                    rsi_1 += rdi_1;
                    rbp_1 += rdi_1;
                    temp1_1 = r14_1;
                    r14_1 -= rdi_1;
                } while (temp1_1 != rdi_1);
            }

            r12 += r15_1;
            rbx_3 -= r15_1;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    __security_check_cookie(rax_1 ^ &var_878);
    return result;
}

char* sub_140001b20(uint64_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, uint32_t arg5)
{
    void var_a8;
    int64_t rax_1 = __security_cookie ^ &var_a8;
    uint32_t r14 = arg5;
    int32_t var_68;
    char* result = sub_140001310(arg1, arg2, arg3, arg4, r14, &var_68);
    char* result_1 = result;

    if (result)
    {
        TEB* gsbase;

        if (var_68 != 8)
        {
            uint32_t rax_2;

            if (r14)
                rax_2 = r14;
            else
                rax_2 = *arg4;

            int32_t _Size_1 = *arg2 * *arg3 * rax_2;
            int64_t _Size = _Size_1;
            char* result_2 = malloc(_Size);

            if (result_2)
            {
                int32_t i_1 = 0;

                if (_Size_1 > 0 && _Size_1 >= 0x20)
                {
                    int64_t rcx_2 = _Size_1 - 1;

                    if (result_2 > &result_1[rcx_2 << 1] || &result_2[rcx_2] < result_1)
                    {
                        int32_t rax_7 = _Size_1 & 0x8000001f;

                        if (rax_7 < 0)
                            rax_7 = ((rax_7 - 1) | 0xffffffe0) + 1;

                        uint128_t zmm2_1 = 8;
                        void* rcx_3 = &result_2[0x10];
                        void* r9 = &result_1[0x20];

                        do
                        {
                            int32_t zmm0_1[0x4] = *(r9 - 0x20);
                            rcx_3 += 0x20;
                            i_1 += 0x20;
                            int32_t zmm1_1[0x4] = *(r9 - 0x10);
                            r9 += 0x40;
                            int32_t temp0_1[0x4] = _mm_srl_epi16(zmm0_1, zmm2_1);
                            int32_t temp0_2[0x4] = _mm_srl_epi16(zmm1_1, zmm2_1);
                            zmm0_1 = temp0_1 & data_140022d30;
                            zmm1_1 = temp0_2 & data_140022d30;
                            *(rcx_3 - 0x30) = _mm_packus_epi16(zmm0_1, zmm0_1)[0];
                            *(rcx_3 - 0x28) = _mm_packus_epi16(zmm1_1, zmm1_1)[0];
                            zmm1_1 = *(r9 - 0x30);
                            int32_t temp0_5[0x4] = _mm_srl_epi16(*(r9 - 0x40), zmm2_1);
                            int32_t temp0_6[0x4] = _mm_srl_epi16(zmm1_1, zmm2_1);
                            zmm0_1 = temp0_5 & data_140022d30;
                            zmm1_1 = temp0_6 & data_140022d30;
                            *(rcx_3 - 0x20) = _mm_packus_epi16(zmm0_1, zmm0_1)[0];
                            *(rcx_3 - 0x18) = _mm_packus_epi16(zmm1_1, zmm1_1)[0];
                        } while (-0x10 - result_2 + rcx_3 < _Size_1 - rax_7);
                    }
                }

                for (char* i = i_1; i < _Size; i = &i[1])
                    *(i + result_2) = result_1[(i << 1) + 1];

                free(result_1);
                result_1 = result_2;
            }
            else
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
                result_1 = nullptr;
            }

            var_68 = 8;
        }

        int64_t rcx_6 = *gsbase->ThreadLocalStoragePointer;
        int32_t rax_12;

        if (!*(8 + rcx_6))
            rax_12 = data_140028d94;
        else
            rax_12 = *(0xc + rcx_6);

        if (rax_12)
        {
            if (!r14)
                r14 = *arg4;

            sub_140001a00(result_1, *arg2, *arg3, r14);
        }

        result = result_1;
    }

    __security_check_cookie(rax_1 ^ &var_a8);
    return result;
}

int64_t sub_140001d70(void* arg1)
{
    int32_t result_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, *(arg1 + 0x34));
    *(arg1 + 0xb8) += *(arg1 + 0xc0) - *(arg1 + 0xd0);
    *(arg1 + 0xc0) = arg1 + 0x38;

    if (result_1)
    {
        int64_t result = result_1;
        *(arg1 + 0xc8) = arg1 + 0x38 + result;
        return result;
    }

    *(arg1 + 0x30) = result_1;
    *(arg1 + 0xc8) = arg1 + 0x39;
    *(arg1 + 0x38) = 0;
    return arg1 + 0x39;
}

uint64_t sub_140001df0(void* arg1, int64_t arg2, int32_t arg3)
{
    int64_t rbp = arg3;

    if (*(arg1 + 0x10))
    {
        int32_t rsi_2 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

        if (rsi_2 < rbp)
        {
            int64_t rbx = rsi_2;
            memcpy(arg2, *(arg1 + 0xc0), rbx);
            int32_t rbp_1 = rbp - rsi_2;
            int32_t rax = (*(arg1 + 0x10))(*(arg1 + 0x28), rbx + arg2, rbp_1);
            *(arg1 + 0xc0) = *(arg1 + 0xc8);
            int32_t rdx_2;
            rdx_2 = rax == rbp_1;
            return rdx_2;
        }
    }

    int64_t rdx_3 = *(arg1 + 0xc0);

    if (rdx_3 + rbp > *(arg1 + 0xc8))
        return 0;

    memcpy(arg2, rdx_3, rbp);
    *(arg1 + 0xc0) += rbp;
    return 1;
}

uint64_t sub_140001ec0(void* arg1)
{
    char* rax = *(arg1 + 0xc0);
    int64_t rcx = *(arg1 + 0xc8);

    if (rax < rcx)
        goto label_140001efc;

    uint32_t rdi;

    if (!*(arg1 + 0x30))
        rdi = 0;
    else
    {
        sub_140001d70(arg1);
        rax = *(arg1 + 0xc0);
        rcx = *(arg1 + 0xc8);
        label_140001efc:
        char rdx_1 = *rax;
        *(arg1 + 0xc0) = &rax[1];
        rdi = rdx_1;

        if (&rax[1] < rcx)
        {
            char rcx_2 = rax[1];
            *(arg1 + 0xc0) = &rax[2];
            return rcx_2 + (rdi << 8);
        }
    }

    if (!*(arg1 + 0x30))
        return rdi << 8;

    sub_140001d70(arg1);
    char* rax_5 = *(arg1 + 0xc0);
    char rcx_4 = *rax_5;
    *(arg1 + 0xc0) = &rax_5[1];
    return rcx_4 + (rdi << 8);
}

uint64_t sub_140001f80(void* arg1)
{
    char* rax = *(arg1 + 0xc0);
    int64_t rcx = *(arg1 + 0xc8);

    if (rax < rcx)
        goto label_140001fbc;

    uint32_t rdi;

    if (!*(arg1 + 0x30))
        rdi = 0;
    else
    {
        sub_140001d70(arg1);
        rax = *(arg1 + 0xc0);
        rcx = *(arg1 + 0xc8);
        label_140001fbc:
        char rdx_1 = *rax;
        *(arg1 + 0xc0) = &rax[1];
        rdi = rdx_1;

        if (&rax[1] < rcx)
        {
            char rcx_2 = rax[1];
            *(arg1 + 0xc0) = &rax[2];
            return (rcx_2 << 8) + rdi;
        }
    }

    if (!*(arg1 + 0x30))
        return rdi;

    sub_140001d70(arg1);
    char* rax_6 = *(arg1 + 0xc0);
    char rcx_4 = *rax_6;
    *(arg1 + 0xc0) = &rax_6[1];
    return (rcx_4 << 8) + rdi;
}

int64_t sub_140002040(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    uint64_t r12 = arg2;

    if (arg3 == arg2)
        return arg1;

    TEB* gsbase;

    if (arg3 >= 0 && arg4 >= 0 && (!arg4 || arg3 <= COMBINE(0, 0x7fffffff) / arg4))
    {
        int32_t rcx_1 = arg3 * arg4;

        if (rcx_1 >= 0 && arg5 >= 0 && (!arg5 || rcx_1 <= COMBINE(0, 0x7fffffff) / arg5))
        {
            int64_t rax_4 = malloc(rcx_1 * arg5);

            if (rax_4)
            {
                int32_t r11 = 0;

                if (arg5 > 0)
                {
                    while (true)
                    {
                        char* r9_3 = r11 * r12 * arg4 + arg1;
                        char* rax_8 = r11 * arg3 * arg4 + rax_4;

                        switch ((r12 << 3) + -0xfffffffffffffff6 + arg3)
                        {
                            case 0:
                            {
                                int32_t rdx_2 = arg4 - 1;

                                if (rdx_2 >= 0)
                                {
                                    int32_t temp13_1;

                                    do
                                    {
                                        temp13_1 = rdx_2;
                                        rdx_2 -= 1;
                                        *rax_8 = *r9_3;
                                        r9_3 = &r9_3[1];
                                        rax_8[1] = 0xff;
                                        rax_8 = &rax_8[2];
                                    } while (temp13_1 - 1 >= 0);
                                }

                                label_140002403:
                                r11 += 1;

                                if (r11 >= arg5)
                                    break;

                                continue;
                            }
                            case 1:
                            {
                                int32_t rdx_3 = arg4 - 1;

                                if (rdx_3 >= 0)
                                {
                                    int32_t temp15_1;

                                    do
                                    {
                                        temp15_1 = rdx_3;
                                        rdx_3 -= 1;
                                        char rcx_6 = *r9_3;
                                        rax_8[2] = rcx_6;
                                        r9_3 = &r9_3[1];
                                        rax_8[1] = rcx_6;
                                        *rax_8 = rcx_6;
                                        rax_8 = &rax_8[3];
                                    } while (temp15_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 2:
                            {
                                int32_t rdx_4 = arg4 - 1;

                                if (rdx_4 >= 0)
                                {
                                    int32_t temp16_1;

                                    do
                                    {
                                        temp16_1 = rdx_4;
                                        rdx_4 -= 1;
                                        char rcx_7 = *r9_3;
                                        rax_8[2] = rcx_7;
                                        r9_3 = &r9_3[1];
                                        rax_8[1] = rcx_7;
                                        *rax_8 = rcx_7;
                                        rax_8[3] = 0xff;
                                        rax_8 = &rax_8[4];
                                    } while (temp16_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 7:
                            {
                                int32_t rdx_5 = arg4 - 1;

                                if (rdx_5 >= 0)
                                {
                                    int32_t temp17_1;

                                    do
                                    {
                                        temp17_1 = rdx_5;
                                        rdx_5 -= 1;
                                        *rax_8 = *r9_3;
                                        rax_8 = &rax_8[1];
                                        r9_3 = &r9_3[2];
                                    } while (temp17_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 9:
                            {
                                int32_t rdx_6 = arg4 - 1;

                                if (rdx_6 >= 0)
                                {
                                    int32_t temp18_1;

                                    do
                                    {
                                        temp18_1 = rdx_6;
                                        rdx_6 -= 1;
                                        char rcx_9 = *r9_3;
                                        rax_8[2] = rcx_9;
                                        r9_3 = &r9_3[2];
                                        rax_8[1] = rcx_9;
                                        *rax_8 = rcx_9;
                                        rax_8 = &rax_8[3];
                                    } while (temp18_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0xa:
                            {
                                int32_t rdx_7 = arg4 - 1;

                                if (rdx_7 >= 0)
                                {
                                    int32_t temp19_1;

                                    do
                                    {
                                        temp19_1 = rdx_7;
                                        rdx_7 -= 1;
                                        char rcx_10 = *r9_3;
                                        rax_8[2] = rcx_10;
                                        r9_3 = &r9_3[2];
                                        rax_8[1] = rcx_10;
                                        *rax_8 = rcx_10;
                                        rax_8 = &rax_8[4];
                                        rax_8[-1] = r9_3[-1];
                                    } while (temp19_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0xf:
                            {
                                int32_t r10_1 = arg4 - 1;

                                if (r10_1 >= 0)
                                {
                                    int32_t temp20_1;

                                    do
                                    {
                                        rax_8 = &rax_8[1];
                                        int32_t r8 = r9_3[1] * 0x96;
                                        uint32_t rcx_16 = r9_3[2];
                                        r9_3 = &r9_3[3];
                                        temp20_1 = r10_1;
                                        r10_1 -= 1;
                                        rax_8[-1] = (r8 + rcx_16 * 0x1d + r9_3[-3] * 0x4d) >> 8;
                                    } while (temp20_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0x10:
                            {
                                int32_t r10_2 = arg4 - 1;

                                if (r10_2 >= 0)
                                {
                                    int32_t temp21_1;

                                    do
                                    {
                                        rax_8 = &rax_8[2];
                                        int32_t r8_4 = r9_3[1] * 0x96;
                                        uint32_t rcx_19 = r9_3[2];
                                        r9_3 = &r9_3[3];
                                        uint32_t rcx_20 = r9_3[-3];
                                        rax_8[-1] = 0xff;
                                        temp21_1 = r10_2;
                                        r10_2 -= 1;
                                        rax_8[-2] = (r8_4 + rcx_19 * 0x1d + rcx_20 * 0x4d) >> 8;
                                    } while (temp21_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0x12:
                            {
                                int32_t rdx_8 = arg4 - 1;

                                if (rdx_8 >= 0)
                                {
                                    int32_t temp14_1;

                                    do
                                    {
                                        temp14_1 = rdx_8;
                                        rdx_8 -= 1;
                                        *rax_8 = *r9_3;
                                        rax_8 = &rax_8[4];
                                        char rcx_13 = r9_3[1];
                                        r9_3 = &r9_3[3];
                                        rax_8[-3] = rcx_13;
                                        rax_8[-2] = r9_3[-1];
                                        rax_8[-1] = 0xff;
                                    } while (temp14_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0x17:
                            {
                                int32_t r10_3 = arg4 - 1;

                                if (r10_3 >= 0)
                                {
                                    int32_t temp22_1;

                                    do
                                    {
                                        rax_8 = &rax_8[1];
                                        int32_t r8_8 = r9_3[1] * 0x96;
                                        uint32_t rcx_22 = r9_3[2];
                                        r9_3 = &r9_3[4];
                                        temp22_1 = r10_3;
                                        r10_3 -= 1;
                                        rax_8[-1] = (r8_8 + rcx_22 * 0x1d + r9_3[-4] * 0x4d) >> 8;
                                    } while (temp22_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0x18:
                            {
                                int32_t r10_4 = arg4 - 1;

                                if (r10_4 >= 0)
                                {
                                    int32_t temp23_1;

                                    do
                                    {
                                        rax_8 = &rax_8[2];
                                        int32_t r8_12 = r9_3[1] * 0x96;
                                        uint32_t rcx_25 = r9_3[2];
                                        r9_3 = &r9_3[4];
                                        temp23_1 = r10_4;
                                        r10_4 -= 1;
                                        rax_8[-2] = (r8_12 + rcx_25 * 0x1d + r9_3[-4] * 0x4d) >> 8;
                                        rax_8[-1] = r9_3[-1];
                                    } while (temp23_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                            case 0x19:
                            {
                                int32_t rdx_17 = arg4 - 1;

                                if (rdx_17 >= 0)
                                {
                                    int32_t temp24_1;

                                    do
                                    {
                                        temp24_1 = rdx_17;
                                        rdx_17 -= 1;
                                        *rax_8 = *r9_3;
                                        rax_8 = &rax_8[3];
                                        char rcx_29 = r9_3[1];
                                        r9_3 = &r9_3[4];
                                        rax_8[-2] = rcx_29;
                                        rax_8[-1] = r9_3[-2];
                                    } while (temp24_1 - 1 >= 0);
                                }

                                goto label_140002403;
                            }
                        }

                        free(arg1);
                        free(rax_4);
                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unsupported";
                        return 0;
                    }
                }

                free(arg1);
                return rax_4;
            }
        }
    }

    free(arg1);
    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
    return 0;
}

int64_t sub_140002510(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    uint64_t r15 = arg2;

    if (arg3 == arg2)
        return arg1;

    int64_t rax_4 = malloc(arg3 * arg4 * arg5 * 2);
    TEB* gsbase;

    if (!rax_4)
    {
        free(arg1);
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
        return 0;
    }

    int32_t r11_1 = 0;

    if (arg5 > 0)
    {
        while (true)
        {
            int16_t* r9 = arg1 + ((r11_1 * r15 * arg4) << 1);
            int16_t* rax_13 = rax_4 + ((r11_1 * arg3 * arg4) << 1);

            switch ((r15 << 3) + -0xfffffffffffffff6 + arg3)
            {
                case 0:
                {
                    int32_t rdx_2 = arg4 - 1;

                    if (rdx_2 >= 0)
                    {
                        int32_t temp2_1;

                        do
                        {
                            temp2_1 = rdx_2;
                            rdx_2 -= 1;
                            *rax_13 = *r9;
                            r9 = &r9[1];
                            rax_13[1] = 0xffff;
                            rax_13 = &rax_13[2];
                        } while (temp2_1 - 1 >= 0);
                    }

                    label_1400028f8:
                    r11_1 += 1;

                    if (r11_1 >= arg5)
                        break;

                    continue;
                }
                case 1:
                {
                    int32_t rdx_3 = arg4 - 1;

                    if (rdx_3 >= 0)
                    {
                        int32_t temp3_1;

                        do
                        {
                            temp3_1 = rdx_3;
                            rdx_3 -= 1;
                            int16_t rcx_5 = *r9;
                            rax_13[2] = rcx_5;
                            r9 = &r9[1];
                            rax_13[1] = rcx_5;
                            *rax_13 = rcx_5;
                            rax_13 = &rax_13[3];
                        } while (temp3_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 2:
                {
                    int32_t rdx_4 = arg4 - 1;

                    if (rdx_4 >= 0)
                    {
                        int32_t temp4_1;

                        do
                        {
                            temp4_1 = rdx_4;
                            rdx_4 -= 1;
                            int16_t rcx_6 = *r9;
                            rax_13[2] = rcx_6;
                            r9 = &r9[1];
                            rax_13[1] = rcx_6;
                            *rax_13 = rcx_6;
                            rax_13[3] = 0xffff;
                            rax_13 = &rax_13[4];
                        } while (temp4_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 7:
                {
                    int32_t rdx_5 = arg4 - 1;

                    if (rdx_5 >= 0)
                    {
                        int32_t temp0_1;

                        do
                        {
                            temp0_1 = rdx_5;
                            rdx_5 -= 1;
                            *rax_13 = *r9;
                            rax_13 = &rax_13[1];
                            r9 = &r9[2];
                        } while (temp0_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 9:
                {
                    int32_t rdx_6 = arg4 - 1;

                    if (rdx_6 >= 0)
                    {
                        int32_t temp5_1;

                        do
                        {
                            temp5_1 = rdx_6;
                            rdx_6 -= 1;
                            int16_t rcx_8 = *r9;
                            rax_13[2] = rcx_8;
                            r9 = &r9[2];
                            rax_13[1] = rcx_8;
                            *rax_13 = rcx_8;
                            rax_13 = &rax_13[3];
                        } while (temp5_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0xa:
                {
                    int32_t rdx_7 = arg4 - 1;

                    if (rdx_7 >= 0)
                    {
                        int32_t temp6_1;

                        do
                        {
                            temp6_1 = rdx_7;
                            rdx_7 -= 1;
                            int16_t rcx_9 = *r9;
                            rax_13[2] = rcx_9;
                            r9 = &r9[2];
                            rax_13[1] = rcx_9;
                            *rax_13 = rcx_9;
                            rax_13 = &rax_13[4];
                            rax_13[-1] = r9[-1];
                        } while (temp6_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0xf:
                {
                    int32_t r10_1 = arg4 - 1;

                    if (r10_1 >= 0)
                    {
                        int32_t temp8_1;

                        do
                        {
                            rax_13 = &rax_13[1];
                            int32_t r8 = r9[1] * 0x96;
                            uint32_t rcx_15 = r9[2];
                            r9 = &r9[3];
                            temp8_1 = r10_1;
                            r10_1 -= 1;
                            rax_13[-1] = (r8 + rcx_15 * 0x1d + r9[-3] * 0x4d) >> 8;
                        } while (temp8_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0x10:
                {
                    int32_t r10_2 = arg4 - 1;

                    if (r10_2 >= 0)
                    {
                        int32_t temp9_1;

                        do
                        {
                            rax_13 = &rax_13[2];
                            int32_t r8_4 = r9[1] * 0x96;
                            uint32_t rcx_18 = r9[2];
                            r9 = &r9[3];
                            uint32_t rcx_19 = r9[-3];
                            rax_13[-1] = 0xffff;
                            temp9_1 = r10_2;
                            r10_2 -= 1;
                            rax_13[-2] = (r8_4 + rcx_18 * 0x1d + rcx_19 * 0x4d) >> 8;
                        } while (temp9_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0x12:
                {
                    int32_t rdx_8 = arg4 - 1;

                    if (rdx_8 >= 0)
                    {
                        int32_t temp7_1;

                        do
                        {
                            temp7_1 = rdx_8;
                            rdx_8 -= 1;
                            *rax_13 = *r9;
                            rax_13 = &rax_13[4];
                            int16_t rcx_12 = r9[1];
                            r9 = &r9[3];
                            rax_13[-3] = rcx_12;
                            rax_13[-2] = r9[-1];
                            rax_13[-1] = 0xffff;
                        } while (temp7_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0x17:
                {
                    int32_t r10_3 = arg4 - 1;

                    if (r10_3 >= 0)
                    {
                        int32_t temp10_1;

                        do
                        {
                            rax_13 = &rax_13[1];
                            int32_t r8_8 = r9[1] * 0x96;
                            uint32_t rcx_21 = r9[2];
                            r9 = &r9[4];
                            temp10_1 = r10_3;
                            r10_3 -= 1;
                            rax_13[-1] = (r8_8 + rcx_21 * 0x1d + r9[-4] * 0x4d) >> 8;
                        } while (temp10_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0x18:
                {
                    int32_t r10_4 = arg4 - 1;

                    if (r10_4 >= 0)
                    {
                        int32_t temp11_1;

                        do
                        {
                            rax_13 = &rax_13[2];
                            int32_t r8_12 = r9[1] * 0x96;
                            uint32_t rcx_24 = r9[2];
                            r9 = &r9[4];
                            temp11_1 = r10_4;
                            r10_4 -= 1;
                            rax_13[-2] = (r8_12 + rcx_24 * 0x1d + r9[-4] * 0x4d) >> 8;
                            rax_13[-1] = r9[-1];
                        } while (temp11_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
                case 0x19:
                {
                    int32_t rdx_17 = arg4 - 1;

                    if (rdx_17 >= 0)
                    {
                        int32_t temp1_1;

                        do
                        {
                            temp1_1 = rdx_17;
                            rdx_17 -= 1;
                            *rax_13 = *r9;
                            rax_13 = &rax_13[3];
                            int16_t rcx_28 = r9[1];
                            r9 = &r9[4];
                            rax_13[-2] = rcx_28;
                            rax_13[-1] = r9[-2];
                        } while (temp1_1 - 1 >= 0);
                    }

                    goto label_1400028f8;
                }
            }

            free(arg1);
            free(rax_4);
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unsupported";
            return 0;
        }
    }

    free(arg1);
    return rax_4;
}

char* sub_1400029d0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int64_t rsi = arg4;
    int32_t* rdi = arg1;

    if (arg1)
    {
        if (arg2 >= 0 && arg3 >= 0 && (!arg3 || arg2 <= COMBINE(0, 0x7fffffff) / arg3))
        {
            int32_t i_3 = arg2 * arg3;

            if (i_3 >= 0 && arg4 >= 0 && (!arg4 || i_3 <= COMBINE(0, 0x7fffffff) / rsi))
            {
                char* result = malloc(i_3 * rsi);
                char* result_1 = result;

                if (result)
                {
                    int32_t rax_5 = rsi;

                    if (!(rsi & 1))
                        rax_5 = rsi - 1;

                    int32_t var_78 = rax_5;

                    if (i_3 > 0)
                    {
                        int64_t r10_1 = rsi << 2;
                        int64_t r9 = rsi;
                        int32_t r13_1 = 0;
                        char* result_2 = result_1;
                        int32_t* r15_1 = rdi;
                        uint64_t i_1 = i_3;
                        int64_t r12_1 = rax_5;
                        int64_t var_60_1 = r10_1;
                        uint64_t i_2 = i_1;
                        uint64_t i;

                        do
                        {
                            int32_t rbp_1 = 0;

                            if (r12_1 > 0)
                            {
                                int64_t rbx_1 = 0;
                                int32_t* rdi_1 = r15_1;
                                rbp_1 = rax_5;

                                do
                                {
                                    float zmm0 = powf(*rdi_1, 0.454545438f) * 255f;
                                    rdi_1 = &rdi_1[1];
                                    result_2[rbx_1] = _mm_min_ss(0x437f0000, _mm_max_ss(0, zmm0 + 0.5f));
                                    rbx_1 += 1;
                                } while (rbx_1 < r12_1);

                                i_1 = i_2;
                                r9 = rsi;
                                rdi = arg1;
                                result_1 = result;
                                r10_1 = var_60_1;
                            }

                            if (rbp_1 < rsi)
                            {
                                char* rcx_2 = r13_1 + rbp_1;
                                *(rcx_2 + result_1) = _mm_min_ss(0x437f0000, _mm_max_ss({0}, rdi[rcx_2] * 255f + 0.5f));
                            }

                            rax_5 = var_78;
                            r13_1 += rsi;
                            r15_1 += r10_1;
                            result_2 = &result_2[r9];
                            i = i_1;
                            i_1 -= 1;
                            i_2 = i_1;
                        } while (i != 1);
                    }

                    free(rdi);
                    return result;
                }
            }
        }

        free(rdi);
        TEB* gsbase;
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
    }

    return 0;
}

int64_t sub_140002c10(void* arg1, int32_t* arg2)
{
    int32_t rsi = 0;
    int32_t* r14 = arg2;
    int32_t r13 = 0;
    int32_t i = 0;
    int64_t r12 = 0;

    do
    {
        uint64_t rbp_1 = *r14;

        if (rbp_1 > 0)
        {
            memset(arg1 + 0x500 + r12, i + 1, rbp_1);
            r13 += rbp_1;
            r12 += rbp_1;
        }

        i += 1;
        r14 = &r14[1];
    } while (i < 0x10);

    int32_t* r14_1 = arg1 + 0x608;
    int32_t i_1 = 1;
    int32_t rbx = 0;
    int64_t r9 = 0;
    *(r13 + arg1 + 0x500) = 0;
    int32_t rax_1 = 0;
    int32_t rdi = 0xf;
    int32_t temp0_1;

    do
    {
        char* rdx_2 = arg1 + 0x500 + r9;
        r14_1[0x12] = rbx - rax_1;

        if (*rdx_2 == i_1)
        {
            int16_t* r8_3 = arg1 + 0x200 + (r9 << 1);
            int32_t r11_1;

            do
            {
                *r8_3 = rax_1;
                rdx_2 = &rdx_2[1];
                r8_3 = &r8_3[1];
                r11_1 = rax_1;
                rbx += 1;
                r9 += 1;
                rax_1 += 1;
            } while (*rdx_2 == i_1);

            if (r11_1 >= 1 << i_1)
            {
                TEB* gsbase;
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad code lengths";
                return 0;
            }
        }

        int32_t rdx_5 = rax_1 << rdi;
        rax_1 *= 2;
        *r14_1 = rdx_5;
        i_1 += 1;
        r14_1 = &r14_1[1];
        temp0_1 = rdi;
        rdi -= 1;
    } while (temp0_1 - 1 >= 0);
    *(arg1 + (i_1 << 2) + 0x604) = 0xffffffff;
    memset(arg1, 0xff, 0x200);

    if (rbx > 0)
    {
        void* rdi_1 = arg1 + 0x500;
        void* rbp_2 = arg1 + 0x200;

        do
        {
            uint32_t rax_3 = *rdi_1;

            if (rax_3 <= 9)
            {
                int32_t rax_4 = 1 << (9 - rax_3);

                if (rax_4 > 0)
                    memset((*rbp_2 << (9 - rax_3)) + arg1, rsi, rax_4);
            }

            rsi += 1;
            rbp_2 += 2;
            rdi_1 += 1;
        } while (rsi < rbx);
    }

    return 1;
}

uint32_t sub_140002dd0(int64_t* arg1)
{
    int64_t* rdi = arg1;
    int32_t rdx_1;

    do
    {
        uint32_t rsi_1;

        if (!*(rdi + 0x482c))
        {
            void* rbx_1 = *rdi;
            char* rax_1 = *(rbx_1 + 0xc0);

            if (rax_1 < *(rbx_1 + 0xc8))
            {
                arg1 = *rax_1;
                *(rbx_1 + 0xc0) = &rax_1[1];
            }
            else if (!*(rbx_1 + 0x30))
                arg1 = 0;
            else
            {
                sub_140001d70(rbx_1);
                char* rax_3 = *(rbx_1 + 0xc0);
                arg1 = *rax_3;
                *(rbx_1 + 0xc0) = &rax_3[1];
            }

            rsi_1 = arg1;

            if (rsi_1 == 0xff)
            {
                void* rbx_2 = *rdi;
                char* rax_5 = *(rbx_2 + 0xc0);

                if (rax_5 < *(rbx_2 + 0xc8))
                {
                    arg1 = *rax_5;
                    *(rbx_2 + 0xc0) = &rax_5[1];
                }
                else if (!*(rbx_2 + 0x30))
                    arg1 = 0;
                else
                {
                    sub_140001d70(rbx_2);
                    char* rax_7 = *(rbx_2 + 0xc0);
                    arg1 = *rax_7;
                    *(rbx_2 + 0xc0) = &rax_7[1];
                }

                uint32_t i;

                for (i = arg1; i == 0xff; i = arg1)
                {
                    void* rbx_3 = *rdi;
                    char* rax_9 = *(rbx_3 + 0xc0);

                    if (rax_9 < *(rbx_3 + 0xc8))
                    {
                        arg1 = *rax_9;
                        *(rbx_3 + 0xc0) = &rax_9[1];
                    }
                    else if (!*(rbx_3 + 0x30))
                        arg1 = 0;
                    else
                    {
                        sub_140001d70(rbx_3);
                        char* rax_11 = *(rbx_3 + 0xc0);
                        arg1 = *rax_11;
                        *(rbx_3 + 0xc0) = &rax_11[1];
                    }
                }

                if (i)
                {
                    rdi[0x905] = i;
                    *(rdi + 0x482c) = 1;
                    return i;
                }
            }
        }
        else
            rsi_1 = 0;

        rdx_1 = *(rdi + 0x4824);
        rdi[0x904] |= rsi_1 << (0x18 - rdx_1);
        *(rdi + 0x4824) = rdx_1 + 8;
    } while (rdx_1 + 8 <= 0x18);

    return rdx_1 + 8;
}

int64_t sub_140002f50(int64_t* arg1, int16_t* arg2, void* arg3, void* arg4, int64_t arg5, int32_t arg6, int16_t* arg7)
{
    if (*(arg1 + 0x4824) < 0x10)
    {
        sub_140002dd0(arg1);

        if (*(arg1 + 0x4824) < 0x10)
            sub_140002dd0(arg1);
    }

    int32_t r10 = arg1[0x904];
    uint64_t rcx_1 = *((r10 >> 0x17) + arg3);
    uint32_t rdi_1;
    TEB* gsbase;

    if (rcx_1 >= 0xff)
    {
        int32_t* rax_6 = arg3 + 0x62c;
        int32_t r9 = 0xa;

        while (r10 >> 0x10 >= *rax_6)
        {
            r9 += 1;
            rax_6 = &rax_6[1];
        }

        int32_t r11_1 = *(arg1 + 0x4824);

        if (r9 == 0x11)
        {
            *(arg1 + 0x4824) = r11_1 - 0x10;
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
            return 0;
        }

        if (r9 > r11_1)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
            return 0;
        }

        int64_t rdx_1 = r9;
        int64_t rax_14 = (r10 >> (0x20 - r9) & *((rdx_1 << 2) + 0x140022210)) + *(arg3 + (rdx_1 << 2) + 0x64c);
        *(arg1 + 0x4824) = r11_1 - r9;
        arg1[0x904] = r10 << r9;
        rdi_1 = *(rax_14 + arg3 + 0x400);
    }
    else
    {
        int32_t rax_4 = *(arg1 + 0x4824);
        uint32_t rcx_2 = *(rcx_1 + arg3 + 0x500);

        if (rcx_2 > rax_4)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
            return 0;
        }

        arg1[0x904] = r10 << rcx_2;
        *(arg1 + 0x4824) = rax_4 - rcx_2;
        rdi_1 = *(rcx_1 + arg3 + 0x400);
    }

    __builtin_memset(arg2, 0, 0x80);
    int32_t r8;
    int32_t r9_1;
    int32_t r10_4;

    if (rdi_1)
    {
        r9_1 = *(arg1 + 0x4824);

        if (r9_1 < rdi_1)
        {
            sub_140002dd0(arg1);
            r9_1 = *(arg1 + 0x4824);
        }

        r8 = arg1[0x904];
        r10_4 = ROLD(r8, rdi_1);
    }

    int32_t r8_4;

    if (!rdi_1 || rdi_1 >= 0x11)
        r8_4 = 0;
    else
    {
        *(arg1 + 0x4824) = r9_1 - rdi_1;
        int64_t rcx_10 = rdi_1 << 2;
        int32_t rdx_2 = *(rcx_10 + 0x140022210);
        arg1[0x904] = ~rdx_2 & r10_4;
        r8_4 = (~(r8 >> 0x1f) & *(rcx_10 + 0x140021f60)) + (rdx_2 & r10_4);
    }

    int32_t i = 1;
    int32_t rdx_5 = arg1[arg6 * 0xc + 0x8d7] + r8_4;
    arg1[arg6 * 0xc + 0x8d7] = rdx_5;
    *arg2 = rdx_5 * *arg7;

    do
    {
        int32_t r8_5 = *(arg1 + 0x4824);

        if (r8_5 < 0x10)
        {
            sub_140002dd0(arg1);
            r8_5 = *(arg1 + 0x4824);
        }

        int32_t rdx_8 = arg1[0x904];
        int32_t r9_3 = *(arg5 + (rdx_8 >> 0x17 << 1));

        if (!r9_3)
        {
            int32_t r9_5 = rdx_8;

            if (r8_5 < 0x10)
            {
                sub_140002dd0(arg1);
                rdx_8 = arg1[0x904];
                r9_5 = rdx_8;
            }

            uint64_t rcx_21 = *((r9_5 >> 0x17) + arg4);
            uint64_t rax_31;
            int32_t r9_6;
            int32_t r11_4;

            if (rcx_21 >= 0xff)
            {
                int32_t* rax_32 = arg4 + 0x62c;
                int32_t r8_7 = 0xa;
                int64_t r10_5 = 0xa;

                while (r9_5 >> 0x10 >= *rax_32)
                {
                    r8_7 += 1;
                    rax_32 = &rax_32[1];
                    r10_5 += 1;
                }

                int32_t r11_5 = *(arg1 + 0x4824);

                if (r8_7 == 0x11)
                {
                    *(arg1 + 0x4824) = r11_5 - 0x10;
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
                    return 0;
                }

                if (r8_7 > r11_5)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
                    return 0;
                }

                r11_4 = r11_5 - r8_7;
                r9_6 = rdx_8 << r8_7;
                rax_31 = (rdx_8 >> (0x20 - r8_7) & *((r10_5 << 2) + 0x140022210)) + *(arg4 + (r10_5 << 2) + 0x64c);
            }
            else
            {
                int32_t r11_3 = *(arg1 + 0x4824);
                rax_31 = rcx_21;
                uint32_t rcx_22 = *(rcx_21 + arg4 + 0x500);

                if (rcx_22 > r11_3)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
                    return 0;
                }

                r9_6 = r9_5 << rcx_22;
                r11_4 = r11_3 - rcx_22;
            }

            *(arg1 + 0x4824) = r11_4;
            int32_t r10_6 = r11_4;
            arg1[0x904] = r9_6;
            uint32_t rax_37 = *(rax_31 + arg4 + 0x400);
            uint64_t rsi_2 = rax_37 & 0xf;

            if (rsi_2)
            {
                int32_t rdi_3 = i + (rax_37 >> 4);
                i = rdi_3 + 1;
                uint64_t r15_1 = *(rdi_3 + &data_1400220c0);

                if (r11_4 < rsi_2)
                {
                    sub_140002dd0(arg1);
                    r9_6 = arg1[0x904];
                    r10_6 = *(arg1 + 0x4824);
                }

                int32_t r8_9 = ROLD(r9_6, rsi_2);
                uint64_t rcx_27 = rsi_2 << 2;
                int32_t rdx_9 = *(rcx_27 + 0x140022210);
                int16_t r9_12 = (~(r9_6 >> 0x1f) & *(rcx_27 + 0x140021f60)) + (rdx_9 & r8_9);
                *(arg1 + 0x4824) = r10_6 - rsi_2;
                int16_t* r8_10 = r15_1 * 2;
                arg1[0x904] = ~rdx_9 & r8_9;
                *(r8_10 + arg2) = *(r8_10 + arg7) * r9_12;
            }
            else
            {
                if (rax_37 != 0xf0)
                    break;

                i += 0x10;
            }
        }
        else
        {
            int32_t rcx_17 = r9_3 & 0xf;
            int32_t rdi_2 = i + (r9_3 >> 4 & 0xf);
            arg1[0x904] = rdx_8 << rcx_17;
            i = rdi_2 + 1;
            *(arg1 + 0x4824) = r8_5 - rcx_17;
            int16_t* rdx_7 = *(rdi_2 + &data_1400220c0) * 2;
            *(rdx_7 + arg2) = *(rdx_7 + arg7) * (r9_3 >> 8);
        }
    } while (i < 0x40);

    return 1;
}

int64_t sub_1400033e0(int64_t* arg1, int16_t* arg2, void* arg3, int32_t arg4)
{
    TEB* gsbase;

    if (arg1[0x907])
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "can't merge dc and ac";
        return 0;
    }

    if (*(arg1 + 0x4824) < 0x10)
        sub_140002dd0(arg1);

    if (*(arg1 + 0x483c))
    {
        int32_t rax_17 = *(arg1 + 0x4824);

        if (rax_17 < 1)
        {
            sub_140002dd0(arg1);
            rax_17 = *(arg1 + 0x4824);
        }

        int32_t rdx_5 = arg1[0x904];
        arg1[0x904] = rdx_5 * 2;
        *(arg1 + 0x4824) = rax_17 - 1;

        if (rdx_5 < 0)
            *arg2 += 1 << arg1[0x908];
    }
    else
    {
        __builtin_memset(arg2, 0, 0x80);

        if (*(arg1 + 0x4824) < 0x10)
            sub_140002dd0(arg1);

        int32_t r10_1 = arg1[0x904];
        uint64_t rcx_2 = *((r10_1 >> 0x17) + arg3);
        uint64_t rax_4;
        int32_t r10_2;
        int32_t r11_2;

        if (rcx_2 >= 0xff)
        {
            int32_t* rax_5 = arg3 + 0x62c;
            int32_t r9 = 0xa;

            while (r10_1 >> 0x10 >= *rax_5)
            {
                r9 += 1;
                rax_5 = &rax_5[1];
            }

            int32_t r11_3 = *(arg1 + 0x4824);

            if (r9 == 0x11)
            {
                *(arg1 + 0x4824) = r11_3 - 0x10;
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "can't merge dc and ac";
                return 0;
            }

            if (r9 > r11_3)
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "can't merge dc and ac";
                return 0;
            }

            int64_t rdx = r9;
            r11_2 = r11_3 - r9;
            r10_2 = r10_1 << r9;
            rax_4 = (r10_1 >> (0x20 - r9) & *((rdx << 2) + 0x140022210)) + *(arg3 + (rdx << 2) + 0x64c);
        }
        else
        {
            int32_t r11_1 = *(arg1 + 0x4824);
            rax_4 = rcx_2;
            uint32_t rcx_3 = *(rcx_2 + arg3 + 0x500);

            if (rcx_3 > r11_1)
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "can't merge dc and ac";
                return 0;
            }

            r10_2 = r10_1 << rcx_3;
            r11_2 = r11_1 - rcx_3;
        }

        *(arg1 + 0x4824) = r11_2;
        arg1[0x904] = r10_2;
        uint32_t rsi_1 = *(rax_4 + arg3 + 0x400);
        int32_t r9_2;

        if (rsi_1)
        {
            if (r11_2 < rsi_1)
            {
                sub_140002dd0(arg1);
                r10_2 = arg1[0x904];
            }

            r9_2 = ROLD(r10_2, rsi_1);
        }

        int32_t r8_2;

        if (!rsi_1 || rsi_1 > 0x10)
            r8_2 = 0;
        else
        {
            *(arg1 + 0x4824) -= rsi_1;
            int64_t rcx_11 = rsi_1 << 2;
            int32_t rdx_1 = *(rcx_11 + 0x140022210);
            arg1[0x904] = ~rdx_1 & r9_2;
            r8_2 = (*(rcx_11 + 0x140021f60) & ~(r10_2 >> 0x1f)) + (rdx_1 & r9_2);
        }

        int64_t rcx_13 = arg4 * 0x60;
        int32_t rdx_4 = *(rcx_13 + arg1 + 0x46b8) + r8_2;
        *(rcx_13 + arg1 + 0x46b8) = rdx_4;
        rdx_4 <<= arg1[0x908];
        *arg2 = rdx_4;
    }

    return 1;
}

int64_t sub_140003660(int64_t* arg1, int64_t arg2, void* arg3, int64_t arg4)
{
    int64_t rdi = *(arg1 + 0x4834);
    void* rsi = arg3;
    TEB* gsbase;

    if (!rdi)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "can't merge dc and ac";
        return 0;
    }

    int32_t rax_2 = *(arg1 + 0x4844);
    char r15 = arg1[0x908];
    int32_t rax_28;

    if (*(arg1 + 0x483c))
    {
        int16_t r14_1 = 1 << r15;

        if (rax_2)
        {
            *(arg1 + 0x4844) = rax_2 - 1;

            if (rdi > arg1[0x907])
                return 1;

            void* rbp_3 = &data_1400220c0 + rdi;

            do
            {
                uint64_t rax_30 = *rbp_3;
                int16_t* rsi_4 = arg2 + (rax_30 << 1);

                if (*(arg2 + (rax_30 << 1)))
                {
                    int32_t rdx_9 = *(arg1 + 0x4824);

                    if (rdx_9 < 1)
                    {
                        sub_140002dd0(arg1);
                        rdx_9 = *(arg1 + 0x4824);
                    }

                    int32_t rcx_19 = arg1[0x904];
                    arg1[0x904] = rcx_19 * 2;
                    *(arg1 + 0x4824) = rdx_9 - 1;

                    if (rcx_19 < 0)
                    {
                        int16_t rax_33 = *rsi_4;

                        if (!(r14_1 & rax_33))
                        {
                            if (rax_33 <= 0)
                                rax_33 -= r14_1;
                            else
                                rax_33 += r14_1;

                            *rsi_4 = rax_33;
                        }
                    }
                }

                rdi = rdi + 1;
                rbp_3 += 1;
            } while (rdi <= arg1[0x907]);

            return 1;
        }

        int64_t r12_1 = rdi;

        while (true)
        {
            if (*(arg1 + 0x4824) < 0x10)
                sub_140002dd0(arg1);

            int32_t r9_6 = arg1[0x904];
            uint64_t rcx_21 = *((r9_6 >> 0x17) + rsi);
            uint64_t rax_36;
            int32_t r8_9;
            int32_t r9_7;

            if (rcx_21 >= 0xff)
            {
                void* rax_37 = rsi + 0x62c;
                int32_t r10_7 = 0xa;
                int64_t r11_4 = 0xa;

                while (r9_6 >> 0x10 >= *rax_37)
                {
                    r10_7 += 1;
                    rax_37 += 4;
                    r11_4 += 1;
                }

                int32_t r8_10 = *(arg1 + 0x4824);

                if (r10_7 == 0x11)
                {
                    rax_28 = r8_10 - 0x10;
                    break;
                }

                if (r10_7 > r8_10)
                    goto label_140003cc2;

                r8_9 = r8_10 - r10_7;
                r9_7 = r9_6 << r10_7;
                rax_36 = (r9_6 >> (0x20 - r10_7) & *((r11_4 << 2) + 0x140022210)) + *(rsi + (r11_4 << 2) + 0x64c);
            }
            else
            {
                int32_t r8_8 = *(arg1 + 0x4824);
                rax_36 = rcx_21;
                uint32_t rcx_22 = *(rcx_21 + rsi + 0x500);

                if (rcx_22 > r8_8)
                    goto label_140003cc2;

                r9_7 = r9_6 << rcx_22;
                r8_9 = r8_8 - rcx_22;
            }

            *(arg1 + 0x4824) = r8_9;
            arg1[0x904] = r9_7;
            uint32_t rbp_4 = *(rax_36 + rsi + 0x400);
            uint64_t rbp_5 = rbp_4 >> 4;
            int32_t r15_2 = rbp_4 & 0xf;

            if (r15_2)
            {
                if (r15_2 != 1)
                    goto label_140003cc2;

                if (r8_9 < r15_2)
                {
                    sub_140002dd0(arg1);
                    r8_9 = *(arg1 + 0x4824);
                    r9_7 = arg1[0x904];
                }

                r15_2 = r14_1;
                arg1[0x904] = r9_7 * 2;
                *(arg1 + 0x4824) = r8_9 - 1;

                if (r9_7 >= 0)
                    r15_2 = -(r15_2);
            }
            else if (rbp_5 < 0xf)
            {
                int32_t rdx_11 = (1 << rbp_5) - 1;
                *(arg1 + 0x4844) = rdx_11;

                if (rbp_5)
                {
                    if (r8_9 < rbp_5)
                    {
                        sub_140002dd0(arg1);
                        r8_9 = *(arg1 + 0x4824);
                        rdx_11 = *(arg1 + 0x4844);
                        r9_7 = arg1[0x904];
                    }

                    int32_t r9_8 = ROLD(r9_7, rbp_5);
                    int32_t rcx_30 = *((rbp_5 << 2) + 0x140022210);
                    *(arg1 + 0x4824) = r8_9 - rbp_5;
                    arg1[0x904] = ~rcx_30 & r9_8;
                    *(arg1 + 0x4844) = (rcx_30 & r9_8) + rdx_11;
                }

                rbp_5 = 0x40;
            }

            if (rdi > arg1[0x907])
                return 1;

            int64_t rcx_34 = arg2;

            while (true)
            {
                rdi = rdi + 1;
                int16_t* rsi_5 = rcx_34 + (*(r12_1 + &data_1400220c0) << 1);
                r12_1 += 1;

                if (!*rsi_5)
                {
                    if (!rbp_5)
                    {
                        *rsi_5 = r15_2;
                        rsi = arg3;
                        break;
                    }

                    rbp_5 = rbp_5 - 1;
                }
                else
                {
                    int32_t rdx_12 = *(arg1 + 0x4824);

                    if (rdx_12 < 1)
                    {
                        sub_140002dd0(arg1);
                        rdx_12 = *(arg1 + 0x4824);
                    }

                    int32_t rcx_36 = arg1[0x904];
                    arg1[0x904] = rcx_36 * 2;
                    *(arg1 + 0x4824) = rdx_12 - 1;
                    int16_t rax_51;

                    if (rcx_36 < 0)
                        rax_51 = *rsi_5;

                    if (rcx_36 >= 0 || r14_1 & rax_51)
                        rcx_34 = arg2;
                    else
                    {
                        rcx_34 = arg2;

                        if (rax_51 <= 0)
                            *rsi_5 = rax_51 - r14_1;
                        else
                            *rsi_5 = rax_51 + r14_1;
                    }
                }

                if (rdi > arg1[0x907])
                    return 1;
            }

            if (rdi > arg1[0x907])
                return 1;
        }
    }
    else
    {
        if (rax_2)
        {
            *(arg1 + 0x4844) = rax_2 - 1;
            return 1;
        }

        while (true)
        {
            int32_t r8 = *(arg1 + 0x4824);

            if (r8 < 0x10)
            {
                sub_140002dd0(arg1);
                r8 = *(arg1 + 0x4824);
            }

            int32_t r10_2 = arg1[0x904];
            int32_t rdx = *(arg4 + (r10_2 >> 0x17 << 1));

            if (!rdx)
            {
                int32_t rdx_2 = r10_2;

                if (r8 < 0x10)
                {
                    sub_140002dd0(arg1);
                    r10_2 = arg1[0x904];
                    rdx_2 = r10_2;
                }

                uint64_t rcx_6 = *((rdx_2 >> 0x17) + rsi);
                uint64_t rax_14;
                int32_t rdx_3;
                int32_t r9_1;
                int32_t r10_3;

                if (rcx_6 >= 0xff)
                {
                    int32_t* rax_15 = rsi + 0x62c;
                    int32_t r8_2 = 0xa;
                    int64_t r11_1 = 0xa;

                    while (rdx_2 >> 0x10 >= *rax_15)
                    {
                        r8_2 += 1;
                        rax_15 = &rax_15[1];
                        r11_1 += 1;
                    }

                    int32_t r9_2 = *(arg1 + 0x4824);

                    if (r8_2 == 0x11)
                    {
                        rax_28 = r9_2 - 0x10;
                        break;
                    }

                    if (r8_2 > r9_2)
                        goto label_140003cc2;

                    r9_1 = r9_2 - r8_2;
                    r10_3 = r10_2 << r8_2;
                    arg1[0x904] = r10_3;
                    rdx_3 = r10_3;
                    rax_14 = (r10_2 >> (0x20 - r8_2) & *((r11_1 << 2) + 0x140022210)) + *(rsi + (r11_1 << 2) + 0x64c);
                }
                else
                {
                    int32_t r9 = *(arg1 + 0x4824);
                    rax_14 = rcx_6;
                    uint32_t rcx_7 = *(rcx_6 + rsi + 0x500);

                    if (rcx_7 > r9)
                        goto label_140003cc2;

                    rdx_3 = rdx_2 << rcx_7;
                    arg1[0x904] = rdx_3;
                    r9_1 = r9 - rcx_7;
                    r10_3 = rdx_3;
                }

                *(arg1 + 0x4824) = r9_1;
                int32_t r11_2 = r9_1;
                uint32_t rsi_1 = *(rax_14 + rsi + 0x400);
                uint64_t rsi_2 = rsi_1 >> 4;
                uint64_t rbp_2 = rsi_1 & 0xf;

                if (rbp_2)
                {
                    int32_t rdi_2 = rdi + rsi_2;
                    rdi = rdi_2 + 1;
                    uint64_t rsi_3 = *(rdi_2 + &data_1400220c0);

                    if (r9_1 < rbp_2)
                    {
                        sub_140002dd0(arg1);
                        r10_3 = arg1[0x904];
                        r11_2 = *(arg1 + 0x4824);
                    }

                    int32_t r9_4 = ROLD(r10_3, rbp_2);
                    uint64_t rcx_12 = rbp_2 << 2;
                    int32_t r8_3 = *(rcx_12 + 0x140022210);
                    int16_t rdx_6 = *(rcx_12 + 0x140021f60) & ~(r10_3 >> 0x1f);
                    *(arg1 + 0x4824) = r11_2 - rbp_2;
                    arg1[0x904] = ~r8_3 & r9_4;
                    *(arg2 + (rsi_3 << 1)) = (rdx_6 + (r8_3 & r9_4)) << r15;
                }
                else
                {
                    if (rsi_2 < 0xf)
                    {
                        int32_t r8_5 = 1 << rsi_2;
                        *(arg1 + 0x4844) = r8_5;

                        if (rsi_2)
                        {
                            int32_t r10_6 = r8_5;

                            if (r9_1 < rsi_2)
                            {
                                sub_140002dd0(arg1);
                                r9_1 = *(arg1 + 0x4824);
                                r10_6 = *(arg1 + 0x4844);
                                rdx_3 = arg1[0x904];
                            }

                            int32_t r8_6 = *((rsi_2 << 2) + 0x140022210);
                            *(arg1 + 0x4824) = r9_1 - rsi_2;
                            int32_t rdx_8 = ROLD(rdx_3, rsi_2);
                            arg1[0x904] = ~r8_6 & rdx_8;
                            r8_5 = (r8_6 & rdx_8) + r10_6;
                        }

                        *(arg1 + 0x4844) = r8_5 - 1;
                        return 1;
                    }

                    rdi = rdi + 0x10;
                }

                rsi = arg3;
            }
            else
            {
                int32_t rcx_3 = rdx & 0xf;
                int32_t rdi_1 = rdi + (rdx >> 4 & 0xf);
                rdi = rdi_1 + 1;
                arg1[0x904] = r10_2 << rcx_3;
                *(arg1 + 0x4824) = r8 - rcx_3;
                *(arg2 + (*(rdi_1 + &data_1400220c0) << 1)) = rdx >> 8 << r15;
            }

            if (rdi > arg1[0x907])
                return 1;
        }
    }

    *(arg1 + 0x4824) = rax_28;
    label_140003cc2:
    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
    return 0;
}

int32_t sub_140003cf0(void* arg1, int32_t arg2, void* arg3)
{
    int32_t var_168;
    int64_t rax_1 = __security_cookie ^ &var_168;
    void var_128;
    void* rbp = &var_128;
    int16_t* rax_2 = arg3 + 0x20;
    int64_t i_2 = 4;
    int64_t i;

    do
    {
        int32_t rbx_1 = rax_2[-8];
        int32_t rcx_1;
        int32_t rdx;
        int32_t r13_1;

        if (rbx_1 || *rax_2 != rbx_1 || rax_2[8] != rbx_1 || rax_2[0x10] != rbx_1 || rax_2[0x18] != rbx_1 || rax_2[0x20] != rbx_1 || rax_2[0x28] != rbx_1)
        {
            int32_t r11_1 = rax_2[8];
            int32_t r9_1 = *rax_2;
            int32_t rdx_1 = rax_2[0x20];
            int32_t r14_1 = rax_2[0x28];
            int32_t rsi_1 = rax_2[0x18];
            int32_t r13_2 = rax_2[-0x10];
            int32_t r8 = (rdx_1 + r9_1) * 0x8a9;
            int32_t r9_2 = rsi_1 + rbx_1;
            int32_t r10_2 = r8 - rdx_1 * 0x1d8f;
            int32_t rcx_4 = rax_2[0x10];
            int32_t rdx_3 = r9_1 * 0xc3f + r8;
            int32_t r8_2 = (rcx_4 + r13_2) << 0xc;
            int32_t r13_4 = (r13_2 - rcx_4) << 0xc;
            var_168 = r8_2 - rdx_3;
            int32_t r8_4 = r14_1 + r11_1;
            int32_t rdi_1 = (r9_2 + r8_4) * 0x12d0;
            int32_t rbx_3 = rdi_1 - (r14_1 + rbx_1) * 0xe65;
            int32_t rcx_8 = r9_2 * 0xfffff9c3;
            int32_t rdi_2 = rdi_1 - (rsi_1 + r11_1) * 0x2901;
            int32_t rdx_6 = r8_4 * 0xffffe09e;
            int32_t r11_4 = r14_1 * 0x4c7 + rbx_3 + rdx_6;
            int32_t r8_7 = rbx_1 * 0x1805 + rcx_8 + rbx_3;
            int32_t r9_5 = r11_1 * 0x312a + rdx_6 + rdi_2;
            int32_t r10_6 = rsi_1 * 0x20da + rcx_8 + rdi_2;
            int32_t rdx_8 = var_168 + 0x200;
            *(rbp - 0x20) = (r8_2 + rdx_3 + 0x200 + r8_7) >> 0xa;
            *rbp = (r10_2 + r13_4 + 0x200 + r9_5) >> 0xa;
            *(rbp + 0x20) = (r10_6 + r13_4 - r10_2 + 0x200) >> 0xa;
            rcx_1 = (rdx_8 + r11_4) >> 0xa;
            r13_1 = (r13_4 - r10_2 + 0x200 - r10_6) >> 0xa;
            rdx = (rdx_8 - r11_4) >> 0xa;
            *(rbp + 0xc0) = (r8_2 + rdx_3 + 0x200 - r8_7) >> 0xa;
            *(rbp + 0xa0) = (r10_2 + r13_4 + 0x200 - r9_5) >> 0xa;
        }
        else
        {
            rcx_1 = rax_2[-0x10] << 2;
            *(rbp + 0xc0) = rcx_1;
            r13_1 = rcx_1;
            *(rbp + 0xa0) = rcx_1;
            rdx = rcx_1;
            *(rbp + 0x20) = rcx_1;
            *rbp = rcx_1;
            *(rbp - 0x20) = rcx_1;
        }

        *(rbp + 0x60) = rdx;
        *(rbp + 0x80) = r13_1;
        *(rbp + 0x40) = rcx_1;
        int32_t rbx_4 = rax_2[-7];
        int32_t rcx_17;
        int32_t rdx_10;
        int32_t r13_8;

        if (rbx_4 || rax_2[1] != rbx_4 || rax_2[9] != rbx_4 || rax_2[0x11] != rbx_4 || rax_2[0x19] != rbx_4 || rax_2[0x21] != rbx_4 || rax_2[0x29] != rbx_4)
        {
            int32_t r11_5 = rax_2[9];
            int32_t r9_6 = rax_2[1];
            int32_t rdx_11 = rax_2[0x21];
            int32_t r14_2 = rax_2[0x29];
            int32_t rsi_2 = rax_2[0x19];
            int32_t r13_9 = rax_2[-0xf];
            int32_t r8_8 = (rdx_11 + r9_6) * 0x8a9;
            int32_t r9_7 = rsi_2 + rbx_4;
            int32_t r10_8 = r8_8 - rdx_11 * 0x1d8f;
            int32_t rcx_20 = rax_2[0x11];
            int32_t rdx_13 = r9_6 * 0xc3f + r8_8;
            int32_t r8_10 = (rcx_20 + r13_9) << 0xc;
            int32_t r13_11 = (r13_9 - rcx_20) << 0xc;
            var_168 = r8_10 - rdx_13;
            int32_t r8_12 = r14_2 + r11_5;
            int32_t rdi_3 = (r9_7 + r8_12) * 0x12d0;
            int32_t rbx_6 = rdi_3 - (r14_2 + rbx_4) * 0xe65;
            int32_t rcx_24 = r9_7 * 0xfffff9c3;
            int32_t rdi_4 = rdi_3 - (rsi_2 + r11_5) * 0x2901;
            int32_t rdx_16 = r8_12 * 0xffffe09e;
            int32_t r11_8 = r14_2 * 0x4c7 + rbx_6 + rdx_16;
            int32_t r8_15 = rbx_4 * 0x1805 + rcx_24 + rbx_6;
            int32_t r9_10 = r11_5 * 0x312a + rdx_16 + rdi_4;
            int32_t r10_12 = rsi_2 * 0x20da + rcx_24 + rdi_4;
            int32_t rdx_18 = var_168 + 0x200;
            *(rbp - 0x1c) = (r8_10 + rdx_13 + 0x200 + r8_15) >> 0xa;
            *(rbp + 4) = (r10_8 + r13_11 + 0x200 + r9_10) >> 0xa;
            *(rbp + 0x24) = (r10_12 + r13_11 - r10_8 + 0x200) >> 0xa;
            rcx_17 = (rdx_18 + r11_8) >> 0xa;
            r13_8 = (r13_11 - r10_8 + 0x200 - r10_12) >> 0xa;
            rdx_10 = (rdx_18 - r11_8) >> 0xa;
            *(rbp + 0xc4) = (r8_10 + rdx_13 + 0x200 - r8_15) >> 0xa;
            *(rbp + 0xa4) = (r10_8 + r13_11 + 0x200 - r9_10) >> 0xa;
        }
        else
        {
            rcx_17 = rax_2[-0xf] << 2;
            *(rbp + 0xc4) = rcx_17;
            r13_8 = rcx_17;
            *(rbp + 0xa4) = rcx_17;
            rdx_10 = rcx_17;
            *(rbp + 0x24) = rcx_17;
            *(rbp + 4) = rcx_17;
            *(rbp - 0x1c) = rcx_17;
        }

        *(rbp + 0x64) = rdx_10;
        rax_2 = &rax_2[2];
        *(rbp + 0x84) = r13_8;
        *(rbp + 0x44) = rcx_17;
        rbp += 8;
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void var_130;
    void* r11_9 = &var_130;
    void* var_160 = &var_130;
    void* r13_16 = arg1 + 1;
    int64_t i_3 = 8;
    int32_t result;
    int64_t i_1;

    do
    {
        int32_t r8_16 = *(r11_9 - 0x10);
        int32_t rcx_32 = *r11_9;
        int32_t rsi_3 = *(r11_9 + 4);
        int32_t rdi_5 = *(r11_9 - 4);
        int32_t r10_13 = *(r11_9 - 0xc);
        int32_t r14_3 = *(r11_9 - 0x18);
        int32_t rdx_20 = (rcx_32 + r8_16) * 0x8a9;
        int32_t r9_12 = rdx_20 - rcx_32 * 0x1d8f;
        int32_t rax_5 = *(r11_9 - 8);
        int32_t rcx_34 = r8_16 * 0xc3f + rdx_20;
        int32_t rdx_21 = rsi_3 + r10_13;
        int32_t r14_5 = (r14_3 - rax_5) << 0xc;
        int32_t r15_10 = (rax_5 + r14_3) << 0xc;
        int32_t r9_13 = *(r11_9 - 0x14);
        int32_t r8_17 = rdi_5 + r9_13;
        int32_t rbx_7 = (r8_17 + rdx_21) * 0x12d0;
        int32_t r11_11 = rbx_7 - (rsi_3 + r9_13) * 0xe65;
        int32_t rax_9 = r8_17 * 0xfffff9c3;
        int32_t rbx_8 = rbx_7 - (rdi_5 + r10_13) * 0x2901;
        int32_t rcx_37 = rdx_21 * 0xffffe09e;
        int32_t r8_20 = rdi_5 * 0x20da + rax_9 + rbx_8;
        var_168 = r9_13 * 0x1805 + rax_9 + r11_11;
        int32_t r9_16 = rsi_3 * 0x4c7 + r11_11 + rcx_37;
        int32_t rcx_38 = var_168;
        int32_t rdx_27 = r10_13 * 0x312a + rcx_37 + rbx_8;
        int32_t rax_11 = (rcx_38 + r15_10 + rcx_34 + 0x1010000) >> 0x11;

        if (rax_11 > 0xff)
        {
            if (rax_11 < 0)
                rax_11 = 0;
            else if (rax_11 > 0xff)
                rax_11 = 0xff;
        }

        *(r13_16 - 1) = rax_11;
        int32_t rbp_4 = (r15_10 + rcx_34 + 0x1010000 - rcx_38) >> 0x11;

        if (rbp_4 > 0xff)
        {
            if (rbp_4 < 0)
                rbp_4 = 0;
            else if (rbp_4 > 0xff)
                rbp_4 = 0xff;
        }

        *(r13_16 + 6) = rbp_4;
        int32_t rax_13 = (r14_5 + r9_12 + 0x1010000 + rdx_27) >> 0x11;

        if (rax_13 > 0xff)
        {
            if (rax_13 < 0)
                rax_13 = 0;
            else if (rax_13 > 0xff)
                rax_13 = 0xff;
        }

        *r13_16 = rax_13;
        int32_t r12_12 = (r14_5 + r9_12 + 0x1010000 - rdx_27) >> 0x11;

        if (r12_12 > 0xff)
        {
            if (r12_12 < 0)
                r12_12 = 0;
            else if (r12_12 > 0xff)
                r12_12 = 0xff;
        }

        *(r13_16 + 5) = r12_12;
        int32_t rax_15 = (r14_5 - r9_12 + 0x1010000 + r8_20) >> 0x11;

        if (rax_15 > 0xff)
        {
            if (rax_15 < 0)
                rax_15 = 0;
            else if (rax_15 > 0xff)
                rax_15 = 0xff;
        }

        *(r13_16 + 1) = rax_15;
        int32_t r14_9 = (r14_5 - r9_12 + 0x1010000 - r8_20) >> 0x11;

        if (r14_9 > 0xff)
        {
            if (r14_9 < 0)
                r14_9 = 0;
            else if (r14_9 > 0xff)
                r14_9 = 0xff;
        }

        *(r13_16 + 4) = r14_9;
        result = (r15_10 - rcx_34 + 0x1010000 + r9_16) >> 0x11;

        if (result > 0xff)
        {
            if (result < 0)
                result = 0;
            else if (result > 0xff)
                result = 0xff;
        }

        *(r13_16 + 2) = result;
        int32_t r15_14 = (r15_10 - rcx_34 + 0x1010000 - r9_16) >> 0x11;

        if (r15_14 > 0xff)
        {
            if (r15_14 < 0)
                r15_14 = 0;
            else if (r15_14 > 0xff)
                r15_14 = 0xff;
        }

        r11_9 = var_160 + 0x20;
        *(r13_16 + 3) = r15_14;
        r13_16 += arg2;
        i_1 = i_3;
        i_3 -= 1;
        var_160 = r11_9;
    } while (i_1 != 1);
    __security_check_cookie(rax_1 ^ &var_168);
    return result;
}

int64_t* sub_140004310(int64_t* arg1, int32_t arg2, int32_t (* arg3)[0x4])
{
    int16_t zmm3[0x8] = arg3[1];
    int32_t zmm5[0x4] = arg3[5];
    int32_t zmm4[0x4] = arg3[3];
    int32_t zmm2[0x4] = *arg3;
    int32_t zmm7[0x4] = arg3[2];
    int32_t temp0[0x4] = __punpckhwd_xmmdq_memdq(zmm7, arg3[6]);
    int32_t temp0_1[0x4] = __punpcklwd_xmmdq_memdq(zmm7, arg3[6]);
    int32_t zmm0[0x4] = __pmaddwd_xmmdq_memdq(temp0, data_140022de0);
    zmm7 = __pmaddwd_xmmdq_memdq(temp0, data_140022d50);
    int16_t zmm8[0x8] = arg3[7];
    int32_t var_c8[0x4] = zmm0;
    zmm0 = arg3[4];
    int16_t temp0_4[0x8] = _mm_add_epi16(zmm8, zmm3);
    zmm0 = _mm_add_epi16(zmm0, zmm2);
    int32_t temp0_6[0x4] = _mm_unpacklo_epi16(zmm8, zmm4[0]);
    int32_t temp0_7[0x4] = __psubw_xmmdq_memdq(zmm2, arg3[4]);
    int32_t zmm6[0x4] = __pmaddwd_xmmdq_memdq(temp0_1, data_140022d50);
    int32_t zmm14[0x4] = __pmaddwd_xmmdq_memdq(temp0_1, data_140022de0);
    int32_t zmm13[0x4] = __pmaddwd_xmmdq_memdq(temp0_6, data_140022dc0);
    int32_t zmm10[0x4] = __pmaddwd_xmmdq_memdq(temp0_6, data_140022d60);
    int32_t temp0_13[0x4] = _mm_srai_epi32(_mm_unpacklo_epi16({0}, zmm0[0]), 4);
    int32_t temp0_14[0x4] = _mm_unpackhi_epi16({0}, zmm0[0]);
    int32_t temp0_16[0x4] = _mm_srai_epi32(_mm_unpacklo_epi16({0}, temp0_7[0]), 4);
    int32_t temp0_17[0x4] = _mm_srai_epi32(temp0_14, 4);
    int32_t temp0_18[0x4] = _mm_unpackhi_epi16({0}, temp0_7[0]);
    int32_t var_108[0x4] = zmm6;
    int32_t temp0_19[0x4] = _mm_unpacklo_epi16(zmm5, zmm3[0]);
    int32_t var_e8[0x4] = zmm7;
    int32_t zmm9[0x4] = __pmaddwd_xmmdq_memdq(temp0_19, data_140022e00);
    int32_t temp0_21[0x4] = _mm_unpackhi_epi16(zmm5, zmm3[0]);
    zmm5 = _mm_add_epi16(zmm5, zmm4);
    int32_t temp0_23[0x4] = _mm_unpacklo_epi16(temp0_4, zmm5[0]);
    int16_t temp0_24[0x8] = __pmaddwd_xmmdq_memdq(temp0_21, data_140022e00);
    int32_t temp0_25[0x4] = _mm_unpackhi_epi16(zmm8, zmm4[0]);
    zmm8 = _mm_unpackhi_epi16(temp0_4, zmm5[0]);
    int16_t temp0_27[0x8] = __pmaddwd_xmmdq_memdq(temp0_25, data_140022dc0);
    zmm2 = __pmaddwd_xmmdq_memdq(zmm8, data_140022d80);
    int16_t temp0_29[0x8] = __pmaddwd_xmmdq_memdq(zmm8, data_140022dd0);
    int32_t zmm11[0x4] = __pmaddwd_xmmdq_memdq(temp0_25, data_140022d60);
    zmm0 = __pmaddwd_xmmdq_memdq(temp0_23, data_140022dd0);
    int32_t zmm1[0x4] = __pmaddwd_xmmdq_memdq(temp0_23, data_140022d80);
    int16_t zmm12[0x8] = _mm_add_epi32(temp0_27, zmm2);
    zmm3 = _mm_add_epi32(temp0_24, temp0_29);
    int32_t temp0_35[0x4] = _mm_srai_epi32(temp0_18, 4);
    int32_t temp0_36[0x4] = _mm_add_epi32(zmm9, zmm0);
    int32_t temp0_37[0x4] = _mm_add_epi32(zmm10, zmm0);
    int32_t temp0_38[0x4] = _mm_add_epi32(zmm13, zmm1);
    zmm6 = __pmaddwd_xmmdq_memdq(temp0_19, data_140022d70);
    int32_t temp0_40[0x4] = _mm_add_epi32(zmm11, temp0_29);
    zmm4 = data_140022d10;
    zmm7 = __pmaddwd_xmmdq_memdq(temp0_21, data_140022d70);
    zmm8 = __paddd_xmmdq_memdq(temp0_13, var_108);
    int32_t temp0_43[0x4] = _mm_add_epi32(zmm6, zmm1);
    zmm8 = _mm_add_epi32(zmm8, zmm4);
    int32_t temp0_45[0x4] = __paddd_xmmdq_memdq(temp0_17, var_e8);
    int32_t temp0_46[0x4] = _mm_add_epi32(zmm7, zmm2);
    int32_t temp0_47[0x4] = _mm_add_epi32(temp0_45, zmm4);
    int32_t temp0_48[0x4] = _mm_add_epi32(zmm8, temp0_43);
    int32_t temp0_49[0x4] = _mm_sub_epi32(temp0_47, temp0_46);
    int32_t temp0_50[0x4] = _mm_srai_epi32(temp0_48, 0xa);
    int32_t temp0_51[0x4] = _mm_add_epi32(temp0_47, temp0_46);
    int32_t temp0_52[0x4] = _mm_srai_epi32(temp0_49, 0xa);
    int32_t temp0_53[0x4] = _mm_srai_epi32(temp0_51, 0xa);
    zmm8 = _mm_sub_epi32(zmm8, temp0_43);
    int32_t temp0_55[0x4] = _mm_packs_epi32(temp0_50, temp0_53);
    int32_t temp0_56[0x4] = __psubd_xmmdq_memdq(temp0_16, zmm14);
    int32_t temp0_58[0x4] = _mm_add_epi32(_mm_add_epi32(temp0_16, zmm14), zmm4);
    int32_t temp0_59[0x4] = _mm_add_epi32(temp0_56, zmm4);
    int32_t temp0_61[0x4] = __paddd_xmmdq_memdq(__psubd_xmmdq_memdq(temp0_13, var_108), data_140022d10);
    int32_t temp0_62[0x4] = _mm_add_epi32(temp0_58, temp0_37);
    int32_t temp0_63[0x4] = _mm_sub_epi32(temp0_58, temp0_37);
    zmm8 = _mm_packs_epi32(_mm_srai_epi32(zmm8, 0xa), temp0_52);
    int32_t temp0_66[0x4] = __paddd_xmmdq_memdq(temp0_35, var_c8);
    int32_t temp0_67[0x4] = __psubd_xmmdq_memdq(temp0_35, var_c8);
    int32_t temp0_68[0x4] = _mm_add_epi32(temp0_66, zmm4);
    int32_t temp0_69[0x4] = _mm_srai_epi32(temp0_62, 0xa);
    int32_t temp0_70[0x4] = _mm_add_epi32(temp0_68, temp0_40);
    int32_t temp0_71[0x4] = _mm_srai_epi32(temp0_63, 0xa);
    int32_t temp0_72[0x4] = _mm_srai_epi32(temp0_70, 0xa);
    int32_t temp0_73[0x4] = _mm_add_epi32(temp0_67, zmm4);
    int32_t temp0_74[0x4] = _mm_packs_epi32(temp0_69, temp0_72);
    int32_t temp0_77[0x4] = _mm_packs_epi32(temp0_71, _mm_srai_epi32(_mm_sub_epi32(temp0_68, temp0_40), 0xa));
    int32_t temp0_78[0x4] = _mm_add_epi32(temp0_73, zmm3);
    int32_t temp0_79[0x4] = __psubd_xmmdq_memdq(temp0_17, var_e8);
    int32_t temp0_80[0x4] = _mm_sub_epi32(temp0_73, zmm3);
    int32_t temp0_81[0x4] = __paddd_xmmdq_memdq(temp0_79, data_140022d10);
    int32_t temp0_82[0x4] = _mm_srai_epi32(temp0_78, 0xa);
    int32_t temp0_83[0x4] = _mm_add_epi32(temp0_59, temp0_36);
    zmm3 = _mm_add_epi32(temp0_61, temp0_38);
    int32_t temp0_86[0x4] = _mm_packs_epi32(_mm_srai_epi32(temp0_83, 0xa), temp0_82);
    int32_t temp0_87[0x4] = _mm_sub_epi32(temp0_61, temp0_38);
    zmm3 = _mm_srai_epi32(zmm3, 0xa);
    int32_t temp0_89[0x4] = _mm_add_epi32(temp0_81, zmm12);
    int32_t temp0_90[0x4] = _mm_srai_epi32(temp0_87, 0xa);
    int32_t temp0_91[0x4] = _mm_srai_epi32(temp0_89, 0xa);
    int32_t temp0_92[0x4] = _mm_sub_epi32(temp0_59, temp0_36);
    int32_t temp0_93[0x4] = _mm_sub_epi32(temp0_81, zmm12);
    zmm3 = _mm_packs_epi32(zmm3, temp0_91);
    int32_t temp0_95[0x4] = _mm_srai_epi32(temp0_93, 0xa);
    int32_t temp0_96[0x4] = _mm_srai_epi32(temp0_92, 0xa);
    int32_t temp0_97[0x4] = _mm_srai_epi32(temp0_80, 0xa);
    int32_t temp0_98[0x4] = _mm_packs_epi32(temp0_90, temp0_95);
    int32_t temp0_99[0x4] = _mm_unpacklo_epi16(temp0_55, temp0_98[0]);
    int32_t temp0_100[0x4] = _mm_packs_epi32(temp0_96, temp0_97);
    int32_t temp0_101[0x4] = _mm_unpackhi_epi16(temp0_55, temp0_98[0]);
    int32_t temp0_102[0x4] = _mm_unpacklo_epi16(zmm3, zmm8[0]);
    int32_t temp0_103[0x4] = _mm_unpacklo_epi16(temp0_86, temp0_77[0]);
    int32_t temp0_104[0x4] = _mm_unpacklo_epi16(temp0_74, temp0_100[0]);
    zmm3 = _mm_unpackhi_epi16(zmm3, zmm8[0]);
    zmm8 = temp0_101;
    int32_t temp0_106[0x4] = _mm_unpackhi_epi16(temp0_74, temp0_100[0]);
    int32_t temp0_107[0x4] = _mm_unpacklo_epi16(temp0_99, temp0_103[0]);
    int32_t temp0_108[0x4] = _mm_unpackhi_epi16(temp0_99, temp0_103[0]);
    int32_t temp0_109[0x4] = _mm_unpacklo_epi16(temp0_104, temp0_102[0]);
    int32_t temp0_110[0x4] = _mm_unpackhi_epi16(temp0_104, temp0_102[0]);
    int32_t temp0_111[0x4] = _mm_unpacklo_epi16(temp0_106, zmm3[0]);
    int32_t temp0_112[0x4] = _mm_unpackhi_epi16(temp0_106, zmm3[0]);
    zmm3 = _mm_unpacklo_epi16(temp0_107, temp0_109[0]);
    int32_t temp0_114[0x4] = _mm_unpackhi_epi16(temp0_107, temp0_109[0]);
    int32_t temp0_115[0x4] = _mm_unpacklo_epi16(temp0_108, temp0_110[0]);
    int32_t temp0_116[0x4] = _mm_unpackhi_epi16(temp0_108, temp0_110[0]);
    int32_t temp0_117[0x4] = _mm_unpackhi_epi16(temp0_86, temp0_77[0]);
    zmm5 = zmm8;
    zmm8 = _mm_unpackhi_epi16(zmm8, temp0_117[0]);
    int32_t temp0_119[0x4] = _mm_unpacklo_epi16(zmm5, temp0_117[0]);
    int32_t temp0_120[0x4] = _mm_unpacklo_epi16(zmm8, temp0_112[0]);
    int32_t temp0_121[0x4] = _mm_unpacklo_epi16(temp0_119, temp0_111[0]);
    int32_t temp0_122[0x4] = _mm_unpacklo_epi16(temp0_115, temp0_120[0]);
    int32_t temp0_123[0x4] = _mm_unpackhi_epi16(temp0_115, temp0_120[0]);
    zmm9 = __pmaddwd_xmmdq_memdq(temp0_122, data_140022de0);
    zmm13 = __pmaddwd_xmmdq_memdq(temp0_122, data_140022d50);
    zmm0 = _mm_add_epi16(temp0_121, zmm3);
    int32_t temp0_127[0x4] = _mm_unpackhi_epi16(temp0_119, temp0_111[0]);
    zmm3 = _mm_sub_epi16(zmm3, temp0_121);
    zmm8 = _mm_unpackhi_epi16(zmm8, temp0_112[0]);
    int32_t temp0_130[0x4] = _mm_unpacklo_epi16({0}, zmm0[0]);
    int32_t temp0_131[0x4] = _mm_unpackhi_epi16({0}, zmm3[0]);
    zmm4 = zmm8;
    int32_t temp0_132[0x4] = _mm_srai_epi32(temp0_130, 4);
    int32_t temp0_133[0x4] = _mm_unpackhi_epi16({0}, zmm0[0]);
    int32_t temp0_134[0x4] = _mm_srai_epi32(temp0_131, 4);
    int32_t temp0_136[0x4] = _mm_srai_epi32(_mm_unpacklo_epi16({0}, zmm3[0]), 4);
    zmm3 = zmm8;
    int16_t temp0_137[0x8] = _mm_add_epi16(zmm8, temp0_114);
    zmm5 = _mm_add_epi16(temp0_127, temp0_116);
    int32_t temp0_139[0x4] = _mm_unpacklo_epi16(temp0_137, zmm5[0]);
    zmm10 = __pmaddwd_xmmdq_memdq(temp0_123, data_140022de0);
    zmm1 = __pmaddwd_xmmdq_memdq(temp0_139, data_140022d80);
    int32_t zmm15[0x4] = __pmaddwd_xmmdq_memdq(temp0_123, data_140022d50);
    zmm0 = __pmaddwd_xmmdq_memdq(temp0_139, data_140022dd0);
    zmm8 = _mm_unpackhi_epi16(temp0_137, zmm5[0]);
    int32_t temp0_145[0x4] = _mm_srai_epi32(temp0_133, 4);
    zmm2 = __pmaddwd_xmmdq_memdq(zmm8, data_140022d80);
    zmm3 = _mm_unpacklo_epi16(zmm3, temp0_116[0]);
    int32_t temp0_148[0x4] = _mm_unpackhi_epi16(zmm4, temp0_116[0]);
    int32_t temp0_149[0x4] = _mm_unpacklo_epi16(temp0_127, temp0_114[0]);
    zmm12 = _mm_unpackhi_epi16(temp0_127, temp0_114[0]);
    int16_t temp0_151[0x8] = __pmaddwd_xmmdq_memdq(zmm8, data_140022dd0);
    zmm4 = __pmaddwd_xmmdq_memdq(temp0_148, data_140022d60);
    int16_t temp0_153[0x8] = __pmaddwd_xmmdq_memdq(zmm12, data_140022d70);
    int16_t temp0_154[0x8] = __pmaddwd_xmmdq_memdq(zmm3, data_140022d60);
    zmm5 = __pmaddwd_xmmdq_memdq(temp0_148, data_140022dc0);
    zmm6 = __pmaddwd_xmmdq_memdq(zmm3, data_140022dc0);
    zmm7 = __pmaddwd_xmmdq_memdq(zmm12, data_140022e00);
    zmm12 = _mm_add_epi32(temp0_153, zmm2);
    int32_t temp0_159[0x4] = __paddd_xmmdq_memdq(zmm4, temp0_151);
    zmm3 = _mm_add_epi32(temp0_154, zmm0);
    int32_t temp0_161[0x4] = _mm_add_epi32(zmm5, zmm2);
    int16_t var_e8_1[0x8] = zmm12;
    int32_t temp0_162[0x4] = _mm_add_epi32(zmm6, zmm1);
    int32_t temp0_163[0x4] = __paddd_xmmdq_memdq(zmm7, temp0_151);
    zmm11 = __pmaddwd_xmmdq_memdq(temp0_149, data_140022d70);
    int16_t temp0_165[0x8] = __pmaddwd_xmmdq_memdq(temp0_149, data_140022e00);
    int32_t temp0_166[0x4] = _mm_sub_epi32(temp0_136, zmm9);
    zmm12 = _mm_add_epi32(temp0_136, zmm9);
    int32_t temp0_168[0x4] = _mm_sub_epi32(temp0_134, zmm10);
    int32_t var_c8_1[0x4] = zmm3;
    int32_t temp0_169[0x4] = _mm_add_epi32(zmm11, zmm1);
    zmm1 = data_140022d40;
    zmm8 = _mm_add_epi32(temp0_165, zmm0);
    int32_t temp0_171[0x4] = _mm_add_epi32(temp0_168, zmm1);
    int32_t temp0_172[0x4] = _mm_add_epi32(temp0_166, zmm1);
    zmm12 = _mm_add_epi32(zmm12, zmm1);
    int32_t temp0_174[0x4] = _mm_sub_epi32(temp0_132, zmm13);
    int32_t temp0_175[0x4] = _mm_add_epi32(temp0_172, zmm8);
    int32_t temp0_176[0x4] = _mm_add_epi32(temp0_174, zmm1);
    int32_t temp0_177[0x4] = _mm_srai_epi32(temp0_175, 0x11);
    int32_t temp0_179[0x4] = _mm_add_epi32(_mm_add_epi32(temp0_132, zmm13), zmm1);
    int32_t temp0_181[0x4] = _mm_add_epi32(_mm_add_epi32(temp0_145, zmm15), zmm1);
    int32_t temp0_182[0x4] = __paddd_xmmdq_memdq(temp0_179, temp0_169);
    int32_t temp0_183[0x4] = __paddd_xmmdq_memdq(temp0_181, var_e8_1);
    zmm3 = _mm_add_epi32(temp0_134, zmm10);
    int32_t temp0_185[0x4] = _mm_srai_epi32(temp0_183, 0x11);
    zmm3 = _mm_add_epi32(zmm3, zmm1);
    int32_t temp0_187[0x4] = _mm_srai_epi32(temp0_182, 0x11);
    int32_t temp0_188[0x4] = _mm_sub_epi32(temp0_145, zmm15);
    int32_t temp0_189[0x4] = _mm_packs_epi32(temp0_187, temp0_185);
    int32_t temp0_190[0x4] = _mm_add_epi32(temp0_188, zmm1);
    int32_t temp0_191[0x4] = __paddd_xmmdq_memdq(zmm3, temp0_159);
    int32_t temp0_192[0x4] = __paddd_xmmdq_memdq(zmm12, var_c8_1);
    int32_t temp0_193[0x4] = _mm_srai_epi32(temp0_191, 0x11);
    int32_t temp0_195[0x4] = _mm_packs_epi32(_mm_srai_epi32(temp0_192, 0x11), temp0_193);
    int32_t temp0_196[0x4] = _mm_add_epi32(temp0_171, temp0_163);
    zmm9 = _mm_packus_epi16(temp0_189, temp0_195);
    int32_t temp0_198[0x4] = _mm_srai_epi32(temp0_196, 0x11);
    int32_t temp0_199[0x4] = _mm_add_epi32(temp0_176, temp0_162);
    int32_t temp0_200[0x4] = _mm_packs_epi32(temp0_177, temp0_198);
    int32_t temp0_201[0x4] = _mm_add_epi32(temp0_190, temp0_161);
    int32_t temp0_204[0x4] = _mm_packs_epi32(_mm_srai_epi32(temp0_199, 0x11), _mm_srai_epi32(temp0_201, 0x11));
    int32_t temp0_205[0x4] = __psubd_xmmdq_memdq(temp0_181, var_e8_1);
    zmm12 = __psubd_xmmdq_memdq(zmm12, var_c8_1);
    int32_t temp0_207[0x4] = _mm_sub_epi32(temp0_190, temp0_161);
    zmm3 = __psubd_xmmdq_memdq(zmm3, temp0_159);
    int32_t temp0_209[0x4] = __psubd_xmmdq_memdq(temp0_179, temp0_169);
    int32_t temp0_210[0x4] = _mm_sub_epi32(temp0_171, temp0_163);
    int32_t temp0_211[0x4] = _mm_sub_epi32(temp0_172, zmm8);
    zmm2 = _mm_packus_epi16(temp0_200, temp0_204);
    int32_t temp0_213[0x4] = _mm_srai_epi32(temp0_211, 0x11);
    int32_t temp0_214[0x4] = _mm_sub_epi32(temp0_176, temp0_162);
    int64_t* result = arg2;
    int32_t temp0_215[0x4] = _mm_srai_epi32(temp0_205, 0x11);
    int32_t temp0_216[0x4] = _mm_srai_epi32(temp0_214, 0x11);
    zmm3 = _mm_srai_epi32(zmm3, 0x11);
    zmm12 = _mm_packs_epi32(_mm_srai_epi32(zmm12, 0x11), zmm3);
    int32_t temp0_221[0x4] = _mm_packs_epi32(temp0_216, _mm_srai_epi32(temp0_207, 0x11));
    int16_t temp0_224[0x8] = _mm_packus_epi16(zmm12, _mm_packs_epi32(_mm_srai_epi32(temp0_209, 0x11), temp0_215));
    zmm1 = _mm_packus_epi16(temp0_221, _mm_packs_epi32(temp0_213, _mm_srai_epi32(temp0_210, 0x11)));
    int32_t temp0_228[0x4] = _mm_unpacklo_epi8(zmm2, temp0_224[0]);
    int32_t temp0_229[0x4] = _mm_unpacklo_epi8(zmm9, zmm1[0]);
    int32_t temp0_230[0x4] = _mm_unpackhi_epi8(zmm9, zmm1[0]);
    zmm3 = _mm_unpacklo_epi8(temp0_229, temp0_228[0]);
    int32_t temp0_232[0x4] = _mm_unpackhi_epi8(temp0_229, temp0_228[0]);
    int32_t temp0_233[0x4] = _mm_unpackhi_epi8(zmm2, temp0_224[0]);
    int32_t temp0_234[0x4] = _mm_unpacklo_epi8(temp0_230, temp0_233[0]);
    int32_t temp0_235[0x4] = _mm_unpacklo_epi8(zmm3, temp0_234[0]);
    *arg1 = temp0_235[0];
    int64_t* rcx = arg1 + result;
    zmm3 = _mm_unpackhi_epi8(zmm3, temp0_234[0]);
    int32_t temp0_237[0x4] = _mm_unpackhi_epi8(temp0_230, temp0_233[0]);
    int32_t temp0_238[0x4] = _mm_unpacklo_epi8(temp0_232, temp0_237[0]);
    int32_t temp0_239[0x4] = _mm_unpackhi_epi8(temp0_232, temp0_237[0]);
    *rcx = _mm_shuffle_epi32(temp0_235, 0x4e)[0];
    int64_t* rcx_1 = rcx + result;
    zmm0 = _mm_shuffle_epi32(zmm3, 0x4e);
    *rcx_1 = zmm3[0];
    int64_t* rcx_2 = rcx_1 + result;
    *rcx_2 = zmm0[0];
    int64_t* rcx_3 = rcx_2 + result;
    zmm0 = _mm_shuffle_epi32(temp0_238, 0x4e);
    *rcx_3 = temp0_238[0];
    void* rcx_4 = rcx_3 + result;
    *rcx_4 = zmm0[0];
    void* rcx_5 = rcx_4 + result;
    zmm0 = _mm_shuffle_epi32(temp0_239, 0x4e);
    *rcx_5 = temp0_239[0];
    *(result + rcx_5) = zmm0[0];
    return result;
}

int64_t sub_140004b40(int64_t* arg1)
{
    char rax = arg1[0x905];

    if (rax != 0xff)
    {
        arg1[0x905] = 0xff;
        return rax;
    }

    void* rbx = *arg1;
    char* rax_1 = *(rbx + 0xc0);

    if (rax_1 < *(rbx + 0xc8))
        goto label_140004b8e;

    if (*(rbx + 0x30))
    {
        sub_140001d70(rbx);
        rax_1 = *(rbx + 0xc0);
        label_140004b8e:
        char i = *rax_1;
        *(rbx + 0xc0) = &rax_1[1];

        if (i == 0xff)
        {
            do
            {
                void* rbx_1 = *arg1;
                char* rax_2 = *(rbx_1 + 0xc0);

                if (rax_2 >= *(rbx_1 + 0xc8))
                {
                    if (!*(rbx_1 + 0x30))
                        return 0;

                    sub_140001d70(rbx_1);
                    rax_2 = *(rbx_1 + 0xc0);
                }

                i = *rax_2;
                *(rbx_1 + 0xc0) = &rax_2[1];
            } while (i == 0xff);

            return i;
        }
    }

    rax_1 = 0xff;
    return rax_1;
}

int64_t sub_140004c10(int64_t* arg1)
{
    void var_108;
    int64_t rax_1 = __security_cookie ^ &var_108;
    arg1[0x8fb] = 0;
    arg1[0x8ef] = 0;
    arg1[0x8e3] = 0;
    arg1[0x8d7] = 0;
    int32_t rax_2 = arg1[0x90d];
    arg1[0x904] = 0;
    *(arg1 + 0x482c) = 0;
    arg1[0x905] = 0xff;
    int32_t rcx = 0x7fffffff;

    if (rax_2)
        rcx = rax_2;

    *(arg1 + 0x4844) = 0;
    bool cond:1 = arg1[0x906];
    int32_t rax_3 = *(arg1 + 0x4854);
    *(arg1 + 0x486c) = rcx;
    int64_t result;

    if (cond:1)
    {
        if (rax_3 != 1)
        {
            int32_t i = 0;

            if (*(arg1 + 0x4694) > 0)
            {
                do
                {
                    int32_t j = 0;

                    if (arg1[0x8d2] > 0)
                    {
                        do
                        {
                            int32_t k = 0;

                            if (*(arg1 + 0x4854) > 0)
                            {
                                void* rax_44 = &arg1[0x90b];
                                void* var_c0_2 = rax_44;

                                do
                                {
                                    int64_t r14_4 = *rax_44;
                                    int32_t rbp_8 = 0;
                                    void* rsi_10 = &arg1[r14_4 * 0xc];

                                    if (*(rsi_10 + 0x46a8) > 0)
                                    {
                                        do
                                        {
                                            int32_t rax_51 = *(rsi_10 + 0x46a4);
                                            int32_t rdi_7 = 0;

                                            if (rax_51 > 0)
                                            {
                                                do
                                                {
                                                    int32_t rax_50 = sub_1400033e0(arg1, *(rsi_10 + 0x46f0) + ((rax_51 * j + (i * *(rsi_10 + 0x46a8) + rbp_8) * *(rsi_10 + 0x46f8) + rdi_7) << 6 << 1), &arg1[1 + *(rsi_10 + 0x46b0) * 0xd2], r14_4);

                                                    if (!rax_50)
                                                        goto label_140005426_1;

                                                    rax_51 = *(rsi_10 + 0x46a4);
                                                    rdi_7 += 1;
                                                } while (rdi_7 < rax_51);
                                            }

                                            rbp_8 += 1;
                                        } while (rbp_8 < *(rsi_10 + 0x46a8));
                                    }

                                    k += 1;
                                    rax_44 = var_c0_2 + 4;
                                    var_c0_2 = rax_44;
                                } while (k < *(arg1 + 0x4854));
                            }

                            *(arg1 + 0x486c) -= 1;

                            if (*(arg1 + 0x486c) <= 0)
                            {
                                if (*(arg1 + 0x4824) < 0x18)
                                    sub_140002dd0(arg1);

                                if (arg1[0x905] + 0x30 > 7)
                                    goto label_140004e60_2;

                                arg1[0x8fb] = 0;
                                int32_t rcx_35 = 0x7fffffff;
                                arg1[0x8ef] = 0;
                                arg1[0x8e3] = 0;
                                arg1[0x8d7] = 0;
                                int32_t rax_54 = arg1[0x90d];
                                arg1[0x904] = 0;

                                if (rax_54)
                                    rcx_35 = rax_54;

                                *(arg1 + 0x482c) = 0;
                                *(arg1 + 0x486c) = rcx_35;
                                arg1[0x905] = 0xff;
                                *(arg1 + 0x4844) = 0;
                            }

                            j += 1;
                        } while (j < arg1[0x8d2]);
                    }

                    i += 1;
                } while (i < *(arg1 + 0x4694));
            }

            labelid_1:
            result = 1;
        }
        else
        {
            int64_t r14_3 = arg1[0x90b];
            int32_t rsi_7 = 0;
            int64_t r12_4 = r14_3 * 0x60;
            int32_t rbp_7 = (*(r12_4 + arg1 + 0x46bc) + 7) >> 3;
            int32_t r15_7 = (*(r12_4 + arg1 + 0x46c0) + 7) >> 3;

            if (r15_7 <= 0)
            {
                label_140004e60:
                result = 1;
            }
            else
            {
                while (true)
                {
                    int32_t rdi_6 = 0;

                    if (rbp_7 > 0)
                    {
                        while (true)
                        {
                            int16_t* rdx_9 = *(r12_4 + arg1 + 0x46f0) + ((*(r12_4 + arg1 + 0x46f8) * rsi_7 + rdi_6) << 6 << 1);
                            int32_t rax_38;

                            if (*(arg1 + 0x4834))
                            {
                                int64_t rcx_22 = *(arg1 + r12_4 + 0x46b4);
                                rax_38 = sub_140003660(arg1, rdx_9, &arg1[0x349 + rcx_22 * 0xd2], &arg1[0x6d1 + rcx_22 * 0x80]);
                            }
                            else
                                rax_38 = sub_1400033e0(arg1, rdx_9, &arg1[1 + *(arg1 + r12_4 + 0x46b0) * 0xd2], r14_3);

                            if (!rax_38)
                                break;

                            *(arg1 + 0x486c) -= 1;

                            if (*(arg1 + 0x486c) <= 0)
                            {
                                if (*(arg1 + 0x4824) < 0x18)
                                    sub_140002dd0(arg1);

                                if (arg1[0x905] + 0x30 > 7)
                                    goto label_140004e60_2;

                                arg1[0x8fb] = 0;
                                int32_t rcx_25 = 0x7fffffff;
                                arg1[0x8ef] = 0;
                                arg1[0x8e3] = 0;
                                arg1[0x8d7] = 0;
                                int32_t rax_43 = arg1[0x90d];
                                arg1[0x904] = 0;

                                if (rax_43)
                                    rcx_25 = rax_43;

                                *(arg1 + 0x482c) = 0;
                                *(arg1 + 0x486c) = rcx_25;
                                arg1[0x905] = 0xff;
                                *(arg1 + 0x4844) = 0;
                            }

                            rdi_6 += 1;

                            if (rdi_6 >= rbp_7)
                                goto label_140005258;
                        }

                        break;
                    }

                    label_140005258:
                    rsi_7 += 1;

                    if (rsi_7 >= r15_7)
                        goto label_140004e60_2;
                }

                label_140005426:
                result = 0;
            }
        }
    }
    else
    {
        void var_b8;

        if (rax_3 != 1)
        {
            int32_t i_1 = 0;
            int32_t i_2 = 0;

            if (*(arg1 + 0x4694) > 0)
            {
                do
                {
                    int32_t j_1 = 0;

                    if (arg1[0x8d2] > 0)
                    {
                        do
                        {
                            int32_t k_1 = 0;
                            int32_t k_2 = 0;

                            if (*(arg1 + 0x4854) > 0)
                            {
                                void* rax_17 = &arg1[0x90b];
                                void* var_c0_1 = rax_17;

                                do
                                {
                                    int64_t r12_2 = *rax_17;
                                    int32_t r15_4 = 0;
                                    void* rsi_6 = &arg1[r12_2 * 0xc];

                                    if (*(rsi_6 + 0x46a8) > 0)
                                    {
                                        do
                                        {
                                            int32_t rdi_2 = *(rsi_6 + 0x46a4);
                                            int32_t r14_2 = 0;

                                            if (rdi_2 > 0)
                                            {
                                                do
                                                {
                                                    int64_t rcx_11 = *(rsi_6 + 0x46b4);
                                                    int32_t rbp_4 = *(rsi_6 + 0x46a8) * i_1 + r15_4;
                                                    int32_t rax_24 = sub_140002f50(arg1, &var_b8, &arg1[1 + *(rsi_6 + 0x46b0) * 0xd2], &arg1[0x349 + rcx_11 * 0xd2], &arg1[0x6d1 + rcx_11 * 0x80], r12_2, &arg1[0x691 + *(rsi_6 + 0x46ac) * 0x10]);

                                                    if (!rax_24)
                                                        goto label_140005426_1;

                                                    arg1[0x90e](((rdi_2 * j_1 + r14_2) << 3) + ((*(rsi_6 + 0x46c4) * rbp_4) << 3) + *(rsi_6 + 0x46d0));
                                                    rdi_2 = *(rsi_6 + 0x46a4);
                                                    r14_2 += 1;
                                                    i_1 = i_2;
                                                } while (r14_2 < rdi_2);
                                            }

                                            r15_4 += 1;
                                        } while (r15_4 < *(rsi_6 + 0x46a8));

                                        k_1 = k_2;
                                    }

                                    k_1 += 1;
                                    rax_17 = var_c0_1 + 4;
                                    k_2 = k_1;
                                    var_c0_1 = rax_17;
                                } while (k_1 < *(arg1 + 0x4854));
                            }

                            *(arg1 + 0x486c) -= 1;

                            if (*(arg1 + 0x486c) <= 0)
                            {
                                if (*(arg1 + 0x4824) < 0x18)
                                    sub_140002dd0(arg1);

                                if (arg1[0x905] + 0x30 > 7)
                                    goto label_140004e60_2;

                                arg1[0x8fb] = 0;
                                int32_t rcx_18 = 0x7fffffff;
                                arg1[0x8ef] = 0;
                                arg1[0x8e3] = 0;
                                arg1[0x8d7] = 0;
                                int32_t rax_31 = arg1[0x90d];
                                arg1[0x904] = 0;

                                if (rax_31)
                                    rcx_18 = rax_31;

                                *(arg1 + 0x482c) = 0;
                                *(arg1 + 0x486c) = rcx_18;
                                arg1[0x905] = 0xff;
                                *(arg1 + 0x4844) = 0;
                            }

                            i_1 = i_2;
                            j_1 += 1;
                        } while (j_1 < arg1[0x8d2]);
                    }

                    i_1 += 1;
                    i_2 = i_1;
                } while (i_1 < *(arg1 + 0x4694));
            }

            label_140004e60_1:
            result = 1;
        }
        else
        {
            int64_t r12_1 = arg1[0x90b];
            int32_t r14_1 = 0;
            void* rsi_3 = &arg1[r12_1 * 0xc];
            int32_t r15_3 = (*(rsi_3 + 0x46bc) + 7) >> 3;
            int32_t r13_3 = (*(rsi_3 + 0x46c0) + 7) >> 3;

            if (r13_3 <= 0)
            {
                label_140004e60_2:
                result = 1;
            }
            else
            {
                while (true)
                {
                    int32_t rdi_1 = 0;

                    if (r15_3 > 0)
                    {
                        int32_t rbp_1 = 0;

                        while (true)
                        {
                            int64_t rcx_1 = *(rsi_3 + 0x46b4);
                            int32_t rax_10 = sub_140002f50(arg1, &var_b8, &arg1[1 + *(rsi_3 + 0x46b0) * 0xd2], &arg1[0x349 + rcx_1 * 0xd2], &arg1[0x6d1 + rcx_1 * 0x80], r12_1, &arg1[0x691 + *(rsi_3 + 0x46ac) * 0x10]);

                            if (!rax_10)
                                break;

                            arg1[0x90e](((*(rsi_3 + 0x46c4) * r14_1) << 3) + *(rsi_3 + 0x46d0) + rbp_1);
                            *(arg1 + 0x486c) -= 1;

                            if (*(arg1 + 0x486c) <= 0)
                            {
                                if (*(arg1 + 0x4824) < 0x18)
                                    sub_140002dd0(arg1);

                                if (arg1[0x905] + 0x30 > 7)
                                    goto label_140004e60_2;

                                arg1[0x8fb] = 0;
                                int32_t rcx_8 = 0x7fffffff;
                                arg1[0x8ef] = 0;
                                arg1[0x8e3] = 0;
                                arg1[0x8d7] = 0;
                                int32_t rax_16 = arg1[0x90d];
                                arg1[0x904] = 0;

                                if (rax_16)
                                    rcx_8 = rax_16;

                                *(arg1 + 0x482c) = 0;
                                *(arg1 + 0x486c) = rcx_8;
                                arg1[0x905] = 0xff;
                                *(arg1 + 0x4844) = 0;
                            }

                            rdi_1 += 1;
                            rbp_1 += 8;

                            if (rdi_1 >= r15_3)
                                goto label_140004e54;
                        }

                        break;
                    }

                    label_140004e54:
                    r14_1 += 1;

                    if (r14_1 >= r13_3)
                        goto label_140004e60_2;
                }

                label_140005426_1:
                result = 0;
            }
        }
    }

    __security_check_cookie(rax_1 ^ &var_108);
    return result;
}

uint64_t sub_140005430(int64_t* arg1, int32_t arg2)
{
    void var_a8;
    int64_t rax_1 = __security_cookie ^ &var_a8;
    uint64_t result;
    int32_t i_2;
    int32_t result_1;
    TEB* gsbase;

    if (arg2 == 0xc4)
    {
        i_2 = sub_140001ec0(*arg1) - 2;

        if (i_2 <= 0)
        {
            label_140005bee:
            result_1 = !i_2;
            result = result_1;
        }
        else
        {
            while (true)
            {
                void* rbx_7 = *arg1;
                int32_t r15_1 = 0;
                char* rax_47 = *(rbx_7 + 0xc0);
                char rcx_31;

                if (rax_47 < *(rbx_7 + 0xc8))
                {
                    rcx_31 = *rax_47;
                    *(rbx_7 + 0xc0) = &rax_47[1];
                }
                else if (!*(rbx_7 + 0x30))
                    rcx_31 = 0;
                else
                {
                    sub_140001d70(rbx_7);
                    char* rax_49 = *(rbx_7 + 0xc0);
                    rcx_31 = *rax_49;
                    *(rbx_7 + 0xc0) = &rax_49[1];
                }

                uint32_t r14_5 = rcx_31;
                int32_t r14_6 = r14_5 & 0xf;
                uint32_t r13_2 = r14_5 >> 4;

                if (r13_2 > 1 || r14_6 > 3)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad DHT header";
                    result = 0;
                    goto label_140005c00;
                }

                void var_78;
                void* rdi_4 = &var_78;
                int64_t i_5 = 0x10;
                int64_t i;

                do
                {
                    void* rbx_8 = *arg1;
                    char* rax_51 = *(rbx_8 + 0xc0);

                    if (rax_51 < *(rbx_8 + 0xc8))
                    {
                        rcx_31 = *rax_51;
                        *(rbx_8 + 0xc0) = &rax_51[1];
                    }
                    else if (!*(rbx_8 + 0x30))
                        rcx_31 = 0;
                    else
                    {
                        sub_140001d70(rbx_8);
                        char* rax_53 = *(rbx_8 + 0xc0);
                        rcx_31 = *rax_53;
                        *(rbx_8 + 0xc0) = &rax_53[1];
                    }

                    uint32_t rax_55 = rcx_31;
                    *rdi_4 = rax_55;
                    r15_1 += rax_55;
                    rdi_4 += 4;
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
                int32_t* rdx_1 = &var_78;
                uint64_t r15_2 = r14_6;
                void* r12_3 = r15_2 * 0x690 + arg1;
                int64_t rax_57;

                if (r13_2)
                {
                    if (!sub_140002c10(r12_3 + 0x1a48, rdx_1))
                        break;

                    rax_57 = 0x1e48;
                }
                else
                {
                    if (!sub_140002c10(r12_3 + 8, rdx_1))
                        break;

                    rax_57 = 0x408;
                }

                int64_t rbp_3 = r15_1;
                int64_t rdi_5 = 0;

                if (rbp_3 > 0)
                {
                    do
                    {
                        void* rbx_9 = *arg1;
                        char* rax_59 = *(rbx_9 + 0xc0);

                        if (rax_59 < *(rbx_9 + 0xc8))
                        {
                            rcx_31 = *rax_59;
                            *(rbx_9 + 0xc0) = &rax_59[1];
                        }
                        else if (!*(rbx_9 + 0x30))
                            rcx_31 = 0;
                        else
                        {
                            sub_140001d70(rbx_9);
                            char* rax_61 = *(rbx_9 + 0xc0);
                            rcx_31 = *rax_61;
                            *(rbx_9 + 0xc0) = &rax_61[1];
                        }

                        *(r12_3 + rax_57 + rdi_5) = rcx_31;
                        rdi_5 += 1;
                    } while (rdi_5 < rbp_3);
                }

                if (r13_2)
                {
                    void* r10_2 = &arg1[0x6d1 + r15_2 * 0x80];
                    void* rbx_10 = r12_3 + 0x1a48;

                    for (int32_t i_1 = 0; i_1 < 0x200; )
                    {
                        uint64_t rax_63 = *rbx_10;
                        *r10_2 = 0;

                        if (rax_63 < 0xff)
                        {
                            uint32_t r9_1 = *(rax_63 + r12_3 + 0x1e48);
                            uint32_t rdi_6 = *(rax_63 + r12_3 + 0x1f48);
                            int32_t r9_2 = r9_1 & 0xf;

                            if (r9_2 && rdi_6 + r9_2 <= 9)
                            {
                                int32_t r8_5 = (i_1 << rdi_6 & 0x1ff) >> (9 - r9_2);

                                if (r8_5 < 1 << (r9_2 - 1))
                                    r8_5 += 1 - (1 << r9_2);

                                if (r8_5 + 0x80 <= 0xff)
                                {
                                    r8_5 <<= 4;
                                    r8_5 += r9_1 >> 4;
                                    r8_5 <<= 4;
                                    r8_5 += r9_2;
                                    r8_5 += rdi_6;
                                    *r10_2 = r8_5;
                                }
                            }
                        }

                        i_1 += 1;
                        rbx_10 += 1;
                        r10_2 += 2;
                    }
                }

                i_2 = i_2 - 0x11 - r15_1;

                if (i_2 <= 0)
                    goto label_140005bee;

                continue;
            }

            result = 0;
        }
    }
    else if (arg2 == 0xdb)
    {
        int32_t rax_29;
        uint16_t rcx_24;
        rax_29 = sub_140001ec0(*arg1);
        i_2 = rax_29 - 2;

        if (i_2 > 0)
        {
            do
            {
                void* rbx_5 = *arg1;
                char* rax_30 = *(rbx_5 + 0xc0);

                if (rax_30 < *(rbx_5 + 0xc8))
                {
                    rcx_24 = *rax_30;
                    *(rbx_5 + 0xc0) = &rax_30[1];
                }
                else if (!*(rbx_5 + 0x30))
                    rcx_24 = 0;
                else
                {
                    sub_140001d70(rbx_5);
                    char* rax_32 = *(rbx_5 + 0xc0);
                    rcx_24 = *rax_32;
                    *(rbx_5 + 0xc0) = &rax_32[1];
                }

                uint32_t rax_34 = rcx_24;
                int32_t rax_35 = rax_34 & 0xf;
                uint32_t rbp_2 = rax_34 >> 4;

                if (rbp_2 > 1)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad DQT type";
                    result = 0;
                    goto label_140005c00;
                }

                if (rax_35 > 3)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad DQT table";
                    result = 0;
                    goto label_140005c00;
                }

                for (int64_t j = 0; j < 0x40; )
                {
                    void* rbx_6 = *arg1;

                    if (!rbp_2)
                    {
                        char* rax_37 = *(rbx_6 + 0xc0);

                        if (rax_37 < *(rbx_6 + 0xc8))
                        {
                            rcx_24 = *rax_37;
                            *(rbx_6 + 0xc0) = &rax_37[1];
                        }
                        else if (!*(rbx_6 + 0x30))
                            rcx_24 = 0;
                        else
                        {
                            sub_140001d70(rbx_6);
                            char* rax_39 = *(rbx_6 + 0xc0);
                            rcx_24 = *rax_39;
                            *(rbx_6 + 0xc0) = &rax_39[1];
                        }

                        rcx_24 = rcx_24;
                    }
                    else
                        rcx_24 = sub_140001ec0(rbx_6);

                    uint64_t rax_41 = *(j + &data_1400220c0);
                    j += 1;
                    *(arg1 + ((rax_41 + (rax_35 << 6)) << 1) + 0x3488) = rcx_24;
                }

                int32_t rax_43 = 0x41;

                if (rbp_2)
                    rax_43 = 0x81;

                i_2 -= rax_43;
            } while (i_2 > 0);

            goto label_140005bee;
        }

        result_1 = !i_2;
        result = result_1;
    }
    else if (arg2 == 0xdd)
    {
        if (sub_140001ec0(*arg1) == 4)
        {
            arg1[0x90d] = sub_140001ec0(*arg1);
            result = 1;
        }
        else
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad DRI len";
            result = 0;
        }
    }
    else if (arg2 == 0xff)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "expected marker";
        result = 0;
    }
    else if (arg2 - 0xe0 <= 0xf || arg2 == 0xfe)
    {
        int32_t rax_4 = sub_140001ec0(*arg1);

        if (rax_4 >= 2)
        {
            int32_t rdi_2 = rax_4 - 2;
            char rcx_6;

            if (arg2 != 0xe0)
            {
                if (arg2 == 0xee && rdi_2 >= 0xc)
                {
                    int64_t i_3 = 0;
                    int32_t r14_2 = 1;
                    int32_t rax_15;

                    do
                    {
                        void* rbx_2 = *arg1;
                        char* rax_11 = *(rbx_2 + 0xc0);

                        if (rax_11 < *(rbx_2 + 0xc8))
                        {
                            rcx_6 = *rax_11;
                            *(rbx_2 + 0xc0) = &rax_11[1];
                        }
                        else if (!*(rbx_2 + 0x30))
                            rcx_6 = 0;
                        else
                        {
                            sub_140001d70(rbx_2);
                            char* rax_13 = *(rbx_2 + 0xc0);
                            rcx_6 = *rax_13;
                            *(rbx_2 + 0xc0) = &rax_13[1];
                        }

                        rax_15 = 0;

                        if (rcx_6 == *(i_3 + "Adobe"))
                            rax_15 = r14_2;

                        i_3 += 1;
                        r14_2 = rax_15;
                    } while (i_3 < 6);

                    rdi_2 -= 6;

                    if (rax_15)
                    {
                        void* rbx_3 = *arg1;
                        int64_t rax_16 = *(rbx_3 + 0xc0);

                        if (rax_16 < *(rbx_3 + 0xc8))
                            *(rbx_3 + 0xc0) = rax_16 + 1;
                        else if (*(rbx_3 + 0x30))
                        {
                            sub_140001d70(rbx_3);
                            *(rbx_3 + 0xc0) += 1;
                        }

                        sub_140001ec0(*arg1);
                        sub_140001ec0(*arg1);
                        void* rbx_4 = *arg1;
                        char* rax_18 = *(rbx_4 + 0xc0);
                        char rcx_13;

                        if (rax_18 < *(rbx_4 + 0xc8))
                        {
                            rcx_13 = *rax_18;
                            *(rbx_4 + 0xc0) = &rax_18[1];
                        }
                        else if (!*(rbx_4 + 0x30))
                            rcx_13 = 0;
                        else
                        {
                            sub_140001d70(rbx_4);
                            char* rax_20 = *(rbx_4 + 0xc0);
                            rcx_13 = *rax_20;
                            *(rbx_4 + 0xc0) = &rax_20[1];
                        }

                        rdi_2 -= 6;
                        *(arg1 + 0x484c) = rcx_13;
                    }
                }
            }
            else if (rdi_2 >= 5)
            {
                int64_t i_4 = 0;
                int32_t r14_1 = 1;
                int32_t rax_10;

                do
                {
                    void* rbx_1 = *arg1;
                    char* rax_6 = *(rbx_1 + 0xc0);

                    if (rax_6 < *(rbx_1 + 0xc8))
                    {
                        rcx_6 = *rax_6;
                        *(rbx_1 + 0xc0) = &rax_6[1];
                    }
                    else if (!*(rbx_1 + 0x30))
                        rcx_6 = 0;
                    else
                    {
                        sub_140001d70(rbx_1);
                        char* rax_8 = *(rbx_1 + 0xc0);
                        rcx_6 = *rax_8;
                        *(rbx_1 + 0xc0) = &rax_8[1];
                    }

                    rax_10 = 0;

                    if (rcx_6 == *(i_4 + "JFIF"))
                        rax_10 = r14_1;

                    i_4 += 1;
                    r14_1 = rax_10;
                } while (i_4 < 5);

                rdi_2 -= 5;

                if (rax_10)
                    arg1[0x909] = 1;
            }
            void* r8_1 = *arg1;

            if (!rdi_2)
                result = 1;
            else if (rdi_2 >= 0)
            {
                int32_t rcx_16;

                if (*(r8_1 + 0x10))
                    rcx_16 = *(r8_1 + 0xc8) - *(r8_1 + 0xc0);

                if (!*(r8_1 + 0x10) || rcx_16 >= rdi_2)
                {
                    *(r8_1 + 0xc0) += rdi_2;
                    result = 1;
                }
                else
                {
                    int64_t rcx_17 = *(r8_1 + 0x28);
                    *(r8_1 + 0xc0) = *(r8_1 + 0xc8);
                    (*(r8_1 + 0x18))(rcx_17, rdi_2 - rcx_16);
                    result = 1;
                }
            }
            else
            {
                *(r8_1 + 0xc0) = *(r8_1 + 0xc8);
                result = 1;
            }
        }
        else
        {
            int64_t rcx_7 = *gsbase->ThreadLocalStoragePointer;

            if (arg2 != 0xfe)
            {
                *(0x10 + rcx_7) = "bad APP len";
                result = 0;
            }
            else
            {
                *(0x10 + rcx_7) = "bad COM len";
                result = 0;
            }
        }
    }
    else
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unknown marker";
        result = 0;
    }
    label_140005c00:
    __security_check_cookie(rax_1 ^ &var_a8);
    return result;
}

int64_t sub_140005c50(int64_t* arg1)
{
    int32_t rax = sub_140001ec0(*arg1);
    void* rbx = *arg1;
    char* rdx = *(rbx + 0xc0);
    char rcx_1;

    if (rdx < *(rbx + 0xc8))
    {
        rcx_1 = *rdx;
        *(rbx + 0xc0) = &rdx[1];
    }
    else if (!*(rbx + 0x30))
        rcx_1 = 0;
    else
    {
        sub_140001d70(rbx);
        char* rax_1 = *(rbx + 0xc0);
        rcx_1 = *rax_1;
        *(rbx + 0xc0) = &rax_1[1];
    }

    uint64_t rcx_4 = rcx_1;
    *(arg1 + 0x4854) = rcx_4;
    TEB* gsbase;

    if (rcx_4 < 1 || rcx_4 > 4 || rcx_4 > *(*arg1 + 8))
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad SOS component count";
        return 0;
    }

    if (rax != (rcx_4 << 1) + 6)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad SOS len";
        return 0;
    }

    int32_t rbp = 0;
    void* r14 = &arg1[0x90b];

    while (true)
    {
        void* rbx_1 = *arg1;
        char* rax_7 = *(rbx_1 + 0xc0);

        if (rax_7 < *(rbx_1 + 0xc8))
        {
            rcx_4 = *rax_7;
            *(rbx_1 + 0xc0) = &rax_7[1];
        }
        else if (!*(rbx_1 + 0x30))
            rcx_4 = 0;
        else
        {
            sub_140001d70(rbx_1);
            char* rax_9 = *(rbx_1 + 0xc0);
            rcx_4 = *rax_9;
            *(rbx_1 + 0xc0) = &rax_9[1];
        }

        void* rbx_2 = *arg1;
        uint32_t rsi_1 = rcx_4;
        char* rax_11 = *(rbx_2 + 0xc0);

        if (rax_11 < *(rbx_2 + 0xc8))
        {
            rcx_4 = *rax_11;
            *(rbx_2 + 0xc0) = &rax_11[1];
        }
        else if (!*(rbx_2 + 0x30))
            rcx_4 = 0;
        else
        {
            sub_140001d70(rbx_2);
            char* rax_13 = *(rbx_2 + 0xc0);
            rcx_4 = *rax_13;
            *(rbx_2 + 0xc0) = &rax_13[1];
        }

        int32_t rdx_2 = 0;
        uint32_t r9_1 = rcx_4;
        int64_t r8_1 = 0;
        int32_t rcx_7 = *(*arg1 + 8);

        if (rcx_7 > 0)
        {
            int32_t* rax_16 = &arg1[0x8d4];

            do
            {
                if (*rax_16 == rsi_1)
                    goto label_140005e00;

                rdx_2 += 1;
                r8_1 += 1;
                rax_16 = &rax_16[0x18];
            } while (rdx_2 < rcx_7);
        }

        if (rdx_2 == rcx_7)
            break;

        label_140005e00:
        int64_t rax_18 = r8_1 * 0x60;
        rcx_4 = r9_1 >> 4;
        *(rax_18 + arg1 + 0x46b0) = rcx_4;
        char const* const rax_36;
        int64_t rcx_14;

        if (rcx_4 > 3)
        {
            rcx_14 = *gsbase->ThreadLocalStoragePointer;
            rax_36 = "bad DC huff";
        }
        else
        {
            int32_t r9_2 = r9_1 & 0xf;
            *(rax_18 + arg1 + 0x46b4) = r9_2;

            if (r9_2 > 3)
            {
                rcx_14 = *gsbase->ThreadLocalStoragePointer;
                rax_36 = "bad AC huff";
            }
            else
            {
                *r14 = rdx_2;
                rbp += 1;
                r14 += 4;

                if (rbp < *(arg1 + 0x4854))
                    continue;
                else
                {
                    void* rbx_3 = *arg1;
                    char* rax_19 = *(rbx_3 + 0xc0);

                    if (rax_19 < *(rbx_3 + 0xc8))
                    {
                        rcx_4 = *rax_19;
                        *(rbx_3 + 0xc0) = &rax_19[1];
                    }
                    else if (!*(rbx_3 + 0x30))
                        rcx_4 = 0;
                    else
                    {
                        sub_140001d70(rbx_3);
                        char* rax_21 = *(rbx_3 + 0xc0);
                        rcx_4 = *rax_21;
                        *(rbx_3 + 0xc0) = &rax_21[1];
                    }

                    void* rbx_4 = *arg1;
                    *(arg1 + 0x4834) = rcx_4;
                    char* rax_24 = *(rbx_4 + 0xc0);

                    if (rax_24 < *(rbx_4 + 0xc8))
                    {
                        rcx_4 = *rax_24;
                        *(rbx_4 + 0xc0) = &rax_24[1];
                    }
                    else if (!*(rbx_4 + 0x30))
                        rcx_4 = 0;
                    else
                    {
                        sub_140001d70(rbx_4);
                        char* rax_26 = *(rbx_4 + 0xc0);
                        rcx_4 = *rax_26;
                        *(rbx_4 + 0xc0) = &rax_26[1];
                    }

                    void* rbx_5 = *arg1;
                    arg1[0x907] = rcx_4;
                    char* rax_29 = *(rbx_5 + 0xc0);

                    if (rax_29 < *(rbx_5 + 0xc8))
                    {
                        rcx_4 = *rax_29;
                        *(rbx_5 + 0xc0) = &rax_29[1];
                    }
                    else if (!*(rbx_5 + 0x30))
                        rcx_4 = 0;
                    else
                    {
                        sub_140001d70(rbx_5);
                        char* rax_31 = *(rbx_5 + 0xc0);
                        rcx_4 = *rax_31;
                        *(rbx_5 + 0xc0) = &rax_31[1];
                    }

                    int32_t rdx_3 = *(arg1 + 0x4834);
                    uint32_t rax_33 = rcx_4;
                    int32_t rax_34 = rax_33 & 0xf;
                    uint32_t rcx_13 = rax_33 >> 4;
                    bool cond:0_1 = !arg1[0x906];
                    *(arg1 + 0x483c) = rcx_13;
                    arg1[0x908] = rax_34;

                    if (cond:0_1)
                    {
                        if (!rdx_3 && !rcx_13 && !rax_34)
                        {
                            arg1[0x907] = 0x3f;
                            return 1;
                        }
                    }
                    else if (rdx_3 <= 0x3f)
                    {
                        int32_t r8_2 = arg1[0x907];

                        if (r8_2 <= 0x3f && rdx_3 <= r8_2 && rcx_13 <= 0xd && rax_34 <= 0xd)
                            return 1;
                    }

                    rcx_14 = *gsbase->ThreadLocalStoragePointer;
                    rax_36 = "bad SOS";
                }
            }
        }

        *(0x10 + rcx_14) = rax_36;
        break;
    }

    return 0;
}

uint64_t sub_140006030(void* arg1, int32_t arg2, int32_t arg3)
{
    if (arg2 > 0)
    {
        int64_t* rbx_1 = arg1 + 0x46d8;
        uint64_t i_1 = arg2;
        uint64_t i;

        do
        {
            int64_t rcx = *rbx_1;

            if (rcx)
            {
                free(rcx);
                *rbx_1 = 0;
                rbx_1[-1] = 0;
            }

            int64_t rcx_1 = rbx_1[1];

            if (rcx_1)
            {
                free(rcx_1);
                rbx_1[1] = 0;
                rbx_1[3] = 0;
            }

            int64_t rcx_2 = rbx_1[2];

            if (rcx_2)
            {
                free(rcx_2);
                rbx_1[2] = 0;
            }

            rbx_1 = &rbx_1[0xc];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return arg3;
}

uint64_t sub_1400060c0(int64_t* arg1, int32_t arg2)
{
    int32_t* rbx = *arg1;
    uint64_t r15 = 1;
    uint64_t r12 = 1;
    int32_t rax = sub_140001ec0(rbx);
    TEB* gsbase;

    if (rax >= 0xb)
    {
        char* rax_3 = *(rbx + 0xc0);

        if (rax_3 >= *(rbx + 0xc8))
        {
            if (!rbx[0xc])
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "only 8-bit";
                return 0;
            }

            sub_140001d70(rbx);
            rax_3 = *(rbx + 0xc0);
        }

        char rcx_3 = *rax_3;
        *(rbx + 0xc0) = &rax_3[1];

        if (rcx_3 != 8)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "only 8-bit";
            return 0;
        }

        int32_t rax_5 = sub_140001ec0(rbx);
        rbx[1] = rax_5;

        if (!rax_5)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no header height";
            return 0;
        }

        int32_t rax_8 = sub_140001ec0(rbx);
        *rbx = rax_8;

        if (!rax_8)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "0 width";
            return 0;
        }

        if (rbx[1] > 0x1000000 || rax_8 > 0x1000000)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
            return 0;
        }

        char* rax_13 = *(rbx + 0xc0);
        char i_6;

        if (rax_13 < *(rbx + 0xc8))
        {
            i_6 = *rax_13;
            *(rbx + 0xc0) = &rax_13[1];
        }
        else if (!rbx[0xc])
            i_6 = 0;
        else
        {
            sub_140001d70(rbx);
            char* rax_15 = *(rbx + 0xc0);
            i_6 = *rax_15;
            *(rbx + 0xc0) = &rax_15[1];
        }

        uint32_t i_5 = i_6;

        if ((i_5 - 1) & 0xfffffffc || i_5 == 2)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad component count";
            return 0;
        }

        rbx[2] = i_5;
        uint64_t i_2 = i_5;

        if (i_5)
        {
            void* rax_18 = &arg1[0x8dd];
            uint64_t i;

            do
            {
                *(rax_18 - 0x18) = 0;
                *rax_18 = 0;
                rax_18 += 0x60;
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            i_5 = rbx[2];
        }

        if (rax == i_5 + ((i_5 + 4) << 1))
        {
            arg1[0x90a] = 0;
            uint32_t rcx_10 = rbx[2];
            int32_t r14 = 0;
            char const* const rax_78;
            int64_t rcx_22;

            if (rcx_10 > 0)
            {
                void* const rbp_1 = &data_140022bd0;
                void* rdi_1 = arg1 + 0x46a4;

                while (true)
                {
                    char* rax_21 = *(rbx + 0xc0);

                    if (rax_21 < *(rbx + 0xc8))
                    {
                        rcx_10 = *rax_21;
                        *(rbx + 0xc0) = &rax_21[1];
                    }
                    else if (!rbx[0xc])
                        rcx_10 = 0;
                    else
                    {
                        sub_140001d70(rbx);
                        char* rax_23 = *(rbx + 0xc0);
                        rcx_10 = *rax_23;
                        *(rbx + 0xc0) = &rax_23[1];
                    }

                    uint32_t rdx = rcx_10;
                    *(rdi_1 - 4) = rdx;

                    if (rbx[2] == 3 && rdx == *rbp_1)
                        arg1[0x90a] += 1;

                    char* rax_26 = *(rbx + 0xc0);

                    if (rax_26 < *(rbx + 0xc8))
                    {
                        rcx_10 = *rax_26;
                        *(rbx + 0xc0) = &rax_26[1];
                    }
                    else if (!rbx[0xc])
                        rcx_10 = 0;
                    else
                    {
                        sub_140001d70(rbx);
                        char* rax_28 = *(rbx + 0xc0);
                        rcx_10 = *rax_28;
                        *(rbx + 0xc0) = &rax_28[1];
                    }

                    uint32_t rax_30 = rcx_10;
                    uint32_t rcx_14 = rax_30 >> 4;
                    *rdi_1 = rcx_14;

                    if (!rcx_14 || rcx_14 > 4)
                    {
                        rcx_22 = *gsbase->ThreadLocalStoragePointer;
                        rax_78 = "bad H";
                        goto label_140006699;
                    }

                    int32_t rax_31 = rax_30 & 0xf;
                    *(rdi_1 + 4) = rax_31;

                    if (!rax_31 || rax_31 > 4)
                    {
                        rcx_22 = *gsbase->ThreadLocalStoragePointer;
                        rax_78 = "bad V";
                        goto label_140006699;
                    }

                    char* rax_32 = *(rbx + 0xc0);

                    if (rax_32 < *(rbx + 0xc8))
                    {
                        rcx_14 = *rax_32;
                        *(rbx + 0xc0) = &rax_32[1];
                    }
                    else if (!rbx[0xc])
                        rcx_14 = 0;
                    else
                    {
                        sub_140001d70(rbx);
                        char* rax_34 = *(rbx + 0xc0);
                        rcx_14 = *rax_34;
                        *(rbx + 0xc0) = &rax_34[1];
                    }

                    uint32_t rax_36 = rcx_14;
                    *(rdi_1 + 8) = rax_36;

                    if (rax_36 > 3)
                    {
                        rcx_22 = *gsbase->ThreadLocalStoragePointer;
                        rax_78 = "bad TQ";
                        goto label_140006699;
                    }

                    rcx_10 = rbx[2];
                    r14 += 1;
                    rbp_1 += 1;
                    rdi_1 += 0x60;

                    if (r14 >= rcx_10)
                        break;

                    continue;
                }
            }

            if (arg2)
                return 1;

            int32_t r8_1 = *rbx;
            int32_t r9_1 = rbx[1];

            if (r8_1 >= 0 && r9_1 >= 0 && (!r9_1 || r8_1 <= COMBINE(0, 0x7fffffff) / r9_1))
            {
                int32_t r8_2 = r8_1 * r9_1;

                if (r8_2 >= 0 && rcx_10 >= 0 && (!rcx_10 || r8_2 <= COMBINE(0, 0x7fffffff) / rcx_10))
                {
                    int32_t i_4 = rbx[2];

                    if (i_4 > 0)
                    {
                        void* rdx_3 = &arg1[0x8d5];
                        uint64_t i_3 = i_4;
                        uint64_t i_1;

                        do
                        {
                            int32_t rax_39 = r15;
                            r15 = *(rdx_3 - 4);
                            rdx_3 += 0x60;
                            int32_t rcx_16 = r12;
                            r12 = *(rdx_3 - 0x60);

                            if (r15 <= rax_39)
                                r15 = rax_39;

                            if (r12 <= rcx_16)
                                r12 = rcx_16;

                            i_1 = i_3;
                            i_3 -= 1;
                        } while (i_1 != 1);
                    }

                    arg1[0x8d1] = r15;
                    uint32_t rcx_17 = r15 << 3;
                    *(arg1 + 0x468c) = r12;
                    uint32_t r8_3 = r12 << 3;
                    arg1[0x8d3] = rcx_17;
                    *(arg1 + 0x469c) = r8_3;
                    int32_t rbp_2 = 0;
                    arg1[0x8d2] = COMBINE(0, *rbx - 1 + rcx_17) / rcx_17;
                    *(arg1 + 0x4694) = COMBINE(0, rbx[1] - 1 + r8_3) / r8_3;

                    if (rbx[2] > 0)
                    {
                        void* rdi_2 = arg1 + 0x46bc;

                        while (true)
                        {
                            int32_t r8_4 = *(rdi_2 - 0x14);
                            *rdi_2 = COMBINE(0, *(rdi_2 - 0x18) * *rbx - 1 + r15) / r15;
                            *(rdi_2 + 4) = COMBINE(0, rbx[1] * r8_4 - 1 + r12) / r12;
                            int32_t r9_4 = (arg1[0x8d2] * *(rdi_2 - 0x18)) << 3;
                            *(rdi_2 + 8) = r9_4;
                            int32_t r8_5 = r8_4 * *(arg1 + 0x4694);
                            __builtin_memset(rdi_2 + 0x24, 0, 0x18);
                            int32_t r8_6 = r8_5 << 3;
                            *(rdi_2 + 0xc) = r8_6;

                            if (r9_4 < 0 || r8_6 < 0 || (r8_6 && r9_4 > COMBINE(0, 0x7fffffff) / r8_6))
                                *(rdi_2 + 0x1c) = 0;
                            else
                            {
                                int64_t rax_60 = malloc(r9_4 * r8_6 + 0xf);
                                *(rdi_2 + 0x1c) = rax_60;

                                if (rax_60)
                                {
                                    *(rdi_2 + 0x14) = (rax_60 + 0xf) & 0xfffffffffffffff0;

                                    if (!arg1[0x906])
                                        goto label_14000666a;

                                    int32_t rcx_19 = *(rdi_2 + 8);
                                    int32_t r8_7 = *(rdi_2 + 0xc);
                                    int32_t temp42_1;
                                    int32_t temp43_1;
                                    temp42_1 = HIGHD(rcx_19);
                                    temp43_1 = LOWD(rcx_19);
                                    *(rdi_2 + 0x3c) = (temp43_1 + (temp42_1 & 7)) >> 3;
                                    int32_t temp44_1;
                                    int32_t temp45_1;
                                    temp44_1 = HIGHD(r8_7);
                                    temp45_1 = LOWD(r8_7);
                                    *(rdi_2 + 0x40) = (temp45_1 + (temp44_1 & 7)) >> 3;

                                    if (rcx_19 < 0 || r8_7 < 0)
                                        *(rdi_2 + 0x24) = 0;
                                    else if (r8_7 && rcx_19 > COMBINE(0, 0x7fffffff) / r8_7)
                                        *(rdi_2 + 0x24) = 0;
                                    else
                                    {
                                        int32_t rcx_20 = rcx_19 * r8_7;

                                        if (rcx_20 < 0 || rcx_20 > 0x3fffffff)
                                            *(rdi_2 + 0x24) = 0;
                                        else
                                        {
                                            int32_t rax_72 = rcx_20 * 2;

                                            if (rax_72 > 0x7ffffff0)
                                                *(rdi_2 + 0x24) = 0;
                                            else
                                            {
                                                int64_t rax_74 = malloc(rax_72 + 0xf);
                                                *(rdi_2 + 0x24) = rax_74;

                                                if (rax_74)
                                                {
                                                    *(rdi_2 + 0x34) = (rax_74 + 0xf) & 0xfffffffffffffff0;
                                                    label_14000666a:
                                                    rbp_2 += 1;
                                                    rdi_2 += 0x60;

                                                    if (rbp_2 >= rbx[2])
                                                        break;

                                                    continue;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
                            return sub_140006030(arg1, rbp_2 + 1, 0);
                        }
                    }

                    return 1;
                }
            }

            rcx_22 = *gsbase->ThreadLocalStoragePointer;
            rax_78 = "too large";
            label_140006699:
            *(0x10 + rcx_22) = rax_78;
            return 0;
        }
    }

    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad SOF len";
    return 0;
}

int64_t sub_1400067c0(int64_t* arg1, int32_t arg2)
{
    *(arg1 + 0x484c) = 0xffffffff;
    arg1[0x909] = 0;
    arg1[0x905] = 0xff;
    TEB* gsbase;

    if (sub_140004b40(arg1) != 0xd8)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no SOI";
        return 0;
    }

    if (arg2 != 1)
    {
        uint32_t i = sub_140004b40(arg1);

        if (i != 0xc0)
        {
            while (i - 0xc1 > 1)
            {
                if (!sub_140005430(arg1, i))
                    goto label_14000690d;

                for (i = sub_140004b40(arg1); i == 0xff; i = sub_140004b40(arg1))
                {
                    void* rbx_1 = *arg1;

                    if (*(rbx_1 + 0x10))
                    {
                        if ((*(rbx_1 + 0x20))(*(rbx_1 + 0x28)) && (!*(rbx_1 + 0x30) || *(rbx_1 + 0xc0) >= *(rbx_1 + 0xc8)))
                        {
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no SOF";
                            goto label_14000690d;
                        }
                    }
                    else if (*(rbx_1 + 0xc0) >= *(rbx_1 + 0xc8))
                    {
                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no SOF";
                        goto label_14000690d;
                    }
                }

                if (i == 0xc0)
                    break;
            }
        }

        int32_t rbp;
        rbp = i == 0xc2;
        arg1[0x906] = rbp;

        if (!sub_1400060c0(arg1, arg2))
        {
            label_14000690d:
            return 0;
        }
    }

    return 1;
}

int64_t sub_140006920(int64_t* arg1)
{
    arg1[0x8db] = 0;
    arg1[0x8dc] = 0;
    arg1[0x8e7] = 0;
    arg1[0x8e8] = 0;
    arg1[0x8f3] = 0;
    arg1[0x8f4] = 0;
    arg1[0x8ff] = 0;
    arg1[0x900] = 0;
    arg1[0x90d] = 0;

    if (!sub_1400067c0(arg1, 0))
        return 0;

    uint32_t rax_2 = sub_140004b40(arg1);

    if (rax_2 != 0xd9)
    {
        while (true)
        {
            if (rax_2 == 0xda)
            {
                if (!sub_140005c50(arg1))
                    return 0;

                if (!sub_140004c10(arg1))
                    return 0;

                if (arg1[0x905] == 0xff)
                {
                    while (true)
                    {
                        void* rbx_1 = *arg1;

                        if (!*(rbx_1 + 0x10))
                        {
                            label_140006a16:

                            if (*(rbx_1 + 0xc0) >= *(rbx_1 + 0xc8))
                                break;
                        }
                        else if ((*(rbx_1 + 0x20))(*(rbx_1 + 0x28)))
                        {
                            if (!*(rbx_1 + 0x30))
                                break;

                            goto label_140006a16;
                        }

                        void* rbx_2 = *arg1;
                        char* rax_7 = *(rbx_2 + 0xc0);

                        if (rax_7 >= *(rbx_2 + 0xc8))
                        {
                            if (!*(rbx_2 + 0x30))
                                continue;
                            else
                            {
                                sub_140001d70(rbx_2);
                                rax_7 = *(rbx_2 + 0xc0);
                            }
                        }

                        char rcx_8 = *rax_7;
                        *(rbx_2 + 0xc0) = &rax_7[1];

                        if (rcx_8 == 0xff)
                        {
                            void* rbx_3 = *arg1;
                            char* rax_9 = *(rbx_3 + 0xc0);

                            if (rax_9 < *(rbx_3 + 0xc8))
                            {
                                char rcx_5 = *rax_9;
                                *(rbx_3 + 0xc0) = &rax_9[1];
                                arg1[0x905] = rcx_5;
                            }
                            else if (!*(rbx_3 + 0x30))
                                arg1[0x905] = 0;
                            else
                            {
                                sub_140001d70(rbx_3);
                                char* rax_11 = *(rbx_3 + 0xc0);
                                char rcx_7 = *rax_11;
                                *(rbx_3 + 0xc0) = &rax_11[1];
                                arg1[0x905] = rcx_7;
                            }

                            break;
                        }
                    }
                }
            }
            else if (rax_2 != 0xdc)
            {
                if (!sub_140005430(arg1, rax_2))
                    return 0;
            }
            else
            {
                int32_t rax_13 = sub_140001ec0(*arg1);
                int32_t rax_14 = sub_140001ec0(*arg1);
                TEB* gsbase;

                if (rax_13 != 4)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad DNL len";
                    return 0;
                }

                if (rax_14 != *(*arg1 + 4))
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad DNL height";
                    return 0;
                }
            }

            rax_2 = sub_140004b40(arg1);

            if (rax_2 == 0xd9)
                break;
        }
    }

    if (arg1[0x906])
    {
        int32_t i = 0;

        if (*(*arg1 + 8) > 0)
        {
            void* rbx_5 = &arg1[0x8de];

            do
            {
                int32_t r14_1 = 0;
                int32_t r15_3 = (*(rbx_5 - 0x34) + 7) >> 3;
                int32_t r12_3 = (*(rbx_5 - 0x30) + 7) >> 3;

                if (r12_3 > 0)
                {
                    do
                    {
                        int32_t rsi_1 = 0;

                        if (r15_3 > 0)
                        {
                            int64_t rbp_1 = 0;

                            do
                            {
                                int64_t j_1 = 0x10;
                                void* r8_1 = *rbx_5 + ((*(rbx_5 + 8) * r14_1 + rsi_1) << 6 << 1);
                                void* rax_27 = r8_1 + 2;
                                void* r9_3 = &arg1[0x691 + *(rbx_5 - 0x44) * 0x10] - r8_1;
                                int64_t j;

                                do
                                {
                                    int16_t rcx_16 = *(r9_3 + rax_27 - 2);
                                    int16_t rdx_2 = *(rax_27 - 2);
                                    rax_27 += 8;
                                    *(rax_27 - 0xa) = rdx_2 * rcx_16;
                                    *(rax_27 - 8) *= *(r9_3 + rax_27 - 8);
                                    *(rax_27 - 6) *= *(r9_3 + rax_27 - 6);
                                    *(rax_27 - 4) *= *(r9_3 + rax_27 - 4);
                                    j = j_1;
                                    j_1 -= 1;
                                } while (j != 1);
                                arg1[0x90e](((*(rbx_5 - 0x2c) * r14_1) << 3) + rbp_1 + *(rbx_5 - 0x20));
                                rsi_1 += 1;
                                rbp_1 += 8;
                            } while (rsi_1 < r15_3);
                        }

                        r14_1 += 1;
                    } while (r14_1 < r12_3);
                }

                i += 1;
                rbx_5 += 0x60;
            } while (i < *(*arg1 + 8));
        }
    }

    return 1;
}

int64_t sub_140006cd0(int64_t, int64_t arg2) __pure
{
    return arg2;
}

int64_t sub_140006ce0(int64_t arg1, int64_t arg2, void* arg3, int32_t arg4)
{
    int32_t rbx = 0;

    if (arg4 > 0 && arg4 >= 0x10 && data_140028018 >= 2)
    {
        void* rdx = arg4 - 1 + arg1;

        if ((arg1 > arg4 - 1 + arg3 || rdx < arg3) && (arg1 > arg4 - 1 + arg2 || rdx < arg2))
        {
            int32_t zmm3[0x4] = data_140022ce0;
            void* rdi_1 = arg3 + 4;
            int32_t zmm4[0x4] = data_140022cc0;
            void* rcx_3 = arg2 - arg3;
            void* rdx_2 = arg1 - arg3;
            uint128_t zmm5 = 2;

            do
            {
                uint128_t zmm0 = *(rcx_3 + rdi_1 - 4);
                rdi_1 += 0x10;
                rbx += 0x10;
                int32_t zmm1[0x4] = _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_sra_epi32(_mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_cvtepu8_epi32(zmm0), zmm3), _mm_cvtepu8_epi32(*(rdi_1 - 0x14))), zmm4), zmm5), 0xd8), 0xd8);
                zmm0 = *(rcx_3 + rdi_1 - 0x10);
                int32_t zmm2[0x4] = _mm_shuffle_epi32(zmm1, 0xd8) & data_140022d30;
                *(rdx_2 + rdi_1 - 0x14) = _mm_packus_epi16(zmm2, zmm2)[0];
                zmm1 = _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_sra_epi32(_mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_cvtepu8_epi32(zmm0), zmm3), _mm_cvtepu8_epi32(*(rdi_1 - 0x10))), zmm4), zmm5), 0xd8), 0xd8);
                zmm0 = *(rcx_3 + rdi_1 - 0xc);
                zmm2 = _mm_shuffle_epi32(zmm1, 0xd8) & data_140022d30;
                *(rdx_2 + rdi_1 - 0x10) = _mm_packus_epi16(zmm2, zmm2)[0];
                zmm1 = _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_sra_epi32(_mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_cvtepu8_epi32(zmm0), zmm3), _mm_cvtepu8_epi32(*(rdi_1 - 0xc))), zmm4), zmm5), 0xd8), 0xd8);
                zmm0 = *(rcx_3 + rdi_1 - 8);
                zmm2 = _mm_shuffle_epi32(zmm1, 0xd8) & data_140022d30;
                *(rdx_2 + rdi_1 - 0xc) = _mm_packus_epi16(zmm2, zmm2)[0];
                zmm2 = _mm_shuffle_epi32(_mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_sra_epi32(_mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(_mm_cvtepu8_epi32(zmm0), zmm3), _mm_cvtepu8_epi32(*(rdi_1 - 8))), zmm4), zmm5), 0xd8), 0xd8), 0xd8) & data_140022d30;
                *(rdx_2 + rdi_1 - 8) = _mm_packus_epi16(zmm2, zmm2)[0];
            } while (-4 - arg3 + rdi_1 < (arg4 & 0xfffffffffffffff0));
        }
    }

    int64_t rcx_4 = rbx;
    int64_t r9 = arg4;

    if (rcx_4 < r9)
    {
        void* rax_4 = rcx_4 + arg3;
        int64_t i_1 = r9 - rcx_4;
        int64_t i;

        do
        {
            uint64_t rcx_5 = *(arg2 - arg3 + rax_4);
            uint32_t r8 = *rax_4;
            rax_4 += 1;
            *(arg1 - arg3 + rax_4 - 1) = (r8 + 2 + rcx_5 * 3) >> 2;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return arg1;
}

char* sub_140006f10(char* arg1, char* arg2, int64_t arg3, int32_t arg4)
{
    char rax = *arg2;
    *arg1 = rax;

    if (arg4 == 1)
    {
        arg1[1] = rax;
        return arg1;
    }

    int64_t rsi = arg4;
    int32_t rdi = 1;
    arg1[1] = (arg2[1] + 2 + *arg2 * 3) >> 2;

    if (rsi - 1 > 1)
    {
        void* i_1 = rsi - 2;
        rdi = i_1 + 1;
        void* r8 = &arg1[2];
        void* rdx_4 = &arg2[2];
        void* i;

        do
        {
            uint32_t rax_3 = *(rdx_4 - 1);
            r8 += 2;
            rdx_4 += 1;
            int32_t rcx_2 = rax_3 + ((rax_3 + 1) << 1);
            *(r8 - 2) = (*(rdx_4 - 3) + rcx_2) >> 2;
            *(r8 - 1) = (*(rdx_4 - 1) + rcx_2) >> 2;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    int64_t r8_1 = rdi * 2;
    arg1[r8_1] = (*(rsi - 1 + arg2) + 2 + arg2[rsi - 2] * 3) >> 2;
    arg1[r8_1 + 1] = *(rsi - 1 + arg2);
    return arg1;
}

uint8_t* sub_140007000(uint8_t* arg1, char* arg2, char* arg3, int32_t arg4)
{
    int64_t rsi = arg4;
    uint32_t rax_2 = *arg2 * 3 + *arg3;

    if (rsi == 1)
    {
        uint8_t rax_4 = (rax_2 + 2) >> 2;
        arg1[1] = rax_4;
        *arg1 = rax_4;
        return arg1;
    }

    *arg1 = (rax_2 + 2) >> 2;

    if (rsi > 1)
    {
        void* r9 = &arg3[1];
        int64_t i_1 = rsi - 1;
        void* r10_1 = &arg1[2];
        int64_t i;

        do
        {
            uint32_t rcx_2 = *r9;
            r10_1 += 2;
            uint32_t r8 = rax_2;
            uint64_t rax_6 = *(arg2 - arg3 + r9);
            r9 += 1;
            rax_2 = rax_6 * 3 + rcx_2;
            *(r10_1 - 3) = (rax_2 + ((r8 + 4) << 1) + r8) >> 4;
            *(r10_1 - 2) = (r8 + ((rax_2 + 4) << 1) + rax_2) >> 4;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    arg1[rsi * 2 - 1] = (rax_2 + 2) >> 2;
    return arg1;
}

uint8_t* sub_1400070c0(uint8_t* arg1, char* arg2, char* arg3, int32_t arg4)
{
    int64_t r14 = arg4;
    int64_t* rsi = arg3;
    uint32_t r9 = 0;
    uint32_t rdx_1 = *arg2 * 3 + *arg3;

    if (r14 == 1)
    {
        uint8_t rax_3 = (rdx_1 + 2) >> 2;
        arg1[1] = rax_3;
        *arg1 = rax_3;
        return arg1;
    }

    int32_t rax_6 = (r14 - 1) & 0xfffffff8;

    if (rax_6 > 0)
    {
        int16_t zmm5[0x8] = data_140022d20;
        void* r10_1 = &arg3[8];
        void* r8_1 = arg2 - rsi;
        uint8_t* rbp_1 = arg1;
        uint64_t rax_9 = ((rax_6 - 1) >> 3) + 1;
        int64_t* r11_1 = rsi;
        uint64_t i_3 = rax_9;
        r9 = rax_9 << 3;
        uint64_t i;

        do
        {
            uint64_t rax_10 = *(r8_1 + r10_1);
            rbp_1 = &rbp_1[0x10];
            int16_t zmm0[0x8] = *(r8_1 + r11_1);
            r10_1 += 8;
            uint128_t zmm3 = *r11_1;
            r11_1 = &r11_1[1];
            zmm0 = _mm_unpacklo_epi8(zmm0, 0);
            zmm3 = _mm_unpacklo_epi8(zmm3, 0);
            uint32_t rax_11 = *(r10_1 - 8);
            zmm3 = _mm_add_epi16(_mm_sub_epi16(zmm3, zmm0), _mm_slli_epi16(zmm0, 2));
            int32_t temp0_7[0x4] = _mm_insert_epi16(_mm_slli_si128(zmm3, 2), rdx_1, 0);
            zmm0 = _mm_slli_epi16(zmm3, 2);
            int32_t temp0_9[0x4] = _mm_sub_epi16(temp0_7, zmm3);
            int16_t temp0_10[0x8] = _mm_add_epi16(zmm0, zmm5);
            int32_t zmm1[0x4] = _mm_bsrli_si128(zmm3, 2);
            int32_t zmm2[0x4] = _mm_add_epi16(temp0_9, temp0_10);
            zmm1 = _mm_add_epi16(_mm_sub_epi16(_mm_insert_epi16(zmm1, rax_10 * 3 + rax_11, 7), zmm3), temp0_10);
            zmm0 = _mm_unpacklo_epi16(zmm2, zmm1[0]);
            int32_t temp0_17[0x4] = _mm_unpackhi_epi16(zmm2, zmm1[0]);
            *(rbp_1 - 0x10) = _mm_packus_epi16(_mm_srli_epi16(zmm0, 4), _mm_srli_epi16(temp0_17, 4));
            rdx_1 = *(r8_1 + r10_1 - 9) * 3 + *(r10_1 - 9);
            i = i_3;
            i_3 -= 1;
        } while (i != 1);
    }

    int64_t rcx_2 = r9;
    uint64_t rax_16 = arg2[rcx_2] * 3 + *(rcx_2 + rsi);
    arg1[r9 * 2] = (rdx_1 + 8 + (rax_16 << 1) + rax_16) >> 4;
    int64_t rdx_4 = r9 + 1;

    if (rdx_4 < r14)
    {
        char* r9_1 = rdx_4 + rsi;
        int64_t i_2 = r14 - rdx_4;
        void* r10_2 = &arg1[rdx_4 << 1];
        int64_t i_1;

        do
        {
            uint32_t rcx_6 = *r9_1;
            r10_2 += 2;
            int32_t r8_6 = rax_16;
            uint64_t rax_17 = *(arg2 - rsi + r9_1);
            r9_1 = &r9_1[1];
            rax_16 = rax_17 * 3 + rcx_6;
            *(r10_2 - 3) = (rax_16 + ((r8_6 + 4) << 1) + r8_6) >> 4;
            *(r10_2 - 2) = (r8_6 + ((rax_16 + 4) << 1) + rax_16) >> 4;
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    arg1[r14 * 2 - 1] = (rax_16 + 2) >> 2;
    return arg1;
}

char* sub_1400072c0(char* arg1, char* arg2, int64_t arg3, int32_t arg4, int32_t arg5)
{
    if (arg4 > 0)
    {
        int64_t r8 = arg5;
        char* r10_1 = arg1;
        uint64_t i_1 = arg4;
        uint64_t i;

        do
        {
            if (r8 > 0)
            {
                int64_t rax_1 = 0;

                do
                {
                    r10_1[rax_1] = *arg2;
                    rax_1 += 1;
                } while (rax_1 < r8);
            }

            r10_1 = &r10_1[r8];
            arg2 = &arg2[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return arg1;
}

void sub_140007300(void* arg1, int64_t arg2, int64_t arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    int64_t i_1 = arg5;
    char* rbx = arg4;

    if (i_1 > 0)
    {
        void* rax = arg1 + 2;
        void* r14_1 = arg2 - rbx;
        void* rbp_1 = arg3 - rbx;
        int64_t i;

        do
        {
            uint32_t r8 = *rbx;
            uint32_t r9 = *(rbx + rbp_1);
            int32_t r10_3 = (*(r14_1 + rbx) << 0x14) + 0x80000;
            int32_t r11_3 = ((r8 - 0x80) * 0x166f00 + r10_3) >> 0x14;
            int32_t r8_3 = ((0x80 - r8) * 0xb6d00 + r10_3 + (((0x80 - r9) * 0x58200) & 0xffff0000)) >> 0x14;
            int32_t rdx_4 = ((r9 - 0x80) * 0x1c5a00 + r10_3) >> 0x14;

            if (r11_3 > 0xff)
            {
                int32_t rcx_5 = 0xff;

                if (r11_3 < 0)
                    rcx_5 = 0;

                r11_3 = rcx_5;
            }

            if (r8_3 > 0xff)
            {
                int32_t rcx_6 = 0xff;

                if (r8_3 < 0)
                    rcx_6 = 0;

                r8_3 = rcx_6;
            }

            if (rdx_4 > 0xff)
            {
                int32_t rcx_7 = 0xff;

                if (rdx_4 < 0)
                    rcx_7 = 0;

                rdx_4 = rcx_7;
            }

            *(rax - 2) = r11_3;
            rbx = &rbx[1];
            *(rax - 1) = r8_3;
            *rax = rdx_4;
            *(rax + 1) = 0xff;
            rax += arg6;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
}

int64_t sub_140007430(uint128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int32_t arg5, int32_t arg6)
{
    int64_t r10 = arg6;
    int64_t rdx = arg5;
    int32_t result_2 = 0;

    if (r10 == 4)
    {
        int32_t zmm5[0x4] = data_140022db0;
        int16_t zmm7[0x8] = data_140022d90;
        int16_t zmm8[0x8] = data_140022df0;
        int16_t zmm9[0x8] = data_140022e10;
        int16_t zmm10[0x8] = data_140022da0;
        int16_t zmm11[0x8] = data_140022d30;

        if (rdx > 7)
        {
            do
            {
                int64_t result_3 = result_2;
                result_2 += 8;
                int32_t temp0_1[0x4] = _mm_unpacklo_epi8({0}, (*(result_3 + arg4) ^ zmm5));
                uint128_t zmm0 = *(result_3 + arg3) ^ zmm5;
                int32_t zmm3[0x4] = _mm_mulhi_epi16(temp0_1, zmm7);
                int16_t zmm4[0x8] = _mm_unpacklo_epi8({0}, zmm0);
                int32_t zmm1[0x4] = _mm_srli_epi16(_mm_unpacklo_epi8(zmm5, *(result_3 + arg2)), 4);
                zmm3 = _mm_add_epi16(zmm3, zmm1);
                zmm0 = _mm_mulhi_epi16(zmm4, zmm10);
                int16_t temp0_8[0x8] = _mm_mulhi_epi16(zmm4, zmm9);
                zmm3 = _mm_srai_epi16(zmm3, 4);
                int32_t zmm2[0x4] = _mm_mulhi_epi16(temp0_1, zmm8);
                zmm0 = _mm_add_epi16(zmm0, zmm1);
                int16_t temp0_12[0x8] = _mm_add_epi16(temp0_8, zmm1);
                zmm3 = _mm_packus_epi16(zmm3, _mm_srai_epi16(zmm0, 4));
                int16_t temp0_17[0x8] = _mm_packus_epi16(_mm_srai_epi16(_mm_add_epi16(temp0_12, zmm2), 4), zmm11);
                int32_t temp0_18[0x4] = _mm_unpacklo_epi8(zmm3, temp0_17[0]);
                int32_t temp0_19[0x4] = _mm_unpackhi_epi8(zmm3, temp0_17[0]);
                zmm0 = _mm_unpacklo_epi16(temp0_18, temp0_19[0]);
                int32_t temp0_21[0x4] = _mm_unpackhi_epi16(temp0_18, temp0_19[0]);
                *arg1 = zmm0;
                arg1[1] = temp0_21;
                arg1 = &arg1[2];
            } while (result_2 + 7 < rdx);
        }
    }

    int64_t result = result_2;

    if (result < rdx)
    {
        char* r11_1 = arg1 + 2;
        char* rbx_1 = result + arg4;
        int64_t i_1 = rdx - result;
        int64_t i;

        do
        {
            uint32_t rdx_1 = *rbx_1;
            uint32_t r8 = *(arg3 - arg4 + rbx_1);
            int32_t r9_2 = (rbx_1[arg2 - arg4] << 0x14) + 0x80000;
            int32_t r10_3 = ((rdx_1 - 0x80) * 0x166f00 + r9_2) >> 0x14;
            int32_t rdx_4 = ((0x80 - rdx_1) * 0xb6d00 + r9_2 + (((0x80 - r8) * 0x58200) & 0xffff0000)) >> 0x14;
            result = ((r8 - 0x80) * 0x1c5a00 + r9_2) >> 0x14;

            if (r10_3 > 0xff)
            {
                int32_t rcx_2 = 0xff;

                if (r10_3 < 0)
                    rcx_2 = 0;

                r10_3 = rcx_2;
            }

            if (rdx_4 > 0xff)
            {
                int32_t rcx_3 = 0xff;

                if (rdx_4 < 0)
                    rcx_3 = 0;

                rdx_4 = rcx_3;
            }

            if (result > 0xff)
            {
                int32_t result_1 = 0xff;

                if (result < 0)
                    result_1 = 0;

                result = result_1;
            }

            r11_1[-2] = r10_3;
            rbx_1 = &rbx_1[1];
            r11_1[-1] = rdx_4;
            *r11_1 = result;
            r11_1[1] = 0xff;
            r11_1 = &r11_1[r10];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}

uint64_t sub_1400076d0(void* arg1)
{
    *(arg1 + 0x4870) = sub_140003cf0;
    *(arg1 + 0x4878) = sub_140007300;
    *(arg1 + 0x4880) = sub_140007000;
    int32_t temp0;
    temp0 = __cpuid(1, 0);
    int32_t temp3;

    if (TEST_BITD(temp3, 0x1a))
    {
        *(arg1 + 0x4870) = sub_140004310;
        *(arg1 + 0x4878) = sub_140007430;
        *(arg1 + 0x4880) = sub_1400070c0;
    }

    return temp0;
}

int64_t sub_140007750(int64_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    void var_1a8;
    int64_t rax_1 = __security_cookie ^ &var_1a8;
    uint64_t r14 = arg5;
    int64_t* rsi = arg1;
    *(*arg1 + 8) = 0;
    int32_t var_178 = r14;
    int64_t result;
    TEB* gsbase;

    if (r14 > 4)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad req_comp";
        result = 0;
    }
    else
    {
        int32_t rax_3 = sub_140006920(arg1);
        int32_t* rcx = *rsi;

        if (rax_3)
        {
            int32_t rax_4 = rcx[2];
            int32_t r13_1 = 1;

            if (!r14)
            {
                r14 = 1;

                if (rax_4 >= 3)
                    r14 = 3;

                var_178 = r14;
            }

            int64_t var_170_1;
            int32_t rdx_1;

            if (rax_4 != 3 || (rsi[0x90a] != 3 && (*(rsi + 0x484c) || rsi[0x909])))
            {
                var_170_1 = 0;
                rdx_1 = 0;

                if (rax_4 == 3)
                    goto label_14000782f;
            }
            else
            {
                rdx_1 = 1;
                var_170_1 = 1;
                label_14000782f:

                if (r14 < 3 && !rdx_1)
                    rax_4 = 1;
            }
            int64_t r15_1 = rax_4;
            int128_t s;
            __builtin_memset(&s, 0, 0x20);
            int32_t rdx_5;

            if (rax_4 > 0)
            {
                int64_t rbp_1 = 0;
                void var_100;
                void* rbx_1 = &var_100;
                void* rdi_1 = rsi + 0x46a4;

                do
                {
                    int64_t rax_6 = malloc(**rsi + 3);
                    *(rdi_1 + 0x44) = rax_6;

                    if (!rax_6)
                    {
                        rdx_5 = *(*rsi + 8);
                        goto label_140007f9b;
                    }

                    int32_t temp4_1;
                    int32_t temp5_1;
                    temp4_1 = HIGHD(rsi[0x8d1]);
                    temp5_1 = LOWD(rsi[0x8d1]);
                    *(rbx_1 + 0x10) = 0;
                    int32_t temp0_1 = COMBINE(temp4_1, temp5_1) / *rdi_1;
                    *rbx_1 = temp0_1;
                    int32_t temp0_2 = *(rsi + 0x468c) / *(rdi_1 + 4);
                    *(rbx_1 + 4) = temp0_2;
                    *(rbx_1 + 0xc) = temp0_2 >> 1;
                    int64_t rcx_7 = *(rdi_1 + 0x2c);
                    int32_t rax_15 = **rsi - 1 + temp0_1;
                    *(rbx_1 - 8) = rcx_7;
                    *(rbx_1 - 0x10) = rcx_7;
                    *(rbx_1 + 8) = COMBINE(0, rax_15) / temp0_1;
                    int64_t (* rax_17)(int64_t, int64_t arg2);

                    if (temp0_1 != 1)
                    {
                        if (temp0_1 != 2)
                            rax_17 = sub_1400072c0;
                        else if (temp0_2 == 1)
                            rax_17 = sub_140006f10;
                        else if (temp0_2 != 2)
                            rax_17 = sub_1400072c0;
                        else
                            rax_17 = rsi[0x910];
                    }
                    else if (temp0_2 == 1)
                        rax_17 = sub_140006cd0;
                    else if (temp0_2 != 2)
                        rax_17 = sub_1400072c0;
                    else
                        rax_17 = sub_140006ce0;

                    *(rbx_1 - 0x18) = rax_17;
                    rbp_1 += 1;
                    rbx_1 += 0x30;
                    rdi_1 += 0x60;
                } while (rbp_1 < r15_1);

                rcx = *rsi;
            }

            int32_t r8_1 = rcx[1];
            int32_t rcx_8 = *rcx;
            int32_t* rcx_12;

            if (r14 < 0 || rcx_8 < 0)
            {
                label_140007f8f:
                rcx_12 = *rsi;
                label_140007f92:
                rdx_5 = rcx_12[2];
                label_140007f9b:
                sub_140006030(rsi, rdx_5, 0);
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
                result = 0;
            }
            else
            {
                if (rcx_8 && r14 > COMBINE(0, 0x7fffffff) / rcx_8)
                    goto label_140007f8f;

                int32_t r9_2 = rcx_8 * r14;

                if (r9_2 < 0 || r8_1 < 0)
                    goto label_140007f8f;

                if (r8_1 && r9_2 > COMBINE(0, 0x7fffffff) / r8_1)
                    goto label_140007f8f;

                int32_t rcx_10 = rcx_8 * r8_1 * r14;

                if (rcx_10 > 0x7ffffffe)
                    goto label_140007f8f;

                int64_t result_1 = malloc(rcx_10 + 1);
                rcx_12 = *rsi;

                if (!result_1)
                    goto label_140007f92;

                int32_t i = 0;
                int32_t i_1 = 0;

                if (rcx_12[1] > 0)
                {
                    int128_t var_150;
                    int64_t r13_2 = *var_150[8];
                    int64_t rbp_2 = var_150;
                    int64_t r15_2 = *s[8];
                    int64_t rdi_2 = s;

                    do
                    {
                        int64_t r14_1 = 0;
                        char* rbx_5 = *rcx_12 * i * r14 + result_1;
                        int32_t var_180;

                        if (r15_1 > 0)
                        {
                            void* rbp_3 = &rsi[0x8d8];
                            void var_f4;
                            void* rdi_3 = &var_f4;

                            do
                            {
                                int32_t r15_3 = *(rdi_3 - 8);
                                int32_t r13_3 = *rdi_3;
                                int64_t rdx_4;
                                int64_t r8_2;

                                if (r13_3 < r15_3 >> 1)
                                {
                                    rdx_4 = *(rdi_3 - 0x1c);
                                    r8_2 = *(rdi_3 - 0x14);
                                }
                                else
                                {
                                    rdx_4 = *(rdi_3 - 0x14);
                                    r8_2 = *(rdi_3 - 0x1c);
                                }

                                *(&s + (r14_1 << 3)) = (*(rdi_3 - 0x24))(*(rbp_3 + 0x28), rdx_4, r8_2, *(rdi_3 - 4), *(rdi_3 - 0xc), var_180, var_178, var_170_1, r15_1);
                                *rdi_3 = r13_3 + 1;

                                if (r13_3 + 1 >= r15_3)
                                {
                                    *(rdi_3 + 4) += 1;
                                    int32_t rax_27 = *(rdi_3 + 4);
                                    int64_t rcx_14 = *(rdi_3 - 0x14);
                                    *rdi_3 = 0;
                                    *(rdi_3 - 0x1c) = rcx_14;

                                    if (rax_27 < *rbp_3)
                                        *(rdi_3 - 0x14) = *(rbp_3 + 4) + rcx_14;
                                }

                                r14_1 += 1;
                                rdi_3 += 0x30;
                                rbp_3 += 0x60;
                            } while (r14_1 < r15_1);

                            rsi = arg1;
                            r13_2 = *var_150[8];
                            rbp_2 = var_150;
                            r15_2 = *s[8];
                            rcx_12 = *rsi;
                            rdi_2 = s;
                        }

                        r14 = var_178;

                        if (r14 >= 3)
                        {
                            int32_t rax_30 = rcx_12[2];

                            if (rax_30 != 3)
                            {
                                if (rax_30 != 4)
                                {
                                    char* rdx_11 = nullptr;

                                    if (*rcx_12 > 0)
                                    {
                                        do
                                        {
                                            char rcx_35 = rdx_11[rdi_2];
                                            rdx_11 = rdx_11 + 1;
                                            rbx_5[2] = rcx_35;
                                            rbx_5[1] = rcx_35;
                                            *rbx_5 = rcx_35;
                                            rbx_5[3] = 0xff;
                                            rbx_5 = &rbx_5[r14];
                                        } while (rdx_11 < **rsi);
                                    }

                                    rcx_12 = *rsi;
                                }
                                else
                                {
                                    int32_t rax_36 = *(rsi + 0x484c);

                                    if (rax_36)
                                    {
                                        int32_t rdx_8 = *rcx_12;
                                        int64_t r10_1 = rsi[0x90f];
                                        var_180 = r14;

                                        if (rax_36 != 2)
                                        {
                                            r10_1(rbx_5, rdi_2, r15_2, rbp_2, rdx_8, var_180, var_178, var_170_1, r15_1);
                                            rcx_12 = *rsi;
                                        }
                                        else
                                        {
                                            r10_1(rbx_5, rdi_2, r15_2, rbp_2, rdx_8, var_180, var_178, var_170_1, r15_1);
                                            uint64_t r8_6 = 0;

                                            if (**rsi <= 0)
                                                rcx_12 = *rsi;
                                            else
                                            {
                                                int32_t* rax_66;

                                                do
                                                {
                                                    uint32_t rdx_10 = *(r8_6 + r13_2);
                                                    r8_6 = r8_6 + 1;
                                                    int32_t rcx_28 = ~*rbx_5 * rdx_10 + 0x80;
                                                    *rbx_5 = ((rcx_28 >> 8) + rcx_28) >> 8;
                                                    int32_t rcx_31 = ~rbx_5[1] * rdx_10 + 0x80;
                                                    rbx_5[1] = ((rcx_31 >> 8) + rcx_31) >> 8;
                                                    int32_t rcx_34 = ~rbx_5[2] * rdx_10 + 0x80;
                                                    rbx_5[2] = ((rcx_34 >> 8) + rcx_34) >> 8;
                                                    rbx_5 = &rbx_5[r14];
                                                    rax_66 = *rsi;
                                                } while (r8_6 < *rax_66);

                                                rcx_12 = rax_66;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        uint64_t r9_5 = 0;

                                        if (*rcx_12 <= 0)
                                            rcx_12 = *rsi;
                                        else
                                        {
                                            int32_t* rax_49;

                                            do
                                            {
                                                uint32_t r8_4 = *(r9_5 + r13_2);
                                                int32_t rcx_18 = *(r9_5 + rdi_2) * r8_4 + 0x80;
                                                *rbx_5 = ((rcx_18 >> 8) + rcx_18) >> 8;
                                                int32_t rcx_21 = *(r9_5 + r15_2) * r8_4 + 0x80;
                                                rbx_5[1] = ((rcx_21 >> 8) + rcx_21) >> 8;
                                                uint32_t rcx_22 = *(r9_5 + rbp_2);
                                                r9_5 = r9_5 + 1;
                                                rbx_5[3] = 0xff;
                                                rbx_5[2] = (((rcx_22 * r8_4 + 0x80) >> 8) + rcx_22 * r8_4 + 0x80) >> 8;
                                                rbx_5 = &rbx_5[r14];
                                                rax_49 = *rsi;
                                            } while (r9_5 < *rax_49);

                                            rcx_12 = rax_49;
                                        }
                                    }
                                }
                            }
                            else if (!var_170_1)
                            {
                                var_180 = r14;
                                rsi[0x90f](rbx_5, rdi_2, r15_2, rbp_2, *rcx_12, var_180, var_178, var_170_1, r15_1);
                                rcx_12 = *rsi;
                            }
                            else
                            {
                                char* rdx_6 = nullptr;

                                if (*rcx_12 <= 0)
                                    rcx_12 = *rsi;
                                else
                                {
                                    int32_t* rax_34;

                                    do
                                    {
                                        *rbx_5 = rdx_6[rdi_2];
                                        rbx_5[1] = rdx_6[r15_2];
                                        char rax_33 = rdx_6[rbp_2];
                                        rdx_6 = rdx_6 + 1;
                                        rbx_5[2] = rax_33;
                                        rbx_5[3] = 0xff;
                                        rbx_5 = &rbx_5[r14];
                                        rax_34 = *rsi;
                                    } while (rdx_6 < *rax_34);

                                    rcx_12 = rax_34;
                                }
                            }
                        }
                        else if (var_170_1)
                        {
                            int32_t rax_68 = *rcx_12;
                            uint64_t r9_7 = 0;

                            if (r14 != 1)
                            {
                                if (rax_68)
                                {
                                    do
                                    {
                                        rbx_5 = &rbx_5[2];
                                        int32_t r8_11 = *(r9_7 + r15_2) * 0x96;
                                        int32_t rcx_38 = *(r9_7 + rbp_2) * 0x1d;
                                        uint32_t rax_74 = *(r9_7 + rdi_2);
                                        r9_7 = r9_7 + 1;
                                        rbx_5[-1] = 0xff;
                                        rbx_5[-2] = (r8_11 + rcx_38 + rax_74 * 0x4d) >> 8;
                                        rcx_12 = *rsi;
                                    } while (r9_7 < *rcx_12);
                                }
                            }
                            else if (rax_68)
                            {
                                do
                                {
                                    rbx_5 = &rbx_5[1];
                                    int32_t r8_7 = *(r9_7 + r15_2) * 0x96;
                                    int32_t rcx_36 = *(r9_7 + rbp_2) * 0x1d;
                                    uint32_t rax_71 = *(r9_7 + rdi_2);
                                    r9_7 = r9_7 + 1;
                                    rbx_5[-1] = (r8_7 + rcx_36 + rax_71 * 0x4d) >> 8;
                                    rcx_12 = *rsi;
                                } while (r9_7 < *rcx_12);
                            }
                        }
                        else if (rcx_12[2] != 4)
                        {
                            label_140007e95:
                            int32_t rax_97 = *rcx_12;
                            char* rdx_22 = nullptr;

                            if (r14 != 1)
                            {
                                if (rax_97)
                                {
                                    do
                                    {
                                        char rcx_43 = rdx_22[rdi_2];
                                        rdx_22 = rdx_22 + 1;
                                        *rbx_5 = rcx_43;
                                        rbx_5[1] = 0xff;
                                        rbx_5 = &rbx_5[2];
                                        rcx_12 = *rsi;
                                    } while (rdx_22 < *rcx_12);
                                }
                            }
                            else if (rax_97)
                            {
                                do
                                {
                                    *(rdx_22 + rbx_5) = rdx_22[rdi_2];
                                    rdx_22 = rdx_22 + 1;
                                    rcx_12 = *rsi;
                                } while (rdx_22 < *rcx_12);
                            }
                        }
                        else
                        {
                            int32_t rax_75 = *(rsi + 0x484c);

                            if (rax_75)
                            {
                                if (rax_75 != 2)
                                    goto label_140007e95;

                                char* r8_18 = nullptr;

                                if (*rcx_12 > 0)
                                {
                                    do
                                    {
                                        uint32_t rdx_19 = ~r8_18[rdi_2];
                                        uint32_t rax_92 = r8_18[r13_2];
                                        r8_18 = r8_18 + 1;
                                        rbx_5[1] = 0xff;
                                        *rbx_5 = (((rdx_19 * rax_92 + 0x80) >> 8) + rdx_19 * rax_92 + 0x80) >> 8;
                                        rbx_5 = &rbx_5[r14];
                                        rcx_12 = *rsi;
                                    } while (r8_18 < *rcx_12);
                                }
                            }
                            else
                            {
                                uint64_t r10_2 = 0;

                                if (*rcx_12 > 0)
                                {
                                    do
                                    {
                                        uint32_t rcx_40 = *(r10_2 + r13_2);
                                        uint32_t rdx_12 = *(r10_2 + r15_2);
                                        uint32_t r8_15 = *(r10_2 + rbp_2);
                                        uint32_t r9_8 = *(r10_2 + rdi_2);
                                        r10_2 = r10_2 + 1;
                                        rbx_5[1] = 0xff;
                                        int32_t rdx_16 = ((((rdx_12 * rcx_40 + 0x80) >> 8) + rdx_12 * rcx_40 + 0x80) >> 8) * 0x96 + ((((r8_15 * rcx_40 + 0x80) >> 8) + r8_15 * rcx_40 + 0x80) >> 8) * 0x1d;
                                        *rbx_5 = (rdx_16 + ((((r9_8 * rcx_40 + 0x80) >> 8) + r9_8 * rcx_40 + 0x80) >> 8) * 0x4d) >> 8;
                                        rbx_5 = &rbx_5[r14];
                                        rcx_12 = *rsi;
                                    } while (r10_2 < *rcx_12);
                                }
                            }
                        }

                        i = i_1 + 1;
                        i_1 = i;
                    } while (i < rcx_12[1]);

                    r13_1 = 1;
                }

                sub_140006030(rsi, rcx_12[2], 0);
                *arg2 = **rsi;
                *arg3 = *(*rsi + 4);

                if (arg4)
                {
                    if (*(*rsi + 8) >= 3)
                        r13_1 = 3;

                    *arg4 = r13_1;
                }

                result = result_1;
            }
        }
        else
        {
            sub_140006030(rsi, rcx[2], 0);
            result = 0;
        }
    }
    __security_check_cookie(rax_1 ^ &var_1a8);
    return result;
}

int64_t sub_140007fe0(void* arg1, char* arg2, int32_t arg3)
{
    void var_e8;
    int64_t rax_1 = __security_cookie ^ &var_e8;
    int128_t s;
    __builtin_memset(&s, 0, 0x44);
    char* r14 = arg2;
    int32_t rdi = 0;
    int32_t rbp = 0;
    memset(arg1, 0, 0x400);

    if (arg3 > 0)
    {
        char* rcx = r14;
        uint64_t i_3 = arg3;
        uint64_t i;

        do
        {
            uint64_t rax_2 = *rcx;
            rcx = &rcx[1];
            *(&s + (rax_2 << 2)) += 1;
            i = i_3;
            i_3 -= 1;
        } while (i != 1);
    }

    s = 0;
    int32_t rcx_1 = 1;
    int64_t result;

    while (true)
    {
        TEB* gsbase;

        if (*(&s + (rcx_1 << 2)) > 1 << rcx_1)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad sizes";
            result = 0;
            break;
        }

        rcx_1 += 1;

        if (rcx_1 >= 0x10)
        {
            int32_t r10_1 = 1;
            int32_t r8 = 0;
            int32_t r11_1 = 0xf;

            while (true)
            {
                int64_t r9_1 = r10_1;
                int32_t rsi_1 = *(&s + (r9_1 << 2));
                void var_c8;
                *(&var_c8 + (r9_1 << 2)) = r8;
                *(arg1 + (r9_1 << 1) + 0x400) = r8;
                int32_t r8_1 = r8 + rsi_1;
                *(arg1 + (r9_1 << 1) + 0x464) = rbp;

                if (rsi_1 && r8_1 - 1 >= 1 << r10_1)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad codelengths";
                    result = 0;
                    break;
                }

                r8 = r8_1 * 2;
                rbp += rsi_1;
                *(arg1 + (r9_1 << 2) + 0x420) = r8_1 << r11_1;
                r10_1 += 1;
                r11_1 -= 1;

                if (r11_1 <= 0)
                {
                    *(arg1 + 0x460) = 0x10000;

                    if (arg3 > 0)
                    {
                        do
                        {
                            uint64_t r9_2 = *r14;

                            if (r9_2)
                            {
                                void* r11_2 = &var_c8 + (r9_2 << 2);
                                int32_t r10_2 = *r11_2;
                                int64_t rax_9 = r10_2 + *(arg1 + (r9_2 << 1) + 0x464) - *(arg1 + (r9_2 << 1) + 0x400);
                                *(rax_9 + arg1 + 0x484) = r9_2;
                                *(arg1 + (rax_9 << 1) + 0x5a4) = rdi;

                                if (r9_2 <= 9)
                                {
                                    int32_t rcx_9 = (r10_2 >> 1 & 0x5555) | ((r10_2 & 0x5555) * 2);
                                    int32_t rax_16 = (rcx_9 >> 2 & 0x3333) | (rcx_9 & 0x3333) << 2;
                                    int32_t rdx_5 = (rax_16 >> 4 & 0xf0f) | (rax_16 & 0xf0f) << 4;
                                    int32_t i_1 = (rdx_5 >> 8 | rdx_5 << 8) >> (0x10 - r9_2);

                                    while (i_1 < 0x200)
                                    {
                                        int64_t i_2 = i_1;
                                        i_1 += 1 << r9_2;
                                        *(arg1 + (i_2 << 1)) = r9_2 << 9 | rdi;
                                    }
                                }

                                *r11_2 = r10_2 + 1;
                            }

                            rdi += 1;
                            r14 = &r14[1];
                        } while (rdi < arg3);
                    }

                    result = 1;
                    break;
                }
            }

            break;
        }
    }

    __security_check_cookie(rax_1 ^ &var_e8);
    return result;
}

uint64_t sub_140008280(void* arg1, void* arg2)
{
    int32_t r10_1 = *(arg1 + 0x14);
    int32_t r8_3 = (r10_1 >> 1 & 0x5555) | ((r10_1 & 0x5555) * 2);
    int32_t rcx_3 = (r8_3 >> 2 & 0x3333) | (r8_3 & 0x3333) << 2;
    int32_t rax_6 = (rcx_3 >> 4 & 0xf0f) | (rcx_3 & 0xf0f) << 4;
    int32_t* rcx_6 = arg2 + 0x448;
    uint32_t i = rax_6 << 8 | rax_6 >> 8;
    int32_t rax_8 = 0xa;

    if (i < *rcx_6)
    {
        label_140008302:
        int64_t rdx = rax_8;
        int32_t rdx_2 = *(arg2 + (rdx << 1) + 0x464) + (i >> (0x10 - rax_8)) - *(arg2 + (rdx << 1) + 0x400);

        if (rdx_2 < 0x120)
        {
            int64_t rdx_3 = rdx_2;

            if (*(rdx_3 + arg2 + 0x484) == rax_8)
            {
                *(arg1 + 0x10) -= rax_8;
                *(arg1 + 0x14) = r10_1 >> rax_8;
                return *(arg2 + (rdx_3 << 1) + 0x5a4);
            }
        }
    }
    else
    {
        do
        {
            rax_8 += 1;
            rcx_6 = &rcx_6[1];
        } while (i >= *rcx_6);

        if (rax_8 < 0x10)
            goto label_140008302;
    }

    return 0xffffffff;
}

int64_t sub_140008360(void* arg1, int64_t arg2, int32_t arg3)
{
    bool cond:0 = *(arg1 + 0x30);
    *(arg1 + 0x18) = arg2;
    TEB* gsbase;

    if (!cond:0)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "output buffer limit";
        return 0;
    }

    int32_t rdi_1 = arg2 - *(arg1 + 0x20);
    int32_t i = *(arg1 + 0x28) - *(arg1 + 0x20);

    if (~rdi_1 < arg3)
    {
        label_1400083cd:
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
        return 0;
    }

    for (; rdi_1 + arg3 > i; i *= 2)
    {
        if (i > 0x7fffffff)
            goto label_1400083cd;
    }

    int64_t rax_7 = realloc(*(arg1 + 0x20), i);

    if (!rax_7)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
        return 0;
    }

    *(arg1 + 0x20) = rax_7;
    *(arg1 + 0x18) = rdi_1 + rax_7;
    *(arg1 + 0x28) = i + rax_7;
    return 1;
}

int64_t sub_140008470(int64_t* arg1)
{
    char* rsi = arg1[3];
    TEB* gsbase;

    while (true)
    {
        int32_t rdx_1 = arg1[2];

        if (rdx_1 >= 0x10)
        {
            label_140008514:
            int32_t r8_2 = *(arg1 + 0x14);
            uint32_t rdi_1 = *(arg1 + ((r8_2 & 0x1ff) << 1) + 0x34);
            int32_t rdi_2;

            if (!rdi_1)
                rdi_2 = sub_140008280(arg1, arg1 + 0x34);
            else
            {
                uint32_t rcx_3 = rdi_1 >> 9;
                *(arg1 + 0x14) = r8_2 >> rcx_3;
                rdi_2 = rdi_1 & 0x1ff;
                arg1[2] = rdx_1 - rcx_3;
            }

            if (rdi_2 >= 0x100)
            {
                if (rdi_2 == 0x100)
                {
                    arg1[3] = rsi;
                    return 1;
                }

                int32_t r8_4 = arg1[2];
                int64_t rax_11 = rdi_2;
                int32_t r11_1 = *((rax_11 << 2) + "dingtimes");
                int32_t i_5 = *((rax_11 << 2) + "ort option: -");

                if (r11_1)
                {
                    if (r8_4 < r11_1)
                    {
                        int32_t i = *(arg1 + 0x14);
                        int32_t rdx_5 = r8_4;

                        if (i < 1 << r8_4)
                        {
                            int64_t r10_2 = arg1[1];

                            do
                            {
                                char* rax_13 = *arg1;
                                char rcx_6;

                                if (rax_13 < r10_2)
                                {
                                    rcx_6 = *rax_13;
                                    *arg1 = &rax_13[1];
                                }
                                else
                                    rcx_6 = 0;

                                r8_4 = rdx_5 + 8;
                                arg1[2] = r8_4;
                                i |= rcx_6 << rdx_5;
                                *(arg1 + 0x14) = i;

                                if (r8_4 > 0x18)
                                    goto label_14000861d;

                                rdx_5 = r8_4;
                            } while (i < 1 << r8_4);
                        }

                        *arg1 = arg1[1];
                    }

                    label_14000861d:
                    int32_t rdx_6 = *(arg1 + 0x14);
                    char rcx_8 = r11_1;
                    r8_4 -= r11_1;
                    *(arg1 + 0x14) = rdx_6 >> rcx_8;
                    arg1[2] = r8_4;
                    i_5 += ((1 << rcx_8) - 1) & rdx_6;
                }

                int32_t rdx_7 = r8_4;

                if (rdx_7 >= 0x10)
                {
                    label_1400086b2:
                    int32_t rdx_8 = *(arg1 + 0x14);
                    uint32_t rax_32 = *(arg1 + ((rdx_8 & 0x1ff) << 1) + 0x818);
                    int32_t rax_33;

                    if (!rax_32)
                        rax_33 = sub_140008280(arg1, &arg1[0x103]);
                    else
                    {
                        uint32_t rcx_12 = rax_32 >> 9;
                        *(arg1 + 0x14) = rdx_8 >> rcx_12;
                        rax_33 = rax_32 & 0x1ff;
                        arg1[2] = r8_4 - rcx_12;
                    }

                    if (rax_33 < 0)
                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
                    else
                    {
                        int64_t rax_34 = rax_33;
                        int32_t r11_3 = *((rax_34 << 2) + 0x140022360);
                        int32_t r14_1 = *((rax_34 << 2) + 0x140022190);

                        if (r11_3)
                        {
                            int32_t r8_6 = arg1[2];

                            if (r8_6 < r11_3)
                            {
                                int32_t i_1 = *(arg1 + 0x14);
                                int32_t rdx_11 = r8_6;

                                if (i_1 < 1 << r8_6)
                                {
                                    int64_t r10_4 = arg1[1];

                                    do
                                    {
                                        char* rax_36 = *arg1;
                                        char rcx_14;

                                        if (rax_36 < r10_4)
                                        {
                                            rcx_14 = *rax_36;
                                            *arg1 = &rax_36[1];
                                        }
                                        else
                                            rcx_14 = 0;

                                        r8_6 = rdx_11 + 8;
                                        arg1[2] = r8_6;
                                        i_1 |= rcx_14 << rdx_11;
                                        *(arg1 + 0x14) = i_1;

                                        if (r8_6 > 0x18)
                                            goto label_14000877f;

                                        rdx_11 = r8_6;
                                    } while (i_1 < 1 << r8_6);
                                }

                                *arg1 = arg1[1];
                            }

                            label_14000877f:
                            int32_t rdx_12 = *(arg1 + 0x14);
                            char rcx_16 = r11_3;
                            *(arg1 + 0x14) = rdx_12 >> rcx_16;
                            arg1[2] = r8_6 - r11_3;
                            r14_1 += ((1 << rcx_16) - 1) & rdx_12;
                        }

                        int64_t rdi_3 = r14_1;

                        if (rsi - arg1[4] < rdi_3)
                            break;

                        if (&rsi[i_5] <= arg1[5])
                            goto label_1400087d9;

                        if (sub_140008360(arg1, rsi, i_5))
                        {
                            rsi = arg1[3];
                            label_1400087d9:
                            char* rcx_19 = rsi - rdi_3;

                            if (r14_1 != 1)
                            {
                                if (!i_5)
                                    continue;
                                else
                                {
                                    int32_t i_2;

                                    do
                                    {
                                        char rax_52 = *rcx_19;
                                        rcx_19 = &rcx_19[1];
                                        *rsi = rax_52;
                                        rsi = &rsi[1];
                                        i_2 = i_5;
                                        i_5 -= 1;
                                    } while (i_2 != 1);
                                    continue;
                                }
                            }
                            else if (!i_5)
                                continue;
                            else
                            {
                                memset(rsi, *rcx_19, i_5);
                                rsi = &rsi[i_5];
                                continue;
                            }
                        }
                    }
                }
                else
                {
                    int64_t r11_2 = arg1[1];

                    if (*arg1 < r11_2)
                    {
                        int32_t i_3 = *(arg1 + 0x14);
                        char r10_3 = rdx_7;

                        if (i_3 < 1 << rdx_7)
                        {
                            do
                            {
                                char* rax_25 = *arg1;
                                char rcx_9;

                                if (rax_25 < r11_2)
                                {
                                    rcx_9 = *rax_25;
                                    *arg1 = &rax_25[1];
                                }
                                else
                                    rcx_9 = 0;

                                r8_4 = rdx_7 + 8;
                                arg1[2] = r8_4;
                                i_3 |= rcx_9 << r10_3;
                                *(arg1 + 0x14) = i_3;

                                if (r8_4 > 0x18)
                                    goto label_1400086b2;

                                r10_3 = r8_4;
                                rdx_7 = r8_4;
                            } while (i_3 < 1 << r8_4);
                        }

                        *arg1 = r11_2;
                        goto label_1400086b2;
                    }

                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
                }
            }
            else if (rdi_2 < 0)
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
            else
            {
                if (rsi < arg1[5])
                    goto label_140008583;

                if (sub_140008360(arg1, rsi, 1))
                {
                    rsi = arg1[3];
                    label_140008583:
                    *rsi = rdi_2;
                    rsi = &rsi[1];
                    continue;
                }
            }
        }
        else
        {
            int64_t r10_1 = arg1[1];

            if (*arg1 < r10_1)
            {
                int32_t i_4 = *(arg1 + 0x14);
                int32_t r8_1 = rdx_1;

                while (i_4 < 1 << rdx_1)
                {
                    char* rax_2 = *arg1;
                    char rcx;

                    if (rax_2 < r10_1)
                    {
                        rcx = *rax_2;
                        *arg1 = &rax_2[1];
                    }
                    else
                        rcx = 0;

                    rdx_1 = r8_1 + 8;
                    arg1[2] = rdx_1;
                    i_4 |= rcx << r8_1;
                    *(arg1 + 0x14) = i_4;

                    if (rdx_1 > 0x18)
                        goto label_140008514;

                    r8_1 = rdx_1;
                }

                *arg1 = r10_1;
                goto label_140008514;
            }

            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad huffman code";
        }

        return 0;
    }

    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad dist";
    return 0;
}

int64_t sub_140008890(int64_t* arg1)
{
    void var_a48;
    int64_t rax_1 = __security_cookie ^ &var_a48;
    uint32_t rdx = arg1[2];

    if (rdx < 5)
    {
        int32_t i = *(arg1 + 0x14);
        uint32_t rcx = rdx;

        if (i < 1 << rcx)
        {
            int64_t r9_1 = arg1[1];

            do
            {
                char* rax_3 = *arg1;

                if (rax_3 < r9_1)
                {
                    rdx = *rax_3;
                    *arg1 = &rax_3[1];
                }
                else
                    rdx = 0;

                uint32_t rax_5 = rdx;
                rdx = rcx + 8;
                i |= rax_5 << rcx;
                arg1[2] = rdx;
                *(arg1 + 0x14) = i;

                if (rdx > 0x18)
                    goto label_140008921;

                rcx = rdx;
            } while (i < 1 << rcx);
        }

        *arg1 = arg1[1];
    }

    label_140008921:
    int32_t rax_9 = *(arg1 + 0x14);
    int32_t r8_1 = rdx - 5;
    arg1[2] = r8_1;
    uint32_t i_1 = rax_9 >> 5;
    *(arg1 + 0x14) = i_1;
    int32_t rsi = (rax_9 & 0x1f) + 0x101;

    if (r8_1 < 5)
    {
        int32_t rcx_1 = r8_1;
        uint32_t i_8 = i_1;

        if (i_1 < 1 << rcx_1)
        {
            int64_t r10_1 = arg1[1];

            do
            {
                char* rax_12 = *arg1;

                if (rax_12 < r10_1)
                {
                    rdx = *rax_12;
                    *arg1 = &rax_12[1];
                }
                else
                    rdx = 0;

                r8_1 = rcx_1 + 8;
                i_1 = rdx << rcx_1 | i_8;
                arg1[2] = r8_1;
                *(arg1 + 0x14) = i_1;
                i_8 = i_1;

                if (r8_1 > 0x18)
                    goto label_1400089ad;

                rcx_1 = r8_1;
            } while (i_1 < 1 << rcx_1);
        }

        *arg1 = arg1[1];
    }

    label_1400089ad:
    int32_t r8_2 = r8_1 - 5;
    uint32_t i_2 = i_1 >> 5;
    *(arg1 + 0x14) = i_2;
    arg1[2] = r8_2;

    if (r8_2 < 4)
    {
        int32_t rcx_2 = r8_2;
        uint32_t i_9 = i_2;

        if (i_2 < 1 << rcx_2)
        {
            int64_t r10_2 = arg1[1];

            do
            {
                char* rax_17 = *arg1;

                if (rax_17 < r10_2)
                {
                    i_2 = *rax_17;
                    *arg1 = &rax_17[1];
                }
                else
                    i_2 = 0;

                r8_2 = rcx_2 + 8;
                i_2 = i_2 << rcx_2 | i_9;
                arg1[2] = r8_2;
                *(arg1 + 0x14) = i_2;
                i_9 = i_2;

                if (r8_2 > 0x18)
                    goto label_140008a33;

                rcx_2 = r8_2;
            } while (i_2 < 1 << rcx_2);
        }

        *arg1 = arg1[1];
    }

    label_140008a33:
    uint32_t j_2 = i_2 >> 4;
    int32_t rdx_4 = i_2 & 0xf;
    *(arg1 + 0x14) = j_2;
    int32_t r12 = 0;
    int32_t r10_3 = r8_2 - 4;
    int32_t r13 = (i_1 & 0x1f) + 1 + rsi;
    arg1[2] = r10_3;
    int128_t s;
    __builtin_memset(&s, 0, 0x13);

    if (rdx_4 != 0xfffffffc)
    {
        int64_t i_3 = 0;
        int32_t r8_3 = r10_3;

        do
        {
            uint32_t j = j_2;

            if (r10_3 < 3)
            {
                uint32_t j_1 = j_2;
                char r11_1 = r10_3;

                if (j_2 < 1 << r10_3)
                {
                    int64_t rsi_1 = arg1[1];

                    do
                    {
                        char* rax_22 = *arg1;
                        char rcx_3;

                        if (rax_22 < rsi_1)
                        {
                            rcx_3 = *rax_22;
                            *arg1 = &rax_22[1];
                        }
                        else
                            rcx_3 = 0;

                        r8_3 = r10_3 + 8;
                        arg1[2] = r8_3;
                        j = rcx_3 << r11_1 | j_1;
                        *(arg1 + 0x14) = j;

                        if (r8_3 > 0x18)
                            goto label_140008b05;

                        r11_1 = r8_3;
                        j_2 = j;
                        r10_3 = r8_3;
                        j_1 = j;
                    } while (j < 1 << r8_3);
                }

                j = j_2;
                *arg1 = arg1[1];
            }

            label_140008b05:
            uint64_t rax_26 = *(&data_1400225b0 + i_3);
            r8_3 -= 3;
            arg1[2] = r8_3;
            j_2 = j >> 3;
            j &= 7;
            i_3 += 1;
            *(arg1 + 0x14) = j_2;
            *(&s + rax_26) = j;
            r10_3 = r8_3;
        } while (i_3 < rdx_4 + 4);
    }

    void var_a18;
    int64_t result;

    if (sub_140007fe0(&var_a18, &s, 0x13))
    {
        while (true)
        {
            int32_t rdx_9 = arg1[2];

            if (rdx_9 < 0x10)
            {
                int64_t r10_4 = arg1[1];

                if (*arg1 >= r10_4)
                    goto label_140008e8c;

                int32_t i_4 = *(arg1 + 0x14);
                int32_t r8_4 = rdx_9;

                while (i_4 < 1 << rdx_9)
                {
                    char* rax_29 = *arg1;
                    char rcx_6;

                    if (rax_29 < r10_4)
                    {
                        rcx_6 = *rax_29;
                        *arg1 = &rax_29[1];
                    }
                    else
                        rcx_6 = 0;

                    rdx_9 = r8_4 + 8;
                    arg1[2] = rdx_9;
                    i_4 |= rcx_6 << r8_4;
                    *(arg1 + 0x14) = i_4;

                    if (rdx_9 > 0x18)
                        goto label_140008be4;

                    r8_4 = rdx_9;
                }

                *arg1 = r10_4;
            }

            label_140008be4:
            int32_t r8_5 = *(arg1 + 0x14);
            uint32_t rax_36 = *(&var_a18 + ((r8_5 & 0x1ff) << 1));
            int32_t rax_37;

            if (!rax_36)
                rax_37 = sub_140008280(arg1, &var_a18);
            else
            {
                uint32_t rcx_9 = rax_36 >> 9;
                *(arg1 + 0x14) = r8_5 >> rcx_9;
                rax_37 = rax_36 & 0x1ff;
                arg1[2] = rdx_9 - rcx_9;
            }

            if (rax_37 > 0x12)
                goto label_140008e8c;

            void var_208;
            int32_t rdi_1;

            if (rax_37 >= 0x10)
            {
                char r11_2 = 0;

                if (rax_37 != 0x10)
                {
                    int32_t rax_55;

                    if (rax_37 != 0x11)
                    {
                        if (rax_37 != 0x12)
                            goto label_140008e8c;

                        int32_t rdx_14 = arg1[2];

                        if (rdx_14 < 7)
                        {
                            int32_t i_5 = *(arg1 + 0x14);
                            int32_t r8_9 = rdx_14;

                            if (i_5 < 1 << rdx_14)
                            {
                                int64_t r10_7 = arg1[1];

                                do
                                {
                                    char* rax_57 = *arg1;
                                    char rcx_15;

                                    if (rax_57 < r10_7)
                                    {
                                        rcx_15 = *rax_57;
                                        *arg1 = &rax_57[1];
                                    }
                                    else
                                        rcx_15 = 0;

                                    rdx_14 = r8_9 + 8;
                                    arg1[2] = rdx_14;
                                    i_5 |= rcx_15 << r8_9;
                                    *(arg1 + 0x14) = i_5;

                                    if (rdx_14 > 0x18)
                                        goto label_140008de8;

                                    r8_9 = rdx_14;
                                } while (i_5 < 1 << rdx_14);
                            }

                            *arg1 = arg1[1];
                        }

                        label_140008de8:
                        int32_t rdi_6 = *(arg1 + 0x14);
                        *(arg1 + 0x14) = rdi_6 >> 7;
                        rdi_1 = (rdi_6 & 0x7f) + 0xb;
                        rax_55 = rdx_14 - 7;
                    }
                    else
                    {
                        int32_t r8_8 = arg1[2];

                        if (r8_8 < 3)
                        {
                            int32_t i_6 = *(arg1 + 0x14);
                            int32_t rcx_14 = r8_8;

                            if (i_6 < 1 << rcx_14)
                            {
                                int64_t r10_6 = arg1[1];
                                char* rdx_13 = *arg1;

                                do
                                {
                                    int32_t rax_49;

                                    if (rdx_13 < r10_6)
                                    {
                                        rax_49 = *rdx_13;
                                        rdx_13 = &rdx_13[1];
                                        *arg1 = rdx_13;
                                    }
                                    else
                                        rax_49 = 0;

                                    r8_8 = rcx_14 + 8;
                                    i_6 |= rax_49 << rcx_14;
                                    arg1[2] = r8_8;
                                    *(arg1 + 0x14) = i_6;

                                    if (r8_8 > 0x18)
                                        goto label_140008d58;

                                    rcx_14 = r8_8;
                                } while (i_6 < 1 << rcx_14);
                            }

                            *arg1 = arg1[1];
                        }

                        label_140008d58:
                        int32_t rdi_4 = *(arg1 + 0x14);
                        *(arg1 + 0x14) = rdi_4 >> 3;
                        rdi_1 = (rdi_4 & 7) + 3;
                        rax_55 = r8_8 - 3;
                    }

                    arg1[2] = rax_55;
                }
                else
                {
                    int32_t rdx_12 = arg1[2];

                    if (rdx_12 < 2)
                    {
                        int32_t i_7 = *(arg1 + 0x14);
                        int32_t r8_7 = rdx_12;

                        if (i_7 < 1 << rdx_12)
                        {
                            int64_t r10_5 = arg1[1];

                            do
                            {
                                char* rax_39 = *arg1;
                                char rcx_12;

                                if (rax_39 < r10_5)
                                {
                                    rcx_12 = *rax_39;
                                    *arg1 = &rax_39[1];
                                }
                                else
                                    rcx_12 = 0;

                                rdx_12 = r8_7 + 8;
                                arg1[2] = rdx_12;
                                i_7 |= rcx_12 << r8_7;
                                *(arg1 + 0x14) = i_7;

                                if (rdx_12 > 0x18)
                                    goto label_140008cb8;

                                r8_7 = rdx_12;
                            } while (i_7 < 1 << rdx_12);
                        }

                        *arg1 = arg1[1];
                    }

                    label_140008cb8:
                    int32_t rdi_2 = *(arg1 + 0x14);
                    *(arg1 + 0x14) = rdi_2 >> 2;
                    rdi_1 = (rdi_2 & 3) + 3;
                    arg1[2] = rdx_12 - 2;

                    if (!r12)
                        goto label_140008e8c;

                    void var_209;
                    r11_2 = *(&var_209 + r12);
                }

                if (r13 - r12 < rdi_1)
                    goto label_140008e8c;

                memset(&var_208 + r12, r11_2, rdi_1);
            }
            else
            {
                rdi_1 = 1;
                *(&var_208 + r12) = rax_37;
            }

            int32_t rax_68 = rdi_1 + r12;
            r12 = rax_68;

            if (rax_68 >= r13)
            {
                if (rax_68 != r13)
                {
                    label_140008e8c:
                    TEB* gsbase;
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad codelengths";
                    break;
                }

                if (!sub_140007fe0(arg1 + 0x34, &var_208, rsi))
                    break;

                if (!sub_140007fe0(&arg1[0x103], &var_208 + rsi, (i_1 & 0x1f) + 1))
                    break;

                result = 1;
                goto label_140008ea5;
            }
        }
    }

    result = 0;
    label_140008ea5:
    __security_check_cookie(rax_1 ^ &var_a48);
    return result;
}

int64_t sub_140008ec0(int64_t* arg1, char arg2, char arg3, char arg4)
{
    uint32_t i_1 = arg1[2];
    uint32_t i_4 = i_1;
    int32_t r10_1 = i_1 & 7;

    if (r10_1)
    {
        if (i_1 < r10_1)
        {
            int32_t i = *(arg1 + 0x14);
            uint32_t i_3 = i_1;

            if (i < 1 << i_1)
            {
                int64_t r11_1 = arg1[1];

                do
                {
                    char* rax_2 = *arg1;
                    char rcx;

                    if (rax_2 < r11_1)
                    {
                        rcx = *rax_2;
                        *arg1 = &rax_2[1];
                    }
                    else
                        rcx = 0;

                    i_1 = i_3 + 8;
                    arg1[2] = i_1;
                    i |= rcx << i_3;
                    *(arg1 + 0x14) = i;

                    if (i_1 > 0x18)
                        goto label_140008f41;

                    i_3 = i_1;
                } while (i < 1 << i_1);
            }

            *arg1 = arg1[1];
        }

        label_140008f41:
        *(arg1 + 0x14) u>>= r10_1;
        i_1 -= r10_1;
        arg1[2] = i_1;
        i_4 = i_1;
    }

    int32_t i_5 = 0;
    bool cond:0 = i_1 >= 0;

    if (i_1 > 0)
    {
        uint32_t rcx_3 = *(arg1 + 0x14);
        char* r8_1 = &arg_8;

        do
        {
            i_1 = i_4 - 8;
            rcx_3 u>>= 8;
            i_5 += 1;
            *r8_1 = *(arg1 + 0x14);
            r8_1 = &r8_1[1];
            *(arg1 + 0x14) = rcx_3;
            i_4 = i_1;
            cond:0 = i_1 >= 0;
        } while (i_1 > 0);

        arg1[2] = i_1;
    }

    TEB* gsbase;

    if (cond:0)
    {
        int64_t i_2 = i_5;

        if (i_2 < 4)
        {
            int64_t r8_2 = arg1[1];
            char* rax_11 = *arg1;

            do
            {
                if (rax_11 < r8_2)
                {
                    i_1 = *rax_11;
                    rax_11 = &rax_11[1];
                    *arg1 = rax_11;
                }
                else
                    i_1 = 0;

                (&arg_8)[i_2] = i_1;
                i_2 += 1;
            } while (i_2 < 4);
        }

        uint64_t r8_5 = (arg2 << 8) + arg_8;

        if ((arg4 << 8) + arg3 == (r8_5 ^ 0xffff))
        {
            uint64_t rdi = r8_5;

            if (*arg1 + rdi <= arg1[1])
            {
                int64_t rdx = arg1[3];
                int32_t rax_19;

                if (r8_5 + rdx > arg1[5])
                    rax_19 = sub_140008360(arg1, rdx, r8_5);

                if (r8_5 + rdx <= arg1[5] || rax_19)
                {
                    memcpy(arg1[3], *arg1, rdi);
                    *arg1 += rdi;
                    arg1[3] += rdi;
                    return 1;
                }
            }
            else
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "read past buffer";

            return 0;
        }
    }

    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "zlib corrupt";
    return 0;
}

int64_t sub_140009090(int64_t* arg1, int32_t arg2)
{
    void** rbx = arg1;
    int32_t i;

    if (!arg2)
    {
        label_140009190:
        rbx[2] = 0;

        while (true)
        {
            int32_t r8_4 = rbx[2];

            if (r8_4 < 1)
            {
                i = *(rbx + 0x14);
                int32_t rdx_2 = r8_4;

                if (i < 1 << r8_4)
                {
                    int64_t r10_2 = rbx[1];

                    do
                    {
                        char* rax_15 = *rbx;
                        char rcx_6;

                        if (rax_15 < r10_2)
                        {
                            rcx_6 = *rax_15;
                            *rbx = &rax_15[1];
                        }
                        else
                            rcx_6 = 0;

                        r8_4 = rdx_2 + 8;
                        rbx[2] = r8_4;
                        i |= rcx_6 << rdx_2;
                        *(rbx + 0x14) = i;

                        if (r8_4 > 0x18)
                            goto label_140009202;

                        rdx_2 = r8_4;
                    } while (i < 1 << r8_4);
                }

                *rbx = rbx[1];
            }

            label_140009202:
            int32_t rdx_3 = *(rbx + 0x14);
            uint32_t i_1 = rdx_3 >> 1;
            int32_t i_2 = r8_4 - 1;
            *(rbx + 0x14) = i_1;
            rbx[2] = i_2;

            if (i_2 < 2)
            {
                i = i_2;
                uint32_t i_3 = i_1;

                if (i_1 < 1 << i_2)
                {
                    int64_t r11_1 = rbx[1];

                    do
                    {
                        char* rax_22 = *rbx;
                        char rcx_8;

                        if (rax_22 < r11_1)
                        {
                            rcx_8 = *rax_22;
                            *rbx = &rax_22[1];
                        }
                        else
                            rcx_8 = 0;

                        i_2 = i + 8;
                        rbx[2] = i_2;
                        i_1 = rcx_8 << i | i_3;
                        *(rbx + 0x14) = i_1;
                        i_3 = i_1;

                        if (i_2 > 0x18)
                            goto label_140009286;

                        i = i_2;
                    } while (i_1 < 1 << i_2);
                }

                *rbx = rbx[1];
            }

            label_140009286:
            uint32_t rdx_6 = i_1 >> 2;
            *(rbx + 0x14) = rdx_6;
            rbx[2] = i_2 - 2;
            int32_t rcx_11 = i_1 & 3;
            int32_t rax_27;

            if (rcx_11)
            {
                if (rcx_11 == 3)
                    break;

                int32_t rax_29;

                if (rcx_11 != 1)
                    rax_29 = sub_140008890(rbx);
                else
                {
                    if (!sub_140007fe0(rbx + 0x34, &data_140021fa0, 0x120))
                        break;

                    rax_29 = sub_140007fe0(&rbx[0x103], &data_140022330, 0x20);
                }

                if (!rax_29)
                    break;

                rax_27 = sub_140008470(rbx);
            }
            else
                rax_27 = sub_140008ec0(rbx, rdx_6, i_2, i);

            if (!rax_27)
                break;

            if (rdx_3 & 1)
                return 1;
        }
    }
    else
    {
        char* rcx = *arg1;
        int64_t rdx = rbx[1];
        TEB* gsbase;

        if (rcx >= rdx)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad zlib header";
            return 0;
        }

        uint32_t rax_1 = *rcx;
        *rbx = &rcx[1];
        i = rax_1 & 0xf;

        if (&rcx[1] >= rdx)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad zlib header";
            return 0;
        }

        uint32_t r10_1 = rcx[1];
        *rbx = &rcx[2];

        if (&rcx[2] >= rdx)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad zlib header";
            return 0;
        }

        uint32_t r8_3 = (rax_1 << 8) + r10_1;

        if (r8_3 != r8_3 / 0x1f * 0x1f)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad zlib header";
            return 0;
        }

        if (!(r10_1 & 0x20))
        {
            if (i == 8)
                goto label_140009190;

            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad compression";
            return 0;
        }

        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no preset dict";
    }
    return 0;
}

int64_t TypeTiIter::next(uint64_t arg1)
{
    uint64_t rbx = arg1;

    for (int64_t i = 0; i < 8; i += 1)
    {
        char* rax_1 = *(rbx + 0xc0);

        if (rax_1 < *(rbx + 0xc8))
        {
            arg1 = *rax_1;
            *(rbx + 0xc0) = &rax_1[1];
        }
        else if (!*(rbx + 0x30))
            arg1 = 0;
        else
        {
            sub_140001d70(rbx);
            char* rax_3 = *(rbx + 0xc0);
            arg1 = *rax_3;
            *(rbx + 0xc0) = &rax_3[1];
        }

        if (arg1 != *(i + &data_140022be0))
        {
            TEB* gsbase;
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad png sig";
            return 0;
        }
    }

    return 1;
}

int64_t sub_1400093e0(int64_t* arg1, char* arg2, int32_t arg3, int32_t arg4, uint32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    int32_t r15 = arg7;
    int32_t r14 = arg6;
    int32_t var_60 = 0;
    int32_t r12 = arg4;
    int32_t r10;
    r10 = r15 == 0x10;
    char* rbx = arg2;
    int32_t rdi_1 = (r10 + 1) * arg4;
    uint32_t var_c0 = arg5;
    int32_t rax_1 = rdi_1 * arg5;
    int32_t rdx = *(*arg1 + 8);
    int32_t j_24 = rdx * (r10 + 1);
    int32_t j_25 = j_24;
    char const* const rax_16;
    int64_t rcx_5;
    TEB* gsbase;

    if (arg5 < 0 || r14 < 0 || (r14 && arg5 > COMBINE(0, 0x7fffffff) / r14))
    {
        label_14000a4e2:
        arg1[3] = 0;
        rcx_5 = *gsbase->ThreadLocalStoragePointer;
        rax_16 = "outofmem";
    }
    else
    {
        int32_t rcx_1 = arg5 * r14;

        if (rcx_1 < 0 || rdi_1 < 0)
            goto label_14000a4e2;

        if (rdi_1 && rcx_1 > COMBINE(0, 0x7fffffff) / rdi_1)
            goto label_14000a4e2;

        uint64_t rax_8 = malloc(rdi_1 * arg5 * r14);
        uint64_t var_a8_1 = rax_8;
        uint64_t r10_2 = rax_8;
        arg1[3] = rax_8;

        if (!rax_8)
        {
            rcx_5 = *gsbase->ThreadLocalStoragePointer;
            rax_16 = "outofmem";
        }
        else
        {
            int64_t r11_1 = rdx;

            if (r11_1 < 0)
            {
                rcx_5 = *gsbase->ThreadLocalStoragePointer;
                rax_16 = "too large";
            }
            else
            {
                uint32_t i_36 = arg5;

                if (!i_36 || r11_1 <= COMBINE(0, 0x7fffffff) / i_36)
                {
                    int32_t rcx_4 = r11_1 * i_36;

                    if (rcx_4 < 0 || r15 < 0 || (r15 && rcx_4 > COMBINE(0, 0x7fffffff) / r15))
                    {
                        rcx_5 = *gsbase->ThreadLocalStoragePointer;
                        rax_16 = "too large";
                    }
                    else
                    {
                        int32_t rax_12 = rcx_4 * r15;

                        if (rax_12 > 0x7ffffff8)
                        {
                            rcx_5 = *gsbase->ThreadLocalStoragePointer;
                            rax_16 = "too large";
                        }
                        else
                        {
                            uint32_t r8_1 = (rax_12 + 7) >> 3;
                            uint32_t var_b4_1 = r8_1;

                            if (arg3 >= (r8_1 + 1) * r14)
                            {
                                int32_t rcx_6 = 0;
                                int32_t var_bc_1 = 0;
                                int32_t rdx_3 = 0;

                                if (r14)
                                {
                                    int64_t rcx_7 = r11_1;
                                    int64_t j_22 = j_24;
                                    int64_t r14_1 = rdi_1;
                                    int64_t var_d8_1 = rcx_7;
                                    int64_t j_23 = j_22;
                                    int64_t var_68_1 = r14_1;
                                    var_a8_1 = r10_2;

                                    while (true)
                                    {
                                        uint64_t r12_3 = rdx_3 * rax_1 + r10_2;
                                        uint64_t r10_3 = *rbx;
                                        uint64_t rdi_2 = r12_3;

                                        if (r10_3 > 4)
                                        {
                                            rcx_5 = *gsbase->ThreadLocalStoragePointer;
                                            rax_16 = "invalid filter";
                                            goto label_14000a4fe;
                                        }

                                        if (r15 < 8)
                                        {
                                            if (r8_1 > i_36)
                                            {
                                                rcx_5 = *gsbase->ThreadLocalStoragePointer;
                                                rax_16 = "invalid width";
                                                goto label_14000a4fe;
                                            }

                                            j_24 = 1;
                                            j_22 = 1;
                                            j_25 = 1;
                                            j_23 = 1;
                                            var_c0 = r8_1;
                                            rdi_2 += arg4 * i_36 - r8_1;
                                        }

                                        uint64_t r15_2 = rdi_2 - rax_1;

                                        if (!rdx_3)
                                            r10_3 = *(r10_3 + 0x140022254);

                                        if (j_22 > 0)
                                        {
                                            void* r11_3 = r15_2 - &rbx[1];
                                            void* rdx_4 = &rbx[1];
                                            void* r9_2 = rdi_2 - &rbx[1];
                                            int64_t r8_2 = j_22;
                                            int64_t i;

                                            do
                                            {
                                                if (r10_3 <= 6)
                                                {
                                                    switch (r10_3)
                                                    {
                                                        case 0:
                                                        {
                                                            int64_t j;

                                                            do
                                                            {
                                                                *(r9_2 + rdx_4) = *rdx_4;
                                                                rdx_4 += 1;
                                                                j = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j != 1);
                                                            break;
                                                        }
                                                        case 1:
                                                        {
                                                            int64_t j_1;

                                                            do
                                                            {
                                                                *(r9_2 + rdx_4) = *rdx_4;
                                                                rdx_4 += 1;
                                                                j_1 = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j_1 != 1);
                                                            break;
                                                        }
                                                        case 2:
                                                        {
                                                            int64_t j_2;

                                                            do
                                                            {
                                                                *(r9_2 + rdx_4) = *(r11_3 + rdx_4) + *rdx_4;
                                                                rdx_4 += 1;
                                                                j_2 = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j_2 != 1);
                                                            break;
                                                        }
                                                        case 3:
                                                        {
                                                            int64_t j_3;

                                                            do
                                                            {
                                                                uint8_t rax_27 = *(r11_3 + rdx_4);
                                                                rdx_4 += 1;
                                                                *(r9_2 + rdx_4 - 1) = (rax_27 >> 1) + *(rdx_4 - 1);
                                                                j_3 = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j_3 != 1);
                                                            break;
                                                        }
                                                        case 4:
                                                        {
                                                            int64_t j_4;

                                                            do
                                                            {
                                                                char rax_28 = *(r11_3 + rdx_4);
                                                                rdx_4 += 1;
                                                                char rcx_8 = 0;

                                                                if (rax_28)
                                                                    rcx_8 = rax_28;

                                                                *(r9_2 + rdx_4 - 1) = rcx_8 + *(rdx_4 - 1);
                                                                j_4 = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j_4 != 1);
                                                            break;
                                                        }
                                                        case 5:
                                                        {
                                                            int64_t j_5;

                                                            do
                                                            {
                                                                *(r9_2 + rdx_4) = *rdx_4;
                                                                rdx_4 += 1;
                                                                j_5 = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j_5 != 1);
                                                            break;
                                                        }
                                                        case 6:
                                                        {
                                                            int64_t j_6;

                                                            do
                                                            {
                                                                *(r9_2 + rdx_4) = *rdx_4;
                                                                rdx_4 += 1;
                                                                j_6 = r8_2;
                                                                r8_2 -= 1;
                                                            } while (j_6 != 1);
                                                            r14_1 = var_68_1;
                                                            break;
                                                        }
                                                    }

                                                    break;
                                                }

                                                rdx_4 += 1;
                                                i = r8_2;
                                                r8_2 -= 1;
                                            } while (i != 1);
                                            rcx_7 = var_d8_1;
                                            r11_1 = rdx;
                                            i_36 = arg5;
                                        }

                                        int64_t var_c8_1;
                                        char* var_b0_1;
                                        int64_t rcx_9;
                                        char* r8_3;
                                        char* r11_4;

                                        if (arg7 == 8)
                                        {
                                            int64_t rax_32 = arg4;

                                            if (r11_1 != rax_32)
                                                *(rcx_7 + rdi_2) = 0xff;

                                            rbx = &rbx[1 + rcx_7];
                                            r11_4 = rax_32 + r15_2;
                                            rcx_9 = rax_32 + rdi_2;
                                            var_b0_1 = r11_4;
                                            var_c8_1 = rcx_9;
                                            r8_3 = rbx;
                                            label_14000980f:

                                            if (rdx == arg4)
                                                goto label_140009cfa;

                                            goto label_140009820;
                                        }

                                        if (arg7 == 0x10)
                                        {
                                            if (r11_1 != arg4)
                                                *(j_22 + rdi_2) = 0xffff;

                                            r11_4 = r15_2 + r14_1;
                                            rbx = &rbx[1 + j_24];
                                            var_b0_1 = r11_4;
                                            rcx_9 = rdi_2 + r14_1;
                                            r8_3 = rbx;
                                            var_c8_1 = rcx_9;
                                            goto label_14000980f;
                                        }

                                        rbx = &rbx[2];
                                        r11_4 = r15_2 + 1;
                                        var_b0_1 = r11_4;
                                        rcx_9 = rdi_2 + 1;
                                        var_c8_1 = rcx_9;
                                        r8_3 = rbx;
                                        int32_t zmm0[0x4];
                                        int32_t zmm1[0x4];
                                        int32_t zmm2[0x4];

                                        if (arg7 < 8 || rdx == arg4)
                                        {
                                            label_140009cfa:
                                            int32_t i_35 = (var_c0 - 1) * j_24;
                                            var_c8_1 = i_35;

                                            if (r10_3 <= 6)
                                            {
                                                int64_t i_27 = i_35;

                                                switch (r10_3)
                                                {
                                                    case 0:
                                                    {
                                                        memcpy(rcx_9, rbx, i_27);
                                                        break;
                                                    }
                                                    case 1:
                                                    {
                                                        if (i_35 > 0)
                                                        {
                                                            void* rcx_11 = rcx_9 - rbx;
                                                            char* rdx_32 = rbx;
                                                            int64_t i_1;

                                                            do
                                                            {
                                                                *(rcx_11 + rdx_32) = *(rcx_11 - j_22 + rdx_32) + *rdx_32;
                                                                rdx_32 = &rdx_32[1];
                                                                i_1 = i_27;
                                                                i_27 -= 1;
                                                            } while (i_1 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        int64_t i_2 = 0;

                                                        if (i_35 > 0 && i_35 >= 0x40)
                                                        {
                                                            int64_t rdx_33 = i_35 - 1;
                                                            int64_t r10_14 = rcx_9 + rdx_33;

                                                            if ((rcx_9 > &rbx[rdx_33] || r10_14 < rbx) && (rcx_9 > &r11_4[rdx_33] || r10_14 < r11_4))
                                                            {
                                                                int32_t rdx_35 = i_35 & 0x8000003f;

                                                                if (rdx_35 < 0)
                                                                    rdx_35 = ((rdx_35 - 1) | 0xffffffc0) + 1;

                                                                int32_t (* rdx_39)[0x4] = r11_4 - rbx;
                                                                void* r10_16 = rcx_9 - rbx;
                                                                void* rax_72 = &rbx[0x10];

                                                                do
                                                                {
                                                                    zmm0 = *(rax_72 - 0x10);
                                                                    i_2 += 0x40;
                                                                    zmm1 = *(rdx_39 + rax_72 - 0x10);
                                                                    zmm2 = *(rdx_39 + rax_72);
                                                                    rax_72 += 0x40;
                                                                    zmm1 = _mm_add_epi8(zmm1, zmm0);
                                                                    zmm0 = *(rax_72 - 0x40);
                                                                    *(r10_16 + rax_72 - 0x50) = zmm1;
                                                                    zmm2 = _mm_add_epi8(zmm2, zmm0);
                                                                    zmm0 = *(rax_72 - 0x30);
                                                                    zmm1 = *(rdx_39 + rax_72 - 0x30);
                                                                    *(rax_72 + r10_16 - 0x40) = zmm2;
                                                                    zmm1 = _mm_add_epi8(zmm1, zmm0);
                                                                    zmm0 = *(rax_72 - 0x20);
                                                                    zmm2 = *(rdx_39 + rax_72 - 0x20);
                                                                    *(r10_16 + rax_72 - 0x30) = zmm1;
                                                                    *(r10_16 + rax_72 - 0x20) = _mm_add_epi8(zmm2, zmm0);
                                                                } while (i_2 < i_35 - rdx_35);
                                                            }
                                                        }

                                                        if (i_2 < i_27)
                                                        {
                                                            char* rdx_40 = &rbx[i_2];
                                                            int64_t i_28 = i_27 - i_2;
                                                            int64_t i_3;

                                                            do
                                                            {
                                                                *(rdx_40 + rcx_9 - rbx) = rdx_40[r11_4 - rbx] + *rdx_40;
                                                                rdx_40 = &rdx_40[1];
                                                                i_3 = i_28;
                                                                i_28 -= 1;
                                                            } while (i_3 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 3:
                                                    {
                                                        if (i_35 > 0)
                                                        {
                                                            void* rcx_13 = rcx_9 - r11_4;
                                                            int64_t r10_18 = rbx - r11_4;
                                                            int64_t i_4;

                                                            do
                                                            {
                                                                uint32_t rdx_41 = *(rcx_13 - j_22 + r11_4);
                                                                uint32_t rax_74 = *r11_4;
                                                                r11_4 = &r11_4[1];
                                                                *(rcx_13 + r11_4 - 1) = ((rdx_41 + rax_74) >> 1) + r11_4[r10_18 - 1];
                                                                i_4 = i_27;
                                                                i_27 -= 1;
                                                            } while (i_4 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 4:
                                                    {
                                                        if (i_35 > 0)
                                                        {
                                                            void* r11_8 = r11_4 - rcx_9;
                                                            int64_t r10_20 = rcx_9 - j_22;
                                                            int64_t i_5;

                                                            do
                                                            {
                                                                uint32_t rdi_12 = *r10_20;
                                                                uint32_t r15_7 = *(r11_8 + r10_20);
                                                                uint32_t r12_5 = *(j_22 + r11_8 + r10_20);
                                                                uint32_t rcx_15 = rdi_12 - r15_7;
                                                                uint32_t r8_19 = r12_5 + rcx_15;
                                                                int32_t temp40_1;
                                                                int32_t temp41_1;
                                                                temp40_1 = HIGHD(r8_19 - rdi_12);
                                                                temp41_1 = LOWD(r8_19 - rdi_12);
                                                                int32_t rbp_8 = (temp41_1 ^ temp40_1) - temp40_1;
                                                                int32_t temp42_1;
                                                                int32_t temp43_1;
                                                                temp42_1 = HIGHD(rcx_15);
                                                                temp43_1 = LOWD(rcx_15);
                                                                int32_t rcx_18 = (temp43_1 ^ temp42_1) - temp42_1;
                                                                int32_t temp44_1;
                                                                int32_t temp45_1;
                                                                temp44_1 = HIGHD(r8_19 - r15_7);
                                                                temp45_1 = LOWD(r8_19 - r15_7);
                                                                int32_t rax_83 = (temp45_1 ^ temp44_1) - temp44_1;

                                                                if (rbp_8 > rcx_18 || rbp_8 > rax_83)
                                                                {
                                                                    rdi_12 = r15_7;

                                                                    if (rcx_18 <= rax_83)
                                                                        rdi_12 = r12_5;
                                                                }

                                                                *(j_22 + r10_20) = *(r10_20 + rbx - rcx_9 + j_22) + rdi_12;
                                                                r10_20 += 1;
                                                                i_5 = i_27;
                                                                i_27 -= 1;
                                                            } while (i_5 != 1);
                                                            r14_1 = var_68_1;
                                                            i_35 = var_c8_1;
                                                        }
                                                        break;
                                                    }
                                                    case 5:
                                                    {
                                                        if (i_35 > 0)
                                                        {
                                                            void* rcx_19 = rcx_9 - rbx;
                                                            char* rdx_47 = rbx;
                                                            int64_t i_6;

                                                            do
                                                            {
                                                                uint8_t rax_85 = *(rcx_19 - j_22 + rdx_47);
                                                                rdx_47 = &rdx_47[1];
                                                                *(rcx_19 + rdx_47 - 1) = (rax_85 >> 1) + rdx_47[-1];
                                                                i_6 = i_27;
                                                                i_27 -= 1;
                                                            } while (i_6 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 6:
                                                    {
                                                        if (i_35 > 0)
                                                        {
                                                            void* rcx_20 = rcx_9 - rbx;
                                                            char* rdx_48 = rbx;
                                                            int64_t i_7;

                                                            do
                                                            {
                                                                *(rcx_20 + rdx_48) = *(rcx_20 - j_22 + rdx_48) + *rdx_48;
                                                                rdx_48 = &rdx_48[1];
                                                                i_7 = i_27;
                                                                i_27 -= 1;
                                                            } while (i_7 != 1);
                                                        }
                                                        break;
                                                    }
                                                }
                                            }

                                            r15 = arg7;
                                            rbx = &rbx[i_35];
                                            i_36 = arg5;
                                        }
                                        else
                                        {
                                            label_140009820:

                                            if (r10_3 <= 6)
                                            {
                                                rbx = r8_3;

                                                switch (r10_3)
                                                {
                                                    case 0:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            uint64_t i_30 = i_36 - 1;
                                                            uint64_t i_8;

                                                            do
                                                            {
                                                                if (j_22 > 0)
                                                                {
                                                                    int64_t rdx_8 = rcx_9;
                                                                    int64_t j_15 = j_22;
                                                                    int64_t j_7;

                                                                    do
                                                                    {
                                                                        *rdx_8 = *(rbx - rcx_9 + rdx_8);
                                                                        rdx_8 += 1;
                                                                        j_7 = j_15;
                                                                        j_15 -= 1;
                                                                    } while (j_7 != 1);
                                                                }

                                                                *(j_22 + rcx_9) = 0xff;
                                                                rbx = &rbx[j_24];
                                                                rcx_9 += r14_1;
                                                                i_8 = i_30;
                                                                i_30 -= 1;
                                                            } while (i_8 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 1:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            uint64_t i_31 = i_36 - 1;
                                                            uint64_t i_9;

                                                            do
                                                            {
                                                                if (j_22 > 0)
                                                                {
                                                                    char* rdx_9 = rbx;
                                                                    int64_t j_16 = j_22;
                                                                    int64_t j_8;

                                                                    do
                                                                    {
                                                                        *(rdx_9 + rcx_9 - rbx) = *(rcx_9 - r14_1 - rbx + rdx_9) + *rdx_9;
                                                                        rdx_9 = &rdx_9[1];
                                                                        j_8 = j_16;
                                                                        j_16 -= 1;
                                                                    } while (j_8 != 1);
                                                                }

                                                                *(j_22 + rcx_9) = 0xff;
                                                                rbx = &rbx[j_24];
                                                                rcx_9 += r14_1;
                                                                i_9 = i_31;
                                                                i_31 -= 1;
                                                            } while (i_9 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 2:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            uint64_t i_23 = i_36 - 1;
                                                            uint64_t i_10;

                                                            do
                                                            {
                                                                void* j_9 = nullptr;

                                                                if (j_24 > 0 && j_24 >= 0x40)
                                                                {
                                                                    int64_t rdx_10 = j_24 - 1;
                                                                    void* r8_4 = rdx_10 + rcx_9;

                                                                    if ((rcx_9 > &rbx[rdx_10] || r8_4 < rbx) && (rcx_9 > &r11_4[rdx_10] || r8_4 < r11_4))
                                                                    {
                                                                        int32_t rdx_12 = j_24 & 0x8000003f;

                                                                        if (rdx_12 < 0)
                                                                            rdx_12 = ((rdx_12 - 1) | 0xffffffc0) + 1;

                                                                        int64_t rdx_16 = r11_4 - rbx;
                                                                        void* r8_6 = rcx_9 - rbx;
                                                                        void* rax_44 = &rbx[0x10];

                                                                        do
                                                                        {
                                                                            zmm0 = *(rax_44 - 0x10);
                                                                            j_9 += 0x40;
                                                                            zmm1 = *(rdx_16 + rax_44 - 0x10);
                                                                            zmm2 = *(rax_44 + rdx_16);
                                                                            rax_44 += 0x40;
                                                                            zmm1 = _mm_add_epi8(zmm1, zmm0);
                                                                            zmm0 = *(rax_44 - 0x40);
                                                                            *(r8_6 + rax_44 - 0x50) = zmm1;
                                                                            zmm2 = _mm_add_epi8(zmm2, zmm0);
                                                                            zmm0 = *(rax_44 - 0x30);
                                                                            zmm1 = *(rdx_16 + rax_44 - 0x30);
                                                                            *(rax_44 + r8_6 - 0x40) = zmm2;
                                                                            zmm1 = _mm_add_epi8(zmm1, zmm0);
                                                                            zmm0 = *(rax_44 - 0x20);
                                                                            zmm2 = *(rdx_16 + rax_44 - 0x20);
                                                                            *(r8_6 + rax_44 - 0x30) = zmm1;
                                                                            *(r8_6 + rax_44 - 0x20) = _mm_add_epi8(zmm2, zmm0);
                                                                        } while (j_9 < j_24 - rdx_12);
                                                                    }
                                                                }

                                                                if (j_9 < j_22)
                                                                {
                                                                    char* rdx_17 = j_9 + rbx;
                                                                    void* j_17 = j_22 - j_9;
                                                                    void* j_10;

                                                                    do
                                                                    {
                                                                        *(rdx_17 + rcx_9 - rbx) = rdx_17[r11_4 - rbx] + *rdx_17;
                                                                        rdx_17 = &rdx_17[1];
                                                                        j_10 = j_17;
                                                                        j_17 -= 1;
                                                                    } while (j_10 != 1);
                                                                }

                                                                *(j_22 + rcx_9) = 0xff;
                                                                rbx = &rbx[j_24];
                                                                rcx_9 += r14_1;
                                                                r11_4 = &r11_4[r14_1];
                                                                i_10 = i_23;
                                                                i_23 -= 1;
                                                            } while (i_10 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 3:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            uint64_t i_24 = i_36 - 1;
                                                            uint64_t i_11;

                                                            do
                                                            {
                                                                if (j_22 > 0)
                                                                {
                                                                    char* r8_8 = r11_4;
                                                                    int64_t j_20 = j_22;
                                                                    int64_t j_11;

                                                                    do
                                                                    {
                                                                        uint32_t rdx_18 = *(rcx_9 - r14_1 - r11_4 + r8_8);
                                                                        uint32_t rax_47 = *r8_8;
                                                                        r8_8 = &r8_8[1];
                                                                        *(rcx_9 - r11_4 + r8_8 - 1) = ((rdx_18 + rax_47) >> 1) + *(rbx - r11_4 + r8_8 - 1);
                                                                        j_11 = j_20;
                                                                        j_20 -= 1;
                                                                    } while (j_11 != 1);
                                                                }

                                                                *(j_22 + rcx_9) = 0xff;
                                                                rbx = &rbx[j_24];
                                                                rcx_9 += r14_1;
                                                                r11_4 = &r11_4[r14_1];
                                                                i_11 = i_24;
                                                                i_24 -= 1;
                                                            } while (i_11 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 4:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            int64_t j_26 = j_24;
                                                            int64_t rdx_21 = j_22 + rcx_9;
                                                            int64_t rdi_6 = r14_1 + j_22;
                                                            uint64_t i_26 = i_36 - 1;
                                                            int64_t j_27 = j_26;
                                                            int64_t rax_49 = r14_1 - rcx_9;
                                                            int64_t var_78_1 = rax_49;
                                                            int64_t var_80_1 = rdx_21;
                                                            int64_t var_48_1 = rdi_6;
                                                            uint64_t i_34 = i_26;
                                                            uint64_t i_12;

                                                            do
                                                            {
                                                                if (j_22 > 0)
                                                                {
                                                                    int64_t j_21 = j_22;
                                                                    char* r10_9 = rdx_21 - rdi_6;
                                                                    int64_t j_12;

                                                                    do
                                                                    {
                                                                        uint32_t rdi_7 = *r10_9;
                                                                        uint32_t r15_6 = *(r11_4 - rcx_9 + r10_9);
                                                                        uint32_t r13_1 = *(&r11_4[rax_49] + r10_9);
                                                                        uint32_t r8_10 = rdi_7 - r15_6;
                                                                        uint32_t r9_15 = r8_10 + r13_1;
                                                                        int32_t temp61_1;
                                                                        int32_t temp62_1;
                                                                        temp61_1 = HIGHD(r9_15 - rdi_7);
                                                                        temp62_1 = LOWD(r9_15 - rdi_7);
                                                                        int32_t rbp_4 = (temp62_1 ^ temp61_1) - temp61_1;
                                                                        int32_t temp63_1;
                                                                        int32_t temp64_1;
                                                                        temp63_1 = HIGHD(r8_10);
                                                                        temp64_1 = LOWD(r8_10);
                                                                        int32_t r8_13 = (temp64_1 ^ temp63_1) - temp63_1;
                                                                        int32_t temp65_1;
                                                                        int32_t temp66_1;
                                                                        temp65_1 = HIGHD(r9_15 - r15_6);
                                                                        temp66_1 = LOWD(r9_15 - r15_6);
                                                                        int32_t rax_59 = (temp66_1 ^ temp65_1) - temp65_1;

                                                                        if (rbp_4 > r8_13 || rbp_4 > rax_59)
                                                                        {
                                                                            rdi_7 = r15_6;

                                                                            if (r8_13 <= rax_59)
                                                                                rdi_7 = r13_1;
                                                                        }

                                                                        r10_9[r14_1] = *(&rbx[rax_49] + r10_9) + rdi_7;
                                                                        r10_9 = &r10_9[1];
                                                                        j_12 = j_21;
                                                                        j_21 -= 1;
                                                                    } while (j_12 != 1);
                                                                    rcx_9 = var_c8_1;
                                                                    r11_4 = var_b0_1;
                                                                    j_22 = j_23;
                                                                    rax_49 = var_78_1;
                                                                    rdx_21 = var_80_1;
                                                                    i_26 = i_34;
                                                                    j_27 = j_26;
                                                                    rdi_6 = var_48_1;
                                                                }

                                                                rcx_9 += r14_1;
                                                                *rdx_21 = 0xff;
                                                                rdx_21 += r14_1;
                                                                var_c8_1 = rcx_9;
                                                                rax_49 -= r14_1;
                                                                var_80_1 = rdx_21;
                                                                r11_4 = &r11_4[r14_1];
                                                                var_78_1 = rax_49;
                                                                rbx = &rbx[j_27];
                                                                var_b0_1 = r11_4;
                                                                i_12 = i_26;
                                                                i_26 -= 1;
                                                                i_34 = i_26;
                                                            } while (i_12 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 5:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            uint64_t i_32 = i_36 - 1;
                                                            uint64_t i_13;

                                                            do
                                                            {
                                                                if (j_22 > 0)
                                                                {
                                                                    char* rdx_27 = rbx;
                                                                    int64_t j_18 = j_22;
                                                                    int64_t j_13;

                                                                    do
                                                                    {
                                                                        uint8_t rax_62 = *(rcx_9 - r14_1 - rbx + rdx_27);
                                                                        rdx_27 = &rdx_27[1];
                                                                        *(rcx_9 - rbx + rdx_27 - 1) = (rax_62 >> 1) + rdx_27[-1];
                                                                        j_13 = j_18;
                                                                        j_18 -= 1;
                                                                    } while (j_13 != 1);
                                                                }

                                                                *(j_22 + rcx_9) = 0xff;
                                                                rbx = &rbx[j_24];
                                                                rcx_9 += r14_1;
                                                                i_13 = i_32;
                                                                i_32 -= 1;
                                                            } while (i_13 != 1);
                                                        }
                                                        break;
                                                    }
                                                    case 6:
                                                    {
                                                        if (i_36 - 1 >= 1)
                                                        {
                                                            uint64_t i_33 = i_36 - 1;
                                                            uint64_t i_14;

                                                            do
                                                            {
                                                                if (j_22 > 0)
                                                                {
                                                                    char* rdx_28 = rbx;
                                                                    int64_t j_19 = j_22;
                                                                    int64_t j_14;

                                                                    do
                                                                    {
                                                                        *(rcx_9 - rbx + rdx_28) = *(rcx_9 - r14_1 - rbx + rdx_28) + *rdx_28;
                                                                        rdx_28 = &rdx_28[1];
                                                                        j_14 = j_19;
                                                                        j_19 -= 1;
                                                                    } while (j_14 != 1);
                                                                }

                                                                *(j_22 + rcx_9) = 0xff;
                                                                rbx = &rbx[j_24];
                                                                rcx_9 += r14_1;
                                                                i_14 = i_33;
                                                                i_33 -= 1;
                                                            } while (i_14 != 1);
                                                        }
                                                        break;
                                                    }
                                                }
                                            }

                                            r15 = arg7;

                                            if (r15 != 0x10)
                                                i_36 = arg5;
                                            else
                                            {
                                                i_36 = arg5;

                                                if (i_36)
                                                {
                                                    uint64_t i_20 = i_36;
                                                    uint64_t i_15;

                                                    do
                                                    {
                                                        *(j_22 + r12_3 + 1) = 0xff;
                                                        r12_3 += r14_1;
                                                        i_15 = i_20;
                                                        i_20 -= 1;
                                                    } while (i_15 != 1);
                                                }
                                            }
                                        }
                                        r10_2 = var_a8_1;
                                        rdx_3 = var_bc_1 + 1;
                                        r8_1 = var_b4_1;
                                        var_bc_1 = rdx_3;

                                        if (rdx_3 >= arg6)
                                        {
                                            r12 = arg4;
                                            r14 = arg6;
                                            rcx_6 = 0;
                                            break;
                                        }

                                        j_24 = j_25;
                                        r11_1 = rdx;
                                        rcx_7 = var_d8_1;
                                    }
                                }

                                int64_t rbx_3 = arg7;

                                if (rbx_3 >= 8)
                                {
                                    if (rbx_3 == 0x10)
                                    {
                                        void* r8_29 = r10_2;
                                        int32_t i_37 = r12 * i_36 * r14;

                                        if (i_37)
                                        {
                                            uint64_t i_29 = i_37;
                                            uint64_t i_16;

                                            do
                                            {
                                                uint16_t rdx_70 = *r10_2;
                                                r10_2 += 2;
                                                uint16_t rcx_78 = *(r8_29 + 1);
                                                r8_29 += 2;
                                                *(r8_29 - 2) = rdx_70 << 8 | rcx_78;
                                                i_16 = i_29;
                                                i_29 -= 1;
                                            } while (i_16 != 1);
                                        }
                                    }
                                }
                                else if (r14)
                                {
                                    uint64_t r13_5 = rcx_4;
                                    void* r14_4 = &data_140022320[rbx_3];

                                    do
                                    {
                                        uint64_t rax_91 = rcx_6 * rax_1;
                                        uint64_t r9_26 = r12 * i_36 - r8_1 + rax_91 + r10_2;
                                        uint64_t r11_9 = rax_91 + r10_2;
                                        uint64_t r8_25 = r11_9;

                                        if (arg8)
                                            r10_2 = 1;
                                        else
                                            r10_2 = *r14_4;

                                        if (rbx_3 == 4)
                                        {
                                            int32_t rdi_13 = r13_5;

                                            if (r13_5 >= 2)
                                            {
                                                uint64_t i_21 = r13_5 >> 1;
                                                rdi_13 = (-(i_21) << 1) + r13_5;
                                                uint64_t i_17;

                                                do
                                                {
                                                    *r8_25 = (*r9_26 >> 4) * r10_2;
                                                    char rax_95 = *r9_26;
                                                    r9_26 += 1;
                                                    *(r8_25 + 1) = (rax_95 & 0xf) * r10_2;
                                                    r8_25 += 2;
                                                    i_17 = i_21;
                                                    i_21 -= 1;
                                                } while (i_17 != 1);
                                            }

                                            if (rdi_13 > 0)
                                                *r8_25 = (*r9_26 >> 4) * r10_2;
                                        }
                                        else if (rbx_3 == 2)
                                        {
                                            int32_t rdi_15 = r13_5;

                                            if (r13_5 >= 4)
                                            {
                                                uint64_t i_22 = r13_5 >> 2;
                                                rdi_15 = (-(i_22) << 2) + r13_5;
                                                uint64_t i_18;

                                                do
                                                {
                                                    *r8_25 = (*r9_26 >> 6) * r10_2;
                                                    *(r8_25 + 1) = (*r9_26 >> 4 & 3) * r10_2;
                                                    *(r8_25 + 2) = (*r9_26 >> 2 & 3) * r10_2;
                                                    char rax_102 = *r9_26;
                                                    r9_26 += 1;
                                                    *(r8_25 + 3) = (rax_102 & 3) * r10_2;
                                                    r8_25 += 4;
                                                    i_18 = i_22;
                                                    i_22 -= 1;
                                                } while (i_18 != 1);
                                            }

                                            if (rdi_15 > 0)
                                            {
                                                *r8_25 = (*r9_26 >> 6) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rdi_15 > 1)
                                            {
                                                *r8_25 = (*r9_26 >> 4 & 3) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rdi_15 > 2)
                                                *r8_25 = (*r9_26 >> 2 & 3) * r10_2;
                                        }
                                        else if (rbx_3 == 1)
                                        {
                                            uint64_t rbx_6 = r13_5;

                                            if (r13_5 >= 8)
                                            {
                                                uint64_t i_25 = rbx_6 >> 3;
                                                rbx_6 = (-(i_25) << 3) + r13_5;
                                                uint64_t i_19;

                                                do
                                                {
                                                    *r8_25 = (*r9_26 >> 7) * r10_2;
                                                    *(r8_25 + 1) = (*r9_26 >> 6 & 1) * r10_2;
                                                    *(r8_25 + 2) = (*r9_26 >> 5 & 1) * r10_2;
                                                    *(r8_25 + 3) = (*r9_26 >> 4 & 1) * r10_2;
                                                    *(r8_25 + 4) = (*r9_26 >> 3 & 1) * r10_2;
                                                    *(r8_25 + 5) = (*r9_26 >> 2 & 1) * r10_2;
                                                    *(r8_25 + 6) = (*r9_26 >> 1 & 1) * r10_2;
                                                    char rax_114 = *r9_26;
                                                    r9_26 += 1;
                                                    *(r8_25 + 7) = (rax_114 & 1) * r10_2;
                                                    r8_25 += 8;
                                                    i_19 = i_25;
                                                    i_25 -= 1;
                                                } while (i_19 != 1);
                                            }

                                            if (rbx_6 > 0)
                                            {
                                                *r8_25 = (*r9_26 >> 7) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rbx_6 > 1)
                                            {
                                                *r8_25 = (*r9_26 >> 6 & 1) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rbx_6 > 2)
                                            {
                                                *r8_25 = (*r9_26 >> 5 & 1) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rbx_6 > 3)
                                            {
                                                *r8_25 = (*r9_26 >> 4 & 1) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rbx_6 > 4)
                                            {
                                                *r8_25 = (*r9_26 >> 3 & 1) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rbx_6 > 5)
                                            {
                                                *r8_25 = (*r9_26 >> 2 & 1) * r10_2;
                                                r8_25 += 1;
                                            }

                                            if (rbx_6 > 6)
                                                *r8_25 = (*r9_26 >> 1 & 1) * r10_2;
                                        }

                                        if (rdx != arg4)
                                        {
                                            int64_t rcx_76 = i_36 - 1;

                                            if (rdx != 1)
                                            {
                                                if (rcx_76 >= 0)
                                                {
                                                    void* r8_28 = (rcx_76 << 1) + 1 + r11_9 + rcx_76;
                                                    void* rdx_69 = (rcx_76 << 2) + 2 + r11_9;
                                                    int64_t temp36_1;

                                                    do
                                                    {
                                                        temp36_1 = rcx_76;
                                                        rcx_76 -= 1;
                                                        *(rdx_69 + 1) = 0xff;
                                                        char rax_124 = *(r8_28 + 1);
                                                        r8_28 -= 3;
                                                        *rdx_69 = rax_124;
                                                        rdx_69 -= 4;
                                                        *(rdx_69 + 3) = *(r8_28 + 3);
                                                        *(rdx_69 + 2) = *(r8_28 + 2);
                                                    } while (temp36_1 - 1 >= 0);
                                                }
                                            }
                                            else if (rcx_76 >= 0)
                                            {
                                                int64_t temp37_1;

                                                do
                                                {
                                                    *(r11_9 + (rcx_76 << 1) + 1) = 0xff;
                                                    *(r11_9 + (rcx_76 << 1)) = *(rcx_76 + r11_9);
                                                    temp37_1 = rcx_76;
                                                    rcx_76 -= 1;
                                                } while (temp37_1 - 1 >= 0);
                                            }
                                        }

                                        rbx_3 = arg7;
                                        rcx_6 = var_60 + 1;
                                        r10_2 = var_a8_1;
                                        var_60 = rcx_6;
                                    } while (rcx_6 < arg6);
                                }

                                return 1;
                            }

                            rcx_5 = *gsbase->ThreadLocalStoragePointer;
                            rax_16 = "not enough pixels";
                        }
                    }
                }
                else
                {
                    rcx_5 = *gsbase->ThreadLocalStoragePointer;
                    rax_16 = "too large";
                }
            }
        }
    }
    label_14000a4fe:
    *(0x10 + rcx_5) = rax_16;
    return 0;
}

int64_t sub_14000a580(int64_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    arg_18 = arg3;
    arg_10 = arg2;
    int64_t* r15 = arg1;
    int32_t r11 = arg3;
    char* r14 = arg2;
    int32_t rdi;
    rdi = arg5 == 0x10;
    uint32_t count = (rdi + 1) * arg4;
    int32_t* r9 = *r15;

    if (!arg7)
        return sub_1400093e0(r15, arg2, arg3, arg4, *r9, r9[1], arg5, arg6);

    int32_t rcx_2 = *r9;
    int32_t r8 = r9[1];
    int64_t var_110;

    if (rcx_2 < 0 || r8 < 0)
        var_110 = 0;
    else if (r8 && rcx_2 > COMBINE(0, 0x7fffffff) / r8)
        var_110 = 0;
    else
    {
        int32_t rcx_3 = rcx_2 * r8;

        if (rcx_3 < 0 || count < 0)
            var_110 = 0;
        else if (count && rcx_3 > COMBINE(0, 0x7fffffff) / count)
            var_110 = 0;
        else
        {
            r11 = arg_18;
            var_110 = malloc(rcx_3 * count);
        }
    }

    int32_t i = 0;
    int32_t i_1 = 0;
    int64_t r13 = 0;
    int64_t var_e0 = 0;

    do
    {
        int32_t* r8_1 = *r15;
        int128_t var_b0 = data_140022cb0;
        int128_t var_70;
        __builtin_memcpy(&var_70, "\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 0x1c);
        int128_t var_d0;
        __builtin_memcpy(&var_d0, "\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00", 0x1c);
        int32_t r9_2 = *(&var_d0 + r13);
        int32_t var_a0_1 = 0;
        int64_t var_9c_1 = 1;
        int32_t rax_8 = *(&var_b0 + r13);
        uint32_t j_3 = COMBINE(0, *r8_1 - 1 + r9_2 - rax_8) / r9_2;
        int128_t var_90;
        __builtin_memcpy(&var_90, "\x08\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00", 0x1c);
        uint64_t j_1 = j_3;
        int32_t r9_3 = *(&var_90 + r13);
        int32_t j_2 = j_1;

        if (j_3)
        {
            int32_t rax_13 = *(&var_70 + r13);
            uint32_t temp0_3 = COMBINE(0, r9_3 - 1 + r8_1[1] - rax_13) / r9_3;
            uint32_t rsi_1 = temp0_3;

            if (temp0_3)
            {
                int32_t rbx_7 = (((r8_1[2] * j_1 * arg5 + 7) >> 3) + 1) * rsi_1;

                if (!sub_1400093e0(r15, r14, r11, arg4, j_1, rsi_1, arg5, arg6))
                {
                    free(var_110);
                    return 0;
                }

                int32_t r14_1 = 0;
                arg7 = 0;

                if (rsi_1 > 0)
                {
                    int32_t r13_1 = 0;
                    int32_t rax_20 = j_1 * count;
                    int32_t var_118_1 = 0;
                    int32_t var_ec_1 = rax_20;

                    do
                    {
                        if (j_1 > 0)
                        {
                            int64_t* r8_3 = arg1;
                            int32_t rsi_2 = r13_1;
                            int32_t* rax_21 = *r8_3;
                            int32_t rcx_13 = rax_13 + r9_3 * r14_1;
                            int32_t var_f8_1 = rcx_13;
                            int32_t rbx_9 = rax_8 * count;
                            uint64_t j;

                            do
                            {
                                memcpy(rbx_9 + *rax_21 * rcx_13 * count + var_110, rsi_2 + r8_3[3], count);
                                rcx_13 = var_f8_1;
                                rsi_2 += count;
                                r8_3 = arg1;
                                rbx_9 += r9_2 * count;
                                j = j_1;
                                j_1 -= 1;
                            } while (j != 1);
                            r14_1 = arg7;
                            r13_1 = var_118_1;
                            j_1 = j_2;
                            rsi_1 = temp0_3;
                            rax_20 = var_ec_1;
                        }

                        r14_1 += 1;
                        r13_1 += rax_20;
                        arg7 = r14_1;
                        var_118_1 = r13_1;
                    } while (r14_1 < rsi_1);

                    r15 = arg1;
                    r13 = var_e0;
                }

                free(r15[3]);
                r11 = arg_18 - rbx_7;
                i = i_1;
                r14 = &arg_10[rbx_7];
                arg_18 = r11;
                arg_10 = r14;
            }
        }

        i += 1;
        r13 += 4;
        i_1 = i;
        var_e0 = r13;
    } while (i < 7);

    r15[3] = var_110;
    return 1;
}

int64_t sub_14000a930(int64_t* arg1, int64_t arg2, uint32_t arg3)
{
    __chkstk(0x1480);
    void var_14a8;
    int64_t rax_1 = __security_cookie ^ &var_14a8;
    char var_1468 = 0;
    int32_t var_1460 = 0;
    uint32_t var_145c = 0;
    uint64_t rbx = *arg1;
    int32_t i_18 = 0;
    uint32_t r13 = 0;
    uint32_t var_1454 = 0;
    int32_t var_1458 = 0;
    __builtin_memset(&arg1[1], 0, 0x18);
    char var_1467 = 0;
    uint64_t r15 = 0;
    int16_t var_448 = 0;
    char var_446 = 0;
    int32_t var_1464 = 1;
    int64_t result;

    if (!TypeTiIter::next(rbx))
    {
        label_14000b722:
        result = 0;
    }
    else
    {
        while (true)
        {
            int32_t i_1 = (sub_140001ec0(rbx) << 0x10) + sub_140001ec0(rbx);
            int32_t rcx_5 = (sub_140001ec0(rbx) << 0x10) + sub_140001ec0(rbx);
            char const* const rax_8;
            int64_t rcx_6;
            int16_t var_444;
            void var_438;
            TEB* gsbase;

            if (rcx_5 > 0x49484452)
            {
                if (rcx_5 == 0x504c5445)
                {
                    if (var_1464)
                    {
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "first not IHDR";
                    }
                    else
                    {
                        if (i_1 <= 0x300)
                            r15 = i_1 / 3;

                        if (i_1 <= 0x300 && r15 * 3 == i_1)
                        {
                            uint64_t rsi_5 = 0;

                            if (r15)
                            {
                                char* r8_5 = *(rbx + 0xc0);

                                do
                                {
                                    uint64_t rdx_9 = *(rbx + 0xc8);
                                    uint64_t rdi_13;
                                    char rcx_31;
                                    int32_t r9_2;
                                    char r9_3;

                                    if (r8_5 >= rdx_9)
                                    {
                                        if (*(rbx + 0x30))
                                        {
                                            sub_140001d70(rbx);
                                            char* rax_45 = *(rbx + 0xc0);
                                            rdx_9 = *(rbx + 0xc8);
                                            rcx_31 = *rax_45;
                                            r8_5 = &rax_45[1];
                                            goto label_14000afd8;
                                        }

                                        rdi_13 = rsi_5 << 2;
                                        *(&var_438 + rdi_13) = 0;
                                        r9_2 = rdi_13;
                                        label_14000b010:

                                        if (*(rbx + 0x30))
                                        {
                                            sub_140001d70(rbx);
                                            char* rax_46 = *(rbx + 0xc0);
                                            rdx_9 = *(rbx + 0xc8);
                                            r9_3 = *rax_46;
                                            r8_5 = &rax_46[1];
                                            goto label_14000b034;
                                        }

                                        *(&var_438 + r9_2 + 1) = 0;
                                        label_14000b067:

                                        if (!*(rbx + 0x30))
                                            rdx_9 = 0;
                                        else
                                        {
                                            sub_140001d70(rbx);
                                            char* rax_49 = *(rbx + 0xc0);
                                            rdx_9 = *rax_49;
                                            r8_5 = &rax_49[1];
                                            *(rbx + 0xc0) = r8_5;
                                        }
                                    }
                                    else
                                    {
                                        rcx_31 = *r8_5;
                                        r8_5 = &r8_5[1];
                                        label_14000afd8:
                                        *(rbx + 0xc0) = r8_5;
                                        rdi_13 = rsi_5 << 2;
                                        *(&var_438 + rdi_13) = rcx_31;
                                        r9_2 = rdi_13;

                                        if (r8_5 >= rdx_9)
                                            goto label_14000b010;

                                        r9_3 = *r8_5;
                                        r8_5 = &r8_5[1];
                                        label_14000b034:
                                        *(rbx + 0xc0) = r8_5;
                                        *(&var_438 + rdi_13 + 1) = r9_3;

                                        if (r8_5 >= rdx_9)
                                            goto label_14000b067;

                                        rdx_9 = *r8_5;
                                        r8_5 = &r8_5[1];
                                        *(rbx + 0xc0) = r8_5;
                                    }
                                    rsi_5 = rsi_5 + 1;
                                    *(&var_438 + rdi_13 + 2) = rdx_9;
                                    *(&var_438 + rdi_13 + 3) = 0xff;
                                } while (rsi_5 < r15);
                            }

                            goto label_14000b0b1;
                        }

                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "invalid PLTE";
                    }
                }
                else if (rcx_5 != 0x74524e53)
                {
                    label_14000ad9d:

                    if (var_1464)
                    {
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "first not IHDR";
                    }
                    else
                    {
                        if (TEST_BITD(rcx_5, 0x1d))
                            goto label_14000adb2;

                        data_140028070[3][0] = rcx_5;
                        data_140028070[0] = rcx_5 >> 0x18;
                        data_140028070[1][0] = rcx_5 >> 0x10;
                        data_140028070[2][0] = rcx_5 >> 8;
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "XXXX PNG chunk not known";
                    }
                }
                else if (var_1464)
                {
                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "first not IHDR";
                }
                else if (arg1[1])
                {
                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "tRNS after IDAT";
                }
                else if (!var_1468)
                {
                    int32_t rcx_27 = *(rbx + 8);

                    if (!(rcx_27 & 1))
                    {
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "tRNS with alpha";
                    }
                    else
                    {
                        if (i_1 == rcx_27 * 2)
                        {
                            int32_t i = 0;
                            var_1467 = 1;

                            if (arg1[4] != 0x10)
                            {
                                if (rcx_27 > 0)
                                {
                                    int16_t* rdi_12 = &var_448;

                                    do
                                    {
                                        rdi_12 += 1;
                                        i += 1;
                                        *(rdi_12 - 1) = sub_140001ec0(rbx) * data_140022320[arg1[4]];
                                    } while (i < *(rbx + 8));

                                    r13 = var_145c;
                                }
                            }
                            else if (rcx_27 > 0)
                            {
                                int16_t* rdi_11 = &var_444;

                                do
                                {
                                    i += 1;
                                    *rdi_11 = sub_140001ec0(rbx);
                                    rdi_11 = &rdi_11[1];
                                } while (i < *(rbx + 8));
                            }

                            goto label_14000b0b1;
                        }

                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "bad tRNS len";
                    }
                }
                else if (!r15)
                {
                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "tRNS before PLTE";
                }
                else
                {
                    if (i_1 <= r15)
                    {
                        uint64_t rdi_10 = 0;
                        var_1468 = 4;

                        if (i_1)
                        {
                            do
                            {
                                char* rax_34 = *(rbx + 0xc0);
                                char rdx;

                                if (rax_34 < *(rbx + 0xc8))
                                {
                                    rdx = *rax_34;
                                    *(rbx + 0xc0) = &rax_34[1];
                                }
                                else if (!*(rbx + 0x30))
                                    rdx = 0;
                                else
                                {
                                    sub_140001d70(rbx);
                                    char* rax_36 = *(rbx + 0xc0);
                                    rdx = *rax_36;
                                    *(rbx + 0xc0) = &rax_36[1];
                                }

                                uint64_t rax_38 = (rdi_10 << 2) + 3;
                                rdi_10 = rdi_10 + 1;
                                *(&var_438 + rax_38) = rdx;
                            } while (rdi_10 < i_1);
                        }

                        goto label_14000b0b1;
                    }

                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "bad tRNS len";
                }
            }
            else if (rcx_5 != 0x49484452)
            {
                if (rcx_5 == 0x43674249)
                {
                    var_1458 = 1;
                    label_14000adb2:

                    if (!i_1)
                        goto label_14000b0b1;

                    if (i_1 >= 0)
                    {
                        int32_t rcx_24;

                        if (*(rbx + 0x10))
                            rcx_24 = *(rbx + 0xc8) - *(rbx + 0xc0);

                        if (!*(rbx + 0x10) || rcx_24 >= i_1)
                            *(rbx + 0xc0) += i_1;
                        else
                        {
                            int64_t rcx_25 = *(rbx + 0x28);
                            *(rbx + 0xc0) = *(rbx + 0xc8);
                            (*(rbx + 0x18))(rcx_25, i_1 - rcx_24);
                        }
                    }
                    else
                        *(rbx + 0xc0) = *(rbx + 0xc8);

                    goto label_14000b0b1;
                }

                if (rcx_5 != 0x49444154)
                {
                    if (rcx_5 != 0x49454e44)
                        goto label_14000ad9d;

                    if (var_1464)
                    {
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "first not IHDR";
                    }
                    else
                    {
                        int64_t rdi_3 = arg1[1];

                        if (rdi_3)
                        {
                            int64_t _Size = (((*rbx * arg1[4] + 7) >> 3) * *(rbx + 8) + 1) * *(rbx + 4);
                            int64_t rax_59 = malloc(_Size);

                            if (!rax_59)
                            {
                                arg1[2] = rax_59;
                                goto label_14000b722;
                            }

                            int64_t var_1440_1 = var_1460 + rdi_3;
                            int32_t var_1430_1 = rax_59;
                            int64_t var_1448 = rdi_3;
                            int64_t var_1420_1 = rax_59 + _Size;
                            int32_t rdx_10;
                            rdx_10 = !var_1458;
                            int32_t var_1418_1 = 1;

                            if (!sub_140009090(&var_1448, rdx_10))
                            {
                                free(rax_59);
                                arg1[2] = 0;
                                goto label_14000b722;
                            }

                            arg1[2] = rax_59;

                            if (!rax_59)
                                goto label_14000b722;

                            free(arg1[1]);
                            arg1[1] = 0;
                            int32_t rax_65 = *(rbx + 8);
                            int32_t r9_4 = rax_65 + 1;
                            char r15_2;

                            if (arg3 != r9_4 || arg3 == 3 || var_1468)
                            {
                                r15_2 = var_1467;

                                if (!r15_2)
                                    r9_4 = rax_65;
                            }
                            else
                                r15_2 = var_1467;

                            *(rbx + 0xc) = r9_4;

                            if (!sub_14000a580(arg1, arg1[2], var_1430_1 - rax_59, r9_4, arg1[4], var_1454, r13))
                                goto label_14000b722;

                            if (r15_2)
                            {
                                int32_t* rcx_43 = *arg1;
                                uint64_t i_11 = rcx_43[1] * *rcx_43;
                                void* rcx_44 = arg1[3];

                                if (arg1[4] != 0x10)
                                {
                                    if (i_11)
                                    {
                                        if (*(rbx + 0xc) != 2)
                                        {
                                            char r8_10 = *var_448[1];
                                            char r9_6 = var_448;
                                            uint64_t i_2;

                                            do
                                            {
                                                if (*rcx_44 == r9_6 && *(rcx_44 + 1) == r8_10 && *(rcx_44 + 2) == var_446)
                                                    *(rcx_44 + 3) = 0;

                                                rcx_44 += 4;
                                                i_2 = i_11;
                                                i_11 -= 1;
                                            } while (i_2 != 1);
                                        }
                                        else
                                        {
                                            char r8_9 = var_448;
                                            uint64_t i_13 = i_11;
                                            uint64_t i_3;

                                            do
                                            {
                                                bool cond:4_1 = *rcx_44 == r8_9;
                                                rcx_44 += 2;
                                                char rax_71 = -1;

                                                if (cond:4_1)
                                                    rax_71 = 0;

                                                *(rcx_44 - 1) = rax_71;
                                                i_3 = i_13;
                                                i_13 -= 1;
                                            } while (i_3 != 1);
                                        }
                                    }
                                }
                                else if (i_11)
                                {
                                    if (*(rbx + 0xc) != 2)
                                    {
                                        int16_t r9_5 = var_444;
                                        uint64_t i_4;

                                        do
                                        {
                                            int16_t var_442;
                                            int16_t var_440;

                                            if (*rcx_44 == r9_5 && *(rcx_44 + 2) == var_442 && *(rcx_44 + 4) == var_440)
                                                *(rcx_44 + 6) = 0;

                                            rcx_44 += 8;
                                            i_4 = i_11;
                                            i_11 -= 1;
                                        } while (i_4 != 1);
                                    }
                                    else
                                    {
                                        int16_t r8_7 = var_444;
                                        uint64_t i_12 = i_11;
                                        uint64_t i_5;

                                        do
                                        {
                                            bool cond:5_1 = *rcx_44 == r8_7;
                                            rcx_44 += 4;
                                            int16_t rax_70 = -1;

                                            if (cond:5_1)
                                                rax_70 = 0;

                                            *(rcx_44 - 2) = rax_70;
                                            i_5 = i_12;
                                            i_12 -= 1;
                                        } while (i_5 != 1);
                                    }
                                }
                            }

                            if (var_1458 && data_140028d90 && *(rbx + 0xc) > 2)
                            {
                                int32_t* rax_72 = *arg1;
                                char* r10_1 = arg1[3];
                                int32_t i_19 = rax_72[1] * *rax_72;

                                if (i_19)
                                {
                                    if (rax_72[3] == 3)
                                    {
                                        uint64_t i_14 = i_19;
                                        uint64_t i_6;

                                        do
                                        {
                                            char rcx_46 = *r10_1;
                                            *r10_1 = r10_1[2];
                                            r10_1[2] = rcx_46;
                                            r10_1 = &r10_1[3];
                                            i_6 = i_14;
                                            i_14 -= 1;
                                        } while (i_6 != 1);
                                    }
                                    else if (!data_140028d9c)
                                    {
                                        uint64_t i_15 = i_19;
                                        uint64_t i_7;

                                        do
                                        {
                                            char rcx_48 = *r10_1;
                                            *r10_1 = r10_1[2];
                                            r10_1[2] = rcx_48;
                                            r10_1 = &r10_1[4];
                                            i_7 = i_15;
                                            i_15 -= 1;
                                        } while (i_7 != 1);
                                    }
                                    else
                                    {
                                        uint64_t i_16 = i_19;
                                        uint64_t i_8;

                                        do
                                        {
                                            uint32_t rax_74 = r10_1[3];
                                            uint32_t rcx_47 = *r10_1;
                                            uint32_t rdi_16 = r10_1[2];
                                            uint8_t rax_84;
                                            uint8_t r11_1;

                                            if (!rax_74)
                                            {
                                                r11_1 = rcx_47;
                                                rax_84 = rdi_16;
                                            }
                                            else
                                            {
                                                uint32_t r8_12 = rax_74 >> 1;
                                                r10_1[1] = COMBINE(0, r10_1[1] * 0xff + r8_12) / rax_74;
                                                r11_1 = COMBINE(0, rcx_47 * 0xff + r8_12) / rax_74;
                                                rax_84 = COMBINE(0, rdi_16 * 0xff + r8_12) / rax_74;
                                            }

                                            *r10_1 = rax_84;
                                            r10_1[2] = r11_1;
                                            r10_1 = &r10_1[4];
                                            i_8 = i_16;
                                            i_16 -= 1;
                                        } while (i_8 != 1);
                                    }
                                }
                            }

                            if (!var_1468)
                            {
                                if (r15_2)
                                    *(rbx + 8) += 1;

                                goto label_14000b538;
                            }

                            uint32_t rsi_7 = var_1468;
                            *(rbx + 8) = rsi_7;
                            *(rbx + 0xc) = rsi_7;

                            if (arg3 >= 3)
                            {
                                *(rbx + 0xc) = arg3;
                                rsi_7 = arg3;
                            }

                            int32_t* rax_87 = *arg1;
                            char* rdi_17 = arg1[3];
                            int32_t i_20 = rax_87[1] * *rax_87;

                            if (i_20 >= 0 && rsi_7 >= 0 && (!rsi_7 || i_20 <= COMBINE(0, 0x7fffffff) / rsi_7))
                            {
                                void* rax_91 = malloc(rsi_7 * i_20);

                                if (rax_91)
                                {
                                    if (i_20)
                                    {
                                        uint64_t i_17 = i_20;
                                        void* r8_13 = rax_91 + 2;
                                        void var_437;
                                        void var_436;

                                        if (rsi_7 != 3)
                                        {
                                            uint64_t i_9;

                                            do
                                            {
                                                uint64_t rdx_15 = *rdi_17;
                                                r8_13 += 4;
                                                rdi_17 = &rdi_17[1];
                                                *(r8_13 - 6) = *(&var_438 + (rdx_15 << 2));
                                                *(r8_13 - 5) = *(&var_437 + (rdx_15 << 2));
                                                *(r8_13 - 4) = *(&var_436 + (rdx_15 << 2));
                                                void var_435;
                                                *(r8_13 - 3) = *(&var_435 + (rdx_15 << 2));
                                                i_9 = i_17;
                                                i_17 -= 1;
                                            } while (i_9 != 1);
                                        }
                                        else
                                        {
                                            uint64_t i_10;

                                            do
                                            {
                                                uint64_t rdx_14 = *rdi_17;
                                                r8_13 += 3;
                                                rdi_17 = &rdi_17[1];
                                                *(r8_13 - 5) = *(&var_438 + (rdx_14 << 2));
                                                *(r8_13 - 4) = *(&var_437 + (rdx_14 << 2));
                                                *(r8_13 - 3) = *(&var_436 + (rdx_14 << 2));
                                                i_10 = i_17;
                                                i_17 -= 1;
                                            } while (i_10 != 1);
                                        }
                                    }

                                    free(arg1[3]);
                                    arg1[3] = rax_91;
                                    label_14000b538:
                                    free(arg1[2]);
                                    arg1[2] = 0;
                                    sub_140001ec0(rbx);
                                    sub_140001ec0(rbx);
                                    result = 1;
                                    break;
                                }
                            }

                            rcx_6 = *gsbase->ThreadLocalStoragePointer;
                            rax_8 = "outofmem";
                        }
                        else
                        {
                            rcx_6 = *gsbase->ThreadLocalStoragePointer;
                            rax_8 = "no IDAT";
                        }
                    }
                }
                else if (var_1464)
                {
                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "first not IHDR";
                }
                else if (!var_1468 || r15)
                {
                    int32_t rax_9 = var_1460;
                    int32_t rdi_4 = i_1 + rax_9;

                    if (rdi_4 < rax_9)
                        goto label_14000b722;

                    if (rdi_4 <= i_18)
                        goto label_14000aae5;

                    if (i_18)
                    {
                        label_14000aab6:

                        do
                            i_18 *= 2;
                         while (rdi_4 > i_18);
                    }
                    else
                    {
                        i_18 = 0x1000;

                        if (i_1 > 0x1000)
                            i_18 = i_1;

                        if (rdi_4 > i_18)
                            goto label_14000aab6;
                    }

                    int64_t rax_10 = realloc(arg1[1], i_18);

                    if (!rax_10)
                    {
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "outofmem";
                    }
                    else
                    {
                        arg1[1] = rax_10;
                        rax_9 = var_1460;
                        label_14000aae5:

                        if (!sub_140001df0(rbx, rax_9 + arg1[1], i_1))
                        {
                            rcx_6 = *gsbase->ThreadLocalStoragePointer;
                            rax_8 = "outofdata";
                        }
                        else
                        {
                            var_1460 = rdi_4;
                            label_14000b0b1:
                            sub_140001ec0(rbx);
                            sub_140001ec0(rbx);
                            continue;
                        }
                    }
                }
                else
                {
                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "no PLTE";
                }
            }
            else if (!var_1464)
            {
                rcx_6 = *gsbase->ThreadLocalStoragePointer;
                rax_8 = "multiple IHDR";
            }
            else
            {
                var_1464 = 0;

                if (i_1 != 0xd)
                {
                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                    rax_8 = "bad IHDR len";
                }
                else
                {
                    int32_t rax_12 = sub_140001ec0(rbx);
                    *rbx = sub_140001ec0(rbx) + (rax_12 << 0x10);
                    int32_t rax_15 = sub_140001ec0(rbx);
                    uint32_t rcx_13 = sub_140001ec0(rbx) + (rax_15 << 0x10);
                    *(rbx + 4) = rcx_13;

                    if (rcx_13 > 0x1000000 || *rbx > 0x1000000)
                    {
                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                        rax_8 = "too large";
                    }
                    else
                    {
                        char* rax_17 = *(rbx + 0xc0);

                        if (rax_17 < *(rbx + 0xc8))
                        {
                            rcx_13 = *rax_17;
                            *(rbx + 0xc0) = &rax_17[1];
                        }
                        else if (!*(rbx + 0x30))
                            rcx_13 = 0;
                        else
                        {
                            sub_140001d70(rbx);
                            char* rax_19 = *(rbx + 0xc0);
                            rcx_13 = *rax_19;
                            *(rbx + 0xc0) = &rax_19[1];
                        }

                        uint32_t rax_21 = rcx_13;
                        arg1[4] = rax_21;

                        if (rax_21 == 1 || (rax_21 <= 0x10 && TEST_BITD(0x10114, rax_21)))
                        {
                            char* rax_22 = *(rbx + 0xc0);

                            if (rax_22 < *(rbx + 0xc8))
                            {
                                rcx_13 = *rax_22;
                                rax_22 = &rax_22[1];
                                *(rbx + 0xc0) = rax_22;
                            }
                            else if (!*(rbx + 0x30))
                                rcx_13 = 0;
                            else
                            {
                                sub_140001d70(rbx);
                                char* rax_23 = *(rbx + 0xc0);
                                rcx_13 = *rax_23;
                                rax_22 = &rax_23[1];
                                *(rbx + 0xc0) = rax_22;
                            }

                            uint32_t rdi_9 = rcx_13;
                            var_1454 = rdi_9;

                            if (rdi_9 > 6)
                            {
                                rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                rax_8 = "bad ctype";
                            }
                            else
                            {
                                char rsi_3;

                                if (rdi_9 == 3)
                                {
                                    if (arg1[4] != 0x10)
                                    {
                                        rsi_3 = rdi_9;
                                        var_1468 = rdi_9;
                                        goto label_14000ac59;
                                    }

                                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                    rax_8 = "bad ctype";
                                }
                                else if (rdi_9 & 1)
                                {
                                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                    rax_8 = "bad ctype";
                                }
                                else
                                {
                                    rsi_3 = var_1468;
                                    label_14000ac59:

                                    if (rax_22 < *(rbx + 0xc8))
                                        goto label_14000ac77;

                                    if (!*(rbx + 0x30))
                                    {
                                        label_14000ac8c:

                                        if (rax_22 < *(rbx + 0xc8))
                                            goto label_14000acaa;

                                        if (!*(rbx + 0x30))
                                        {
                                            label_14000acc6:

                                            if (rax_22 < *(rbx + 0xc8))
                                            {
                                                rcx_13 = *rax_22;
                                                *(rbx + 0xc0) = &rax_22[1];
                                            }
                                            else if (!*(rbx + 0x30))
                                                rcx_13 = 0;
                                            else
                                            {
                                                sub_140001d70(rbx);
                                                char* rax_25 = *(rbx + 0xc0);
                                                rcx_13 = *rax_25;
                                                *(rbx + 0xc0) = &rax_25[1];
                                            }

                                            r13 = rcx_13;
                                            var_145c = r13;

                                            if (r13 > 1)
                                            {
                                                rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                                rax_8 = "bad interlace method";
                                            }
                                            else
                                            {
                                                int32_t rcx_19 = *rbx;
                                                int32_t r9_1;

                                                if (rcx_19)
                                                    r9_1 = *(rbx + 4);

                                                if (!rcx_19 || !r9_1)
                                                {
                                                    rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                                    rax_8 = "0-pixel image";
                                                }
                                                else
                                                {
                                                    uint32_t temp0_1 = COMBINE(0, 0x40000000) / rcx_19;

                                                    if (rsi_3)
                                                    {
                                                        *(rbx + 8) = 1;

                                                        if (temp0_1 >> 2 >= r9_1)
                                                            goto label_14000b0b1;

                                                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                                        rax_8 = "too large";
                                                    }
                                                    else
                                                    {
                                                        int32_t r8_4 = (rdi_9 >> 2 & 1) + ((rdi_9 & 2) | 1);
                                                        *(rbx + 8) = r8_4;

                                                        if (COMBINE(0, temp0_1) / r8_4 >= r9_1)
                                                            goto label_14000b0b1;

                                                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                                        rax_8 = "too large";
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            sub_140001d70(rbx);
                                            rax_22 = *(rbx + 0xc0);
                                            label_14000acaa:
                                            rcx_13 = *rax_22;
                                            rax_22 = &rax_22[1];
                                            *(rbx + 0xc0) = rax_22;

                                            if (!rcx_13)
                                                goto label_14000acc6;

                                            rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                            rax_8 = "bad filter method";
                                        }
                                    }
                                    else
                                    {
                                        sub_140001d70(rbx);
                                        rax_22 = *(rbx + 0xc0);
                                        label_14000ac77:
                                        rcx_13 = *rax_22;
                                        rax_22 = &rax_22[1];
                                        *(rbx + 0xc0) = rax_22;

                                        if (!rcx_13)
                                            goto label_14000ac8c;

                                        rcx_6 = *gsbase->ThreadLocalStoragePointer;
                                        rax_8 = "bad comp method";
                                    }
                                }
                            }
                        }
                        else
                        {
                            rcx_6 = *gsbase->ThreadLocalStoragePointer;
                            rax_8 = "1/2/4/8/16-bit only";
                        }
                    }
                }
            }
            *(0x10 + rcx_6) = rax_8;
            goto label_14000b722;
        }
    }

    __security_check_cookie(rax_1 ^ &var_14a8);
    return result;
}

uint64_t sub_14000b760(uint32_t arg1) __pure
{
    if (!arg1)
        return 0xffffffff;

    uint32_t rcx = arg1 >> 0x10;
    int32_t rdx = 0x10;

    if (arg1 < 0x10000)
        rcx = arg1;

    if (arg1 < 0x10000)
        rdx = 0;

    if (rcx >= 0x100)
    {
        rdx += 8;
        rcx u>>= 8;
    }

    int32_t rax_1 = rdx + 4;
    uint32_t r8_1 = rcx >> 4;

    if (rcx < 0x10)
        rax_1 = rdx;

    if (rcx < 0x10)
        r8_1 = rcx;

    int32_t rdx_1 = rax_1 + 2;

    if (r8_1 < 4)
        rdx_1 = rax_1;

    uint32_t rcx_2 = r8_1 >> 2;

    if (r8_1 < 4)
        rcx_2 = r8_1;

    if (rcx_2 < 2)
        return rdx_1;

    return rdx_1 + 1;
}

uint64_t sub_14000b7d0(int32_t* arg1, int32_t* arg2)
{
    char* rax = *(arg1 + 0xc0);

    if (rax < *(arg1 + 0xc8))
        goto label_14000b803;

    TEB* gsbase;

    if (arg1[0xc])
    {
        sub_140001d70(arg1);
        rax = *(arg1 + 0xc0);
        label_14000b803:
        char rcx = *rax;
        void* rax_1 = &rax[1];
        *(arg1 + 0xc0) = rax_1;

        if (rcx == 0x42)
        {
            if (rax_1 < *(arg1 + 0xc8))
                goto label_14000b83b;

            if (arg1[0xc])
            {
                sub_140001d70(arg1);
                rax_1 = *(arg1 + 0xc0);
                label_14000b83b:
                char rcx_2 = *rax_1;
                *(arg1 + 0xc0) = rax_1 + 1;

                if (rcx_2 == 0x4d)
                {
                    sub_140001f80(arg1);
                    sub_140001f80(arg1);
                    sub_140001f80(arg1);
                    sub_140001f80(arg1);
                    int32_t rax_3 = sub_140001f80(arg1);
                    arg2[1] = (sub_140001f80(arg1) << 0x10) + rax_3;
                    int32_t rax_7 = sub_140001f80(arg1);
                    int32_t rax_8 = sub_140001f80(arg1);
                    arg2[8] = 0xe;
                    *(arg2 + 0x14) = 0;
                    uint64_t rbp_2 = (rax_8 << 0x10) + rax_7;
                    *(arg2 + 0xc) = 0;
                    arg2[2] = rbp_2;

                    if (arg2[1] >= 0)
                    {
                        if ((rbp_2 > 0x38 || !TEST_BITQ(0x100010000001000, rbp_2)) && rbp_2 != 0x6c && rbp_2 != 0x7c)
                        {
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unknown BMP";
                            return 0;
                        }

                        int32_t rax_11 = sub_140001f80(arg1);
                        int32_t rax_12;

                        if (rbp_2 != 0xc)
                        {
                            *arg1 = (sub_140001f80(arg1) << 0x10) + rax_11;
                            int32_t rax_16 = sub_140001f80(arg1);
                            rax_12 = (sub_140001f80(arg1) << 0x10) + rax_16;
                        }
                        else
                        {
                            *arg1 = rax_11;
                            rax_12 = sub_140001f80(arg1);
                        }

                        arg1[1] = rax_12;

                        if (sub_140001f80(arg1) == 1)
                        {
                            *arg2 = sub_140001f80(arg1);

                            if (rbp_2 != 0xc)
                            {
                                int32_t rax_22 = sub_140001f80(arg1);
                                int32_t r14_3 = (sub_140001f80(arg1) << 0x10) + rax_22;

                                if (r14_3 - 1 <= 1)
                                {
                                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "BMP RLE";
                                    return 0;
                                }

                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);
                                sub_140001f80(arg1);

                                if (rbp_2 == 0x28)
                                    goto label_14000bb58;

                                if (rbp_2 == 0x38)
                                {
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    label_14000bb58:
                                    int32_t rcx_60 = *arg2;

                                    if (!((rcx_60 - 0x10) & 0xffffffef))
                                    {
                                        if (!r14_3)
                                        {
                                            if (rcx_60 != 0x20)
                                            {
                                                arg2[3] = 0x7c00;
                                                arg2[4] = 0x3e0;
                                                arg2[5] = 0x1f;
                                                return 1;
                                            }

                                            arg2[6] = 0xff000000;
                                            arg2[7] = 0;
                                            arg2[3] = 0xff0000;
                                            arg2[4] = 0xff00;
                                            arg2[5] = 0xff;
                                            return r14_3 + 1;
                                        }

                                        if (r14_3 != 3)
                                            goto label_14000bc37;

                                        int32_t rax_42 = sub_140001f80(arg1);
                                        arg2[3] = (sub_140001f80(arg1) << 0x10) + rax_42;
                                        int32_t rax_46 = sub_140001f80(arg1);
                                        arg2[4] = (sub_140001f80(arg1) << 0x10) + rax_46;
                                        int32_t rax_50 = sub_140001f80(arg1);
                                        int32_t rax_51 = sub_140001f80(arg1);
                                        arg2[8] += 0xc;
                                        int32_t rcx_67 = (rax_51 << 0x10) + rax_50;
                                        int32_t rax_53 = arg2[4];
                                        arg2[5] = rcx_67;

                                        if (arg2[3] == rax_53 && rax_53 == rcx_67)
                                            goto label_14000bc37;
                                    }
                                }
                                else
                                {
                                    if ((rbp_2 - 0x6c) & 0xffffffef)
                                    {
                                        label_14000bc37:
                                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad BMP";
                                        return 0;
                                    }

                                    int32_t rax_25 = sub_140001f80(arg1);
                                    arg2[3] = (sub_140001f80(arg1) << 0x10) + rax_25;
                                    int32_t rax_29 = sub_140001f80(arg1);
                                    arg2[4] = (sub_140001f80(arg1) << 0x10) + rax_29;
                                    int32_t rax_33 = sub_140001f80(arg1);
                                    arg2[5] = (sub_140001f80(arg1) << 0x10) + rax_33;
                                    int32_t rax_37 = sub_140001f80(arg1);
                                    arg2[6] = (sub_140001f80(arg1) << 0x10) + rax_37;
                                    sub_140001f80(arg1);
                                    sub_140001f80(arg1);
                                    int64_t i_1 = 0xc;
                                    int64_t i;

                                    do
                                    {
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        i = i_1;
                                        i_1 -= 1;
                                    } while (i != 1);

                                    if (rbp_2 == 0x7c)
                                    {
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                        sub_140001f80(arg1);
                                    }
                                }
                            }

                            return 1;
                        }
                    }

                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad BMP";
                    return 0;
                }
            }
        }
    }

    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "not BMP";
    return 0;
}

int64_t sub_14000bcb0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    int32_t r14 = 0;
    int32_t var_46c = 0xff;
    int32_t var_4dc = 0;
    int32_t var_488;

    if (sub_14000b7d0(arg1, &var_488))
    {
        int32_t rax_1 = arg1[1];
        int32_t temp2_1;
        int32_t temp3_1;
        temp2_1 = HIGHD(rax_1);
        temp3_1 = LOWD(rax_1);
        int32_t rax_4 = (temp3_1 ^ temp2_1) - temp2_1;
        arg1[1] = rax_4;
        TEB* gsbase;

        if (rax_4 > 0x1000000 || *arg1 > 0x1000000)
        {
            label_14000cc46:
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
        }
        else
        {
            int32_t var_484;
            int64_t r13_1 = var_484;
            uint32_t var_470;
            uint32_t rdx_2 = var_470;
            int32_t r12_1 = var_488;
            arg_30 = var_46c;
            uint32_t var_4c8_1 = rdx_2;
            int32_t var_480;
            int32_t var_468;

            if (var_480 == 0xc)
            {
                if (r12_1 >= 0x18)
                    goto label_14000bdcb;

                r14 = (r13_1 - var_468 - 0x18) / 3;
                rdx_2 = var_4c8_1;
                goto label_14000bdac;
            }

            if (r12_1 < 0x10)
            {
                r14 = (r13_1 - var_468 - var_480) >> 2;
                label_14000bdac:
                var_4dc = r14;

                if (r14 || r13_1 == arg1[0x2e] + *(arg1 + 0xc0) - arg1 - 0x38)
                    goto label_14000bdf4;

                goto label_14000bdd9;
            }

            label_14000bdcb:

            if (r13_1 == arg1[0x2e] + *(arg1 + 0xc0) - arg1 - 0x38)
            {
                label_14000bdf4:
                int32_t rdi_1;

                if (r12_1 != 0x18 || rdx_2 != 0xff000000)
                {
                    int32_t rdi_2;
                    rdi_2 = rdx_2;
                    rdi_1 = rdi_2 + 3;
                }
                else
                    rdi_1 = r12_1 - 0x15;

                arg1[2] = rdi_1;
                int32_t r9 = *arg1;
                int32_t r8 = arg1[1];
                int32_t var_4e8_1 = rdi_1;

                if (arg5 >= 3)
                {
                    rdi_1 = arg5;
                    var_4e8_1 = arg5;
                }

                if (r9 < 0)
                    goto label_14000cc46;

                if (r9 && rdi_1 > COMBINE(0, 0x7fffffff) / r9)
                    goto label_14000cc46;

                int32_t rcx_9 = r9 * rdi_1;

                if (rcx_9 < 0 || r8 < 0)
                    goto label_14000cc46;

                if (r8 && rcx_9 > COMBINE(0, 0x7fffffff) / r8)
                    goto label_14000cc46;

                if (r9 && rdi_1 > COMBINE(0, 0x7fffffff) / r9)
                {
                    label_14000cc31:
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
                }
                else
                {
                    if (r8 && rcx_9 > COMBINE(0, 0x7fffffff) / r8)
                        goto label_14000cc31;

                    int64_t result_1 = malloc(rdi_1 * r9 * r8);
                    int64_t result = result_1;

                    if (!result_1)
                        goto label_14000cc31;

                    int32_t i_3;
                    int32_t r12_2;

                    if (r12_1 >= 0x10)
                    {
                        int32_t r13_14 = r13_1 - var_468;
                        int32_t r11_2 = 0;
                        uint32_t rdx_14 = 0;
                        int32_t var_4dc_1 = 0;
                        uint32_t r10_4 = 0;
                        int32_t var_4c0_1 = 0;
                        uint32_t r9_2 = 0;
                        int32_t var_4bc_1 = 0;
                        uint32_t r14_9 = 0;
                        int32_t var_4e0_3 = 0;
                        int32_t r15_4 = 0;
                        int32_t var_4e8_2 = 0;
                        int32_t r13_15 = r13_14 - var_480;

                        if (r13_14 != var_480)
                        {
                            if (r13_15 >= 0)
                            {
                                int32_t rcx_40;

                                if (*(arg1 + 0x10))
                                    rcx_40 = arg1[0x32] - arg1[0x30];

                                if (!*(arg1 + 0x10) || rcx_40 >= r13_15)
                                    *(arg1 + 0xc0) += r13_15;
                                else
                                {
                                    int64_t rcx_41 = *(arg1 + 0x28);
                                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                    (*(arg1 + 0x18))(rcx_41, r13_15 - rcx_40);
                                    rdx_14 = 0;
                                    r9_2 = 0;
                                    r10_4 = 0;
                                    r11_2 = 0;
                                }
                            }
                            else
                                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                        }

                        uint32_t r8_4;

                        if (r12_1 == 0x18)
                            r8_4 = *arg1 * 3;
                        else if (r12_1 != 0x10)
                            r8_4 = 0;
                        else
                            r8_4 = *arg1 * 2;

                        int32_t r8_7 = -(r8_4) & 3;
                        int32_t var_4e8_3 = r8_7;
                        uint64_t var_4b0_2;
                        uint32_t var_47c;
                        uint32_t var_478;
                        uint32_t var_474;
                        uint64_t r13_17;

                        if (r12_1 != 0x18)
                        {
                            uint32_t r9_3;
                            uint32_t r11_3;
                            uint32_t r12_3;

                            if (r12_1 == 0x20 && var_474 == 0xff && var_478 == 0xff00 && var_47c == 0xff0000)
                            {
                                r12_3 = var_4c8_1;

                                if (r12_3 == 0xff000000)
                                {
                                    r13_17 = 2;
                                    var_4b0_2 = 2;
                                    goto label_14000c751;
                                }

                                r9_3 = var_47c;
                                r11_3 = var_474;
                                goto label_14000c5d9;
                            }

                            r9_3 = var_47c;

                            if (r9_3 && var_478)
                            {
                                r11_3 = var_474;

                                if (r11_3)
                                {
                                    r12_3 = var_4c8_1;
                                    label_14000c5d9:
                                    var_4dc_1 = sub_14000b760(r9_3) - 7;
                                    int32_t rdx_19 = (r9_3 >> 1 & 0x55555555) + (r9_3 & 0x55555555);
                                    int32_t rcx_48 = (rdx_19 >> 2 & 0x33333333) + (rdx_19 & 0x33333333);
                                    int32_t rdx_24 = ((rcx_48 >> 4) + rcx_48) & 0xf0f0f0f;
                                    int32_t rdx_25 = rdx_24 + (rdx_24 >> 8);
                                    r10_4 = (rdx_25 >> 0x10) + rdx_25;
                                    var_4c0_1 = sub_14000b760(var_478) - 7;
                                    int32_t rdx_29 = (var_478 >> 1 & 0x55555555) + (var_478 & 0x55555555);
                                    int32_t rcx_55 = (rdx_29 >> 2 & 0x33333333) + (rdx_29 & 0x33333333);
                                    int32_t rdx_34 = ((rcx_55 >> 4) + rcx_55) & 0xf0f0f0f;
                                    int32_t rdx_35 = rdx_34 + (rdx_34 >> 8);
                                    r9_2 = (rdx_35 >> 0x10) + rdx_35;
                                    var_4bc_1 = sub_14000b760(r11_3) - 7;
                                    int32_t rdx_39 = (r11_3 >> 1 & 0x55555555) + (r11_3 & 0x55555555);
                                    int32_t rcx_62 = (rdx_39 >> 2 & 0x33333333) + (rdx_39 & 0x33333333);
                                    int32_t rdx_44 = ((rcx_62 >> 4) + rcx_62) & 0xf0f0f0f;
                                    int32_t rdx_45 = rdx_44 + (rdx_44 >> 8);
                                    r14_9 = (rdx_45 >> 0x10) + rdx_45;
                                    r11_2 = sub_14000b760(r12_3) - 7;
                                    var_4e0_3 = r11_2;
                                    int32_t rdx_49 = (r12_3 >> 1 & 0x55555555) + (r12_3 & 0x55555555);
                                    int32_t rcx_69 = (rdx_49 >> 2 & 0x33333333) + (rdx_49 & 0x33333333);
                                    int32_t rdx_54 = ((rcx_69 >> 4) + rcx_69) & 0xf0f0f0f;
                                    int32_t rdx_55 = rdx_54 + (rdx_54 >> 8);
                                    rdx_14 = (rdx_55 >> 0x10) + rdx_55;

                                    if (r10_4 <= 8 && r9_2 <= 8 && r14_9 <= 8)
                                    {
                                        r13_17 = 0;
                                        var_4b0_2 = 0;

                                        if (rdx_14 <= 8)
                                        {
                                            r8_7 = var_4e8_3;
                                            goto label_14000c751;
                                        }
                                    }
                                }
                            }

                            free(result);
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad masks";
                        }
                        else
                        {
                            r13_17 = 1;
                            var_4b0_2 = 1;
                            label_14000c751:
                            i_3 = arg1[1];
                            r12_2 = rdi_1;
                            int32_t var_4d4_2 = 0;

                            if (i_3 > 0)
                            {
                                uint64_t rax_98 = r10_4;
                                uint64_t rax_99 = r14_9;
                                uint64_t rax_100 = rdx_14;
                                uint64_t rcx_79 = r9_2;
                                int32_t rcx_108;

                                do
                                {
                                    int32_t rax_101 = *arg1;
                                    int64_t rcx_80 = r15_4;

                                    if (!r13_17)
                                    {
                                        if (rax_101 > 0)
                                        {
                                            void* r14_10 = rcx_80 + result;

                                            do
                                            {
                                                int32_t rax_108 = sub_140001f80(arg1);
                                                int32_t r8_8;

                                                if (r12_1 != 0x10)
                                                    r8_8 = (sub_140001f80(arg1) << 0x10) + rax_108;
                                                else
                                                    r8_8 = rax_108;

                                                int32_t rdx_59 = r8_8 & var_47c;
                                                int32_t rdx_60 = rdx_59 << -(var_4dc_1);

                                                if (var_4dc_1 >= 0)
                                                    rdx_60 = rdx_59 >> var_4dc_1;

                                                *r14_10 = ((rdx_60 >> (8 - r10_4)) * *((rax_98 << 2) + 0x1400223f0)) >> *((rax_98 << 2) + 0x140022c28);
                                                int32_t rdx_65 = r8_8 & var_478;
                                                int32_t rdx_66 = rdx_65 << -(var_4c0_1);

                                                if (var_4c0_1 >= 0)
                                                    rdx_66 = rdx_65 >> var_4c0_1;

                                                *(r14_10 + 1) = ((rdx_66 >> (8 - r9_2)) * *((rcx_79 << 2) + 0x1400223f0)) >> *((rcx_79 << 2) + 0x140022c28);
                                                int32_t rdx_71 = r8_8 & var_474;
                                                int32_t rdx_72 = rdx_71 << -(var_4bc_1);

                                                if (var_4bc_1 >= 0)
                                                    rdx_72 = rdx_71 >> var_4bc_1;

                                                r15_4 += 3;
                                                *(r14_10 + 2) = ((rdx_72 >> (8 - r14_9)) * *((rax_99 << 2) + 0x1400223f0)) >> *((rax_99 << 2) + 0x140022c28);
                                                r14_10 += 3;
                                                int32_t r8_15;

                                                if (!var_4c8_1)
                                                    r8_15 = 0xff;
                                                else
                                                {
                                                    int32_t r8_11 = r8_8 & var_4c8_1;
                                                    int32_t r8_12 = r8_11 << -(r11_2);

                                                    if (var_4e0_3 >= 0)
                                                        r8_12 = r8_11 >> var_4e0_3;

                                                    r8_15 = ((r8_12 >> (8 - rdx_14)) * *((rax_100 << 2) + 0x1400223f0)) >> *((rax_100 << 2) + 0x140022c28);
                                                }

                                                arg_30 |= r8_15;

                                                if (r12_2 == 4)
                                                {
                                                    r15_4 += 1;
                                                    *r14_10 = r8_15;
                                                    r14_10 += 1;
                                                }

                                                r13_17 = r13_17 + 1;
                                            } while (r13_17 < *arg1);

                                            result = result_1;
                                            r8_7 = var_4e8_3;
                                        }

                                        r13_17 = var_4b0_2;
                                    }
                                    else
                                    {
                                        int32_t i = 0;

                                        if (rax_101 > 0)
                                        {
                                            void* rdi_8 = rcx_80 + result;

                                            do
                                            {
                                                uint64_t rcx_82 = *(arg1 + 0xc8);
                                                char* rax_102 = *(arg1 + 0xc0);

                                                if (rax_102 < rcx_82)
                                                    goto label_14000c81f;

                                                if (!arg1[0xc])
                                                    *(rdi_8 + 2) = 0;
                                                else
                                                {
                                                    sub_140001d70(arg1);
                                                    rax_102 = *(arg1 + 0xc0);
                                                    rcx_82 = *(arg1 + 0xc8);
                                                    label_14000c81f:
                                                    char rdx_56 = *rax_102;
                                                    rax_102 = &rax_102[1];
                                                    *(arg1 + 0xc0) = rax_102;
                                                    *(rdi_8 + 2) = rdx_56;

                                                    if (rax_102 < rcx_82)
                                                        goto label_14000c856;
                                                }

                                                if (!arg1[0xc])
                                                {
                                                    *(rdi_8 + 1) = 0;
                                                    label_14000c87e:

                                                    if (!arg1[0xc])
                                                        rcx_82 = 0;
                                                    else
                                                    {
                                                        sub_140001d70(arg1);
                                                        char* rax_103 = *(arg1 + 0xc0);
                                                        rcx_82 = *rax_103;
                                                        rax_102 = &rax_103[1];
                                                        *(arg1 + 0xc0) = rax_102;
                                                    }
                                                }
                                                else
                                                {
                                                    sub_140001d70(arg1);
                                                    rax_102 = *(arg1 + 0xc0);
                                                    rcx_82 = *(arg1 + 0xc8);
                                                    label_14000c856:
                                                    char rdx_57 = *rax_102;
                                                    rax_102 = &rax_102[1];
                                                    *(arg1 + 0xc0) = rax_102;
                                                    *(rdi_8 + 1) = rdx_57;

                                                    if (rax_102 >= rcx_82)
                                                        goto label_14000c87e;

                                                    rcx_82 = *rax_102;
                                                    rax_102 = &rax_102[1];
                                                    *(arg1 + 0xc0) = rax_102;
                                                }

                                                *rdi_8 = rcx_82;
                                                r15_4 += 3;
                                                rdi_8 += 3;

                                                if (r13_17 != 2)
                                                    rcx_82 = 0xff;
                                                else if (rax_102 < *(arg1 + 0xc8))
                                                {
                                                    rcx_82 = *rax_102;
                                                    *(arg1 + 0xc0) = &rax_102[1];
                                                }
                                                else if (!arg1[0xc])
                                                    rcx_82 = 0;
                                                else
                                                {
                                                    sub_140001d70(arg1);
                                                    char* rax_105 = *(arg1 + 0xc0);
                                                    rcx_82 = *rax_105;
                                                    *(arg1 + 0xc0) = &rax_105[1];
                                                }

                                                arg_30 |= rcx_82;

                                                if (r12_2 == 4)
                                                {
                                                    r15_4 += 1;
                                                    *rdi_8 = rcx_82;
                                                    rdi_8 += 1;
                                                }

                                                i += 1;
                                            } while (i < *arg1);

                                            r8_7 = var_4e8_3;
                                        }
                                    }

                                    if (r8_7)
                                    {
                                        int32_t rcx_105;

                                        if (*(arg1 + 0x10))
                                            rcx_105 = arg1[0x32] - arg1[0x30];

                                        if (!*(arg1 + 0x10) || rcx_105 >= r8_7)
                                            *(arg1 + 0xc0) += r8_7;
                                        else
                                        {
                                            *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                            (*(arg1 + 0x18))(*(arg1 + 0x28), r8_7 - rcx_105);
                                            r8_7 = var_4e8_3;
                                        }
                                    }

                                    i_3 = arg1[1];
                                    rcx_108 = var_4d4_2 + 1;
                                    var_4d4_2 = rcx_108;
                                } while (rcx_108 < i_3);
                            }

                            label_14000cb19:

                            if (r12_2 == 4 && !arg_30)
                            {
                                int32_t rax_122 = ((i_3 * *arg1) << 2) + -ffffffffffffffff;
                                int64_t rcx_109 = rax_122;

                                if (rax_122 >= 0)
                                {
                                    int64_t temp35_1;

                                    do
                                    {
                                        *(rcx_109 + result) = 0xff;
                                        temp35_1 = rcx_109;
                                        rcx_109 -= 4;
                                    } while (temp35_1 - 4 >= 0);
                                }
                            }

                            if (rax_1 > 0)
                            {
                                int32_t rdx_79 = arg1[1];
                                int32_t i_1 = 0;

                                if ((rdx_79 & 0xfffffffe) > 0)
                                {
                                    do
                                    {
                                        int32_t rcx_110 = *arg1;
                                        int32_t j = 0;
                                        uint64_t rdx_83 = (rdx_79 - i_1 - 1) * rcx_110 * r12_2;
                                        char* rdx_84 = rdx_83 + result;

                                        if (rcx_110 * r12_2 > 0)
                                        {
                                            uint64_t r9_11 = rcx_110 * i_1 * r12_2 - rdx_83;

                                            do
                                            {
                                                j += 1;
                                                char rcx_112 = rdx_84[r9_11];
                                                rdx_84[r9_11] = *rdx_84;
                                                *rdx_84 = rcx_112;
                                                rdx_84 = &rdx_84[1];
                                            } while (j < *arg1 * r12_2);
                                        }

                                        rdx_79 = arg1[1];
                                        i_1 += 1;
                                    } while (i_1 < rdx_79 >> 1);
                                }
                            }

                            if (!arg5 || arg5 == r12_2)
                            {
                                label_14000cbe6:
                                *arg2 = *arg1;
                                *arg3 = arg1[1];

                                if (arg4)
                                    *arg4 = arg1[2];

                                return result;
                            }

                            int64_t result_2 = sub_140002040(result, r12_2, arg5, *arg1, arg1[1]);
                            result = result_2;

                            if (result_2)
                                goto label_14000cbe6;
                        }
                    }
                    else
                    {
                        char* rdi_3 = nullptr;

                        if (!r14 || r14 > 0x100)
                        {
                            free(result);
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "invalid";
                        }
                        else
                        {
                            r12_2 = var_4e8_1;
                            void var_438;
                            void var_437;
                            void var_436;
                            uint64_t rcx_11;

                            if (r14 > 0)
                            {
                                char* rax_22 = *(arg1 + 0xc0);
                                int64_t i_2 = 0;

                                do
                                {
                                    rcx_11 = *(arg1 + 0xc8);

                                    if (rax_22 < rcx_11)
                                        goto label_14000bf37;

                                    int64_t r8_1;
                                    int64_t r14_6;

                                    if (!arg1[0xc])
                                    {
                                        r14_6 = i_2 << 2;
                                        *(&var_436 + r14_6) = 0;
                                        r8_1 = r14_6;
                                    }
                                    else
                                    {
                                        sub_140001d70(arg1);
                                        rax_22 = *(arg1 + 0xc0);
                                        rcx_11 = *(arg1 + 0xc8);
                                        label_14000bf37:
                                        char rdx_4 = *rax_22;
                                        r14_6 = i_2 << 2;
                                        rax_22 = &rax_22[1];
                                        *(&var_436 + r14_6) = rdx_4;
                                        *(arg1 + 0xc0) = rax_22;
                                        r8_1 = r14_6;

                                        if (rax_22 < rcx_11)
                                            goto label_14000bf86;
                                    }

                                    if (!arg1[0xc])
                                    {
                                        *(&var_437 + r8_1) = 0;
                                        label_14000bfb1:

                                        if (!arg1[0xc])
                                            rcx_11 = 0;
                                        else
                                        {
                                            sub_140001d70(arg1);
                                            char* rax_23 = *(arg1 + 0xc0);
                                            rcx_11 = *rax_23;
                                            rax_22 = &rax_23[1];
                                            *(arg1 + 0xc0) = rax_22;
                                        }
                                    }
                                    else
                                    {
                                        sub_140001d70(arg1);
                                        rax_22 = *(arg1 + 0xc0);
                                        rcx_11 = *(arg1 + 0xc8);
                                        label_14000bf86:
                                        char rdx_5 = *rax_22;
                                        rax_22 = &rax_22[1];
                                        *(arg1 + 0xc0) = rax_22;
                                        *(&var_437 + r14_6) = rdx_5;

                                        if (rax_22 >= rcx_11)
                                            goto label_14000bfb1;

                                        rcx_11 = *rax_22;
                                        rax_22 = &rax_22[1];
                                        *(arg1 + 0xc0) = rax_22;
                                    }

                                    *(&var_438 + r14_6) = rcx_11;

                                    if (var_480 != 0xc)
                                    {
                                        if (rax_22 < *(arg1 + 0xc8))
                                        {
                                            rax_22 = &rax_22[1];
                                            *(arg1 + 0xc0) = rax_22;
                                        }
                                        else if (arg1[0xc])
                                        {
                                            sub_140001d70(arg1);
                                            *(arg1 + 0xc0) += 1;
                                            rax_22 = *(arg1 + 0xc0);
                                        }
                                    }

                                    i_2 += 1;
                                    void var_435;
                                    *(&var_435 + r14_6) = 0xff;
                                } while (i_2 < r14);

                                result = result_1;
                                r13_1 = r13_1;
                                r14 = var_4dc;
                            }

                            int32_t rax_24;
                            rax_24 = var_480 != 0xc;
                            int32_t r13_4 = r13_1 - (rax_24 + 3) * r14 - var_468;
                            int32_t r13_5 = r13_4 - var_480;

                            if (r13_4 != var_480)
                            {
                                if (r13_5 >= 0)
                                {
                                    if (*(arg1 + 0x10))
                                        rcx_11 = arg1[0x32] - arg1[0x30];

                                    if (!*(arg1 + 0x10) || rcx_11 >= r13_5)
                                        *(arg1 + 0xc0) += r13_5;
                                    else
                                    {
                                        int64_t rcx_17 = *(arg1 + 0x28);
                                        *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                        (*(arg1 + 0x18))(rcx_17, r13_5 - rcx_11);
                                    }
                                }
                                else
                                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                            }

                            uint32_t r13_9;

                            if (r12_1 == 1)
                            {
                                r13_9 = (*arg1 + 7) >> 3;
                                label_14000c0db:
                                i_3 = arg1[1];
                                int32_t r13_13 = -(r13_9) & 3;

                                if (r12_1 != 1)
                                {
                                    uint64_t rcx_26 = 0;
                                    int32_t var_4e4_2 = 0;

                                    if (i_3 > 0)
                                    {
                                        do
                                        {
                                            int32_t r14_8 = 0;

                                            if (*arg1 > 0)
                                            {
                                                int32_t r9_1;

                                                do
                                                {
                                                    char* r8_3 = *(arg1 + 0xc0);

                                                    if (r8_3 < *(arg1 + 0xc8))
                                                    {
                                                        rcx_26 = *r8_3;
                                                        r8_3 = &r8_3[1];
                                                        *(arg1 + 0xc0) = r8_3;
                                                    }
                                                    else if (!arg1[0xc])
                                                        rcx_26 = 0;
                                                    else
                                                    {
                                                        sub_140001d70(arg1);
                                                        char* rax_46 = *(arg1 + 0xc0);
                                                        rcx_26 = *rax_46;
                                                        r8_3 = &rax_46[1];
                                                        *(arg1 + 0xc0) = r8_3;
                                                    }

                                                    uint64_t r10_3 = 0;
                                                    uint64_t rax_47 = rcx_26;

                                                    if (r12_1 == 4)
                                                    {
                                                        r10_3 = rax_47 & 0xf;
                                                        rax_47 = rax_47 >> 4;
                                                    }

                                                    uint64_t rdx_10 = rax_47 << 2;
                                                    *(rdi_3 + result) = *(&var_438 + rdx_10);
                                                    *(rdi_3 + 1 + result) = *(&var_437 + rdx_10);
                                                    uint64_t rcx_30 = rdi_3 + 2;
                                                    rdi_3 = rdi_3 + 3;
                                                    *(rcx_30 + result) = *(&var_436 + rdx_10);

                                                    if (r12_2 == 4)
                                                    {
                                                        int64_t rax_51 = rdi_3;
                                                        rdi_3 = rdi_3 + 1;
                                                        *(rax_51 + result) = 0xff;
                                                    }

                                                    r9_1 = *arg1;

                                                    if (r14_8 + 1 == r9_1)
                                                        break;

                                                    if (r12_1 == 8)
                                                    {
                                                        if (r8_3 < *(arg1 + 0xc8))
                                                        {
                                                            rcx_30 = *r8_3;
                                                            *(arg1 + 0xc0) = &r8_3[1];
                                                        }
                                                        else if (!arg1[0xc])
                                                            rcx_30 = 0;
                                                        else
                                                        {
                                                            sub_140001d70(arg1);
                                                            char* rax_54 = *(arg1 + 0xc0);
                                                            rcx_30 = *rax_54;
                                                            *(arg1 + 0xc0) = &rax_54[1];
                                                            r9_1 = *arg1;
                                                        }

                                                        r10_3 = rcx_30;
                                                    }

                                                    uint64_t rdx_11 = r10_3 << 2;
                                                    *(rdi_3 + result) = *(&var_438 + rdx_11);
                                                    *(rdi_3 + 1 + result) = *(&var_437 + rdx_11);
                                                    rcx_26 = rdi_3 + 2;
                                                    rdi_3 = rdi_3 + 3;
                                                    *(rcx_26 + result) = *(&var_436 + rdx_11);

                                                    if (r12_2 == 4)
                                                    {
                                                        int64_t rax_59 = rdi_3;
                                                        rdi_3 = rdi_3 + 1;
                                                        *(rax_59 + result) = 0xff;
                                                    }

                                                    r14_8 += 2;
                                                } while (r14_8 < r9_1);
                                                rcx_26 = var_4e4_2;
                                            }

                                            if (r13_13)
                                            {
                                                int32_t rcx_35;

                                                if (*(arg1 + 0x10))
                                                    rcx_35 = arg1[0x32] - arg1[0x30];

                                                if (!*(arg1 + 0x10) || rcx_35 >= r13_13)
                                                    *(arg1 + 0xc0) += r13_13;
                                                else
                                                {
                                                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                                    (*(arg1 + 0x18))(*(arg1 + 0x28), r13_13 - rcx_35);
                                                }

                                                rcx_26 = var_4e4_2;
                                            }

                                            i_3 = arg1[1];
                                            rcx_26 = rcx_26 + 1;
                                            var_4e4_2 = rcx_26;
                                        } while (rcx_26 < i_3);
                                    }
                                }
                                else
                                {
                                    int32_t var_4e0_2 = 0;

                                    if (i_3 > 0)
                                    {
                                        do
                                        {
                                            char* rax_30 = *(arg1 + 0xc0);
                                            int32_t r14_7 = 7;

                                            if (rax_30 < *(arg1 + 0xc8))
                                            {
                                                rcx_11 = *rax_30;
                                                *(arg1 + 0xc0) = &rax_30[1];
                                            }
                                            else if (!arg1[0xc])
                                                rcx_11 = 0;
                                            else
                                            {
                                                sub_140001d70(arg1);
                                                char* rax_32 = *(arg1 + 0xc0);
                                                rcx_11 = *rax_32;
                                                *(arg1 + 0xc0) = &rax_32[1];
                                            }

                                            int32_t rdx_7 = *arg1;
                                            int32_t r15_3 = 0;
                                            uint32_t r8_2 = rcx_11;

                                            if (rdx_7 > 0)
                                            {
                                                do
                                                {
                                                    uint64_t rcx_20 = (r8_2 >> r14_7 & 1) << 2;
                                                    rdi_3[result] = *(&var_438 + rcx_20);
                                                    rdi_3[result + 1] = *(&var_437 + rcx_20);
                                                    rdi_3[result + 2] = *(&var_436 + rcx_20);
                                                    rdi_3 = &rdi_3[3];

                                                    if (r12_2 == 4)
                                                    {
                                                        rdi_3[result] = 0xff;
                                                        rdi_3 = &rdi_3[1];
                                                    }

                                                    r15_3 += 1;

                                                    if (r15_3 == rdx_7)
                                                        break;

                                                    int32_t temp36_1 = r14_7;
                                                    r14_7 -= 1;

                                                    if (temp36_1 - 1 < 0)
                                                    {
                                                        char* rax_40 = *(arg1 + 0xc0);
                                                        r14_7 = 7;

                                                        if (rax_40 < *(arg1 + 0xc8))
                                                        {
                                                            rcx_20 = *rax_40;
                                                            *(arg1 + 0xc0) = &rax_40[1];
                                                        }
                                                        else if (!arg1[0xc])
                                                            rcx_20 = 0;
                                                        else
                                                        {
                                                            sub_140001d70(arg1);
                                                            char* rax_42 = *(arg1 + 0xc0);
                                                            rcx_20 = *rax_42;
                                                            *(arg1 + 0xc0) = &rax_42[1];
                                                        }

                                                        r8_2 = rcx_20;
                                                    }

                                                    rdx_7 = *arg1;
                                                } while (r15_3 < rdx_7);
                                            }

                                            if (r13_13)
                                            {
                                                int32_t rcx_23;

                                                if (*(arg1 + 0x10))
                                                    rcx_23 = arg1[0x32] - arg1[0x30];

                                                if (!*(arg1 + 0x10) || rcx_23 >= r13_13)
                                                    *(arg1 + 0xc0) += r13_13;
                                                else
                                                {
                                                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                                    (*(arg1 + 0x18))(*(arg1 + 0x28), r13_13 - rcx_23);
                                                }
                                            }

                                            i_3 = arg1[1];
                                            rcx_11 = var_4e0_2 + 1;
                                            var_4e0_2 = rcx_11;
                                        } while (rcx_11 < i_3);
                                    }
                                }

                                goto label_14000cb19;
                            }

                            if (r12_1 == 4)
                            {
                                r13_9 = (*arg1 + 1) >> 1;
                                goto label_14000c0db;
                            }

                            if (r12_1 == 8)
                            {
                                r13_9 = *arg1;
                                goto label_14000c0db;
                            }

                            free(result);
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad bpp";
                        }
                    }
                }
            }
            else
            {
                label_14000bdd9:
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad offset";
            }
        }
    }

    return 0;
}

uint64_t sub_14000cc80(void* arg1)
{
    int32_t rbp = 0;
    char* rcx = *(arg1 + 0xc0);
    int64_t rax = *(arg1 + 0xc8);
    uint64_t rsi;
    char rdi;

    if (rcx >= rax)
    {
        if (*(arg1 + 0x30))
        {
            sub_140001d70(arg1);
            *(arg1 + 0xc0) += 1;
            rcx = *(arg1 + 0xc0);
            rax = *(arg1 + 0xc8);
            goto label_14000ccdd;
        }

        label_14000cd19:
        rsi = 0;
        rdi = 0;
        label_14000cd2c:
        char rdx;

        if (rcx < *(arg1 + 0xc8))
        {
            rdx = *rcx;
            rcx = &rcx[1];
        }
        else if (!*(arg1 + 0x30))
            rdx = 0;
        else
        {
            sub_140001d70(arg1);
            char* rax_2 = *(arg1 + 0xc0);
            rdx = *rax_2;
            rcx = &rax_2[1];
        }

        void* rax_7;

        if (rdi != 1)
        {
            if ((!((rdx - 2) & 0xf6) && rdx != 0xb) || rdx == 0xb)
            {
                int32_t r8_5;

                if (*(arg1 + 0x10))
                    r8_5 = *(arg1 + 0xc8) - rcx;

                if (!*(arg1 + 0x10) || r8_5 >= 9)
                {
                    rax_7 = &rcx[9];
                    label_14000ce87:
                    *(arg1 + 0xc0) = rax_7;
                    goto label_14000ce91;
                }

                int64_t rcx_10 = *(arg1 + 0x28);
                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                (*(arg1 + 0x18))(rcx_10, 9 - r8_5);
                label_14000ce91:

                if (sub_140001f80(arg1) >= 1 && sub_140001f80(arg1) >= 1)
                {
                    char* rax_12 = *(arg1 + 0xc0);
                    char rcx_13;

                    if (rax_12 < *(arg1 + 0xc8))
                        rcx_13 = *rax_12;
                    else if (!*(arg1 + 0x30))
                        rcx_13 = 0;
                    else
                    {
                        sub_140001d70(arg1);
                        rcx_13 = **(arg1 + 0xc0);
                    }

                    if (rsi != 1)
                    {
                        label_14000cee8:

                        if (rcx_13 > 0x18)
                        {
                            if (rcx_13 == 0x20)
                                rbp = 1;
                        }
                        else if (TEST_BITD(0x1018100, rcx_13) || rcx_13 == 0x20)
                            rbp = 1;
                    }
                    else if (rcx_13 == 8)
                        rbp = 1;
                    else if (rcx_13 == 0x10)
                        goto label_14000cee8;
                }
            }
        }
        else if (!((rdx - 1) & 0xf7))
        {
            int32_t r8_2;

            if (*(arg1 + 0x10))
                r8_2 = *(arg1 + 0xc8) - rcx;

            void* rcx_5;

            if (!*(arg1 + 0x10) || r8_2 >= 4)
            {
                rcx_5 = &rcx[4];
                *(arg1 + 0xc0) = rcx_5;
            }
            else
            {
                int64_t rcx_4 = *(arg1 + 0x28);
                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                (*(arg1 + 0x18))(rcx_4, 4 - r8_2);
                rcx_5 = *(arg1 + 0xc0);
            }

            char rdx_2;
            uint64_t r8_3;
            uint64_t r9_1;

            if (rcx_5 < *(arg1 + 0xc8))
            {
                rdx_2 = *rcx_5;
                r9_1 = rcx_5 + 1;
                r8_3 = r9_1;
                label_14000cdee:

                if ((rdx_2 <= 0x18 && TEST_BITD(0x1018100, rdx_2)) || rdx_2 == 0x20)
                {
                    int32_t rcx_8;

                    if (*(arg1 + 0x10))
                        rcx_8 = *(arg1 + 0xc8) - r9_1;

                    if (!*(arg1 + 0x10) || rcx_8 >= 4)
                    {
                        rax_7 = r8_3 + 4;
                        goto label_14000ce87;
                    }

                    int64_t rcx_9 = *(arg1 + 0x28);
                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                    (*(arg1 + 0x18))(rcx_9, 4 - rcx_8);
                    goto label_14000ce91;
                }
            }
            else if (*(arg1 + 0x30))
            {
                sub_140001d70(arg1);
                char* rax_4 = *(arg1 + 0xc0);
                rdx_2 = *rax_4;
                r8_3 = &rax_4[1];
                r9_1 = r8_3;
                goto label_14000cdee;
            }
        }
    }
    else
    {
        rcx = &rcx[1];
        *(arg1 + 0xc0) = rcx;
        label_14000ccdd:

        if (rcx >= rax)
        {
            if (!*(arg1 + 0x30))
                goto label_14000cd19;

            sub_140001d70(arg1);
            char* rax_1 = *(arg1 + 0xc0);
            rsi = *rax_1;
            rcx = &rax_1[1];
        }
        else
        {
            rsi = *rcx;
            rcx = &rcx[1];
        }

        *(arg1 + 0xc0) = rcx;
        rdi = rsi;

        if (rsi <= 1)
            goto label_14000cd2c;
    }
    *(arg1 + 0xc0) = *(arg1 + 0xd0);
    *(arg1 + 0xc8) = *(arg1 + 0xd8);
    return rbp;
}

char* sub_14000cf40(void* arg1, int32_t* arg2, int32_t* arg3, uint32_t* arg4, int32_t arg5)
{
    void var_e8;
    int64_t rax_1 = __security_cookie ^ &var_e8;
    int32_t rbp = 0;
    char* rax_3 = *(arg1 + 0xc0);
    uint64_t rcx = *(arg1 + 0xc8);

    if (rax_3 < rcx)
        goto label_14000cfb6;

    uint32_t var_b4;
    uint32_t var_88;
    void* rax_4;

    if (!*(arg1 + 0x30))
    {
        var_88 = 0;
        var_b4 = 0;
    }
    else
    {
        sub_140001d70(arg1);
        rax_3 = *(arg1 + 0xc0);
        rcx = *(arg1 + 0xc8);
        label_14000cfb6:
        rax_4 = &rax_3[1];
        uint32_t r8 = *rax_3;
        var_88 = r8;
        var_b4 = r8;
        *(arg1 + 0xc0) = rax_4;

        if (rax_4 < rcx)
            goto label_14000cff8;
    }

    uint32_t var_90;
    uint64_t rsi;

    if (!*(arg1 + 0x30))
    {
        rsi = 0;
        var_90 = 0;
        label_14000d028:

        if (!*(arg1 + 0x30))
            rcx = 0;
        else
        {
            sub_140001d70(arg1);
            char* rax_7 = *(arg1 + 0xc0);
            rcx = *rax_7;
            *(arg1 + 0xc0) = &rax_7[1];
        }
    }
    else
    {
        sub_140001d70(arg1);
        rax_4 = *(arg1 + 0xc0);
        rcx = *(arg1 + 0xc8);
        label_14000cff8:
        rsi = *rax_4;
        var_90 = rsi;
        *(arg1 + 0xc0) = rax_4 + 1;

        if (rax_4 + 1 >= rcx)
            goto label_14000d028;

        rcx = *(rax_4 + 1);
        *(arg1 + 0xc0) = rax_4 + 2;
    }

    uint32_t rax_9 = rcx;
    int64_t r13 = sub_140001f80(arg1);
    int32_t i_11 = sub_140001f80(arg1);
    char* rcx_6 = *(arg1 + 0xc0);
    char rdx_2;

    if (rcx_6 < *(arg1 + 0xc8))
    {
        rdx_2 = *rcx_6;
        *(arg1 + 0xc0) = &rcx_6[1];
    }
    else if (!*(arg1 + 0x30))
        rdx_2 = 0;
    else
    {
        sub_140001d70(arg1);
        char* rax_11 = *(arg1 + 0xc0);
        rdx_2 = *rax_11;
        *(arg1 + 0xc0) = &rax_11[1];
    }

    uint32_t r15 = rdx_2;
    sub_140001f80(arg1);
    sub_140001f80(arg1);
    int32_t rax_13 = sub_140001f80(arg1);
    int32_t i_14 = sub_140001f80(arg1);
    uint64_t rcx_13 = *(arg1 + 0xc8);
    char* rax_14 = *(arg1 + 0xc0);

    if (rax_14 < rcx_13)
        goto label_14000d11f;

    uint32_t rdi;
    uint32_t r14;

    if (!*(arg1 + 0x30))
    {
        r14 = 0;
        rdi = 0;
        label_14000d146:

        if (!*(arg1 + 0x30))
            rcx_13 = 0;
        else
        {
            sub_140001d70(arg1);
            char* rax_17 = *(arg1 + 0xc0);
            rcx_13 = *rax_17;
            *(arg1 + 0xc0) = &rax_17[1];
        }
    }
    else
    {
        sub_140001d70(arg1);
        rax_14 = *(arg1 + 0xc0);
        rcx_13 = *(arg1 + 0xc8);
        label_14000d11f:
        r14 = *rax_14;
        *(arg1 + 0xc0) = &rax_14[1];
        rdi = r14;

        if (&rax_14[1] >= rcx_13)
            goto label_14000d146;

        rcx_13 = rax_14[1];
        *(arg1 + 0xc0) = &rax_14[2];
    }

    int32_t r12 = 0;
    char* result_7 = nullptr;
    int32_t var_58 = 0;
    char* result;
    TEB* gsbase;

    if (i_14 > 0x1000000 || rax_13 > 0x1000000)
    {
        label_14000d94c:
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
        result = nullptr;
    }
    else
    {
        int32_t var_b0_1 = 0;
        uint32_t rcx_16 = rax_9 - 8;

        if (rax_9 < 8)
            rcx_16 = rax_9;

        if (var_90)
        {
            if (r15 == 8)
                goto label_14000d248;

            if (r15 == 0xf || r15 == 0x10)
                goto label_14000d23c;

            if (r15 == 0x18 || r15 == 0x20)
                goto label_14000d20c;

            goto label_14000d222;
        }

        uint32_t r15_1;

        if (rdi == 8)
        {
            label_14000d248:
            r15_1 = 1;
            label_14000d250:
            *arg2 = rax_13;
            *arg3 = i_14;

            if (arg4)
                *arg4 = r15_1;

            if (rax_13 < 0 || i_14 < 0)
                goto label_14000d94c;

            int32_t rcx_23;

            if (i_14)
                rcx_23 = rax_13 <= COMBINE(0, 0x7fffffff) / i_14;

            if (i_14 && !rcx_23)
                goto label_14000d94c;

            int32_t rcx_25 = i_14 * rax_13;
            int32_t* var_78;
            var_78 = rcx_25;

            if (rcx_25 < 0)
                goto label_14000d94c;

            uint32_t temp0_2 = COMBINE(0, 0x7fffffff) / r15_1;

            if (rcx_25 > temp0_2)
                goto label_14000d94c;

            if (i_14 && rax_13 > COMBINE(0, 0x7fffffff) / i_14)
                goto label_14000d937;

            char* result_1 = malloc(r15_1 * i_14 * rax_13);
            char* result_3 = result_1;

            if (!result_1)
                goto label_14000d937;

            if (var_88)
            {
                int32_t rcx_28;

                if (*(arg1 + 0x10))
                    rcx_28 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

                if (!*(arg1 + 0x10) || rcx_28 >= var_b4)
                    *(arg1 + 0xc0) += var_b4;
                else
                {
                    int64_t rcx_29 = *(arg1 + 0x28);
                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                    (*(arg1 + 0x18))(rcx_29, var_b4 - rcx_28);
                }

                result_3 = result_1;
            }

            char var_b8_1;
            uint32_t var_b4_1;
            int32_t rax_35;
            uint32_t rcx_30;
            uint32_t rdi_6;
            int32_t i_13;
            int32_t r13_1;

            if (!var_90)
            {
                rcx_30 = rax_9;
                rdi_6 = r14;
                var_b4_1 = r14;
                var_b8_1 = rsi;

                if (rcx_30 >= 8)
                    goto label_14000d56e;

                rax_35 = var_b0_1;
                var_b4_1 = r14;
                var_b8_1 = rsi;

                if (rax_35)
                    goto label_14000d56e;

                i_13 = i_14;
                r13_1 = rax_13;

                if (i_13 <= 0)
                    goto label_14000d8b6;

                uint64_t i_6 = i_13;
                int32_t rbp_2 = r13_1 * r15_1;

                if (1 - (rcx_13 >> 5 & 1) == rax_35)
                {
                    char* result_5 = result_3;
                    uint64_t i;

                    do
                    {
                        sub_140001df0(arg1, result_5, rbp_2);
                        result_5 = &result_5[rbp_2];
                        i = i_6;
                        i_6 -= 1;
                    } while (i != 1);
                }
                else
                {
                    void* rsi_2 = &result_3[(i_13 - 1) * r15_1 * r13_1];
                    uint64_t i_1;

                    do
                    {
                        sub_140001df0(arg1, rsi_2, rbp_2);
                        rsi_2 += -(rbp_2);
                        i_1 = i_6;
                        i_6 -= 1;
                    } while (i_1 != 1);
                }

                goto label_14000d8ae;
            }

            char* result_4;

            if (i_11)
            {
                int32_t temp28_1 = r13;

                if (temp28_1)
                {
                    if (temp28_1 >= 0)
                    {
                        int32_t rcx_34;

                        if (*(arg1 + 0x10))
                            rcx_34 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

                        if (!*(arg1 + 0x10) || rcx_34 >= r13)
                            *(arg1 + 0xc0) += r13;
                        else
                        {
                            int64_t rcx_35 = *(arg1 + 0x28);
                            *(arg1 + 0xc0) = *(arg1 + 0xc8);
                            (*(arg1 + 0x18))(rcx_35, r13 - rcx_34);
                        }
                    }
                    else
                        *(arg1 + 0xc0) = *(arg1 + 0xc8);
                }

                if (i_11 < 0)
                {
                    label_14000d928:
                    free(result_1);
                    label_14000d937:
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
                    result = nullptr;
                }
                else
                {
                    int32_t rax_44;
                    rax_44 = i_11 <= temp0_2;

                    if (!rax_44)
                        goto label_14000d928;

                    int32_t rdi_8 = r15_1 * i_11;
                    char* result_6 = malloc(rdi_8);
                    result_7 = result_6;

                    if (!result_6)
                        goto label_14000d928;

                    var_b4_1 = r14;
                    var_b8_1 = rsi;

                    if (var_b0_1)
                    {
                        char* result_8 = result_6;

                        if (i_11 > 0)
                        {
                            var_b8_1 = rsi;
                            uint64_t i_10 = i_11;
                            var_b4_1 = r14;
                            uint64_t i_2;

                            do
                            {
                                uint32_t r8_4 = sub_140001f80(arg1);
                                *result_8 = (r8_4 >> 0xa & 0x1f) * 0xff / 0x1f;
                                result_8[1] = (r8_4 >> 5 & 0x1f) * 0xff / 0x1f;
                                result_8[2] = (r8_4 & 0x1f) * 0xff / 0x1f;
                                result_8 = &result_8[r15_1];
                                i_2 = i_10;
                                i_10 -= 1;
                            } while (i_2 != 1);
                        }

                        goto label_14000d567;
                    }

                    if (!sub_140001df0(arg1, result_6, rdi_8))
                    {
                        free(result_1);
                        result_4 = result_6;
                        goto label_14000d407;
                    }

                    label_14000d567:
                    rcx_30 = rax_9;
                    rdi_6 = r14;
                    label_14000d56e:
                    uint64_t rax_58 = var_78;
                    uint64_t rsi_4 = r15_1;

                    if (rax_58 > 0)
                    {
                        int64_t r14_4 = result_1 - &var_58;
                        uint64_t r10_3 = r15_1;
                        uint64_t i_7 = rax_58;
                        var_88 = rax_58;
                        int32_t r8_6 = 1;
                        uint32_t r13_4 = 0;
                        uint64_t i_3;

                        do
                        {
                            if (rcx_30 < 8)
                            {
                                label_14000d644:

                                if (var_b8_1)
                                {
                                    uint32_t rax_68;

                                    if (rdi_6 != 8)
                                        rax_68 = sub_140001f80(arg1);
                                    else
                                    {
                                        char* rax_66 = *(arg1 + 0xc0);

                                        if (rax_66 < *(arg1 + 0xc8))
                                        {
                                            char rcx_46 = *rax_66;
                                            *(arg1 + 0xc0) = &rax_66[1];
                                            rax_68 = rcx_46;
                                        }
                                        else if (!*(arg1 + 0x30))
                                            rax_68 = 0;
                                        else
                                        {
                                            sub_140001d70(arg1);
                                            char* rax_69 = *(arg1 + 0xc0);
                                            char rcx_48 = *rax_69;
                                            *(arg1 + 0xc0) = &rax_69[1];
                                            rax_68 = rcx_48;
                                        }
                                    }

                                    if (rax_68 >= i_11)
                                        rax_68 = 0;

                                    if (r15_1)
                                        memcpy(&var_58, &result_7[rax_68 * r15_1], rsi_4);
                                }
                                else if (!var_b0_1)
                                {
                                    int64_t rdi_9 = 0;

                                    if (r15_1)
                                    {
                                        do
                                        {
                                            char* rax_85 = *(arg1 + 0xc0);

                                            if (rax_85 < *(arg1 + 0xc8))
                                            {
                                                rcx_30 = *rax_85;
                                                *(arg1 + 0xc0) = &rax_85[1];
                                            }
                                            else if (!*(arg1 + 0x30))
                                                rcx_30 = 0;
                                            else
                                            {
                                                sub_140001d70(arg1);
                                                char* rax_87 = *(arg1 + 0xc0);
                                                rcx_30 = *rax_87;
                                                *(arg1 + 0xc0) = &rax_87[1];
                                            }

                                            *(&var_58 + rdi_9) = rcx_30;
                                            rdi_9 += 1;
                                        } while (rdi_9 < rsi_4);
                                    }
                                }
                                else
                                {
                                    uint32_t r8_9 = sub_140001f80(arg1);
                                    var_58 = (r8_9 >> 0xa & 0x1f) * 0xff / 0x1f;
                                    *var_58[1] = (r8_9 >> 5 & 0x1f) * 0xff / 0x1f;
                                    *var_58[2] = (r8_9 & 0x1f) * 0xff / 0x1f;
                                }

                                i_7 = var_88;
                                r8_6 = 0;
                                r10_3 = r15_1;
                            }
                            else
                            {
                                if (!r12)
                                {
                                    char* rax_59 = *(arg1 + 0xc0);

                                    if (rax_59 < *(arg1 + 0xc8))
                                    {
                                        rcx_30 = *rax_59;
                                        *(arg1 + 0xc0) = &rax_59[1];
                                    }
                                    else if (!*(arg1 + 0x30))
                                        rcx_30 = 0;
                                    else
                                    {
                                        sub_140001d70(arg1);
                                        char* rax_62 = *(arg1 + 0xc0);
                                        rcx_30 = *rax_62;
                                        *(arg1 + 0xc0) = &rax_62[1];
                                    }

                                    uint32_t rax_64 = rcx_30;
                                    r12 = (rax_64 & 0x7f) + 1;
                                    r13_4 = rax_64 >> 7;
                                    goto label_14000d644;
                                }

                                if (!r13_4 || r8_6)
                                    goto label_14000d644;
                            }

                            int64_t rdx_37 = 0;

                            if (r15_1)
                            {
                                do
                                {
                                    char* rcx_56 = &var_58 + rdx_37;
                                    rdx_37 += 1;
                                    rcx_56[r14_4] = *rcx_56;
                                } while (rdx_37 < rsi_4);
                            }

                            rdi_6 = var_b4_1;
                            r12 -= 1;
                            rcx_30 = rax_9;
                            r14_4 += r10_3;
                            i_3 = i_7;
                            i_7 -= 1;
                            var_88 = i_7;
                        } while (i_3 != 1);
                    }

                    i_13 = i_14;
                    r13_1 = rax_13;

                    if (1 - (rcx_13 >> 5 & 1) && i_13 > 0)
                    {
                        int32_t i_8 = r15_1 * r13_1;
                        int32_t rbx_1 = 0;
                        int32_t r10_6 = (i_13 - 1) * r15_1 * r13_1;

                        do
                        {
                            int32_t i_4 = i_8;

                            if (i_8 > 0)
                            {
                                int64_t rax_90 = rbx_1;
                                void* r9_2 = r10_6 - rax_90;
                                void* rdx_38 = &result_1[rax_90];

                                do
                                {
                                    i_4 -= 1;
                                    char rcx_57 = *rdx_38;
                                    *rdx_38 = *(rdx_38 + r9_2);
                                    *(rdx_38 + r9_2) = rcx_57;
                                    rdx_38 += 1;
                                } while (i_4 > 0);
                            }

                            rbx_1 += i_8;
                            r10_6 -= i_8;
                            rbp += 2;
                        } while (rbp < i_13);
                    }

                    if (result_7)
                        free(result_7);

                    label_14000d8ae:
                    rax_35 = var_b0_1;
                    label_14000d8b6:

                    if (r15_1 < 3)
                        result = result_1;
                    else
                    {
                        result = result_1;

                        if (!rax_35)
                        {
                            int32_t i_12 = var_78;
                            char* result_2 = result;

                            if (i_12 > 0)
                            {
                                uint64_t i_9 = i_12;
                                uint64_t i_5;

                                do
                                {
                                    char rcx_59 = *result_2;
                                    *result_2 = result_2[2];
                                    result_2[2] = rcx_59;
                                    result_2 = &result_2[r15_1];
                                    i_5 = i_9;
                                    i_9 -= 1;
                                } while (i_5 != 1);
                                result = result_1;
                            }
                        }
                    }

                    if (arg5 && arg5 != r15_1)
                        result = sub_140002040(result, r15_1, arg5, r13_1, i_13);
                }
            }
            else
            {
                result_4 = result_3;
                label_14000d407:
                free(result_4);
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad palette";
                result = nullptr;
            }
        }
        else
        {
            if (rdi == 0xf)
            {
                label_14000d23c:
                r15_1 = 3;
                var_b0_1 = 1;
                goto label_14000d250;
            }

            if (rdi == 0x10)
            {
                if (rcx_16 != 3)
                    goto label_14000d23c;

                r15_1 = rcx_16 - 1;
                goto label_14000d250;
            }

            if (rdi == 0x18 || rdi == 0x20)
            {
                r15 = r14;
                label_14000d20c:
                r15_1 = r15 >> 3;
                var_b0_1 = 0;

                if (r15_1)
                    goto label_14000d250;

                goto label_14000d222;
            }

            label_14000d222:
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad format";
            result = nullptr;
        }
    }
    __security_check_cookie(rax_1 ^ &var_e8);
    return result;
}

int64_t DBI1::DBI1(uint64_t arg1, char* arg2, int32_t arg3)
{
    int32_t r15 = 0;
    char* rdi = arg2;
    uint64_t rbx = arg1;
    int32_t i = arg3;

    if (arg3 > 0)
    {
        do
        {
            char* rax_1 = *(rbx + 0xc0);

            if (rax_1 < *(rbx + 0xc8))
            {
                arg1 = *rax_1;
                rax_1 = &rax_1[1];
                *(rbx + 0xc0) = rax_1;
            }
            else if (!*(rbx + 0x30))
                arg1 = 0;
            else
            {
                sub_140001d70(rbx);
                char* rax_2 = *(rbx + 0xc0);
                arg1 = *rax_2;
                rax_1 = &rax_2[1];
                *(rbx + 0xc0) = rax_1;
            }

            uint32_t rbp_1 = arg1;

            if (rbp_1 != 0x80)
            {
                if (rbp_1 < 0x80)
                {
                    int32_t j_2 = rbp_1 + 1;

                    if (j_2 > i)
                        return 0;

                    r15 += j_2;
                    int32_t j;

                    do
                    {
                        char* rax_3 = *(rbx + 0xc0);

                        if (rax_3 < *(rbx + 0xc8))
                        {
                            arg1 = *rax_3;
                            *(rbx + 0xc0) = &rax_3[1];
                        }
                        else if (!*(rbx + 0x30))
                            arg1 = 0;
                        else
                        {
                            sub_140001d70(rbx);
                            char* rax_5 = *(rbx + 0xc0);
                            arg1 = *rax_5;
                            *(rbx + 0xc0) = &rax_5[1];
                        }

                        *rdi = arg1;
                        rdi = &rdi[4];
                        j = j_2;
                        j_2 -= 1;
                    } while (j != 1);
                }
                else if (rbp_1 > 0x80)
                {
                    int32_t j_3 = 0x101 - rbp_1;

                    if (j_3 > i)
                        return 0;

                    if (rax_1 < *(rbx + 0xc8))
                    {
                        arg1 = *rax_1;
                        *(rbx + 0xc0) = &rax_1[1];
                    }
                    else if (!*(rbx + 0x30))
                        arg1 = 0;
                    else
                    {
                        sub_140001d70(rbx);
                        char* rax_8 = *(rbx + 0xc0);
                        arg1 = *rax_8;
                        *(rbx + 0xc0) = &rax_8[1];
                    }

                    r15 += j_3;

                    if (j_3)
                    {
                        int32_t j_1;

                        do
                        {
                            *rdi = arg1;
                            rdi = &rdi[4];
                            j_1 = j_3;
                            j_3 -= 1;
                        } while (j_1 != 1);
                    }
                }
            }

            i = arg3 - r15;
        } while (i > 0);
    }

    return 1;
}

void* sub_14000db50(uint64_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6)
{
    int32_t rax = sub_140001ec0(arg1);
    TEB* gsbase;

    if (sub_140001ec0(arg1) + (rax << 0x10) != 0x38425053)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "not PSD";
        return 0;
    }

    if (sub_140001ec0(arg1) != 1)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "wrong version";
        return 0;
    }

    int32_t rcx_5;

    if (*(arg1 + 0x10))
        rcx_5 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

    if (!*(arg1 + 0x10) || rcx_5 >= 6)
        *(arg1 + 0xc0) += 6;
    else
    {
        *(arg1 + 0xc0) = *(arg1 + 0xc8);
        (*(arg1 + 0x18))(*(arg1 + 0x28), 6 - rcx_5);
    }

    int32_t rax_9 = sub_140001ec0(arg1);
    int32_t r15 = rax_9;

    if (rax_9 > 0x10)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "wrong channel count";
        return 0;
    }

    int32_t r13_2 = (sub_140001ec0(arg1) << 0x10) + sub_140001ec0(arg1);
    uint64_t r12_2 = (sub_140001ec0(arg1) << 0x10) + sub_140001ec0(arg1);

    if (r13_2 > 0x1000000 || r12_2 > 0x1000000)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
        return nullptr;
    }

    int64_t rbp_1 = sub_140001ec0(arg1);

    if ((rbp_1 - 8) & 0xfffffff7)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unsupported bit depth";
        return nullptr;
    }

    if (sub_140001ec0(arg1) != 3)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "wrong color format";
        return nullptr;
    }

    int32_t rax_20 = sub_140001ec0(arg1);
    int32_t rax_21 = sub_140001ec0(arg1);
    int32_t rbx_3 = rax_20 << 0x10;
    int32_t rcx_21 = rax_21 + rbx_3;

    if (rax_21 != -(rbx_3))
    {
        if (rcx_21 >= 0)
        {
            int32_t rdx_2;

            if (*(arg1 + 0x10))
                rdx_2 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

            if (!*(arg1 + 0x10) || rdx_2 >= rcx_21)
                *(arg1 + 0xc0) += rcx_21;
            else
            {
                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                (*(arg1 + 0x18))(*(arg1 + 0x28), rcx_21 - rdx_2);
            }
        }
        else
            *(arg1 + 0xc0) = *(arg1 + 0xc8);
    }

    int32_t rax_25 = sub_140001ec0(arg1);
    int32_t rax_26 = sub_140001ec0(arg1);
    int32_t rbx_5 = rax_25 << 0x10;
    int32_t rcx_27 = rax_26 + rbx_5;

    if (rax_26 != -(rbx_5))
    {
        if (rcx_27 >= 0)
        {
            int32_t rdx_5;

            if (*(arg1 + 0x10))
                rdx_5 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

            if (!*(arg1 + 0x10) || rdx_5 >= rcx_27)
                *(arg1 + 0xc0) += rcx_27;
            else
            {
                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                (*(arg1 + 0x18))(*(arg1 + 0x28), rcx_27 - rdx_5);
            }
        }
        else
            *(arg1 + 0xc0) = *(arg1 + 0xc8);
    }

    int32_t rax_30 = sub_140001ec0(arg1);
    int32_t rax_31 = sub_140001ec0(arg1);
    int32_t rbx_7 = rax_30 << 0x10;
    int32_t rcx_33 = rax_31 + rbx_7;

    if (rax_31 != -(rbx_7))
    {
        if (rcx_33 >= 0)
        {
            int32_t rdx_8;

            if (*(arg1 + 0x10))
                rdx_8 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

            if (!*(arg1 + 0x10) || rdx_8 >= rcx_33)
                *(arg1 + 0xc0) += rcx_33;
            else
            {
                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                (*(arg1 + 0x18))(*(arg1 + 0x28), rcx_33 - rdx_8);
            }
        }
        else
            *(arg1 + 0xc0) = *(arg1 + 0xc8);
    }

    int32_t rax_35 = sub_140001ec0(arg1);

    if (rax_35 > 1)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad compression";
        return nullptr;
    }

    int32_t temp5_1 = r12_2;

    if (temp5_1 >= 0)
    {
        uint32_t rcx_38;

        if (temp5_1)
        {
            if (COMBINE(0, 0x7fffffff) / r12_2 >= 4)
            {
                rcx_38 = r12_2 << 2;

                if (rcx_38 >= 0)
                    goto label_14000dea0;
            }
        }
        else
        {
            rcx_38 = r12_2 << 2;
            label_14000dea0:

            if (r13_2 >= 0 && (!r13_2 || rcx_38 <= COMBINE(0, 0x7fffffff) / r13_2))
            {
                uint64_t r14_2 = r12_2 * r13_2;
                void* result_1 = malloc(r14_2 << 2);
                void* result = result_1;
                char const* const rax_41;
                int64_t rcx_40;

                if (result_1)
                {
                    int64_t rsi_1;

                    if (!rax_35)
                    {
                        int32_t rax_47 = rax_9;
                        int64_t rdx_14 = rbp_1;
                        int32_t i = 0;
                        int64_t var_50_1 = rdx_14;
                        void* result_4 = result;

                        do
                        {
                            if (i >= rax_47)
                            {
                                char rdx_15 = 0;
                                void* result_5 = result_4;

                                if (i == 3)
                                    rdx_15 = -1;

                                if (r14_2 > 0)
                                {
                                    uint64_t j_6 = r14_2;
                                    uint64_t j;

                                    do
                                    {
                                        *result_5 = rdx_15;
                                        result_5 += 4;
                                        j = j_6;
                                        j_6 -= 1;
                                    } while (j != 1);
                                }

                                rax_47 = rax_9;
                                rdx_14 = var_50_1;
                            }
                            else if (*arg6 != 0x10)
                            {
                                void* result_6 = result_4;

                                if (rdx_14 != 0x10)
                                {
                                    if (r14_2 > 0)
                                    {
                                        uint64_t j_9 = r14_2;
                                        uint64_t j_1;

                                        do
                                        {
                                            char* rax_51 = *(arg1 + 0xc0);
                                            char rcx_49;

                                            if (rax_51 < *(arg1 + 0xc8))
                                            {
                                                rcx_49 = *rax_51;
                                                *(arg1 + 0xc0) = &rax_51[1];
                                            }
                                            else if (!*(arg1 + 0x30))
                                                rcx_49 = 0;
                                            else
                                            {
                                                sub_140001d70(arg1);
                                                char* rax_53 = *(arg1 + 0xc0);
                                                rcx_49 = *rax_53;
                                                *(arg1 + 0xc0) = &rax_53[1];
                                            }

                                            *result_6 = rcx_49;
                                            result_6 += 4;
                                            j_1 = j_9;
                                            j_9 -= 1;
                                        } while (j_1 != 1);
                                        rax_47 = rax_9;
                                        rdx_14 = var_50_1;
                                    }
                                }
                                else if (r14_2 > 0)
                                {
                                    uint64_t j_8 = r14_2;
                                    uint64_t j_2;

                                    do
                                    {
                                        *result_6 = sub_140001ec0(arg1) >> 8;
                                        result_6 += 4;
                                        j_2 = j_8;
                                        j_8 -= 1;
                                    } while (j_2 != 1);
                                    rax_47 = rax_9;
                                    rdx_14 = var_50_1;
                                }
                            }
                            else
                            {
                                void* result_3 = result;

                                if (r14_2 > 0)
                                {
                                    uint64_t j_7 = r14_2;
                                    uint64_t j_3;

                                    do
                                    {
                                        *result_3 = sub_140001ec0(arg1);
                                        result_3 += 8;
                                        j_3 = j_7;
                                        j_7 -= 1;
                                    } while (j_3 != 1);
                                    rax_47 = rax_9;
                                    rdx_14 = var_50_1;
                                }
                            }

                            i += 1;
                            result += 2;
                            result_4 += 1;
                        } while (i < 4);

                        r15 = rax_9;
                        rsi_1 = 0;
                        result = result_1;
                        r12_2 = r12_2;
                    }
                    else
                    {
                        int32_t rcx_42 = r13_2 * r15;
                        int32_t rcx_43 = rcx_42 * 2;

                        if (rcx_42 != -(rcx_42))
                        {
                            if (rcx_43 >= 0)
                            {
                                int32_t rdx_11;

                                if (*(arg1 + 0x10))
                                    rdx_11 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

                                if (!*(arg1 + 0x10) || rdx_11 >= rcx_43)
                                    *(arg1 + 0xc0) += rcx_43;
                                else
                                {
                                    *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                    (*(arg1 + 0x18))(*(arg1 + 0x28), rcx_43 - rdx_11);
                                }
                            }
                            else
                                *(arg1 + 0xc0) = *(arg1 + 0xc8);
                        }

                        rsi_1 = 0;

                        for (int32_t i_1 = 0; i_1 < 4; i_1 += 1)
                        {
                            uint64_t i_6 = i_1;
                            char* rdx_13 = i_6 + result;

                            if (i_1 < r15)
                            {
                                if (!DBI1::DBI1(arg1, rdx_13, r14_2))
                                {
                                    free(result);
                                    rcx_40 = *gsbase->ThreadLocalStoragePointer;
                                    rax_41 = "corrupt";
                                    goto label_14000defe;
                                }
                            }
                            else if (r14_2 > 0)
                            {
                                char rcx_46 = 0;
                                uint64_t j_5 = r14_2;

                                if (i_6 == 3)
                                    rcx_46 = -1;

                                uint64_t j_4;

                                do
                                {
                                    *rdx_13 = rcx_46;
                                    rdx_13 = &rdx_13[4];
                                    j_4 = j_5;
                                    j_5 -= 1;
                                } while (j_4 != 1);
                            }
                        }
                    }

                    if (r15 >= 4)
                    {
                        int64_t rdx_16 = r14_2;
                        float zmm1;
                        float zmm2;

                        if (*arg6 != 0x10)
                        {
                            if (rdx_16 >= 4)
                            {
                                void* rcx_56 = result + 5;
                                int64_t i_10 = ((rdx_16 - 4) >> 2) + 1;
                                rsi_1 = i_10 << 2;
                                int64_t i_2;

                                do
                                {
                                    uint32_t r9_5 = *(rcx_56 - 2);

                                    if (r9_5 - 1 <= 0xfd)
                                    {
                                        zmm2 = 1f / (r9_5 / 255f);
                                        zmm1 = (1f - zmm2) * 255f;
                                        *(rcx_56 - 5) = *(rcx_56 - 5) * zmm2 + zmm1;
                                        *(rcx_56 - 4) = *(rcx_56 - 4) * zmm2 + zmm1;
                                        *(rcx_56 - 3) = *(rcx_56 - 3) * zmm2 + zmm1;
                                    }

                                    uint32_t r9_6 = *(rcx_56 + 2);

                                    if (r9_6 - 1 <= 0xfd)
                                    {
                                        zmm2 = 1f / (r9_6 / 255f);
                                        zmm1 = (1f - zmm2) * 255f;
                                        *(rcx_56 - 1) = *(rcx_56 - 1) * zmm2 + zmm1;
                                        *rcx_56 = *rcx_56 * zmm2 + zmm1;
                                        *(rcx_56 + 1) = *(rcx_56 + 1) * zmm2 + zmm1;
                                    }

                                    uint32_t r9_7 = *(rcx_56 + 6);

                                    if (r9_7 - 1 <= 0xfd)
                                    {
                                        zmm2 = 1f / (r9_7 / 255f);
                                        zmm1 = (1f - zmm2) * 255f;
                                        *(rcx_56 + 3) = *(rcx_56 + 3) * zmm2 + zmm1;
                                        *(rcx_56 + 4) = *(rcx_56 + 4) * zmm2 + zmm1;
                                        *(rcx_56 + 5) = *(rcx_56 + 5) * zmm2 + zmm1;
                                    }

                                    uint32_t r9_8 = *(rcx_56 + 0xa);

                                    if (r9_8 - 1 <= 0xfd)
                                    {
                                        zmm2 = 1f / (r9_8 / 255f);
                                        zmm1 = (1f - zmm2) * 255f;
                                        *(rcx_56 + 7) = *(rcx_56 + 7) * zmm2 + zmm1;
                                        *(rcx_56 + 8) = *(rcx_56 + 8) * zmm2 + zmm1;
                                        *(rcx_56 + 9) = *(rcx_56 + 9) * zmm2 + zmm1;
                                    }

                                    rcx_56 += 0x10;
                                    i_2 = i_10;
                                    i_10 -= 1;
                                } while (i_2 != 1);
                            }

                            if (rsi_1 < rdx_16)
                            {
                                void* rcx_58 = (rsi_1 << 2) + 1 + result;
                                int64_t i_8 = rdx_16 - rsi_1;
                                int64_t i_3;

                                do
                                {
                                    uint32_t r8_6 = *(rcx_58 + 2);

                                    if (r8_6 - 1 <= 0xfd)
                                    {
                                        zmm2 = 1f / (r8_6 / 255f);
                                        zmm1 = (1f - zmm2) * 255f;
                                        *(rcx_58 - 1) = *(rcx_58 - 1) * zmm2 + zmm1;
                                        *rcx_58 = *rcx_58 * zmm2 + zmm1;
                                        *(rcx_58 + 1) = *(rcx_58 + 1) * zmm2 + zmm1;
                                    }

                                    rcx_58 += 4;
                                    i_3 = i_8;
                                    i_8 -= 1;
                                } while (i_3 != 1);
                            }
                        }
                        else
                        {
                            if (rdx_16 >= 4)
                            {
                                int16_t* rcx_53 = result + 0xa;
                                int64_t i_9 = ((rdx_16 - 4) >> 2) + 1;
                                rsi_1 = i_9 << 2;
                                int64_t i_4;

                                do
                                {
                                    uint32_t r9_1 = rcx_53[-2];

                                    if (r9_1 - 1 <= 0xfffd)
                                    {
                                        zmm2 = 1f / (r9_1 / 65535f);
                                        zmm1 = (1f - zmm2) * 65535f;
                                        rcx_53[-5] = rcx_53[-5] * zmm2 + zmm1;
                                        rcx_53[-4] = rcx_53[-4] * zmm2 + zmm1;
                                        rcx_53[-3] = rcx_53[-3] * zmm2 + zmm1;
                                    }

                                    uint32_t r9_2 = rcx_53[2];

                                    if (r9_2 - 1 <= 0xfffd)
                                    {
                                        zmm2 = 1f / (r9_2 / 65535f);
                                        zmm1 = (1f - zmm2) * 65535f;
                                        rcx_53[-1] = rcx_53[-1] * zmm2 + zmm1;
                                        *rcx_53 = *rcx_53 * zmm2 + zmm1;
                                        rcx_53[1] = rcx_53[1] * zmm2 + zmm1;
                                    }

                                    uint32_t r9_3 = rcx_53[6];

                                    if (r9_3 - 1 <= 0xfffd)
                                    {
                                        zmm2 = 1f / (r9_3 / 65535f);
                                        zmm1 = (1f - zmm2) * 65535f;
                                        rcx_53[3] = rcx_53[3] * zmm2 + zmm1;
                                        rcx_53[4] = rcx_53[4] * zmm2 + zmm1;
                                        rcx_53[5] = rcx_53[5] * zmm2 + zmm1;
                                    }

                                    uint32_t r9_4 = rcx_53[0xa];

                                    if (r9_4 - 1 <= 0xfffd)
                                    {
                                        zmm2 = 1f / (r9_4 / 65535f);
                                        zmm1 = (1f - zmm2) * 65535f;
                                        rcx_53[7] = rcx_53[7] * zmm2 + zmm1;
                                        rcx_53[8] = rcx_53[8] * zmm2 + zmm1;
                                        rcx_53[9] = rcx_53[9] * zmm2 + zmm1;
                                    }

                                    rcx_53 = &rcx_53[0x10];
                                    i_4 = i_9;
                                    i_9 -= 1;
                                } while (i_4 != 1);
                            }

                            if (rsi_1 < rdx_16)
                            {
                                void* rcx_55 = (rsi_1 << 3) + 2 + result;
                                int64_t i_7 = rdx_16 - rsi_1;
                                int64_t i_5;

                                do
                                {
                                    uint32_t r8_3 = *(rcx_55 + 4);

                                    if (r8_3 - 1 <= 0xfffd)
                                    {
                                        zmm2 = 1f / (r8_3 / 65535f);
                                        zmm1 = (1f - zmm2) * 65535f;
                                        *(rcx_55 - 2) = *(rcx_55 - 2) * zmm2 + zmm1;
                                        *rcx_55 = *rcx_55 * zmm2 + zmm1;
                                        *(rcx_55 + 2) = *(rcx_55 + 2) * zmm2 + zmm1;
                                    }

                                    rcx_55 += 8;
                                    i_5 = i_7;
                                    i_7 -= 1;
                                } while (i_5 != 1);
                            }
                        }
                    }

                    if (!(arg5 & 0xfffffffb))
                    {
                        label_14000e759:

                        if (arg4)
                            *arg4 = 4;

                        *arg3 = r13_2;
                        *arg2 = r12_2;
                        return result;
                    }

                    int32_t r9_9 = r12_2;
                    void* result_2;

                    if (*arg6 != 0x10)
                        result_2 = sub_140002040(result, 4, arg5, r9_9, r13_2);
                    else
                        result_2 = sub_140002510(result, 4, arg5, r9_9, r13_2);

                    result = result_2;

                    if (result_2)
                        goto label_14000e759;
                }
                else
                {
                    rcx_40 = *gsbase->ThreadLocalStoragePointer;
                    rax_41 = "outofmem";
                    label_14000defe:
                    *(0x10 + rcx_40) = rax_41;
                }
                return nullptr;
            }
        }
    }

    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
    return nullptr;
}

int64_t sub_14000e7e0(uint64_t arg1, int64_t arg2)
{
    uint64_t rbx = arg1;

    for (char* i = nullptr; i < 4; i = &i[1])
    {
        char* rax_1 = *(rbx + 0xc0);

        if (rax_1 < *(rbx + 0xc8))
        {
            arg1 = *rax_1;
            *(rbx + 0xc0) = &rax_1[1];
        }
        else if (!*(rbx + 0x30))
            arg1 = 0;
        else
        {
            sub_140001d70(rbx);
            char* rax_3 = *(rbx + 0xc0);
            arg1 = *rax_3;
            *(rbx + 0xc0) = &rax_3[1];
        }

        if (arg1 != i[arg2])
            return 0;
    }

    return 1;
}

int64_t sub_14000e880(void* arg1, int32_t arg2, int64_t arg3)
{
    int32_t rsi = 0x80;

    for (char* i = nullptr; i < 4; )
    {
        if (arg2 & rsi)
        {
            char* rax_2;
            uint64_t rcx_1;
            TEB* gsbase;

            if (!*(arg1 + 0x10))
            {
                label_14000e8dd:
                rax_2 = *(arg1 + 0xc0);
                rcx_1 = *(arg1 + 0xc8);

                if (rax_2 >= rcx_1)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad file";
                    return 0;
                }
            }
            else
            {
                if ((*(arg1 + 0x20))(*(arg1 + 0x28)))
                {
                    if (*(arg1 + 0x30))
                        goto label_14000e8dd;

                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad file";
                    return 0;
                }

                rax_2 = *(arg1 + 0xc0);
                rcx_1 = *(arg1 + 0xc8);
            }

            if (rax_2 < rcx_1)
            {
                rcx_1 = *rax_2;
                *(arg1 + 0xc0) = &rax_2[1];
            }
            else if (!*(arg1 + 0x30))
                rcx_1 = 0;
            else
            {
                sub_140001d70(arg1);
                char* rax_4 = *(arg1 + 0xc0);
                rcx_1 = *rax_4;
                *(arg1 + 0xc0) = &rax_4[1];
            }

            i[arg3] = rcx_1;
        }

        i = &i[1];
        rsi s>>= 1;
    }

    return arg3;
}

int64_t sub_14000e980(void* arg1, uint32_t arg2, int32_t arg3, int32_t* arg4, int64_t arg5)
{
    void var_b8;
    int64_t rax_1 = __security_cookie ^ &var_b8;
    void var_60;
    void* rbp = &var_60;
    int32_t r15 = 0;
    uint64_t rsi;
    uint64_t var_30 = rsi;
    int64_t rax_3 = 0;
    uint64_t r13 = arg2;
    uint64_t rdi;
    uint64_t var_38 = rdi;
    int64_t result;

    while (true)
    {
        char const* const rax_43;
        int64_t rcx_20;
        TEB* gsbase;

        if (rax_3 == 0xa)
        {
            label_14000eef7:
            rcx_20 = *gsbase->ThreadLocalStoragePointer;
            rax_43 = "bad format";
        }
        else
        {
            char* rcx = *(arg1 + 0xc0);
            int64_t rax_4 = rax_3 + 1;
            void* rbx_1 = rbp;
            int64_t rax_5 = *(arg1 + 0xc8);
            rbp += 3;
            void* rcx_1;
            void* rcx_3;
            void* rcx_5;

            if (rcx >= rax_5)
            {
                if (*(arg1 + 0x30))
                {
                    sub_140001d70(arg1);
                    char* rax_6 = *(arg1 + 0xc0);
                    rsi = *rax_6;
                    rcx_1 = &rax_6[1];
                    rax_5 = *(arg1 + 0xc8);
                    goto label_14000ea2a;
                }

                rsi = 0;
                label_14000ea41:

                if (*(arg1 + 0x30))
                {
                    sub_140001d70(arg1);
                    char* rax_7 = *(arg1 + 0xc0);
                    rdi = *rax_7;
                    rcx_3 = &rax_7[1];
                    rax_5 = *(arg1 + 0xc8);
                    goto label_14000ea65;
                }

                rdi = 0;
                *rbx_1 = 0;
                label_14000ea82:

                if (*(arg1 + 0x30))
                {
                    sub_140001d70(arg1);
                    char* rax_8 = *(arg1 + 0xc0);
                    arg2 = *rax_8;
                    rcx_5 = &rax_8[1];
                    rax_5 = *(arg1 + 0xc8);
                    goto label_14000eaa6;
                }

                *(rbx_1 + 1) = 0;
                label_14000eac9:

                if (!*(arg1 + 0x30))
                    arg2 = 0;
                else
                {
                    sub_140001d70(arg1);
                    char* rax_10 = *(arg1 + 0xc0);
                    arg2 = *rax_10;
                    *(arg1 + 0xc0) = &rax_10[1];
                }
            }
            else
            {
                rsi = *rcx;
                rcx_1 = &rcx[1];
                label_14000ea2a:
                *(arg1 + 0xc0) = rcx_1;

                if (rcx_1 >= rax_5)
                    goto label_14000ea41;

                rdi = *rcx_1;
                rcx_3 = rcx_1 + 1;
                label_14000ea65:
                *(arg1 + 0xc0) = rcx_3;
                *rbx_1 = rdi;

                if (rcx_3 >= rax_5)
                    goto label_14000ea82;

                arg2 = *rcx_3;
                rcx_5 = rcx_3 + 1;
                label_14000eaa6:
                *(arg1 + 0xc0) = rcx_5;
                *(rbx_1 + 1) = arg2;

                if (rcx_5 >= rax_5)
                    goto label_14000eac9;

                arg2 = *rcx_5;
                *(arg1 + 0xc0) = rcx_5 + 1;
            }
            r15 |= arg2;
            *(rbx_1 + 2) = arg2;

            if (*(arg1 + 0x10))
            {
                int32_t rax_13;
                rax_13 = (*(arg1 + 0x20))(*(arg1 + 0x28));

                if (!rax_13 || (*(arg1 + 0x30) && *(arg1 + 0xc0) < *(arg1 + 0xc8)))
                {
                    label_14000eb2b:

                    if (rdi != 8)
                        goto label_14000eef7;

                    rax_3 = rax_4;

                    if (rsi)
                        continue;

                    int32_t rax_15;
                    rax_15 = r15 & 0x10;
                    int32_t rcx_9 = 0;
                    int32_t var_94_1 = 0;
                    *arg4 = rax_15 + 3;

                    if (arg3 > 0)
                    {
                        int64_t rax_17 = rax_4;
                        uint32_t r8 = r13 << 2;
                        int32_t r9 = arg3;
                        int32_t rdx = 0;
                        int32_t var_90_1 = 0;

                        do
                        {
                            int64_t var_80_1 = 0;

                            if (rax_17 > 0)
                            {
                                void var_5e;
                                char* r12_1 = &var_5e;
                                char* rax_19 = rdx + arg5;
                                char* var_70_1 = rax_19;
                                bool cond:1_1;

                                do
                                {
                                    uint32_t rcx_10 = r12_1[-1];
                                    char* rbx_2 = rax_19;

                                    if (!rcx_10)
                                    {
                                        rdi = 0;

                                        if (r13 > 0)
                                        {
                                            uint32_t rsi_3 = *r12_1;

                                            do
                                            {
                                                if (!sub_14000e880(arg1, rsi_3, rbx_2))
                                                    goto label_14000ef0a;

                                                rdi = rdi + 1;
                                                rbx_2 = &rbx_2[4];
                                            } while (rdi < r13);
                                        }
                                    }
                                    else if (rcx_10 == 1)
                                    {
                                        int32_t i = r13;

                                        if (r13 > 0)
                                        {
                                            do
                                            {
                                                char* rax_30 = *(arg1 + 0xc0);

                                                if (rax_30 < *(arg1 + 0xc8))
                                                {
                                                    rdi = *rax_30;
                                                    *(arg1 + 0xc0) = &rax_30[1];
                                                }
                                                else if (!*(arg1 + 0x30))
                                                    rdi = 0;
                                                else
                                                {
                                                    sub_140001d70(arg1);
                                                    char* rax_32 = *(arg1 + 0xc0);
                                                    rdi = *rax_32;
                                                    *(arg1 + 0xc0) = &rax_32[1];
                                                }

                                                if (!*(arg1 + 0x10))
                                                {
                                                    label_14000edbc:

                                                    if (*(arg1 + 0xc0) >= *(arg1 + 0xc8))
                                                        goto label_14000eee2;
                                                }
                                                else if ((*(arg1 + 0x20))(*(arg1 + 0x28)))
                                                {
                                                    if (!*(arg1 + 0x30))
                                                        goto label_14000eee2;

                                                    goto label_14000edbc;
                                                }

                                                uint32_t rsi_2 = *r12_1;
                                                int32_t var_64;

                                                if (!sub_14000e880(arg1, rsi_2, &var_64))
                                                    goto label_14000ef0a;

                                                char j_6 = i;

                                                if (rdi <= i)
                                                    j_6 = rdi;

                                                uint32_t j_5 = j_6;

                                                if (j_6)
                                                {
                                                    char rax_38 = var_64;
                                                    uint64_t j_4 = j_5;
                                                    char rdx_5 = *var_64[3];
                                                    char r8_5 = *var_64[2];
                                                    char r9_2 = *var_64[1];
                                                    uint64_t j;

                                                    do
                                                    {
                                                        if (rsi_2 < 0)
                                                            *rbx_2 = rax_38;

                                                        if (rsi_2 & 0x40)
                                                            rbx_2[1] = r9_2;

                                                        if (rsi_2 & 0x20)
                                                            rbx_2[2] = r8_5;

                                                        if (rsi_2 & 0x10)
                                                            rbx_2[3] = rdx_5;

                                                        rbx_2 = &rbx_2[4];
                                                        j = j_4;
                                                        j_4 -= 1;
                                                    } while (j != 1);
                                                }

                                                i -= j_5;
                                            } while (i > 0);
                                        }
                                    }
                                    else
                                    {
                                        if (rcx_10 != 2)
                                            goto label_14000eef7;

                                        int32_t i_1 = r13;

                                        if (r13 > 0)
                                        {
                                            do
                                            {
                                                char* rax_20 = *(arg1 + 0xc0);
                                                uint64_t j_3;

                                                if (rax_20 < *(arg1 + 0xc8))
                                                {
                                                    j_3 = *rax_20;
                                                    *(arg1 + 0xc0) = &rax_20[1];
                                                }
                                                else if (!*(arg1 + 0x30))
                                                    j_3 = 0;
                                                else
                                                {
                                                    sub_140001d70(arg1);
                                                    char* rax_22 = *(arg1 + 0xc0);
                                                    j_3 = *rax_22;
                                                    *(arg1 + 0xc0) = &rax_22[1];
                                                }

                                                uint32_t rsi_1 = j_3;

                                                if (!*(arg1 + 0x10))
                                                {
                                                    label_14000ec4e:

                                                    if (*(arg1 + 0xc0) >= *(arg1 + 0xc8))
                                                        goto label_14000eee2;
                                                }
                                                else
                                                {
                                                    int32_t rax_24;
                                                    rax_24 = (*(arg1 + 0x20))(*(arg1 + 0x28));

                                                    if (rax_24)
                                                    {
                                                        if (!*(arg1 + 0x30))
                                                            goto label_14000eee2;

                                                        goto label_14000ec4e;
                                                    }
                                                }

                                                int32_t j_1;

                                                if (rsi_1 < 0x80)
                                                {
                                                    j_1 = rsi_1 + 1;

                                                    if (j_1 > i_1)
                                                        goto label_14000eee2;

                                                    rdi = 0;

                                                    if (j_1)
                                                    {
                                                        uint32_t rbp_1 = *r12_1;

                                                        do
                                                        {
                                                            int64_t rax_29;
                                                            rax_29 = sub_14000e880(arg1, rbp_1, rbx_2);

                                                            if (!rax_29)
                                                                goto label_14000ef0a;

                                                            rdi = rdi + 1;
                                                            rbx_2 = &rbx_2[4];
                                                        } while (rdi < j_1);
                                                    }
                                                }
                                                else
                                                {
                                                    if (rsi_1 != 0x80)
                                                        j_1 = rsi_1 - 0x7f;
                                                    else
                                                        j_1 = sub_140001ec0(arg1);

                                                    if (j_1 > i_1)
                                                        goto label_14000eee2;

                                                    rdi = *r12_1;
                                                    int32_t var_68;
                                                    int64_t rax_27;
                                                    rax_27 = sub_14000e880(arg1, rdi, &var_68);

                                                    if (!rax_27)
                                                        goto label_14000ef0a;

                                                    if (j_1 > 0)
                                                    {
                                                        char rax_28 = var_68;
                                                        char rdx_2 = *var_68[3];
                                                        char r8_2 = *var_68[2];
                                                        char r9_1 = *var_68[1];
                                                        j_3 = j_1;
                                                        uint64_t j_2;

                                                        do
                                                        {
                                                            if (rdi < 0)
                                                                *rbx_2 = rax_28;

                                                            if (rdi & 0x40)
                                                                rbx_2[1] = r9_1;

                                                            if (rdi & 0x20)
                                                                rbx_2[2] = r8_2;

                                                            if (rdi & 0x10)
                                                                rbx_2[3] = rdx_2;

                                                            rbx_2 = &rbx_2[4];
                                                            j_2 = j_3;
                                                            j_3 -= 1;
                                                        } while (j_2 != 1);
                                                    }
                                                }

                                                i_1 -= j_1;
                                            } while (i_1 > 0);
                                        }
                                    }

                                    r12_1 = &r12_1[3];
                                    cond:1_1 = var_80_1 + 1 < rax_4;
                                    var_80_1 += 1;
                                    rax_19 = var_70_1;
                                } while (cond:1_1);
                                rax_17 = rax_4;
                                r8 = r13 << 2;
                                rcx_9 = var_94_1;
                                rdx = var_90_1;
                                r9 = arg3;
                            }

                            rcx_9 += 1;
                            rdx += r8;
                            var_94_1 = rcx_9;
                            var_90_1 = rdx;
                        } while (rcx_9 < r9);
                    }

                    result = arg5;
                    break;
                }
            }
            else if (*(arg1 + 0xc0) < *(arg1 + 0xc8))
                goto label_14000eb2b;

            label_14000eee2:
            rcx_20 = *gsbase->ThreadLocalStoragePointer;
            rax_43 = "bad file";
        }
        *(0x10 + rcx_20) = rax_43;
        label_14000ef0a:
        result = 0;
        break;
    }

    __security_check_cookie(rax_1 ^ &var_b8);
    return result;
}

int64_t sub_14000ef50(void* arg1, uint32_t* arg2, int32_t* arg3, void* arg4, int32_t arg5)
{
    void var_98;
    int64_t rax_1 = __security_cookie ^ &var_98;
    int32_t r15 = arg5;
    void var_60;
    void* r12 = &var_60;

    if (arg4)
        r12 = arg4;

    int64_t i_1 = 0x5c;
    int64_t i;

    do
    {
        int64_t rax_2 = *(arg1 + 0xc0);

        if (rax_2 < *(arg1 + 0xc8))
            *(arg1 + 0xc0) = rax_2 + 1;
        else if (*(arg1 + 0x30))
        {
            sub_140001d70(arg1);
            *(arg1 + 0xc0) += 1;
        }

        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    uint32_t rax_4 = sub_140001ec0(arg1);
    int32_t rax_5 = sub_140001ec0(arg1);
    int64_t result;
    TEB* gsbase;

    if (rax_5 > 0x1000000 || rax_4 > 0x1000000)
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
        result = 0;
    }
    else if (!*(arg1 + 0x10))
    {
        if (*(arg1 + 0xc0) < *(arg1 + 0xc8))
            goto label_14000f06d;

        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad file";
        result = 0;
    }
    else if (!(*(arg1 + 0x20))(*(arg1 + 0x28)) || (*(arg1 + 0x30) && *(arg1 + 0xc0) < *(arg1 + 0xc8)))
    {
        label_14000f06d:

        if (rax_4 < 0 || rax_5 < 0)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
            result = 0;
        }
        else
        {
            int32_t rcx_6;

            if (rax_5)
                rcx_6 = rax_4 <= COMBINE(0, 0x7fffffff) / rax_5;

            if (rax_5 && !rcx_6)
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
                result = 0;
            }
            else
            {
                uint64_t r14_2 = rax_5 * rax_4;

                if (r14_2 < 0 || r14_2 > 0x1fffffff)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
                    result = 0;
                }
                else
                {
                    sub_140001ec0(arg1);
                    sub_140001ec0(arg1);
                    sub_140001ec0(arg1);
                    sub_140001ec0(arg1);
                    int64_t rbp_1;
                    uint32_t r14_3;

                    if (!rax_5 || rax_4 <= COMBINE(0, 0x7fffffff) / rax_5)
                    {
                        r14_3 = r14_2 << 2;
                        rbp_1 = malloc(r14_3);
                    }
                    else
                    {
                        rbp_1 = 0;
                        r14_3 = r14_2 << 2;
                    }

                    memset(rbp_1, 0xff, r14_3);

                    if (!sub_14000e980(arg1, rax_4, rax_5, r12, rbp_1))
                    {
                        free(rbp_1);
                        rbp_1 = 0;
                    }

                    *arg2 = rax_4;
                    *arg3 = rax_5;

                    if (!r15)
                        r15 = *r12;

                    int64_t var_78_1;
                    var_78_1 = rax_5;
                    result = sub_140002040(rbp_1, 4, r15, rax_4, var_78_1);
                }
            }
        }
    }
    else
    {
        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad file";
        result = 0;
    }
    __security_check_cookie(rax_1 ^ &var_98);
    return result;
}

int64_t sub_14000f1b0(void* arg1)
{
    char* rax = *(arg1 + 0xc0);

    if (rax < *(arg1 + 0xc8))
        goto label_14000f1df;

    if (*(arg1 + 0x30))
    {
        sub_140001d70(arg1);
        rax = *(arg1 + 0xc0);
        label_14000f1df:
        char rcx = *rax;
        void* rax_1 = &rax[1];
        *(arg1 + 0xc0) = rax_1;

        if (rcx == 0x47)
        {
            if (rax_1 < *(arg1 + 0xc8))
                goto label_14000f217;

            if (*(arg1 + 0x30))
            {
                sub_140001d70(arg1);
                rax_1 = *(arg1 + 0xc0);
                label_14000f217:
                char rcx_2 = *rax_1;
                void* rax_2 = rax_1 + 1;
                *(arg1 + 0xc0) = rax_2;

                if (rcx_2 == 0x49)
                {
                    if (rax_2 < *(arg1 + 0xc8))
                        goto label_14000f24f;

                    if (*(arg1 + 0x30))
                    {
                        sub_140001d70(arg1);
                        rax_2 = *(arg1 + 0xc0);
                        label_14000f24f:
                        char rcx_4 = *rax_2;
                        void* rax_3 = rax_2 + 1;
                        *(arg1 + 0xc0) = rax_3;

                        if (rcx_4 == 0x46)
                        {
                            if (rax_3 < *(arg1 + 0xc8))
                                goto label_14000f287;

                            if (*(arg1 + 0x30))
                            {
                                sub_140001d70(arg1);
                                rax_3 = *(arg1 + 0xc0);
                                label_14000f287:
                                char rcx_6 = *rax_3;
                                void* rax_4 = rax_3 + 1;
                                *(arg1 + 0xc0) = rax_4;

                                if (rcx_6 == 0x38)
                                {
                                    if (rax_4 < *(arg1 + 0xc8))
                                        goto label_14000f2b7;

                                    if (*(arg1 + 0x30))
                                    {
                                        sub_140001d70(arg1);
                                        rax_4 = *(arg1 + 0xc0);
                                        label_14000f2b7:
                                        char rcx_8 = *rax_4;
                                        void* rax_5 = rax_4 + 1;
                                        *(arg1 + 0xc0) = rax_5;

                                        if (rcx_8 == 0x39 || rcx_8 == 0x37)
                                        {
                                            if (rax_5 < *(arg1 + 0xc8))
                                                goto label_14000f2ec;

                                            if (*(arg1 + 0x30))
                                            {
                                                sub_140001d70(arg1);
                                                rax_5 = *(arg1 + 0xc0);
                                                label_14000f2ec:
                                                char rcx_10 = *rax_5;
                                                *(arg1 + 0xc0) = rax_5 + 1;

                                                if (rcx_10 == 0x61)
                                                    return 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

void sub_14000f320(uint64_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    if (arg3 > 0)
    {
        int32_t rsi_1 = 0;
        int64_t i_1 = arg3;
        void* rdi_1 = arg2 + 1;
        uint64_t rbx_1 = arg1;
        int64_t i;

        do
        {
            char* rax_1 = *(rbx_1 + 0xc0);

            if (rax_1 < *(rbx_1 + 0xc8))
            {
                arg1 = *rax_1;
                *(rbx_1 + 0xc0) = &rax_1[1];
            }
            else if (!*(rbx_1 + 0x30))
                arg1 = 0;
            else
            {
                sub_140001d70(rbx_1);
                char* rax_3 = *(rbx_1 + 0xc0);
                arg1 = *rax_3;
                *(rbx_1 + 0xc0) = &rax_3[1];
            }

            *(rdi_1 + 1) = arg1;
            char* rax_5 = *(rbx_1 + 0xc0);

            if (rax_5 < *(rbx_1 + 0xc8))
            {
                arg1 = *rax_5;
                *(rbx_1 + 0xc0) = &rax_5[1];
            }
            else if (!*(rbx_1 + 0x30))
                arg1 = 0;
            else
            {
                sub_140001d70(rbx_1);
                char* rax_7 = *(rbx_1 + 0xc0);
                arg1 = *rax_7;
                *(rbx_1 + 0xc0) = &rax_7[1];
            }

            *rdi_1 = arg1;
            char* rax_9 = *(rbx_1 + 0xc0);

            if (rax_9 < *(rbx_1 + 0xc8))
            {
                arg1 = *rax_9;
                *(rbx_1 + 0xc0) = &rax_9[1];
            }
            else if (!*(rbx_1 + 0x30))
                arg1 = 0;
            else
            {
                sub_140001d70(rbx_1);
                char* rax_11 = *(rbx_1 + 0xc0);
                arg1 = *rax_11;
                *(rbx_1 + 0xc0) = &rax_11[1];
            }

            *(rdi_1 - 1) = arg1;
            char rax = -1;

            if (arg4 == rsi_1)
                rax = 0;

            rsi_1 += 1;
            *(rdi_1 + 2) = rax;
            rdi_1 += 4;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
}

int64_t sub_14000f470(uint64_t arg1, int32_t* arg2, int32_t* arg3)
{
    char* rax = *(arg1 + 0xc0);

    if (rax < *(arg1 + 0xc8))
        goto label_14000f4af;

    TEB* gsbase;

    if (*(arg1 + 0x30))
    {
        sub_140001d70(arg1);
        rax = *(arg1 + 0xc0);
        label_14000f4af:
        char rcx = *rax;
        void* rax_1 = &rax[1];
        *(arg1 + 0xc0) = rax_1;

        if (rcx == 0x47)
        {
            if (rax_1 < *(arg1 + 0xc8))
                goto label_14000f4e7;

            if (*(arg1 + 0x30))
            {
                sub_140001d70(arg1);
                rax_1 = *(arg1 + 0xc0);
                label_14000f4e7:
                char rcx_2 = *rax_1;
                void* rax_2 = rax_1 + 1;
                *(arg1 + 0xc0) = rax_2;

                if (rcx_2 == 0x49)
                {
                    if (rax_2 < *(arg1 + 0xc8))
                        goto label_14000f51f;

                    if (*(arg1 + 0x30))
                    {
                        sub_140001d70(arg1);
                        rax_2 = *(arg1 + 0xc0);
                        label_14000f51f:
                        char rcx_4 = *rax_2;
                        void* rax_3 = rax_2 + 1;
                        *(arg1 + 0xc0) = rax_3;

                        if (rcx_4 == 0x46)
                        {
                            if (rax_3 < *(arg1 + 0xc8))
                                goto label_14000f557;

                            if (*(arg1 + 0x30))
                            {
                                sub_140001d70(arg1);
                                rax_3 = *(arg1 + 0xc0);
                                label_14000f557:
                                char rcx_6 = *rax_3;
                                void* rax_4 = rax_3 + 1;
                                *(arg1 + 0xc0) = rax_4;

                                if (rcx_6 == 0x38)
                                {
                                    if (rax_4 < *(arg1 + 0xc8))
                                        goto label_14000f592;

                                    if (*(arg1 + 0x30))
                                    {
                                        sub_140001d70(arg1);
                                        rax_4 = *(arg1 + 0xc0);
                                        label_14000f592:
                                        void* rax_5 = rax_4 + 1;
                                        char rcx_8 = *rax_4 - 0x37;
                                        *(arg1 + 0xc0) = rax_5;

                                        if (!(rcx_8 & 0xfd))
                                        {
                                            if (rax_5 < *(arg1 + 0xc8))
                                                goto label_14000f5ca;

                                            if (*(arg1 + 0x30))
                                            {
                                                sub_140001d70(arg1);
                                                rax_5 = *(arg1 + 0xc0);
                                                label_14000f5ca:
                                                char rcx_10 = *rax_5;
                                                *(arg1 + 0xc0) = rax_5 + 1;

                                                if (rcx_10 == 0x61)
                                                {
                                                    void** rsi_1 = *gsbase->ThreadLocalStoragePointer + 0x10;
                                                    *rsi_1 = &data_140021570;
                                                    *arg2 = sub_140001f80(arg1);
                                                    arg2[1] = sub_140001f80(arg1);
                                                    char* rax_10 = *(arg1 + 0xc0);
                                                    char rcx_13;

                                                    if (rax_10 < *(arg1 + 0xc8))
                                                    {
                                                        rcx_13 = *rax_10;
                                                        *(arg1 + 0xc0) = &rax_10[1];
                                                    }
                                                    else if (!*(arg1 + 0x30))
                                                        rcx_13 = 0;
                                                    else
                                                    {
                                                        sub_140001d70(arg1);
                                                        char* rax_12 = *(arg1 + 0xc0);
                                                        rcx_13 = *rax_12;
                                                        *(arg1 + 0xc0) = &rax_12[1];
                                                    }

                                                    arg2[8] = rcx_13;
                                                    char* rax_15 = *(arg1 + 0xc0);

                                                    if (rax_15 < *(arg1 + 0xc8))
                                                    {
                                                        rcx_13 = *rax_15;
                                                        *(arg1 + 0xc0) = &rax_15[1];
                                                    }
                                                    else if (!*(arg1 + 0x30))
                                                        rcx_13 = 0;
                                                    else
                                                    {
                                                        sub_140001d70(arg1);
                                                        char* rax_17 = *(arg1 + 0xc0);
                                                        rcx_13 = *rax_17;
                                                        *(arg1 + 0xc0) = &rax_17[1];
                                                    }

                                                    arg2[9] = rcx_13;
                                                    char* rax_20 = *(arg1 + 0xc0);

                                                    if (rax_20 < *(arg1 + 0xc8))
                                                    {
                                                        rcx_13 = *rax_20;
                                                        *(arg1 + 0xc0) = &rax_20[1];
                                                    }
                                                    else if (!*(arg1 + 0x30))
                                                        rcx_13 = 0;
                                                    else
                                                    {
                                                        sub_140001d70(arg1);
                                                        char* rax_22 = *(arg1 + 0xc0);
                                                        rcx_13 = *rax_22;
                                                        *(arg1 + 0xc0) = &rax_22[1];
                                                    }

                                                    bool cond:0 = *arg2 > 0x1000000;
                                                    arg2[0xa] = rcx_13;
                                                    arg2[0xb] = 0xffffffff;

                                                    if (cond:0 || arg2[1] > 0x1000000)
                                                    {
                                                        *rsi_1 = "too large";
                                                        return 0;
                                                    }

                                                    if (arg3)
                                                        *arg3 = 4;

                                                    char rax_25 = arg2[8];

                                                    if (rax_25 < 0)
                                                        sub_14000f320(arg1, &arg2[0xd], 2 << (rax_25 & 7), 0xffffffff);

                                                    return 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "not GIF";
    return 0;
}

void sub_14000f7a0(void* arg1, int16_t arg2, int512_t arg3 @ zmm0)
{
    uint64_t rdi = arg2;
    int16_t rdx = *(arg1 + (rdi << 2) + 0x834);

    if (rdx >= 0)
        sub_14000f7a0(arg3, rdx);

    int32_t rcx = *(arg1 + 0x8860);

    if (rcx < *(arg1 + 0x8858))
    {
        int32_t rax_2 = *(arg1 + 0x885c) + rcx;
        int32_t temp0_1;
        int32_t temp1_1;
        temp0_1 = HIGHD(rax_2);
        temp1_1 = LOWD(rax_2);
        char* r8_2 = rax_2 + *(arg1 + 8);
        *(((temp1_1 + (temp0_1 & 3)) >> 2) + *(arg1 + 0x18)) = 1;
        uint64_t rcx_2 = *(arg1 + (rdi << 2) + 0x837);
        int64_t rax_7 = *(arg1 + 0x8838);
        char* rdx_3 = rax_7 + (rcx_2 << 2);

        if (*(rax_7 + (rcx_2 << 2) + 3) > 0x80)
        {
            *r8_2 = rdx_3[2];
            r8_2[1] = rdx_3[1];
            r8_2[2] = *rdx_3;
            r8_2[3] = rdx_3[3];
        }

        *(arg1 + 0x885c) += 4;

        if (*(arg1 + 0x885c) >= *(arg1 + 0x8854))
        {
            int32_t r9_1 = *(arg1 + 0x8858);
            *(arg1 + 0x885c) = *(arg1 + 0x884c);
            *(arg1 + 0x8860) += *(arg1 + 0x8844);

            if (*(arg1 + 0x8860) >= r9_1)
            {
                int32_t i = *(arg1 + 0x8840);

                while (i > 0)
                {
                    int32_t rdx_5 = *(arg1 + 0x8864) << i;
                    int32_t rcx_4 = *(arg1 + 0x8850);
                    *(arg1 + 0x8844) = rdx_5;
                    int32_t rcx_5 = rcx_4 + (rdx_5 >> 1);
                    i -= 1;
                    *(arg1 + 0x8860) = rcx_5;
                    *(arg1 + 0x8840) = i;

                    if (rcx_5 < r9_1)
                        break;
                }
            }
        }
    }
}

int64_t sub_14000f8c0(uint64_t arg1, void* arg2, int512_t arg3 @ zmm0)
{
    char* rax = *(arg1 + 0xc0);
    uint64_t rbx = arg1;

    if (rax < *(arg1 + 0xc8))
        goto label_14000f8f0;

    if (!*(arg1 + 0x30))
        arg1 = 0;
    else
    {
        sub_140001d70(arg1);
        rax = *(rbx + 0xc0);
        label_14000f8f0:
        arg1 = *rax;
        *(rbx + 0xc0) = &rax[1];

        if (arg1 > 0xc)
            return 0;
    }

    int32_t r11 = 1;
    uint32_t rcx = arg1;
    int32_t r9 = 0;
    uint64_t rdx = 1 << rcx;
    uint32_t r12 = 0;
    uint32_t r15 = rcx + 1;
    arg_20 = rdx;
    uint32_t i = 0;
    arg_18 = 1;
    int32_t r14 = (1 << (rcx + 1)) - 1;
    arg_8 = 0;

    if (rdx > 0)
    {
        char* rax_6 = arg2 + 0x836;

        do
        {
            *rax_6 = i;
            rax_6[1] = i;
            i += 1;
            *(rax_6 - 2) = 0xffff;
            rax_6 = &rax_6[4];
        } while (i < rdx);
    }

    int32_t rax_7 = rdx + 2;
    int32_t rbp = -1;
    uint64_t rsi = rax_7;
    uint32_t rdi = 0;
    uint64_t r8 = rsi;
    uint64_t var_48 = rsi;
    int32_t var_58 = rax_7;

    while (true)
    {
        if (r12 >= r15)
        {
            int32_t r10_1 = r9;
            r9 s>>= r15;
            int32_t r10_2 = r10_1 & r14;
            r12 -= r15;
            arg_8 = r9;

            if (r10_2 != rdx)
            {
                if (r10_2 != rdx + 1)
                {
                    TEB* gsbase;

                    if (r10_2 <= rsi)
                    {
                        if (r11)
                        {
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "no clear code";
                            return 0;
                        }

                        if (rbp >= 0)
                        {
                            uint64_t rdx_1 = r8 << 2;
                            rsi = rsi + 1;
                            var_48 = r8 + 1;

                            if (rsi > 0x2000)
                            {
                                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too many codes";
                                return 0;
                            }

                            *(rdx_1 + arg2 + 0x834) = rbp;
                            char rcx_4 = *(arg2 + (rbp << 2) + 0x836);
                            *(rdx_1 + arg2 + 0x836) = rcx_4;

                            if (r10_2 != rsi)
                                rcx_4 = *(arg2 + (r10_2 << 2) + 0x836);

                            *(rdx_1 + arg2 + 0x837) = rcx_4;
                            goto label_14000fb79;
                        }

                        if (r10_2 != rsi)
                        {
                            label_14000fb79:
                            int32_t r10_3;
                            i = sub_14000f7a0(arg2, r10_2, arg3);

                            if (!(r14 & rsi) && rsi <= 0xfff)
                            {
                                r15 += 1;
                                r14 = (1 << r15) - 1;
                            }

                            rdx = arg_20;
                            rbp = r10_3;
                            r8 = var_48;
                            r9 = arg_8;
                            rax_7 = var_58;
                            continue;
                        }
                    }

                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "illegal code in raster";
                    return 0;
                }

                if (rdi)
                {
                    if (rdi >= 0)
                    {
                        int32_t rcx_10;

                        if (*(rbx + 0x10))
                            rcx_10 = *(rbx + 0xc8) - *(rbx + 0xc0);

                        if (!*(rbx + 0x10) || rcx_10 >= rdi)
                            *(rbx + 0xc0) += rdi;
                        else
                        {
                            int64_t rcx_11 = *(rbx + 0x28);
                            *(rbx + 0xc0) = *(rbx + 0xc8);
                            (*(rbx + 0x18))(rcx_11, rdi - rcx_10);
                        }
                    }
                    else
                        *(rbx + 0xc0) = *(rbx + 0xc8);
                }

                while (true)
                {
                    char* rcx_12 = *(rbx + 0xc0);
                    void* rax_28;

                    if (rcx_12 >= *(rbx + 0xc8))
                    {
                        if (!*(rbx + 0x30))
                            rdx = 0;
                        else
                        {
                            sub_140001d70(rbx);
                            char* rax_29 = *(rbx + 0xc0);
                            rdx = *rax_29;
                            rcx_12 = &rax_29[1];
                            *(rbx + 0xc0) = rcx_12;
                        }

                        rax_28 = rcx_12;
                    }
                    else
                    {
                        rdx = *rcx_12;
                        rax_28 = &rcx_12[1];
                        *(rbx + 0xc0) = rax_28;
                        rcx_12 = rax_28;
                    }

                    rdx = rdx;

                    if (!rdx)
                        break;

                    if (*(rbx + 0x10))
                    {
                        int32_t r8_4 = *(rbx + 0xc8) - rax_28;

                        if (r8_4 < rdx)
                        {
                            int64_t rcx_14 = *(rbx + 0x28);
                            *(rbx + 0xc0) = *(rbx + 0xc8);
                            (*(rbx + 0x18))(rcx_14, rdx - r8_4);
                            continue;
                        }
                    }

                    *(rbx + 0xc0) = &rcx_12[rdx];
                }

                break;
            }

            r15 = rcx + 1;
            rsi = rax_7;
            r14 = (1 << (rcx + 1)) - 1;
            rbp = -1;
            r8 = rdx + 2;
            r11 = 0;
            var_48 = r8;
            arg_18 = 0;
        }
        else
        {
            if (!rdi)
            {
                char* rax_8 = *(rbx + 0xc0);

                if (rax_8 < *(rbx + 0xc8))
                {
                    i = *rax_8;
                    *(rbx + 0xc0) = &rax_8[1];
                }
                else if (!*(rbx + 0x30))
                    i = 0;
                else
                {
                    sub_140001d70(rbx);
                    char* rax_10 = *(rbx + 0xc0);
                    r9 = arg_8;
                    i = *rax_10;
                    *(rbx + 0xc0) = &rax_10[1];
                }

                rdi = i;

                if (!i)
                    break;
            }

            char* rax_12 = *(rbx + 0xc0);
            rdi -= 1;

            if (rax_12 < *(rbx + 0xc8))
            {
                i = *rax_12;
                *(rbx + 0xc0) = &rax_12[1];
            }
            else if (!*(rbx + 0x30))
                i = 0;
            else
            {
                sub_140001d70(rbx);
                char* rax_14 = *(rbx + 0xc0);
                r9 = arg_8;
                i = *rax_14;
                *(rbx + 0xc0) = &rax_14[1];
            }

            rdx = arg_20;
            r8 = var_48;
            r11 = arg_18;
            r9 |= i << r12;
            rax_7 = var_58;
            arg_8 = r9;
            r12 += 8;
        }
    }

    return *(arg2 + 8);
}

uint64_t sub_14000fd50(uint64_t arg1, int32_t* arg2)
{
    char* i_1 = nullptr;
    int32_t r13 = 0;

    if (*(arg2 + 8))
    {
        int32_t rax_11 = *arg2 * arg2[1];
        int32_t rcx_10 = arg2[0xc] >> 2 & 7;

        if ((rcx_10 == 3 || rcx_10 == 2) && rax_11 > 0)
        {
            char* i = nullptr;

            do
            {
                if (i[*(arg2 + 0x18)])
                    *(*(arg2 + 8) + (i << 2)) = *(*(arg2 + 0x10) + (i << 2));

                i = &i[1];
            } while (i < rax_11);
        }

        memcpy(*(arg2 + 0x10), *(arg2 + 8), (*arg2 * arg2[1]) << 2);
        goto label_14000fefc;
    }

    int32_t* r8;

    if (sub_14000f470(arg1, arg2, r8))
    {
        uint64_t rsi_1 = *arg2;
        int32_t rcx = arg2[1];
        int32_t temp2_1 = rsi_1;
        TEB* gsbase;

        if (temp2_1 < 0)
        {
            label_14000fe82:
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
        }
        else
        {
            uint32_t r8_1;

            if (temp2_1)
            {
                if (COMBINE(0, 0x7fffffff) / rsi_1 < 4)
                    goto label_14000fe82;

                r8_1 = rsi_1 << 2;

                if (r8_1 < 0 || rcx < 0)
                    goto label_14000fe82;
            }
            else
            {
                r8_1 = rsi_1 << 2;

                if (rcx < 0)
                    goto label_14000fe82;
            }

            if (rcx && r8_1 > COMBINE(0, 0x7fffffff) / rcx)
                goto label_14000fe82;

            uint64_t rsi_2 = rsi_1 * rcx;
            int64_t rbp_1 = rsi_2 << 2;
            *(arg2 + 8) = malloc(rbp_1);
            int64_t rsi_3 = rsi_2;
            *(arg2 + 0x10) = malloc(rbp_1);
            int64_t rax_6 = malloc(rsi_3);
            int64_t rcx_4 = *(arg2 + 8);
            *(arg2 + 0x18) = rax_6;

            if (!rcx_4 || !*(arg2 + 0x10) || !rax_6)
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
            else
            {
                memset(rcx_4, 0, rbp_1);
                memset(*(arg2 + 0x10), 0, rbp_1);
                memset(*(arg2 + 0x18), 0, rsi_3);
                r13 = 1;
                label_14000fefc:
                uint32_t r8_8;
                int512_t zmm0_1;
                r8_8 = memset(*(arg2 + 0x18), 0, *arg2 * arg2[1]);
                int32_t r12_1 = -1;
                char rcx_15;

                while (true)
                {
                    char* rax_20 = *(arg1 + 0xc0);

                    if (rax_20 >= *(arg1 + 0xc8))
                    {
                        if (!*(arg1 + 0x30))
                            goto label_1400103d4;

                        sub_140001d70(arg1);
                        rax_20 = *(arg1 + 0xc0);
                    }

                    rcx_15 = *rax_20;
                    void* rax_21 = &rax_20[1];
                    *(arg1 + 0xc0) = rax_21;

                    if (rcx_15 != 0x21)
                        break;

                    if (rax_21 < *(arg1 + 0xc8))
                        goto label_14000ff71;

                    if (*(arg1 + 0x30))
                    {
                        sub_140001d70(arg1);
                        rax_21 = *(arg1 + 0xc0);
                        label_14000ff71:
                        char rdx_1 = *rax_21;
                        *(arg1 + 0xc0) = rax_21 + 1;
                        void* rcx_17 = rax_21 + 1;

                        if (rdx_1 == 0xf9)
                        {
                            uint64_t rdx_2 = *(arg1 + 0xc8);

                            if (rax_21 + 1 < rdx_2)
                            {
                                r8_8 = *(rax_21 + 1);
                                rcx_17 = rax_21 + 2;
                                *(arg1 + 0xc0) = rcx_17;
                            }
                            else if (!*(arg1 + 0x30))
                                r8_8 = 0;
                            else
                            {
                                sub_140001d70(arg1);
                                char* rax_23 = *(arg1 + 0xc0);
                                rdx_2 = *(arg1 + 0xc8);
                                r8_8 = *rax_23;
                                rcx_17 = &rax_23[1];
                                *(arg1 + 0xc0) = rcx_17;
                            }

                            uint64_t rax_24 = r8_8;

                            if (rax_24 == 4)
                            {
                                if (rcx_17 < rdx_2)
                                {
                                    rdx_2 = *rcx_17;
                                    *(arg1 + 0xc0) = rcx_17 + 1;
                                }
                                else if (!*(arg1 + 0x30))
                                    rdx_2 = 0;
                                else
                                {
                                    sub_140001d70(arg1);
                                    char* rax_26 = *(arg1 + 0xc0);
                                    rdx_2 = *rax_26;
                                    *(arg1 + 0xc0) = &rax_26[1];
                                }

                                arg2[0xc] = rdx_2;
                                uint64_t rax_29;
                                rax_29 = sub_140001f80(arg1);
                                int64_t rax_30 = arg2[0xb];
                                arg2[0x221a] = rax_29 * 5 * 2;

                                if (rax_30 >= 0)
                                    *(&arg2[rax_30] + 0x37) = 0xff;

                                if (!(arg2[0xc] & 1))
                                {
                                    int32_t rcx_26;

                                    if (*(arg1 + 0x10))
                                        rcx_26 = *(arg1 + 0xc8) - *(arg1 + 0xc0);

                                    if (!*(arg1 + 0x10) || rcx_26 >= 1)
                                    {
                                        *(arg1 + 0xc0) += 1;
                                        arg2[0xb] = 0xffffffff;
                                    }
                                    else
                                    {
                                        *(arg1 + 0xc0) = *(arg1 + 0xc8);
                                        (*(arg1 + 0x18))(*(arg1 + 0x28), 1 - rcx_26);
                                        arg2[0xb] = 0xffffffff;
                                    }
                                }
                                else
                                {
                                    char* rax_31 = *(arg1 + 0xc0);
                                    uint32_t rcx_22;

                                    if (rax_31 < *(arg1 + 0xc8))
                                    {
                                        rcx_22 = *rax_31;
                                        *(arg1 + 0xc0) = &rax_31[1];
                                    }
                                    else if (!*(arg1 + 0x30))
                                        rcx_22 = 0;
                                    else
                                    {
                                        sub_140001d70(arg1);
                                        char* rax_33 = *(arg1 + 0xc0);
                                        rcx_22 = *rax_33;
                                        *(arg1 + 0xc0) = &rax_33[1];
                                    }

                                    uint64_t rax_35 = rcx_22;
                                    arg2[0xb] = rax_35;
                                    *(&arg2[rax_35] + 0x37) = 0;
                                }
                            }
                            else if (!r8_8)
                                continue;
                            else
                            {
                                if (*(arg1 + 0x10))
                                {
                                    r8_8 = rdx_2 - rcx_17;

                                    if (r8_8 < rax_24)
                                    {
                                        int64_t rcx_28 = *(arg1 + 0x28);
                                        *(arg1 + 0xc0) = rdx_2;
                                        (*(arg1 + 0x18))(rcx_28, rax_24 - r8_8);
                                        continue;
                                    }
                                }

                                *(arg1 + 0xc0) = rax_24 + rcx_17;
                                continue;
                            }
                        }
                    }

                    while (true)
                    {
                        int64_t rdx_5 = *(arg1 + 0xc8);
                        char* rcx_24 = *(arg1 + 0xc0);

                        if (rcx_24 < rdx_5)
                        {
                            r8_8 = *rcx_24;
                            rcx_24 = &rcx_24[1];
                            *(arg1 + 0xc0) = rcx_24;
                        }
                        else if (!*(arg1 + 0x30))
                            r8_8 = 0;
                        else
                        {
                            sub_140001d70(arg1);
                            char* rax_39 = *(arg1 + 0xc0);
                            rdx_5 = *(arg1 + 0xc8);
                            r8_8 = *rax_39;
                            rcx_24 = &rax_39[1];
                            *(arg1 + 0xc0) = rcx_24;
                        }

                        uint64_t rax_40 = r8_8;

                        if (!r8_8)
                            break;

                        if (*(arg1 + 0x10))
                        {
                            r8_8 = rdx_5 - rcx_24;

                            if (r8_8 < rax_40)
                            {
                                int64_t rcx_30 = *(arg1 + 0x28);
                                *(arg1 + 0xc0) = rdx_5;
                                (*(arg1 + 0x18))(rcx_30, rax_40 - r8_8);
                                continue;
                            }
                        }

                        *(arg1 + 0xc0) = &rcx_24[rax_40];
                    }
                }

                if (rcx_15 == 0x2c)
                {
                    uint64_t rbp_2 = sub_140001f80(arg1);
                    int32_t rax_45 = sub_140001f80(arg1);
                    uint64_t r14_1 = sub_140001f80(arg1);
                    int32_t rax_47 = sub_140001f80(arg1);
                    uint64_t rdx_7 = *arg2;

                    if (r14_1 + rbp_2 > rdx_7 || rax_47 + rax_45 > arg2[1])
                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "bad Image Descriptor";
                    else
                    {
                        uint32_t rdx_8 = rdx_7 << 2;
                        arg2[0x2219] = rdx_8;
                        uint32_t rcx_37 = rbp_2 << 2;
                        arg2[0x2213] = rcx_37;
                        arg2[0x2215] = rcx_37 + (r14_1 << 2);
                        int32_t r8_12 = rdx_8 * rax_45;
                        arg2[0x2217] = rcx_37;
                        arg2[0x2214] = r8_12;
                        int32_t rax_49 = rdx_8 * rax_47 + r8_12;

                        if (!r14_1)
                            r8_12 = rax_49;

                        arg2[0x2216] = rax_49;
                        arg2[0x2218] = r8_12;
                        char* rax_50 = *(arg1 + 0xc0);

                        if (rax_50 < *(arg1 + 0xc8))
                        {
                            rcx_37 = *rax_50;
                            *(arg1 + 0xc0) = &rax_50[1];
                        }
                        else if (!*(arg1 + 0x30))
                            rcx_37 = 0;
                        else
                        {
                            sub_140001d70(arg1);
                            char* rax_52 = *(arg1 + 0xc0);
                            rcx_37 = *rax_52;
                            *(arg1 + 0xc0) = &rax_52[1];
                        }

                        uint64_t rdx_10 = arg2[0x2219];
                        uint32_t r9_2 = rcx_37;
                        arg2[0x2212] = r9_2;
                        int32_t r8_14 = r9_2 & 0x40;
                        uint32_t rax_55 = rdx_10 << 3;

                        if (!r8_14)
                            rax_55 = rdx_10;

                        arg2[0x2211] = rax_55;
                        arg2[0x2210] = (rcx_37 - rcx_37) & 3;
                        void* rsi_5;

                        if (r9_2 < 0)
                        {
                            if (arg2[0xc] & 1)
                                r12_1 = arg2[0xb];

                            rsi_5 = &arg2[0x10d];
                            sub_14000f320(arg1, rsi_5, 2 << (r9_2 & 7), r12_1);
                            goto label_140010338;
                        }

                        if (!(arg2[8] & 0x80))
                            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "missing color table";
                        else
                        {
                            rsi_5 = &arg2[0xd];
                            label_140010338:
                            *(arg2 + 0x8838) = rsi_5;
                            uint64_t rax_56 = sub_14000f8c0(arg1, arg2, zmm0_1);

                            if (rax_56)
                            {
                                if (r13 && arg2[9] > 0)
                                {
                                    int32_t rax_58 = *arg2 * arg2[1];

                                    if (rax_58 > 0)
                                    {
                                        do
                                        {
                                            if (!i_1[*(arg2 + 0x18)])
                                            {
                                                *(&arg2[arg2[9]] + 0x37) = 0xff;
                                                *(*(arg2 + 8) + (i_1 << 2)) = arg2[arg2[9] + 0xd];
                                            }

                                            i_1 = &i_1[1];
                                        } while (i_1 < rax_58);
                                    }
                                }

                                return rax_56;
                            }
                        }
                    }
                }
                else
                {
                    if (rcx_15 == 0x3b)
                        return arg1;

                    label_1400103d4:
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unknown code";
                }
            }
        }
    }

    return 0;
}

uint64_t sub_140010410(uint64_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    __chkstk(0x88b0);
    void var_88d8;
    int64_t rax_1 = __security_cookie ^ &var_88d8;
    int32_t var_88a8;
    memset(&var_88a8, 0, 0x8870);
    int32_t var_88b8 = 0;
    uint64_t result_1 = sub_14000fd50(arg1, &var_88a8);
    uint64_t result = result_1;

    if (result_1 != arg1)
    {
        if (!result)
            goto label_140010487;

        int32_t r9_2 = var_88a8;
        *arg2 = r9_2;
        int32_t var_88a4;
        *arg3 = var_88a4;

        if (arg4 & 0xfffffffb)
            result = sub_140002040(result, 4, arg4, r9_2, var_88a4);
    }
    else
    {
        result = 0;
        label_140010487:
        int64_t var_88a0;

        if (var_88a0)
            free(var_88a0);
    }

    int64_t var_8890;
    free(var_8890);
    int64_t var_8898;
    free(var_8898);
    __security_check_cookie(rax_1 ^ &var_88d8);
    return result;
}

int64_t sub_140010500(void* arg1, uint64_t arg2)
{
    char* rdi = arg2;

    if (*arg2)
    {
        do
        {
            char* rax_1 = *(arg1 + 0xc0);

            if (rax_1 < *(arg1 + 0xc8))
            {
                arg2 = *rax_1;
                *(arg1 + 0xc0) = &rax_1[1];
            }
            else if (!*(arg1 + 0x30))
                arg2 = 0;
            else
            {
                sub_140001d70(arg1);
                char* rax_3 = *(arg1 + 0xc0);
                arg2 = *rax_3;
                *(arg1 + 0xc0) = &rax_3[1];
            }

            if (arg2 != *rdi)
                return 0;

            rdi = &rdi[1];
        } while (*rdi);
    }

    *(arg1 + 0xc0) = *(arg1 + 0xd0);
    *(arg1 + 0xc8) = *(arg1 + 0xd8);
    return 1;
}

int64_t sub_1400105b0(void* arg1, int64_t arg2)
{
    char* rax = *(arg1 + 0xc0);
    int32_t rbp = 0;
    uint64_t rdi;

    if (rax < *(arg1 + 0xc8))
    {
        rdi = *rax;
        *(arg1 + 0xc0) = &rax[1];
    }
    else if (!*(arg1 + 0x30))
        rdi = 0;
    else
    {
        sub_140001d70(arg1);
        char* rax_2 = *(arg1 + 0xc0);
        rdi = *rax_2;
        *(arg1 + 0xc0) = &rax_2[1];
    }

    char* rsi = nullptr;

    while (true)
    {
        if (!*(arg1 + 0x10))
        {
            label_14001063a:

            if (*(arg1 + 0xc0) >= *(arg1 + 0xc8))
                break;
        }
        else if ((*(arg1 + 0x20))(*(arg1 + 0x28)))
        {
            if (!*(arg1 + 0x30))
                break;

            goto label_14001063a;
        }

        if (rdi == 0xa)
            break;

        rsi[arg2] = rdi;
        rbp += 1;
        rsi = &rsi[1];

        if (rsi == 0x3ff)
        {
            while (true)
            {
                char* rax_11;
                int64_t rcx_3;

                if (!*(arg1 + 0x10))
                {
                    label_1400106d9:
                    rax_11 = *(arg1 + 0xc0);
                    rcx_3 = *(arg1 + 0xc8);

                    if (rax_11 >= rcx_3)
                        break;
                }
                else
                {
                    if ((*(arg1 + 0x20))(*(arg1 + 0x28)))
                    {
                        if (!*(arg1 + 0x30))
                            break;

                        goto label_1400106d9;
                    }

                    rax_11 = *(arg1 + 0xc0);
                    rcx_3 = *(arg1 + 0xc8);
                }

                if (rax_11 >= rcx_3)
                {
                    if (!*(arg1 + 0x30))
                        continue;
                    else
                    {
                        sub_140001d70(arg1);
                        rax_11 = *(arg1 + 0xc0);
                    }
                }

                char rcx_5 = *rax_11;
                *(arg1 + 0xc0) = &rax_11[1];

                if (rcx_5 == 0xa)
                    break;
            }

            break;
        }

        char* rax_6 = *(arg1 + 0xc0);

        if (rax_6 < *(arg1 + 0xc8))
        {
            rdi = *rax_6;
            *(arg1 + 0xc0) = &rax_6[1];
        }
        else if (!*(arg1 + 0x30))
            rdi = 0;
        else
        {
            sub_140001d70(arg1);
            char* rax_8 = *(arg1 + 0xc0);
            rdi = *rax_8;
            *(arg1 + 0xc0) = &rax_8[1];
        }
    }

    *(rbp + arg2) = 0;
    return arg2;
}

uint32_t sub_140010740(int32_t* arg1, char* arg2, int32_t arg3)
{
    uint32_t result = arg2[3];

    if (result)
    {
        uint128_t zmm0 = 0x3ff0000000000000;
        ldexp(zmm0, result - 0x88);
        int32_t zmm2 = zmm0;

        if (arg3 > 2)
        {
            zmm0 = _mm_cvtepi32_ps(*arg2) * zmm2;
            *arg1 = zmm0;
            uint128_t zmm1;
            zmm1 = _mm_cvtepi32_ps(arg2[1]) * zmm2;
            arg1[1] = zmm1;
            result = arg2[2];
            zmm0 = _mm_cvtepi32_ps(result) * zmm2;
            arg1[2] = zmm0;

            if (arg3 == 4)
                arg1[3] = 0x3f800000;
        }
        else
        {
            result = *arg2;
            zmm0 = _mm_cvtepi32_ps(arg2[2] + arg2[1] + result) * zmm2;
            zmm0 = zmm0 / 3f;
            *arg1 = zmm0;

            if (arg3 == 2)
                arg1[1] = 0x3f800000;
        }
    }
    else if (arg3 == 1)
        *arg1 = 0;
    else if (arg3 == 2)
    {
        arg1[1] = 0x3f800000;
        *arg1 = 0;
    }
    else
    {
        if (arg3 == 3)
            goto label_14001083d;

        if (arg3 == 4)
        {
            arg1[3] = 0x3f800000;
            label_14001083d:
            *(arg1 + 4) = 0;
            *arg1 = 0;
        }
    }

    return result;
}

int32_t* sub_140010870(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    void var_4a8;
    int64_t rax_1 = __security_cookie ^ &var_4a8;
    int32_t rdi = 0;
    void var_458;
    char* _Str1 = sub_1400105b0(arg1, &var_458);
    int32_t* result;
    TEB* gsbase;

    if (!strcmp(_Str1, "#?RADIANCE"))
    {
        label_1400108f1:
        char* _Str1_1 = sub_1400105b0(arg1, &var_458);
        char* _EndPtr = _Str1_1;

        if (!*_Str1_1)
        {
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unsupported format";
            result = nullptr;
        }
        else
        {
            do
            {
                if (!strcmp(_Str1_1, "FORMAT=32-bit_rle_rgbe"))
                    rdi = 1;

                _Str1_1 = sub_1400105b0(arg1, &var_458);
                _EndPtr = _Str1_1;
            } while (*_Str1_1);

            if (!rdi)
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unsupported format";
                result = nullptr;
            }
            else
            {
                char* _Str1_2 = sub_1400105b0(arg1, &var_458);
                _EndPtr = _Str1_2;
                int32_t rax_5 = strncmp(_Str1_2, "-Y ", 3);
                int32_t rax_8;
                int32_t rax_9;
                uint64_t rsi_1;

                if (!rax_5)
                {
                    void* _String = &_EndPtr[3];
                    _EndPtr = _String;
                    rax_8 = strtol(_String, &_EndPtr, 0xa);
                    char* _Str1_3 = _EndPtr;
                    rsi_1 = rax_8;

                    while (*_Str1_3 == 0x20)
                    {
                        _Str1_3 = &_Str1_3[1];
                        _EndPtr = _Str1_3;
                    }

                    rax_9 = strncmp(_Str1_3, "+X ", 3);
                }

                if (rax_5 || rax_9)
                {
                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "unsupported data layout";
                    result = nullptr;
                }
                else
                {
                    void* _String_1 = &_EndPtr[3];
                    _EndPtr = _String_1;
                    uint64_t i_7 = strtol(_String_1, nullptr, rax_9 + 0xa);

                    if (rsi_1 > 0x1000000 || i_7 > 0x1000000)
                    {
                        label_140011021:
                        *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
                        result = nullptr;
                    }
                    else
                    {
                        *arg2 = i_7;
                        uint64_t r15_1 = 3;
                        *arg3 = rsi_1;

                        if (arg4)
                            *arg4 = 3;

                        if (arg5)
                            r15_1 = arg5;

                        if (i_7 < 0)
                            goto label_140011021;

                        int32_t temp2_1 = rsi_1;

                        if (temp2_1 < 0)
                            goto label_140011021;

                        int32_t rcx_11;

                        if (temp2_1)
                            rcx_11 = i_7 <= COMBINE(0, 0x7fffffff) / rsi_1;

                        if (temp2_1 && !rcx_11)
                            goto label_140011021;

                        int32_t rcx_13 = i_7 * rsi_1;

                        if (rcx_13 < 0)
                            goto label_140011021;

                        int32_t temp9_1 = r15_1;

                        if (temp9_1 < 0)
                            goto label_140011021;

                        if (temp9_1 && rcx_13 > COMBINE(0, 0x7fffffff) / r15_1)
                            goto label_140011021;

                        int32_t rax_14 = r15_1 * i_7;
                        int32_t var_460 = rax_14;
                        uint64_t r8_2 = rax_14 * rsi_1;

                        if (r8_2 < 0 || r8_2 > 0x1fffffff)
                            goto label_140011021;

                        if (rsi_1 && i_7 > COMBINE(0, 0x7fffffff) / rsi_1)
                            goto label_140010ea5;

                        if (r15_1 && rcx_13 > COMBINE(0, 0x7fffffff) / r15_1)
                            goto label_140010ea5;

                        int32_t* result_1;
                        uint32_t rdx_5;
                        result_1 = malloc(r8_2 << 2);

                        if (!result_1)
                            goto label_140010ea5;

                        int32_t i;
                        int32_t rdi_5;

                        if (i_7 - 8 > 0x7ff7)
                        {
                            rdi_5 = 0;
                            label_140010fb7:

                            if (rdi_5 < rsi_1)
                            {
                                i = 0;
                                goto label_140010fc1;
                            }

                            label_140010e85:
                            result = result_1;
                        }
                        else
                        {
                            char* r12_1 = nullptr;
                            uint32_t var_478_1 = 0;

                            if (rsi_1 <= 0)
                            {
                                label_140010e85_1:
                                result = result_1;
                            }
                            else
                            {
                                int32_t var_488 = 0;
                                label_140010b60:
                                char* rax_18 = *(arg1 + 0xc0);
                                uint64_t i_4 = *(arg1 + 0xc8);

                                if (rax_18 < i_4)
                                    goto label_140010b8f;

                                int32_t* r14;
                                uint32_t r15_2;

                                if (!*(arg1 + 0x30))
                                {
                                    r14 = 0;
                                    r15_2 = 0;
                                }
                                else
                                {
                                    sub_140001d70(arg1);
                                    rax_18 = *(arg1 + 0xc0);
                                    i_4 = *(arg1 + 0xc8);
                                    label_140010b8f:
                                    r14 = *rax_18;
                                    rax_18 = &rax_18[1];
                                    *(arg1 + 0xc0) = rax_18;
                                    r15_2 = r14;

                                    if (rax_18 < i_4)
                                        goto label_140010bca;
                                }

                                uint32_t rbp_1;

                                if (!*(arg1 + 0x30))
                                {
                                    rsi_1 = 0;
                                    rbp_1 = 0;
                                    label_140010bf4:

                                    if (!*(arg1 + 0x30))
                                        i_4 = 0;
                                    else
                                    {
                                        sub_140001d70(arg1);
                                        char* rax_19 = *(arg1 + 0xc0);
                                        i_4 = *rax_19;
                                        rax_18 = &rax_19[1];
                                        *(arg1 + 0xc0) = rax_18;
                                    }
                                }
                                else
                                {
                                    sub_140001d70(arg1);
                                    rax_18 = *(arg1 + 0xc0);
                                    i_4 = *(arg1 + 0xc8);
                                    label_140010bca:
                                    rsi_1 = *rax_18;
                                    rax_18 = &rax_18[1];
                                    *(arg1 + 0xc0) = rax_18;
                                    rbp_1 = rsi_1;

                                    if (rax_18 >= i_4)
                                        goto label_140010bf4;

                                    i_4 = *rax_18;
                                    rax_18 = &rax_18[1];
                                    *(arg1 + 0xc0) = rax_18;
                                }

                                uint32_t rdi_1 = i_4;

                                if (r15_2 != 2 || rbp_1 != r15_2 || rdi_1 < 0)
                                {
                                    var_488 = r14;
                                    *var_488[1] = rsi_1;
                                    *var_488[2] = i_4;

                                    if (rax_18 < *(arg1 + 0xc8))
                                    {
                                        i_4 = *rax_18;
                                        *(arg1 + 0xc0) = &rax_18[1];
                                    }
                                    else if (!*(arg1 + 0x30))
                                        i_4 = 0;
                                    else
                                    {
                                        sub_140001d70(arg1);
                                        char* rax_46 = *(arg1 + 0xc0);
                                        i_4 = *rax_46;
                                        *(arg1 + 0xc0) = &rax_46[1];
                                    }

                                    *var_488[3] = i_4;
                                    sub_140010740(result_1, &var_488, r15_1);
                                    rdi_5 = 0;
                                    free(r12_1);
                                    i = 1;

                                    do
                                    {
                                        sub_140001df0(arg1, &var_460, 4);
                                        sub_140010740(&result_1[r15_1 * rdi_5 * i_7 + r15_1 * i], &var_460, r15_1);
                                        i += 1;
                                        label_140010fc1:
                                    } while (i < i_7);

                                    rsi_1 = rax_8;
                                    rdi_5 += 1;
                                    goto label_140010fb7;
                                }

                                if (rax_18 < *(arg1 + 0xc8))
                                {
                                    i_4 = *rax_18;
                                    *(arg1 + 0xc0) = &rax_18[1];
                                }
                                else if (!*(arg1 + 0x30))
                                    i_4 = 0;
                                else
                                {
                                    sub_140001d70(arg1);
                                    char* rax_21 = *(arg1 + 0xc0);
                                    i_4 = *rax_21;
                                    *(arg1 + 0xc0) = &rax_21[1];
                                }

                                if ((i_4 | rdi_1 << 8) != i_7)
                                {
                                    free(result_1);
                                    free(r12_1);
                                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "invalid decoded scanline length";
                                    result = nullptr;
                                }
                                else if (r12_1)
                                {
                                    label_140010caa:
                                    int64_t r15_3 = 0;

                                    while (true)
                                    {
                                        int32_t rbp_2 = 0;
                                        r14 = nullptr;
                                        rsi_1 = i_7;

                                        if (i_7 > 0)
                                        {
                                            while (true)
                                            {
                                                char* rax_27 = *(arg1 + 0xc0);

                                                if (rax_27 < *(arg1 + 0xc8))
                                                    goto label_140010cf9;

                                                void* rdi_2;

                                                if (!*(arg1 + 0x30))
                                                {
                                                    rdi_2 = 0;
                                                    label_140010d85:
                                                    uint64_t rax_34 = rdi_2;

                                                    if (rax_34 > rsi_1)
                                                    {
                                                        label_140010ee4:
                                                        free(result_1);
                                                        free(r12_1);
                                                        break;
                                                    }

                                                    if (rdi_2)
                                                    {
                                                        rbp_2 += rax_34;
                                                        rdi_2 = r15_3 + (r14 << 2) + r12_1;
                                                        uint64_t i_6 = rax_34;
                                                        r14 += rax_34;
                                                        uint64_t i_1;

                                                        do
                                                        {
                                                            char* rax_35 = *(arg1 + 0xc0);

                                                            if (rax_35 < *(arg1 + 0xc8))
                                                            {
                                                                i_4 = *rax_35;
                                                                *(arg1 + 0xc0) = &rax_35[1];
                                                            }
                                                            else if (!*(arg1 + 0x30))
                                                                i_4 = 0;
                                                            else
                                                            {
                                                                sub_140001d70(arg1);
                                                                char* rax_37 = *(arg1 + 0xc0);
                                                                i_4 = *rax_37;
                                                                *(arg1 + 0xc0) = &rax_37[1];
                                                            }

                                                            *rdi_2 = i_4;
                                                            rdi_2 += 4;
                                                            i_1 = i_6;
                                                            i_6 -= 1;
                                                        } while (i_1 != 1);
                                                    }
                                                }
                                                else
                                                {
                                                    i_4 = sub_140001d70(arg1);
                                                    rax_27 = *(arg1 + 0xc0);
                                                    label_140010cf9:
                                                    rdi_2 = *rax_27;
                                                    *(arg1 + 0xc0) = &rax_27[1];

                                                    if (rdi_2 <= 0x80)
                                                        goto label_140010d85;

                                                    if (&rax_27[1] < *(arg1 + 0xc8))
                                                    {
                                                        rdx_5 = rax_27[1];
                                                        *(arg1 + 0xc0) = &rax_27[2];
                                                    }
                                                    else if (!*(arg1 + 0x30))
                                                        rdx_5 = 0;
                                                    else
                                                    {
                                                        sub_140001d70(arg1);
                                                        char* rax_30 = *(arg1 + 0xc0);
                                                        rdx_5 = *rax_30;
                                                        *(arg1 + 0xc0) = &rax_30[1];
                                                    }

                                                    rdi_2 -= 0x80;
                                                    uint64_t r8_3 = rdi_2;

                                                    if (r8_3 > rsi_1)
                                                        goto label_140010ee4;

                                                    if (rdi_2)
                                                    {
                                                        rbp_2 += r8_3;
                                                        void* rax_33 = r15_3 + (r14 << 2) + r12_1;
                                                        i_4 = r8_3;
                                                        r14 += r8_3;
                                                        uint64_t i_2;

                                                        do
                                                        {
                                                            *rax_33 = rdx_5;
                                                            rax_33 += 4;
                                                            i_2 = i_4;
                                                            i_4 -= 1;
                                                        } while (i_2 != 1);
                                                    }
                                                }
                                                rsi_1 = i_7 - rbp_2;

                                                if (rsi_1 <= 0)
                                                    goto label_140010e0e;
                                            }

                                            break;
                                        }

                                        label_140010e0e:
                                        r15_3 += 1;

                                        if (r15_3 >= 4)
                                        {
                                            if (i_7 > 0)
                                            {
                                                char* rdi_4 = r12_1;
                                                uint64_t i_5 = i_7;
                                                int32_t r15_4 = r15_1;
                                                rsi_1 = &result_1[var_488];
                                                uint64_t i_3;

                                                do
                                                {
                                                    sub_140010740(rsi_1, rdi_4, r15_4);
                                                    rsi_1 += r15_4 << 2;
                                                    rdi_4 = &rdi_4[4];
                                                    i_3 = i_5;
                                                    i_5 -= 1;
                                                } while (i_3 != 1);
                                            }

                                            rdx_5 = var_478_1 + 1;
                                            var_488 += var_460;
                                            var_478_1 = rdx_5;

                                            if (rdx_5 < rax_8)
                                                goto label_140010b60;

                                            if (r12_1)
                                                free(r12_1);

                                            goto label_140010e85_1;
                                        }
                                    }

                                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "corrupt";
                                    result = nullptr;
                                }
                                else
                                {
                                    char* rax_26;
                                    rax_26 = malloc(i_7 << 2);
                                    r12_1 = rax_26;

                                    if (rax_26)
                                        goto label_140010caa;

                                    free(result_1);
                                    label_140010ea5:
                                    *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
                                    result = nullptr;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        int64_t rcx_1 = 0;

        while (true)
        {
            char rax_3 = _Str1[rcx_1];
            rcx_1 += 1;

            if (rax_3 != *(rcx_1 + 0x140021b6b))
            {
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "not HDR";
                result = nullptr;
                break;
            }

            if (rcx_1 == 7)
                goto label_1400108f1;
        }
    }
    __security_check_cookie(rax_1 ^ &var_4a8);
    return result;
}

int64_t sub_140011060(uint64_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    int32_t* rdi = arg1;

    if (sub_140011440(arg1, arg1, arg1 + 4, arg1 + 8))
    {
        TEB* gsbase;

        if (rdi[1] > 0x1000000)
        {
            label_1400111c7:
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "too large";
        }
        else
        {
            int32_t rax_1 = *rdi;

            if (rax_1 > 0x1000000)
                goto label_1400111c7;

            *arg2 = rax_1;
            *arg3 = rdi[1];

            if (arg4)
                *arg4 = rdi[2];

            int32_t r10_1 = rdi[2];
            int32_t rcx = rdi[1];
            int32_t r9_1 = *rdi;

            if (r10_1 < 0 || r9_1 < 0)
                goto label_1400111c7;

            if (r9_1 && r10_1 > COMBINE(0, 0x7fffffff) / r9_1)
                goto label_1400111c7;

            int32_t r8_2 = r10_1 * r9_1;

            if (r8_2 < 0 || rcx < 0)
                goto label_1400111c7;

            if (rcx && r8_2 > COMBINE(0, 0x7fffffff) / rcx)
                goto label_1400111c7;

            if (r9_1 && r10_1 > COMBINE(0, 0x7fffffff) / r9_1)
            {
                label_1400111b2:
                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "outofmem";
            }
            else
            {
                if (rcx && r8_2 > COMBINE(0, 0x7fffffff) / rcx)
                    goto label_1400111b2;

                int64_t rax_8 = malloc(rcx * r8_2);

                if (!rax_8)
                    goto label_1400111b2;

                sub_140001df0(rdi, rax_8, *rdi * rdi[1] * rdi[2]);

                if (!arg5)
                    return rax_8;

                int32_t rdx_2 = rdi[2];

                if (arg5 == rdx_2)
                    return rax_8;

                int64_t rax_10 = sub_140002040(rax_8, rdx_2, arg5, *rdi, rdi[1]);

                if (rax_10)
                    return rax_10;
            }
        }
    }

    return 0;
}

int64_t sub_140011200(uint64_t arg1, char* arg2)
{
    uint64_t rbx = arg1;
    int64_t result;

    while (true)
    {
        if (!*(rbx + 0x10))
        {
            label_14001122f:

            if (*(rbx + 0xc0) < *(rbx + 0xc8))
                goto label_140011238;
        }
        else
        {
            int32_t rax_1;
            rax_1 = (*(rbx + 0x20))(*(rbx + 0x28));

            if (!rax_1)
            {
                label_140011238:
                char rax_3 = *arg2;

                if (rax_3 == 0x20 || rax_3 - 9 <= 4)
                {
                    char* rax_4 = *(rbx + 0xc0);

                    if (rax_4 < *(rbx + 0xc8))
                    {
                        arg1 = *rax_4;
                        *(rbx + 0xc0) = &rax_4[1];
                        *arg2 = arg1;
                        continue;
                    }
                    else if (!*(rbx + 0x30))
                    {
                        arg1 = 0;
                        *arg2 = 0;
                        continue;
                    }
                    else
                    {
                        sub_140001d70(rbx);
                        char* rax_6 = *(rbx + 0xc0);
                        arg1 = *rax_6;
                        *(rbx + 0xc0) = &rax_6[1];
                        *arg2 = arg1;
                        continue;
                    }
                }
            }
            else if (*(rbx + 0x30))
                goto label_14001122f;
        }

        if (!*(rbx + 0x10))
        {
            label_1400112b1:
            result = *(rbx + 0xc8);

            if (*(rbx + 0xc0) >= result)
                break;
        }
        else
        {
            result = (*(rbx + 0x20))(*(rbx + 0x28));

            if (result)
            {
                if (!*(rbx + 0x30))
                    break;

                goto label_1400112b1;
            }
        }

        if (*arg2 != 0x23)
            break;

        while (true)
        {
            if (!*(rbx + 0x10))
            {
                label_1400112f3:

                if (*(rbx + 0xc0) >= *(rbx + 0xc8))
                    break;
            }
            else
            {
                int32_t rax_8;
                rax_8 = (*(rbx + 0x20))(*(rbx + 0x28));

                if (rax_8)
                {
                    if (!*(rbx + 0x30))
                        break;

                    goto label_1400112f3;
                }
            }

            char rax_10 = *arg2;

            if (rax_10 == 0xa)
                break;

            if (rax_10 == 0xd)
                break;

            char* rax_11 = *(rbx + 0xc0);

            if (rax_11 < *(rbx + 0xc8))
            {
                arg1 = *rax_11;
                *(rbx + 0xc0) = &rax_11[1];
                *arg2 = arg1;
            }
            else if (!*(rbx + 0x30))
            {
                arg1 = 0;
                *arg2 = 0;
            }
            else
            {
                sub_140001d70(rbx);
                char* rax_13 = *(rbx + 0xc0);
                arg1 = *rax_13;
                *(rbx + 0xc0) = &rax_13[1];
                *arg2 = arg1;
            }
        }
    }

    return result;
}

uint64_t sub_140011380(uint64_t arg1, char* arg2)
{
    uint64_t rbx = arg1;
    uint64_t rdi = 0;

    while (true)
    {
        if (!*(rbx + 0x10))
        {
            label_1400113b6:

            if (*(rbx + 0xc0) >= *(rbx + 0xc8))
                break;
        }
        else
        {
            int32_t rax_1;
            rax_1 = (*(rbx + 0x20))(*(rbx + 0x28));

            if (rax_1)
            {
                if (!*(rbx + 0x30))
                    break;

                goto label_1400113b6;
            }
        }

        int32_t rdx = *arg2;

        if (rdx - 0x30 > 9)
            break;

        char* rax_4 = *(rbx + 0xc0);
        rdi = rdx + ((rdi * 5 - 0x18) << 1);

        if (rax_4 < *(rbx + 0xc8))
        {
            arg1 = *rax_4;
            *(rbx + 0xc0) = &rax_4[1];
            *arg2 = arg1;
        }
        else if (!*(rbx + 0x30))
        {
            arg1 = 0;
            *arg2 = 0;
        }
        else
        {
            sub_140001d70(rbx);
            char* rax_6 = *(rbx + 0xc0);
            arg1 = *rax_6;
            *(rbx + 0xc0) = &rax_6[1];
            *arg2 = arg1;
        }
    }

    return rdi;
}

int64_t sub_140011440(uint64_t arg1, void* arg2, void* arg3, void* arg4)
{
    void var_58;
    int64_t rax_1 = __security_cookie ^ &var_58;
    char* rax_2 = *(arg1 + 0xd0);
    void var_34;
    void* r14 = &var_34;
    *(arg1 + 0xc0) = rax_2;
    void* r15 = &var_34;
    uint64_t rcx = *(arg1 + 0xd8);
    void* rsi = &var_34;

    if (arg2)
        r14 = arg2;

    if (arg3)
        r15 = arg3;

    *(arg1 + 0xc8) = rcx;

    if (arg4)
        rsi = arg4;

    if (rax_2 < rcx)
        goto label_1400114bf;

    uint64_t rdi;

    if (!*(arg1 + 0x30))
    {
        rdi = 0;
        label_1400114e3:

        if (!*(arg1 + 0x30))
            rcx = 0;
        else
        {
            sub_140001d70(arg1);
            char* rax_5 = *(arg1 + 0xc0);
            rcx = *rax_5;
            *(arg1 + 0xc0) = &rax_5[1];
        }
    }
    else
    {
        sub_140001d70(arg1);
        rax_2 = *(arg1 + 0xc0);
        rcx = *(arg1 + 0xc8);
        label_1400114bf:
        rdi = *rax_2;
        *(arg1 + 0xc0) = &rax_2[1];

        if (&rax_2[1] >= rcx)
            goto label_1400114e3;

        rcx = rax_2[1];
        *(arg1 + 0xc0) = &rax_2[2];
    }

    int64_t result;

    if (rdi != 0x50 || rcx - 0x35 > 1)
    {
        *(arg1 + 0xc0) = *(arg1 + 0xd0);
        *(arg1 + 0xc8) = *(arg1 + 0xd8);
        result = 0;
    }
    else
    {
        int32_t rax_8 = 1;

        if (rcx == 0x36)
            rax_8 = 3;

        *rsi = rax_8;
        char* rax_9 = *(arg1 + 0xc0);

        if (rax_9 < *(arg1 + 0xc8))
        {
            rcx = *rax_9;
            *(arg1 + 0xc0) = &rax_9[1];
        }
        else if (!*(arg1 + 0x30))
            rcx = 0;
        else
        {
            sub_140001d70(arg1);
            char* rax_11 = *(arg1 + 0xc0);
            rcx = *rax_11;
            *(arg1 + 0xc0) = &rax_11[1];
        }

        char var_38 = rcx;
        sub_140011200(arg1, &var_38);
        *r14 = sub_140011380(arg1, &var_38);
        sub_140011200(arg1, &var_38);
        *r15 = sub_140011380(arg1, &var_38);
        sub_140011200(arg1, &var_38);

        if (sub_140011380(arg1, &var_38) <= 0xff)
            result = 1;
        else
        {
            TEB* gsbase;
            *(0x10 + *gsbase->ThreadLocalStoragePointer) = "max value > 255";
            result = 0;
        }
    }

    __security_check_cookie(rax_1 ^ &var_58);
    return result;
}

int64_t* sub_140011630(void* arg1, int32_t arg2, uint32_t* arg3)
{
    void* rsi = arg1;
    void* rbx = nullptr;
    void* var_90 = nullptr;
    int64_t* rax = malloc(0x20000);
    int64_t* r14 = rax;

    if (!rax)
        return rax;

    void* rax_1 = realloc(nullptr, 0xa);
    int32_t r12 = 2;

    if (rax_1)
    {
        *(rax_1 + 4) = 0;
        rbx = rax_1 + 8;
        var_90 = rbx;
        *(rbx - 8) = 2;
    }

    *(*(rbx - 4) + rbx) = 0x78;
    *(rbx - 4) += 1;
    uint64_t rdx = *(rbx - 8);

    if (*(rbx - 4) + 1 >= rdx)
    {
        int32_t rdi_1 = (rdx << 1) + 1;
        int64_t rdx_1 = rdi_1;
        uint64_t _Size = rdx_1 + 8;

        if (rdx_1 >= -8)
            _Size = -1;

        void* rax_5 = realloc(rbx - 8, _Size);

        if (rax_5)
        {
            rbx = rax_5 + 8;
            *(rbx - 8) = rdi_1;
            var_90 = rbx;
        }
    }

    int32_t rdi_2 = 3;
    int32_t var_84 = 3;
    int32_t var_98 = 3;
    int32_t r13 = 3;
    *(*(rbx - 4) + rbx) = 0x5e;
    *(rbx - 4) += 1;
    memset(r14, 0, 0x20000);
    int32_t r11 = arg2;
    int32_t i_45 = 0;
    int32_t i_46 = 0;

    if (r11 - 3 > 0)
    {
        while (true)
        {
            int64_t i_47 = i_45;
            int64_t r15_1 = 0;
            char* rcx_2 = rsi + i_47;
            uint64_t rdx_5 = (*(rsi + i_47 + 2) << 0x10) + (rcx_2[1] << 8) + *rcx_2;
            int32_t i_25 = 3;
            int64_t var_78_1 = 0;
            int32_t rdx_6 = rdx_5 ^ rdx_5 << 3;
            int32_t rdx_7 = rdx_6 + (rdx_6 >> 5);
            int32_t rdx_8 = rdx_7 ^ rdx_7 << 4;
            int32_t rdx_9 = rdx_8 + (rdx_8 >> 0x11);
            int32_t rdx_10 = rdx_9 ^ rdx_9 << 0x19;
            uint64_t rcx_6 = ((rdx_10 >> 6) + rdx_10) & 0x3fff;
            void** r12_1 = &r14[rcx_6];
            void* r14_1 = r14[rcx_6];
            int32_t rax_20;

            if (!r14_1)
                rax_20 = 0;
            else
                rax_20 = *(r14_1 - 4);

            int64_t i = 0;
            void* rcx_7 = r14_1;

            if (rax_20 > 0)
            {
                int32_t i_50 = 3;
                int64_t r15_2 = i_45 - 0x8000;

                do
                {
                    int64_t r9_1 = *(r14_1 + (i << 3));

                    if (r9_1 - arg1 > r15_2)
                    {
                        int32_t i_48 = 0;
                        int32_t rax_25 = r11 - i_45;
                        void* j = nullptr;

                        if (rax_25 > 0)
                        {
                            while (j < 0x102)
                            {
                                char* rcx_8 = j + r9_1;

                                if (*rcx_8 != *(arg1 - r9_1 + i_47 + rcx_8))
                                    break;

                                i_48 += 1;
                                j += 1;

                                if (j >= rax_25)
                                    break;
                            }

                            i_45 = i_46;
                            r11 = arg2;
                        }

                        if (i_48 >= i_50)
                        {
                            i_25 = i_48;
                            i_50 = i_48;
                            var_78_1 = r9_1;
                        }
                    }

                    i += 1;
                } while (i < rax_20);

                rbx = var_90;
                rdi_2 = var_84;
                r13 = var_98;
                rcx_7 = *r12_1;
                r15_1 = var_78_1;
            }

            if (r14_1 && *(r14_1 - 4) == 0x10)
            {
                memmove(r14_1, r14_1 + 0x40, 0x40);
                *(*r12_1 - 4) = 8;
                rcx_7 = *r12_1;
            }

            void* rcx_10;
            uint64_t rsi_1;

            if (!rcx_7)
            {
                label_140011902:
                rsi_1 = 2;
                rcx_10 = nullptr;
                label_140011910:
                int64_t rdx_12 = rsi_1 << 3;
                uint64_t _Size_1 = rdx_12 + 8;

                if (rdx_12 >= -8)
                    _Size_1 = -1;

                void* rax_32 = realloc(rcx_10, _Size_1);

                if (rax_32)
                {
                    if (!*r12_1)
                        *(rax_32 + 4) = 0;

                    *r12_1 = rax_32 + 8;
                    *rax_32 = rsi_1;
                }
            }
            else if (*(rcx_7 - 4) + 1 >= *(rcx_7 - 8))
            {
                if (!rcx_7)
                    goto label_140011902;

                rcx_10 = rcx_7 - 8;
                rsi_1 = (*(rcx_7 - 8) << 1) + 1;
                goto label_140011910;
            }
            void* rcx_11 = *r12_1;
            char* r8 = rcx_2;
            *(rcx_11 + (*(rcx_11 - 4) << 3)) = r8;
            void* rax_35 = *r12_1;
            *(rax_35 - 4) += 1;
            int32_t i_6;

            if (!r15_1)
            {
                label_14001207f:
                uint32_t rcx_37 = *r8;

                if (rcx_37 > 0x8f)
                {
                    int32_t rcx_41 = rcx_37 + 0x100;
                    int32_t rdx_49 = 0;
                    int32_t i_43 = 9;
                    int32_t i_1;

                    do
                    {
                        int32_t rax_124 = rcx_41 & 1;
                        rcx_41 s>>= 1;
                        rdx_49 = (rdx_49 * 2) | rax_124;
                        i_1 = i_43;
                        i_43 -= 1;
                    } while (i_1 != 1);
                    var_90 = rbx;
                    int32_t rdx_51 = rdx_49 << r13;
                    r13 += 9;
                    rdi_2 |= rdx_51;
                    var_98 = r13;
                    var_84 = rdi_2;

                    if (r13 >= 8)
                    {
                        uint64_t i_34 = r13 >> 3;
                        var_98 = r13 + (-(i_34) << 3);
                        uint64_t i_2;

                        do
                        {
                            void* rcx_43;
                            int32_t rsi_20;

                            if (!rbx)
                            {
                                rsi_20 = i_43 + 2;
                                rcx_43 = nullptr;
                                label_1400121ea:
                                int64_t rdx_52 = rsi_20;
                                uint64_t _Size_10 = rdx_52 + 8;

                                if (rdx_52 >= -8)
                                    _Size_10 = -1;

                                void* rax_129 = realloc(rcx_43, _Size_10);

                                if (rax_129)
                                {
                                    if (!rbx)
                                        *(rax_129 + 4) = 0;

                                    rbx = rax_129 + 8;
                                    *(rbx - 8) = rsi_20;
                                }
                            }
                            else
                            {
                                rcx_43 = rbx - 8;
                                uint64_t rsi_19 = *rcx_43;

                                if (*(rbx - 4) + 1 >= rsi_19)
                                {
                                    rsi_20 = (rsi_19 << 1) + 1;
                                    goto label_1400121ea;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_2;
                            *(rbx - 4) += 1;
                            rdi_2 u>>= 8;
                            i_2 = i_34;
                            i_34 -= 1;
                        } while (i_2 != 1);
                        label_140012224:
                        r13 = var_98;
                        var_90 = rbx;
                        var_84 = rdi_2;
                    }
                }
                else
                {
                    int32_t rcx_38 = rcx_37 + 0x30;
                    int32_t rdx_45 = 0;
                    int32_t i_42 = 8;
                    int32_t i_3;

                    do
                    {
                        int32_t rax_116 = rcx_38 & 1;
                        rcx_38 s>>= 1;
                        rdx_45 = (rdx_45 * 2) | rax_116;
                        i_3 = i_42;
                        i_42 -= 1;
                    } while (i_3 != 1);
                    var_90 = rbx;
                    int32_t rdx_47 = rdx_45 << r13;
                    r13 += 8;
                    rdi_2 |= rdx_47;
                    var_98 = r13;
                    var_84 = rdi_2;

                    if (r13 >= 8)
                    {
                        uint64_t i_33 = r13 >> 3;
                        var_98 = r13 + (-(i_33) << 3);
                        uint64_t i_4;

                        do
                        {
                            void* rcx_40;
                            int32_t rsi_18;

                            if (!rbx)
                            {
                                rsi_18 = i_42 + 2;
                                rcx_40 = nullptr;
                                label_14001211a:
                                int64_t rdx_48 = rsi_18;
                                uint64_t _Size_9 = rdx_48 + 8;

                                if (rdx_48 >= -8)
                                    _Size_9 = -1;

                                void* rax_121 = realloc(rcx_40, _Size_9);

                                if (rax_121)
                                {
                                    if (!rbx)
                                        *(rax_121 + 4) = 0;

                                    rbx = rax_121 + 8;
                                    *(rbx - 8) = rsi_18;
                                }
                            }
                            else
                            {
                                rcx_40 = rbx - 8;
                                uint64_t rsi_17 = *rcx_40;

                                if (*(rbx - 4) + 1 >= rsi_17)
                                {
                                    rsi_18 = (rsi_17 << 1) + 1;
                                    goto label_14001211a;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_2;
                            *(rbx - 4) += 1;
                            rdi_2 u>>= 8;
                            i_4 = i_33;
                            i_33 -= 1;
                        } while (i_4 != 1);
                        goto label_140012224;
                    }
                }

                i_6 = 1;
            }
            else
            {
                uint64_t rdx_16 = (r8[3] << 0x10) + (r8[2] << 8) + r8[1];
                int32_t rdx_17 = rdx_16 ^ rdx_16 << 3;
                int32_t rdx_18 = rdx_17 + (rdx_17 >> 5);
                int32_t rdx_19 = rdx_18 ^ rdx_18 << 4;
                int32_t rdx_20 = rdx_19 + (rdx_19 >> 0x11);
                int32_t rdx_21 = rdx_20 ^ rdx_20 << 0x19;
                void* r14_3 = rax[((rdx_21 >> 6) + rdx_21) & 0x3fff];
                int32_t rax_48;

                if (!r14_3)
                    rax_48 = 0;
                else
                    rax_48 = *(r14_3 - 4);

                int64_t rsi_2 = 0;

                if (rax_48 > 0)
                {
                    int32_t i_49 = i_46;
                    void* r11_4 = arg1;
                    int64_t r15_3 = i_49 - 0x7fff;

                    while (true)
                    {
                        int64_t r9_2 = *(r14_3 + (rsi_2 << 3));

                        if (r9_2 - r11_4 > r15_3)
                        {
                            int32_t r8_1 = 0;
                            void* i_5 = nullptr;

                            if (arg2 - i_49 - 1 > 0)
                            {
                                while (i_5 < 0x102)
                                {
                                    char* rcx_16 = i_5 + r9_2;

                                    if (*rcx_16 != *(r11_4 - r9_2 + i_47 + rcx_16 + 1))
                                        break;

                                    r8_1 += 1;
                                    i_5 += 1;

                                    if (i_5 >= arg2 - i_49 - 1)
                                        break;
                                }

                                i_49 = i_46;
                                r11_4 = arg1;
                            }

                            if (r8_1 > i_25)
                            {
                                r8 = rcx_2;
                                break;
                            }
                        }

                        rsi_2 += 1;

                        if (rsi_2 >= rax_48)
                        {
                            r15_1 = var_78_1;
                            goto label_140011a6b;
                        }
                    }

                    goto label_14001207f;
                }

                label_140011a6b:
                int32_t rcx_17 = 0;
                int64_t r14_4 = 0;
                int32_t i_16 = arg1 - r15_1 + i_46;
                i_6 = i_25;
                var_78_1 = i_16;

                if (i_6 > 3)
                {
                    uint32_t rax_56;

                    do
                    {
                        rax_56 = *((r14_4 << 1) + 0x140022484);
                        r14_4 += 1;
                        rcx_17 += 1;
                    } while (i_6 > rax_56 - 1);
                }

                int32_t rdx_22 = 0;
                uint32_t rdi_3;
                int32_t r13_1;

                if (rcx_17 + 0x101 <= 0x8f)
                {
                    int32_t rcx_18 = rcx_17 + 0x131;
                    int32_t i_37 = 8;
                    int32_t i_7;

                    do
                    {
                        int32_t rax_60 = rcx_18 & 1;
                        rcx_18 s>>= 1;
                        rdx_22 = (rdx_22 * 2) | rax_60;
                        i_7 = i_37;
                        i_37 -= 1;
                    } while (i_7 != 1);
                    var_90 = rbx;
                    r13_1 = r13 + 8;
                    rdi_3 = rdi_2 | rdx_22 << r13;

                    if (r13_1 >= 8)
                    {
                        uint64_t i_26 = r13_1 >> 3;
                        r13_1 += -(i_26) << 3;
                        uint64_t i_8;

                        do
                        {
                            void* rcx_20;
                            int32_t rsi_4;

                            if (!rbx)
                            {
                                rsi_4 = i_37 + 2;
                                rcx_20 = nullptr;
                                label_140011b33:
                                int64_t rdx_25 = rsi_4;
                                uint64_t _Size_2 = rdx_25 + 8;

                                if (rdx_25 >= -8)
                                    _Size_2 = -1;

                                void* rax_65 = realloc(rcx_20, _Size_2);

                                if (rax_65)
                                {
                                    if (!rbx)
                                        *(rax_65 + 4) = 0;

                                    rbx = rax_65 + 8;
                                    *(rbx - 8) = rsi_4;
                                }
                            }
                            else
                            {
                                rcx_20 = rbx - 8;
                                uint64_t rsi_3 = *rcx_20;

                                if (*(rbx - 4) + 1 >= rsi_3)
                                {
                                    rsi_4 = (rsi_3 << 1) + 1;
                                    goto label_140011b33;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_3;
                            *(rbx - 4) += 1;
                            rdi_3 u>>= 8;
                            i_8 = i_26;
                            i_26 -= 1;
                        } while (i_8 != 1);
                        label_140011db6:
                        i_6 = i_25;
                        i_16 = var_78_1;
                        var_90 = rbx;
                    }
                }
                else if (rcx_17 + 0x101 <= 0xff)
                {
                    int32_t rcx_21 = rcx_17 + 0x201;
                    int32_t i_38 = 9;
                    int32_t i_9;

                    do
                    {
                        int32_t rax_68 = rcx_21 & 1;
                        rcx_21 s>>= 1;
                        rdx_22 = (rdx_22 * 2) | rax_68;
                        i_9 = i_38;
                        i_38 -= 1;
                    } while (i_9 != 1);
                    var_90 = rbx;
                    r13_1 = r13 + 9;
                    rdi_3 = rdi_2 | rdx_22 << r13;

                    if (r13_1 >= 8)
                    {
                        uint64_t i_27 = r13_1 >> 3;
                        r13_1 += -(i_27) << 3;
                        uint64_t i_10;

                        do
                        {
                            void* rcx_23;
                            int32_t rsi_6;

                            if (!rbx)
                            {
                                rsi_6 = i_38 + 2;
                                rcx_23 = nullptr;
                                label_140011bf9:
                                int64_t rdx_28 = rsi_6;
                                uint64_t _Size_3 = rdx_28 + 8;

                                if (rdx_28 >= -8)
                                    _Size_3 = -1;

                                void* rax_73 = realloc(rcx_23, _Size_3);

                                if (rax_73)
                                {
                                    if (!rbx)
                                        *(rax_73 + 4) = 0;

                                    rbx = rax_73 + 8;
                                    *(rbx - 8) = rsi_6;
                                }
                            }
                            else
                            {
                                rcx_23 = rbx - 8;
                                uint64_t rsi_5 = *rcx_23;

                                if (*(rbx - 4) + 1 >= rsi_5)
                                {
                                    rsi_6 = (rsi_5 << 1) + 1;
                                    goto label_140011bf9;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_3;
                            *(rbx - 4) += 1;
                            rdi_3 u>>= 8;
                            i_10 = i_27;
                            i_27 -= 1;
                        } while (i_10 != 1);
                        goto label_140011db6;
                    }
                }
                else if (rcx_17 + 0x101 > 0x117)
                {
                    int32_t rcx_27 = rcx_17 + 0xa9;
                    int32_t i_40 = 8;
                    int32_t i_11;

                    do
                    {
                        int32_t rax_84 = rcx_27 & 1;
                        rcx_27 s>>= 1;
                        rdx_22 = (rdx_22 * 2) | rax_84;
                        i_11 = i_40;
                        i_40 -= 1;
                    } while (i_11 != 1);
                    var_90 = rbx;
                    r13_1 = r13 + 8;
                    rdi_3 = rdi_2 | rdx_22 << r13;

                    if (r13_1 >= 8)
                    {
                        uint64_t i_29 = r13_1 >> 3;
                        r13_1 += -(i_29) << 3;
                        uint64_t i_12;

                        do
                        {
                            void* rcx_29;
                            int32_t rsi_10;

                            if (!rbx)
                            {
                                rsi_10 = i_40 + 2;
                                rcx_29 = nullptr;
                                label_140011d79:
                                int64_t rdx_34 = rsi_10;
                                uint64_t _Size_5 = rdx_34 + 8;

                                if (rdx_34 >= -8)
                                    _Size_5 = -1;

                                void* rax_89 = realloc(rcx_29, _Size_5);

                                if (rax_89)
                                {
                                    if (!rbx)
                                        *(rax_89 + 4) = 0;

                                    rbx = rax_89 + 8;
                                    *(rbx - 8) = rsi_10;
                                }
                            }
                            else
                            {
                                rcx_29 = rbx - 8;
                                uint64_t rsi_9 = *rcx_29;

                                if (*(rbx - 4) + 1 >= rsi_9)
                                {
                                    rsi_10 = (rsi_9 << 1) + 1;
                                    goto label_140011d79;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_3;
                            *(rbx - 4) += 1;
                            rdi_3 u>>= 8;
                            i_12 = i_29;
                            i_29 -= 1;
                        } while (i_12 != 1);
                        goto label_140011db6;
                    }
                }
                else
                {
                    int32_t rcx_24 = rcx_17 + 1;
                    int32_t i_39 = 7;
                    int32_t i_13;

                    do
                    {
                        int32_t rax_76 = rcx_24 & 1;
                        rcx_24 s>>= 1;
                        rdx_22 = (rdx_22 * 2) | rax_76;
                        i_13 = i_39;
                        i_39 -= 1;
                    } while (i_13 != 1);
                    var_90 = rbx;
                    r13_1 = r13 + 7;
                    rdi_3 = rdi_2 | rdx_22 << r13;

                    if (r13_1 >= 8)
                    {
                        uint64_t i_28 = r13_1 >> 3;
                        r13_1 += -(i_28) << 3;
                        uint64_t i_14;

                        do
                        {
                            void* rcx_26;
                            int32_t rsi_8;

                            if (!rbx)
                            {
                                rsi_8 = i_39 + 2;
                                rcx_26 = nullptr;
                                label_140011cb9:
                                int64_t rdx_31 = rsi_8;
                                uint64_t _Size_4 = rdx_31 + 8;

                                if (rdx_31 >= -8)
                                    _Size_4 = -1;

                                void* rax_81 = realloc(rcx_26, _Size_4);

                                if (rax_81)
                                {
                                    if (!rbx)
                                        *(rax_81 + 4) = 0;

                                    rbx = rax_81 + 8;
                                    *(rbx - 8) = rsi_8;
                                }
                            }
                            else
                            {
                                rcx_26 = rbx - 8;
                                uint64_t rsi_7 = *rcx_26;

                                if (*(rbx - 4) + 1 >= rsi_7)
                                {
                                    rsi_8 = (rsi_7 << 1) + 1;
                                    goto label_140011cb9;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_3;
                            *(rbx - 4) += 1;
                            rdi_3 u>>= 8;
                            i_14 = i_28;
                            i_28 -= 1;
                        } while (i_14 != 1);
                        goto label_140011db6;
                    }
                }

                uint32_t r8_2 = *(r14_4 + 0x140022c50);

                if (r8_2)
                {
                    char rcx_30 = r13_1;
                    var_90 = rbx;
                    r13_1 += r8_2;
                    rdi_3 |= (i_6 - *((r14_4 << 1) + 0x140022480)) << rcx_30;

                    if (r13_1 >= 8)
                    {
                        uint64_t i_30 = r13_1 >> 3;
                        r13_1 += -(i_30) << 3;
                        uint64_t i_15;

                        do
                        {
                            void* rcx_31;
                            int32_t rsi_12;

                            if (!rbx)
                            {
                                rsi_12 = 2;
                                rcx_31 = nullptr;
                                label_140011e4a:
                                int64_t rdx_38 = rsi_12;
                                uint64_t _Size_6 = rdx_38 + 8;

                                if (rdx_38 >= -8)
                                    _Size_6 = -1;

                                void* rax_96 = realloc(rcx_31, _Size_6);

                                if (rax_96)
                                {
                                    if (!rbx)
                                        *(rax_96 + 4) = rbx;

                                    rbx = rax_96 + 8;
                                    *(rbx - 8) = rsi_12;
                                }
                            }
                            else
                            {
                                rcx_31 = rbx - 8;
                                uint64_t rsi_11 = *rcx_31;

                                if (*(rbx - 4) + 1 >= rsi_11)
                                {
                                    rsi_12 = (rsi_11 << 1) + 1;
                                    goto label_140011e4a;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_3;
                            *(rbx - 4) += 1;
                            rdi_3 u>>= 8;
                            i_15 = i_30;
                            i_30 -= 1;
                        } while (i_15 != 1);
                        i_16 = var_78_1;
                        i_6 = i_25;
                        var_90 = rbx;
                    }
                }

                int32_t rcx_32 = 0;
                int64_t r14_5 = 0;

                if (i_16 > 1)
                {
                    uint32_t rax_98;

                    do
                    {
                        rax_98 = *((r14_5 << 1) + 0x140022a44);
                        r14_5 += 1;
                        rcx_32 += 1;
                    } while (i_16 > rax_98 - 1);
                    rbx = var_90;
                }

                int32_t rdx_39 = 0;
                int32_t i_41 = 5;
                int32_t i_17;

                do
                {
                    int32_t rax_101 = rcx_32 & 1;
                    rcx_32 s>>= 1;
                    rdx_39 = (rdx_39 * 2) | rax_101;
                    i_17 = i_41;
                    i_41 -= 1;
                } while (i_17 != 1);
                r13 = r13_1 + 5;
                rdi_2 = rdi_3 | rdx_39 << r13_1;
                var_98 = r13;
                var_84 = rdi_2;

                if (r13 >= 8)
                {
                    uint64_t i_31 = r13 >> 3;
                    var_98 = r13 + (-(i_31) << 3);
                    uint64_t i_18;

                    do
                    {
                        void* rcx_34;
                        int32_t rsi_14;

                        if (!rbx)
                        {
                            rsi_14 = i_41 + 2;
                            rcx_34 = nullptr;
                            label_140011f45:
                            int64_t rdx_42 = rsi_14;
                            uint64_t _Size_7 = rdx_42 + 8;

                            if (rdx_42 >= -8)
                                _Size_7 = -1;

                            void* rax_106 = realloc(rcx_34, _Size_7);

                            if (rax_106)
                            {
                                if (!rbx)
                                    *(rax_106 + 4) = 0;

                                rbx = rax_106 + 8;
                                *(rbx - 8) = rsi_14;
                            }
                        }
                        else
                        {
                            rcx_34 = rbx - 8;
                            uint64_t rsi_13 = *rcx_34;

                            if (*(rbx - 4) + 1 >= rsi_13)
                            {
                                rsi_14 = (rsi_13 << 1) + 1;
                                goto label_140011f45;
                            }
                        }
                        *(*(rbx - 4) + rbx) = rdi_2;
                        *(rbx - 4) += 1;
                        rdi_2 u>>= 8;
                        i_18 = i_31;
                        i_31 -= 1;
                    } while (i_18 != 1);
                    r13 = var_98;
                    i_16 = var_78_1;
                    var_84 = rdi_2;
                    var_90 = rbx;
                }

                uint32_t rdx_43 = *(r14_5 + 0x140022c08);

                if (rdx_43)
                {
                    var_90 = rbx;
                    int32_t r12_12 = (i_16 - *((r14_5 << 1) + 0x140022a40)) << r13;
                    r13 += rdx_43;
                    rdi_2 |= r12_12;
                    var_98 = r13;
                    var_84 = rdi_2;

                    if (r13 >= 8)
                    {
                        uint64_t i_32 = r13 >> 3;
                        var_98 = r13 + (-(i_32) << 3);
                        uint64_t i_19;

                        do
                        {
                            void* rcx_36;
                            int32_t rsi_16;

                            if (!rbx)
                            {
                                rsi_16 = 2;
                                rcx_36 = nullptr;
                                label_140012023:
                                int64_t rdx_44 = rsi_16;
                                uint64_t _Size_8 = rdx_44 + 8;

                                if (rdx_44 >= -8)
                                    _Size_8 = -1;

                                void* rax_113 = realloc(rcx_36, _Size_8);

                                if (rax_113)
                                {
                                    if (!rbx)
                                        *(rax_113 + 4) = rbx;

                                    rbx = rax_113 + 8;
                                    *(rbx - 8) = rsi_16;
                                }
                            }
                            else
                            {
                                rcx_36 = rbx - 8;
                                uint64_t rsi_15 = *rcx_36;

                                if (*(rbx - 4) + 1 >= rsi_15)
                                {
                                    rsi_16 = (rsi_15 << 1) + 1;
                                    goto label_140012023;
                                }
                            }
                            *(*(rbx - 4) + rbx) = rdi_2;
                            *(rbx - 4) += 1;
                            rdi_2 u>>= 8;
                            i_19 = i_32;
                            i_32 -= 1;
                        } while (i_19 != 1);
                        r13 = var_98;
                        i_6 = i_25;
                        var_84 = rdi_2;
                        var_90 = rbx;
                    }
                }
            }

            r11 = arg2;
            i_45 = i_46 + i_6;
            rsi = arg1;
            i_46 = i_45;

            if (i_45 >= r11 - 3)
                break;

            r14 = rax;
        }

        r12 = 2;
    }

    int64_t r15_4 = r11;
    int64_t i_20 = i_45;
    int64_t var_90_1 = r15_4;

    for (; i_20 < r15_4; i_20 += 1)
    {
        uint32_t rcx_44 = *(rsi + i_20);
        int32_t rdx_53 = 0;

        if (rcx_44 > 0x8f)
        {
            int32_t rcx_48 = rcx_44 + 0x100;
            int32_t j_10 = 9;
            int32_t j_1;

            do
            {
                int32_t rax_141 = rcx_48 & 1;
                rcx_48 s>>= 1;
                rdx_53 = (rdx_53 * 2) | rax_141;
                j_1 = j_10;
                j_10 -= 1;
            } while (j_1 != 1);
            char rcx_49 = r13;
            r13 += 9;
            rdi_2 |= rdx_53 << rcx_49;

            if (r13 >= 8)
            {
                uint64_t j_7 = r13 >> 3;
                r13 += -(j_7) << 3;
                uint64_t j_2;

                do
                {
                    void* rcx_50;
                    int32_t rsi_24;

                    if (!rbx)
                    {
                        rsi_24 = 2;
                        rcx_50 = nullptr;
                        label_1400123b3:
                        int64_t rdx_59 = rsi_24;
                        uint64_t _Size_12 = rdx_59 + 8;

                        if (rdx_59 >= -8)
                            _Size_12 = -1;

                        void* rax_146 = realloc(rcx_50, _Size_12);

                        if (rax_146)
                        {
                            if (!rbx)
                                *(rax_146 + 4) = 0;

                            rbx = rax_146 + 8;
                            *(rbx - 8) = rsi_24;
                        }
                    }
                    else
                    {
                        rcx_50 = rbx - 8;
                        uint64_t rsi_23 = *rcx_50;

                        if (*(rbx - 4) + 1 >= rsi_23)
                        {
                            rsi_24 = (rsi_23 << 1) + 1;
                            goto label_1400123b3;
                        }
                    }
                    *(*(rbx - 4) + rbx) = rdi_2;
                    *(rbx - 4) += 1;
                    rdi_2 u>>= 8;
                    j_2 = j_7;
                    j_7 -= 1;
                } while (j_2 != 1);
                rsi = arg1;
                r15_4 = var_90_1;
            }
        }
        else
        {
            int32_t rcx_45 = rcx_44 + 0x30;
            int32_t j_9 = 8;
            int32_t j_3;

            do
            {
                int32_t rax_133 = rcx_45 & 1;
                rcx_45 s>>= 1;
                rdx_53 = (rdx_53 * 2) | rax_133;
                j_3 = j_9;
                j_9 -= 1;
            } while (j_3 != 1);
            char rcx_46 = r13;
            r13 += 8;
            rdi_2 |= rdx_53 << rcx_46;

            if (r13 >= 8)
            {
                uint64_t j_6 = r13 >> 3;
                r13 += -(j_6) << 3;
                uint64_t j_4;

                do
                {
                    void* rcx_47;
                    int32_t rsi_22;

                    if (!rbx)
                    {
                        rsi_22 = 2;
                        rcx_47 = nullptr;
                        label_140012303:
                        int64_t rdx_56 = rsi_22;
                        uint64_t _Size_11 = rdx_56 + 8;

                        if (rdx_56 >= -8)
                            _Size_11 = -1;

                        void* rax_138 = realloc(rcx_47, _Size_11);

                        if (rax_138)
                        {
                            if (!rbx)
                                *(rax_138 + 4) = 0;

                            rbx = rax_138 + 8;
                            *(rbx - 8) = rsi_22;
                        }
                    }
                    else
                    {
                        rcx_47 = rbx - 8;
                        uint64_t rsi_21 = *rcx_47;

                        if (*(rbx - 4) + 1 >= rsi_21)
                        {
                            rsi_22 = (rsi_21 << 1) + 1;
                            goto label_140012303;
                        }
                    }
                    *(*(rbx - 4) + rbx) = rdi_2;
                    *(rbx - 4) += 1;
                    rdi_2 u>>= 8;
                    j_4 = j_6;
                    j_6 -= 1;
                } while (j_4 != 1);
                rsi = arg1;
                r15_4 = var_90_1;
            }
        }
    }

    int32_t i_44 = 7;
    int32_t i_21;

    do
    {
        i_21 = i_44;
        i_44 -= 1;
    } while (i_21 != 1);
    int32_t i_23 = r13 + 7;
    uint32_t rdi_4 = rdi_2;

    if (i_23 >= 8)
    {
        uint64_t i_35 = i_23 >> 3;
        i_23 += -(i_35) << 3;
        uint64_t i_22;

        do
        {
            void* rcx_51;
            int32_t rsi_26;

            if (!rbx)
            {
                rsi_26 = 2;
                rcx_51 = nullptr;
                label_140012473:
                int64_t rdx_60 = rsi_26;
                uint64_t _Size_13 = rdx_60 + 8;

                if (rdx_60 >= -8)
                    _Size_13 = -1;

                void* rax_152 = realloc(rcx_51, _Size_13);

                if (rax_152)
                {
                    if (!rbx)
                        *(rax_152 + 4) = 0;

                    rbx = rax_152 + 8;
                    *(rbx - 8) = rsi_26;
                }
            }
            else
            {
                rcx_51 = rbx - 8;
                uint64_t rsi_25 = *rcx_51;

                if (*(rbx - 4) + 1 >= rsi_25)
                {
                    rsi_26 = (rsi_25 << 1) + 1;
                    goto label_140012473;
                }
            }
            *(*(rbx - 4) + rbx) = rdi_4;
            *(rbx - 4) += 1;
            rdi_4 u>>= 8;
            i_22 = i_35;
            i_35 -= 1;
        } while (i_22 != 1);
        r15_4 = var_90_1;
    }

    if (i_23)
    {
        do
        {
            i_23 += 1;

            if (i_23 >= 8)
            {
                uint64_t j_8 = i_23 >> 3;
                i_23 += -(j_8) << 3;
                uint64_t j_5;

                do
                {
                    void* rcx_52;
                    int32_t rsi_28;

                    if (!rbx)
                    {
                        rsi_28 = 2;
                        rcx_52 = nullptr;
                        label_140012516:
                        int64_t rdx_61 = rsi_28;
                        uint64_t _Size_14 = rdx_61 + 8;

                        if (rdx_61 >= -8)
                            _Size_14 = -1;

                        void* rax_158 = realloc(rcx_52, _Size_14);

                        if (rax_158)
                        {
                            if (!rbx)
                                *(rax_158 + 4) = rbx;

                            rbx = rax_158 + 8;
                            *(rbx - 8) = rsi_28;
                        }
                    }
                    else
                    {
                        rcx_52 = rbx - 8;
                        uint64_t rsi_27 = *rcx_52;

                        if (*(rbx - 4) + 1 >= rsi_27)
                        {
                            rsi_28 = (rsi_27 << 1) + 1;
                            goto label_140012516;
                        }
                    }
                    *(*(rbx - 4) + rbx) = rdi_4;
                    *(rbx - 4) += 1;
                    rdi_4 u>>= 8;
                    j_5 = j_8;
                    j_8 -= 1;
                } while (j_5 != 1);
            }
        } while (i_23);

        r15_4 = var_90_1;
    }

    int64_t i_36 = 0x4000;
    int64_t* rdi_5 = rax;
    int64_t i_24;

    do
    {
        int64_t rcx_53 = *rdi_5;

        if (rcx_53)
            free(rcx_53 - 8);

        rdi_5 = &rdi_5[1];
        i_24 = i_36;
        i_36 -= 1;
    } while (i_24 != 1);
    free(rax);
    int32_t r14_7 = i_36 + 1;
    int32_t rdi_6 = 0;

    if (r15_4 > 0)
    {
        int64_t r9_3 = 0;
        int64_t r8_3 = arg2 % 0x15b0;

        do
        {
            int64_t rcx_58 = 0;

            if (r8_3 > 0)
            {
                do
                {
                    uint32_t rax_163 = *(arg1 + r9_3 + rcx_58);
                    rcx_58 += 1;
                    r14_7 += rax_163;
                    rdi_6 += r14_7;
                } while (rcx_58 < r8_3);
            }

            r9_3 += r8_3;
            r8_3 = 0x15b0;
            r14_7 += r14_7 / 0xfff1 * 0xffff000f;
            rdi_6 += rdi_6 / 0xfff1 * 0xffff000f;
        } while (r9_3 < r15_4);
    }

    void* rsi_29;

    if (!rbx)
    {
        rsi_29 = -fffffffffffffff8;
        label_14001264b:
        int64_t rdx_70 = r12;
        uint64_t _Size_15 = rdx_70 + 8;
        void* rcx_60 = rsi_29;

        if (rdx_70 >= -8)
            _Size_15 = -1;

        if (!rbx)
            rcx_60 = nullptr;

        void* rax_168 = realloc(rcx_60, _Size_15);

        if (rax_168)
        {
            if (!rbx)
                *(rax_168 + 4) = 0;

            rbx = rax_168 + 8;
            rsi_29 = rbx - 8;
            *rsi_29 = r12;
        }
    }
    else
    {
        rsi_29 = rbx - 8;
        uint64_t rcx_59 = *rsi_29;

        if (*(rbx - 4) + 1 >= rcx_59)
        {
            r12 = (rcx_59 << 1) + 1;
            goto label_14001264b;
        }
    }

    *(*(rbx - 4) + rbx) = rdi_6 >> 8;
    *(rbx - 4) += 1;
    uint64_t rbp_16 = *rsi_29;

    if (*(rbx - 4) + 1 >= rbp_16)
    {
        int32_t rbp_17 = (rbp_16 << 1) + 1;
        int64_t rdx_71 = rbp_17;
        uint64_t _Size_16 = rdx_71 + 8;

        if (rdx_71 >= -8)
            _Size_16 = -1;

        void* rax_172 = realloc(rsi_29, _Size_16);

        if (rax_172)
        {
            rbx = rax_172 + 8;
            rsi_29 = rbx - 8;
            *rsi_29 = rbp_17;
        }
    }

    *(*(rbx - 4) + rbx) = rdi_6;
    *(rbx - 4) += 1;
    uint64_t rdi_7 = *rsi_29;

    if (*(rbx - 4) + 1 >= rdi_7)
    {
        int32_t rdi_8 = (rdi_7 << 1) + 1;
        int64_t rdx_72 = rdi_8;
        uint64_t _Size_17 = rdx_72 + 8;

        if (rdx_72 >= -8)
            _Size_17 = -1;

        void* rax_176 = realloc(rsi_29, _Size_17);

        if (rax_176)
        {
            rbx = rax_176 + 8;
            rsi_29 = rbx - 8;
            *rsi_29 = rdi_8;
        }
    }

    *(*(rbx - 4) + rbx) = r14_7 >> 8;
    *(rbx - 4) += 1;
    uint64_t rdi_9 = *rsi_29;

    if (*(rbx - 4) + 1 >= rdi_9)
    {
        int32_t rdi_10 = (rdi_9 << 1) + 1;
        int64_t rdx_73 = rdi_10;
        uint64_t _Size_18 = rdx_73 + 8;

        if (rdx_73 >= -8)
            _Size_18 = -1;

        void* rax_180 = realloc(rsi_29, _Size_18);

        if (rax_180)
        {
            rbx = rax_180 + 8;
            rsi_29 = rbx - 8;
            *rsi_29 = rdi_10;
        }
    }

    *(*(rbx - 4) + rbx) = r14_7;
    *(rbx - 4) += 1;
    uint32_t count = *(rbx - 4);
    *arg3 = count;
    memmove(rsi_29, rbx, count);
    return rsi_29;
}

uint64_t sub_1400127b0(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, void* arg8)
{
    int32_t r10 = arg5;
    int32_t r8 = arg2;
    void* rdx = &data_140028058;

    if (r10)
        rdx = &data_140028090;

    int32_t r13 = *(rdx + (arg7 << 2));
    int32_t rax_1 = data_140028d98;

    if (rax_1)
        r10 = arg4 - r10 - 1;

    char* r9_3 = r10 * r8 + arg1;

    if (rax_1)
        r8 = -(r8);

    if (!r13)
        /* tailcall */
        return memcpy(arg8, r9_3, arg3 * arg6);

    int64_t i_14 = arg6;
    int64_t rbx = r8;

    if (i_14 > 0)
    {
        int64_t r15_2 = -(rbx);
        char* r10_3 = r9_3;
        int64_t i_7 = i_14;
        int64_t i;

        do
        {
            if (r13 - 1 <= 5)
            {
                char rax_4;

                switch (r13)
                {
                    case 1:
                    case 5:
                    case 6:
                    {
                        rax_4 = *r10_3;
                        break;
                    }
                    case 2:
                    {
                        rax_4 = *r10_3 - r10_3[r15_2];
                        break;
                    }
                    case 3:
                    {
                        rax_4 = *r10_3 - (r10_3[r15_2] >> 1);
                        break;
                    }
                    case 4:
                    {
                        char rax_5 = r10_3[r15_2];
                        char rdx_6 = 0;

                        if (rax_5)
                            rdx_6 = rax_5;

                        rax_4 = *r10_3 - rdx_6;
                        break;
                    }
                }

                *(arg8 - r9_3 + r10_3) = rax_4;
            }

            r10_3 = &r10_3[1];
            i = i_7;
            i_7 -= 1;
        } while (i != 1);
    }

    uint64_t result = r13 - 1;

    if (result <= 5)
    {
        result = result;

        switch (result)
        {
            case 0:
            {
                int64_t r11_4 = arg3 * i_14;

                if (i_14 < r11_4)
                {
                    void* r10_4 = &r9_3[i_14];
                    int64_t i_10 = r11_4 - i_14;
                    int64_t i_1;

                    do
                    {
                        result = r10_4 - i_14;
                        *(arg8 - r9_3 + r10_4) = *r10_4 - *result;
                        r10_4 += 1;
                        i_1 = i_10;
                        i_10 -= 1;
                    } while (i_1 != 1);
                }
                break;
            }
            case 1:
            {
                int64_t r10_5 = arg3 * i_14;

                if (i_14 < r10_5)
                {
                    void* rdx_10 = &r9_3[i_14];
                    int64_t i_8 = r10_5 - i_14;
                    int64_t i_2;

                    do
                    {
                        result = rdx_10 - rbx;
                        *(arg8 - r9_3 + rdx_10) = *rdx_10 - *result;
                        rdx_10 += 1;
                        i_2 = i_8;
                        i_8 -= 1;
                    } while (i_2 != 1);
                }
                break;
            }
            case 2:
            {
                int64_t r10_6 = arg3 * i_14;

                if (i_14 < r10_6)
                {
                    void* r8_6 = arg8 + i_14 - r9_3;
                    int64_t i_9 = r10_6 - i_14;
                    int64_t i_3;

                    do
                    {
                        uint32_t rax_10 = *r9_3;
                        uint32_t rdx_11 = r9_3[i_14 - rbx];
                        r9_3 = &r9_3[1];
                        result = r9_3[i_14 - 1] - ((rdx_11 + rax_10) >> 1);
                        *(r8_6 + r9_3 - 1) = result;
                        i_3 = i_9;
                        i_9 -= 1;
                    } while (i_3 != 1);
                }
                break;
            }
            case 3:
            {
                int64_t r11_10 = arg3 * i_14;

                if (i_14 < r11_10)
                {
                    void* r10_9 = &r9_3[i_14 - rbx];
                    int64_t i_11 = r11_10 - i_14;
                    int64_t i_4;

                    do
                    {
                        uint32_t rdi = *(r10_9 + rbx - i_14);
                        uint32_t r15_3 = *r10_9;
                        uint32_t r14_3 = *(r10_9 - i_14);
                        uint32_t r8_8 = rdi - r14_3;
                        uint32_t r9_5 = r8_8 + r15_3;
                        int32_t temp4_1;
                        int32_t temp5_1;
                        temp4_1 = HIGHD(r9_5 - rdi);
                        temp5_1 = LOWD(r9_5 - rdi);
                        int32_t rsi_3 = (temp5_1 ^ temp4_1) - temp4_1;
                        int32_t temp6_1;
                        int32_t temp7_1;
                        temp6_1 = HIGHD(r8_8);
                        temp7_1 = LOWD(r8_8);
                        int32_t rbp_4 = (temp7_1 ^ temp6_1) - temp6_1;
                        int32_t temp8_1;
                        int32_t temp9_1;
                        temp8_1 = HIGHD(r9_5 - r14_3);
                        temp9_1 = LOWD(r9_5 - r14_3);
                        int32_t r8_11 = (temp9_1 ^ temp8_1) - temp8_1;

                        if (rsi_3 > rbp_4 || rsi_3 > r8_11)
                        {
                            rdi = r14_3;

                            if (rbp_4 <= r8_11)
                                rdi = r15_3;
                        }

                        result = *(rbx + r10_9) - rdi;
                        *(rbx - r9_3 + arg8 + r10_9) = result;
                        r10_9 += 1;
                        i_4 = i_11;
                        i_11 -= 1;
                    } while (i_4 != 1);
                }
                break;
            }
            case 4:
            {
                int64_t r11_12 = arg3 * i_14;

                if (i_14 < r11_12)
                {
                    void* r10_10 = &r9_3[i_14];
                    int64_t i_12 = r11_12 - i_14;
                    int64_t i_5;

                    do
                    {
                        result = *r10_10 - (*(r10_10 - i_14) >> 1);
                        *(arg8 - r9_3 + r10_10) = result;
                        r10_10 += 1;
                        i_5 = i_12;
                        i_12 -= 1;
                    } while (i_5 != 1);
                }
                break;
            }
            case 5:
            {
                int64_t r11_14 = arg3 * i_14;

                if (i_14 < r11_14)
                {
                    void* r10_11 = &r9_3[i_14];
                    int64_t i_13 = r11_14 - i_14;
                    int64_t i_6;

                    do
                    {
                        result = r10_11 - i_14;
                        *(arg8 - r9_3 + r10_11) = *r10_11 - *result;
                        r10_11 += 1;
                        i_6 = i_13;
                        i_13 -= 1;
                    } while (i_6 != 1);
                }
                break;
            }
        }
    }

    return result;
}

int64_t* sub_140012b40(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    void var_e8;
    int64_t rax_1 = __security_cookie ^ &var_e8;
    int32_t r15 = arg3;
    int32_t var_a4 = arg2;
    int32_t var_58 = 0x474e5089;
    int32_t var_54 = 0xa1a0a0d;
    int128_t var_78;
    __builtin_memcpy(&var_78, "\xff\xff\xff\xff\x00\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x06\x00\x00\x00", 0x14);

    if (!arg2)
        var_a4 = arg3 * arg5;

    uint32_t count = r15 * arg5;
    int32_t temp0;
    int32_t _Size_3;
    temp0 = HIGHD(arg4 * (count + 1));
    _Size_3 = LOWD(arg4 * (count + 1));
    uint64_t _Size = _Size_3;

    if ((arg4 * (count + 1)) >> 0x20)
        _Size = -1;

    void* rax_4 = malloc(_Size);
    void* rsi = rax_4;
    int64_t* result;

    if (!rax_4)
        result = nullptr;
    else
    {
        int32_t temp3_1;
        int32_t _Size_4;
        temp3_1 = HIGHD(arg5 * r15);
        _Size_4 = LOWD(arg5 * r15);
        uint64_t _Size_1 = _Size_4;

        if ((arg5 * r15) >> 0x20)
            _Size_1 = -1;

        void* rax_7 = malloc(_Size_1);

        if (rax_7)
        {
            int32_t rax_8 = arg4;
            int64_t i_1 = 0;
            int32_t r13_1 = 0;

            if (rax_8 > 0)
            {
                int64_t count_1 = count;

                do
                {
                    int32_t i_3 = 0;
                    int32_t r14_1 = 0x7fffffff;
                    int32_t i;

                    for (i = 0; i < 5; )
                    {
                        sub_1400127b0(arg1, var_a4, arg3, rax_8, r13_1, arg5, i, rax_7);
                        int32_t r10_1 = 0;
                        void* j = nullptr;

                        if (count > 0 && count >= 8 && data_140028018 >= 2)
                        {
                            int32_t zmm3[0x4] = {0};
                            int32_t zmm4_1[0x4] = {0};
                            int32_t rdx_2 = count & 0x80000007;

                            if (rdx_2 < 0)
                                rdx_2 = ((rdx_2 - 1) | 0xfffffff8) + 1;

                            int32_t zmm2[0x4];

                            do
                            {
                                int32_t zmm1[0x4] = _mm_cvtepi8_epi32(*(j + rax_7));
                                uint128_t zmm0_1 = *(j + rax_7 + 4);
                                zmm3 = _mm_add_epi32(zmm3, _mm_abs_epi32(zmm1));
                                j += 8;
                                zmm2 = _mm_add_epi32(_mm_abs_epi32(_mm_cvtepi8_epi32(zmm0_1)), zmm4_1);
                                zmm4_1 = zmm2;
                            } while (j < count - rdx_2);

                            zmm3 = _mm_add_epi32(zmm3, zmm2);
                            zmm3 = _mm_add_epi32(zmm3, _mm_bsrli_si128(zmm3, 8));
                            r10_1 = _mm_add_epi32(zmm3, _mm_bsrli_si128(zmm3, 4))[0];
                        }

                        int32_t r8_1 = 0;
                        int32_t r9_1 = 0;

                        if (j < count_1)
                        {
                            int32_t temp7_1;
                            int32_t temp8_1;

                            if (count_1 - j < 2)
                            {
                                temp7_1 = HIGHD(*(j + rax_7));
                                temp8_1 = LOWD(*(j + rax_7));
                                r10_1 += (temp8_1 ^ temp7_1) - temp7_1;
                            }
                            else
                            {
                                do
                                {
                                    int32_t temp9_1;
                                    int32_t temp10_1;
                                    temp9_1 = HIGHD(*(j + rax_7));
                                    temp10_1 = LOWD(*(j + rax_7));
                                    r8_1 += (temp10_1 ^ temp9_1) - temp9_1;
                                    int32_t temp11_1;
                                    int32_t temp12_1;
                                    temp11_1 = HIGHD(*(j + rax_7 + 1));
                                    temp12_1 = LOWD(*(j + rax_7 + 1));
                                    j += 2;
                                    r9_1 += (temp12_1 ^ temp11_1) - temp11_1;
                                } while (j < count_1 - 1);

                                if (j < count_1)
                                {
                                    temp7_1 = HIGHD(*(j + rax_7));
                                    temp8_1 = LOWD(*(j + rax_7));
                                    r10_1 += (temp8_1 ^ temp7_1) - temp7_1;
                                }
                            }
                            r10_1 += r8_1 + r9_1;
                        }

                        int32_t i_2 = i;

                        if (r10_1 >= r14_1)
                            i_2 = i_3;

                        i += 1;
                        i_3 = i_2;
                        rax_8 = arg4;

                        if (r10_1 >= r14_1)
                            r10_1 = r14_1;

                        r14_1 = r10_1;
                    }

                    if (i != i_3)
                    {
                        sub_1400127b0(arg1, var_a4, arg3, arg4, r13_1, arg5, i_3, rax_7);
                        i = i_3;
                    }

                    int64_t rax_29 = (count + 1) * r13_1;
                    *(rax_29 + rax_4) = i;
                    memcpy(rax_4 + 1 + rax_29, rax_7, count);
                    rax_8 = arg4;
                    r13_1 += 1;
                } while (r13_1 < rax_8);

                r15 = arg3;
                rsi = rax_4;
            }

            free(rax_7);
            int32_t var_60;
            int64_t* rax_30 = sub_140011630(rsi, arg4 * (count + 1), &var_60);
            free(rsi);

            if (!rax_30)
                result = nullptr;
            else
            {
                uint64_t _Size_2 = var_60 + 0x39;

                if (var_60 + 0x2d >= 0xfffffff4)
                    _Size_2 = -1;

                int64_t* result_1 = malloc(_Size_2);

                if (!result_1)
                    result = nullptr;
                else
                {
                    int64_t r10_2 = var_60;
                    *arg6 = r10_2 + 0x39;
                    *result_1 = var_58;
                    result_1[2] = r15 >> 0x18;
                    *(result_1 + 0x11) = r15 >> 0x10;
                    *(result_1 + 0x12) = r15 >> 8;
                    *(result_1 + 0x14) = arg4 >> 0x18;
                    *(result_1 + 0x15) = arg4 >> 0x10;
                    *(result_1 + 0x16) = arg4 >> 8;
                    *(result_1 + 0x17) = arg4;
                    result_1[1] = 0xd000000;
                    __builtin_strncpy(result_1 + 0xc, "IHDR", 4);
                    *(result_1 + 0x13) = r15;
                    result_1[3] = 8;
                    *(result_1 + 0x1a) = 0;
                    *(result_1 + 0x1c) = 0;
                    uint64_t r9_4 = *(&var_78 + (arg5 << 2));
                    *(result_1 + 0x19) = r9_4;
                    int32_t r8_6 = *(&data_1400225d0 + (~*(result_1 + 0xc) << 2)) ^ 0xffffff;
                    int32_t rdx_14 = *(&data_1400225d0 + ((r8_6 ^ *(result_1 + 0xd)) << 2)) ^ r8_6 >> 8;
                    int32_t r8_9 = *(&data_1400225d0 + ((rdx_14 ^ *(result_1 + 0xe)) << 2)) ^ rdx_14 >> 8;
                    int32_t rdx_17 = *(&data_1400225d0 + ((r8_9 ^ *(result_1 + 0xf)) << 2)) ^ r8_9 >> 8;
                    int32_t r8_12 = *(&data_1400225d0 + ((rdx_17 ^ result_1[2]) << 2)) ^ rdx_17 >> 8;
                    int32_t rdx_20 = *(&data_1400225d0 + ((r8_12 ^ *(result_1 + 0x11)) << 2)) ^ r8_12 >> 8;
                    int32_t r8_15 = *(&data_1400225d0 + ((rdx_20 ^ *(result_1 + 0x12)) << 2)) ^ rdx_20 >> 8;
                    int32_t rdx_23 = *(&data_1400225d0 + ((r8_15 ^ r15) << 2)) ^ r8_15 >> 8;
                    int32_t r8_18 = *(&data_1400225d0 + ((rdx_23 ^ *(result_1 + 0x14)) << 2)) ^ rdx_23 >> 8;
                    int32_t rdx_26 = *(&data_1400225d0 + ((r8_18 ^ *(result_1 + 0x15)) << 2)) ^ r8_18 >> 8;
                    int32_t r8_21 = *(&data_1400225d0 + ((rdx_26 ^ *(result_1 + 0x16)) << 2)) ^ rdx_26 >> 8;
                    uint64_t rcx_39 = r8_21 ^ *(result_1 + 0x17);
                    uint64_t rax_58 = result_1[3];
                    *(result_1 + 0x24) = r10_2;
                    __builtin_strncpy(result_1 + 0x25, "IDAT", 4);
                    int32_t rdx_29 = *(&data_1400225d0 + (rcx_39 << 2)) ^ r8_21 >> 8;
                    int32_t r8_24 = *(&data_1400225d0 + ((rdx_29 ^ rax_58) << 2)) ^ rdx_29 >> 8;
                    int32_t rdx_32 = *(&data_1400225d0 + ((r8_24 ^ r9_4) << 2)) ^ r8_24 >> 8;
                    int32_t r8_27 = *(&data_1400225d0 + (rdx_32 << 2)) ^ rdx_32 >> 8;
                    int32_t rdx_35 = *(&data_1400225d0 + (r8_27 << 2)) ^ r8_27 >> 8;
                    int32_t r8_31 = ~(*(&data_1400225d0 + (rdx_35 << 2)) ^ rdx_35 >> 8);
                    result_1[4] = r8_31;
                    *(result_1 + 0x1d) = r8_31 >> 0x18;
                    *(result_1 + 0x1e) = r8_31 >> 0x10;
                    *(result_1 + 0x1f) = r8_31 >> 8;
                    *(result_1 + 0x21) = r10_2 >> 0x18;
                    *(result_1 + 0x22) = r10_2 >> 0x10;
                    *(result_1 + 0x23) = r10_2 >> 8;
                    memcpy(result_1 + 0x29, rax_30, r10_2);
                    void* rsi_3 = result_1 + 0x29 + r10_2;
                    free(rax_30);
                    int32_t r8_33 = -1;
                    int64_t rcx_49 = var_60;
                    int32_t rax_71 = rcx_49 + 4;

                    if (rax_71 > 0)
                    {
                        do
                        {
                            uint64_t rdx_38 = *(i_1 + rsi_3 - rcx_49 - 4);
                            i_1 += 1;
                            r8_33 = *(&data_1400225d0 + ((rdx_38 ^ r8_33) << 2)) ^ r8_33 >> 8;
                        } while (i_1 < rax_71);
                    }

                    int32_t r8_35 = ~r8_33;
                    *(rsi_3 + 3) = r8_35;
                    *rsi_3 = r8_35 >> 0x18;
                    *(rsi_3 + 1) = r8_35 >> 0x10;
                    *(rsi_3 + 4) = 0;
                    __builtin_strncpy(rsi_3 + 8, "IEND", 4);
                    *(rsi_3 + 2) = r8_35 >> 8;
                    int32_t r8_37 = *(&data_1400225d0 + ((0x46 ^ *(rsi_3 + 9)) << 2)) ^ 0x22fde9;
                    int32_t rdx_41 = *(&data_1400225d0 + ((r8_37 ^ *(rsi_3 + 0xa)) << 2)) ^ r8_37 >> 8;
                    result = result_1;
                    int32_t r8_41 = ~(*(&data_1400225d0 + ((rdx_41 ^ *(rsi_3 + 0xb)) << 2)) ^ rdx_41 >> 8);
                    *(rsi_3 + 0xf) = r8_41;
                    *(rsi_3 + 0xc) = r8_41 >> 0x18;
                    *(rsi_3 + 0xd) = r8_41 >> 0x10;
                    *(rsi_3 + 0xe) = r8_41 >> 8;
                }
            }
        }
        else
        {
            free(rsi);
            result = nullptr;
        }
    }

    __security_check_cookie(rax_1 ^ &var_e8);
    return result;
}

int64_t sub_1400131f0(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int64_t arg5, int32_t arg6)
{
    void var_68;
    int64_t rax_1 = __security_cookie ^ &var_68;
    int32_t var_38;
    int64_t* _Buffer = sub_140012b40(arg5, arg6, arg2, arg3, arg4, &var_38);
    int64_t result;

    if (!_Buffer)
        result = 0;
    else
    {
        FILE* _Stream;
        errno_t rax_3 = fopen_s(&_Stream, arg1, "wb");
        FILE* _Stream_1 = _Stream;

        if (rax_3)
            _Stream_1 = nullptr;

        _Stream = _Stream_1;

        if (_Stream_1)
        {
            fwrite(_Buffer, 1, var_38, _Stream_1);
            fclose(_Stream_1);
            free(_Buffer);
            result = 1;
        }
        else
        {
            free(_Buffer);
            result = 0;
        }
    }

    __security_check_cookie(rax_1 ^ &var_68);
    return result;
}

void __scrt_throw_std_bad_alloc() __noreturn
{
    void pExceptionObject;
    sub_1400010e0(&pExceptionObject);
    _CxxThrowException(&pExceptionObject, &data_1400261d8);
    /* no return */
}

void sub_1400132e0(int64_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t i_4 = 0;
    int64_t r10 = arg3;
    int64_t r11 = arg2;
    int64_t* r9 = arg1;
    i_2 = 0;
    int64_t r14 = r11;
    int64_t var_60 = r10;
    int64_t rbp = r10;
    uint64_t rax;

    if (arg3 > 0)
    {
        rax = r11 - 1;
        uint64_t* r15_1 = nullptr;
        int64_t r10_1 = -1;

        do
        {
            int32_t i = 0;

            if (r11 > 0)
            {
                int64_t* rbx_1 = nullptr;
                int64_t rdi_1 = -1;

                do
                {
                    int64_t* r11_1 = *r9;
                    int64_t rdx = data_140028038;
                    uint64_t rax_2 = *(*(r11_1 + rbx_1) + r15_1);
                    uint32_t rsi_2 = rax_2 >> 0x20;
                    int64_t rcx_2;

                    if (rdi_1 < 0 || r10_1 + 1 < 0 || rdi_1 >= r14 || r10_1 + 1 >= rbp)
                        rcx_2 = rdx;
                    else
                        rcx_2 = *(*(rbx_1 + r11_1 - 0x18) + r15_1);

                    int32_t var_68;
                    var_68 = rcx_2;
                    int32_t r8 = rcx_2 - 1;
                    int32_t var_64;

                    if (var_64 * var_64 + r8 * r8 < rsi_2 * rsi_2 + rax_2 * rax_2)
                        rax_2 = r8;

                    int64_t rcx_6;

                    if (rdi_1 + 1 < 0 || r10_1 < 0 || rdi_1 + 1 >= r14 || r10_1 >= rbp)
                        rcx_6 = rdx;
                    else
                        rcx_6 = *(*(rbx_1 + r11_1) + (r10_1 << 3));

                    var_68 = rcx_6;
                    uint32_t r9_5 = rax_2 >> 0x20;
                    var_64 = (rcx_6 >> 0x20) - 1;

                    if (var_68 * var_68 + ((rcx_6 >> 0x20) - 1) * ((rcx_6 >> 0x20) - 1) < r9_5 * r9_5 + rax_2 * rax_2)
                        rax_2 = var_68;

                    int64_t var_58_1;
                    int64_t rcx_14;

                    if (rdi_1 < 0 || r10_1 < 0 || rdi_1 >= r14 || r10_1 >= rbp)
                    {
                        rcx_14 = rdx;
                        var_58_1 = rdx;
                    }
                    else
                    {
                        rcx_14 = *(*(rbx_1 + r11_1 - 0x18) + (r10_1 << 3));
                        var_58_1 = rcx_14;
                    }

                    int32_t rsi_5 = rcx_14 - 1;
                    uint32_t rcx_16 = rax_2 >> 0x20;

                    if ((*var_58_1[4] - 1) * (*var_58_1[4] - 1) + rsi_5 * rsi_5 < rax_2 * rax_2 + rcx_16 * rcx_16)
                        rax_2 = (*var_58_1[4] - 1) << 0x20 | rsi_5;

                    rbp = var_60;

                    if (rdi_1 + 2 >= 0 && r10_1 >= 0 && rdi_1 + 2 < r14 && r10_1 < rbp)
                        rdx = *(*(rbx_1 + r11_1 + 0x18) + (r10_1 << 3));

                    int32_t r9_11 = rdx + 1;
                    uint32_t r8_8 = rax_2 >> 0x20;

                    if ((*rdx[4] - 1) * (*rdx[4] - 1) + r9_11 * r9_11 < r8_8 * r8_8 + rax_2 * rax_2)
                        rax_2 = (*rdx[4] - 1) << 0x20 | r9_11;

                    int64_t rcx_26 = *(rbx_1 + r11_1);
                    i += 1;
                    r11 = arg2;
                    rbx_1 = &rbx_1[3];
                    r9 = arg1;
                    rdi_1 += 1;
                    *(r15_1 + rcx_26) = rax_2;
                } while (i < r11);

                i_4 = i_2;
                rax = r14 - 1;
            }

            uint64_t rdi_5 = rax;

            if (r11 >= 1)
            {
                int64_t* rbx_3 = rax * 0x18;
                uint64_t temp0_1;

                do
                {
                    int64_t** rdx_5 = *r9;
                    int64_t rcx_27 = data_140028038;
                    int64_t** r11_2 = rdx_5;
                    int64_t rax_8;

                    if (rdi_5 >= r14)
                        rax_8 = rcx_27;
                    else
                        rax_8 = *(*(rdx_5 + rbx_3) + r15_1);

                    uint32_t r9_13 = rax_8 >> 0x20;

                    if (rdi_5 + 1 < 0 || r10_1 + 1 < 0 || rdi_5 + 1 >= r14 || r10_1 + 1 >= rbp)
                        r11_2 = rdx_5;
                    else
                        rcx_27 = *(*(rbx_3 + r11_2 + 0x18) + r15_1);

                    i_2 = rcx_27;
                    int32_t rdx_6 = rcx_27 + 1;
                    int64_t rcx_31 = *(rbx_3 + r11_2);
                    r9 = arg1;

                    if (arg4 * arg4 + rdx_6 * rdx_6 < r9_13 * r9_13 + rax_8 * rax_8)
                        rax_8 = rdx_6;

                    rbx_3 -= 0x18;
                    temp0_1 = rdi_5;
                    rdi_5 -= 1;
                    *(r15_1 + rcx_31) = rax_8;
                } while (temp0_1 - 1 >= 0);
                r11 = arg2;
                rax = r14 - 1;
            }

            r9 = arg1;
            i_4 += 1;
            r10_1 += 1;
            i_2 = i_4;
            r15_1 = &r15_1[1];
        } while (i_4 < arg3);

        r10 = arg3;
    }

    int32_t i_1 = r10 - 1;
    i_2 = i_1;

    if (i_1 >= 0)
    {
        int64_t r15_2 = var_60;
        rax = r11 - 1;
        int64_t i_3 = i_1;
        int32_t var_68_1 = rax;
        int64_t r12_1 = i_3 << 3;
        int64_t r8_15 = i_3 + 1;

        do
        {
            int32_t r13_1 = rax;

            if (rax >= 0)
            {
                int64_t rbp_3 = r14;
                int64_t* rdi_6 = r14 * 0x18 + -0xffffffffffffffe8;
                int32_t temp2_1;

                do
                {
                    uint64_t rcx_33 = data_140028038;
                    uint64_t rax_11;
                    int64_t** rsi_7;

                    if (r13_1 >= r11 || i_1 >= r10)
                    {
                        rsi_7 = *r9;
                        rax_11 = rcx_33;
                    }
                    else
                    {
                        rsi_7 = *r9;
                        rax_11 = *(*(rsi_7 + rdi_6) + r12_1);
                    }

                    uint32_t r10_3 = rax_11 >> 0x20;
                    int64_t** rbx_4 = rsi_7;
                    uint64_t rdx_10;

                    if (rbp_3 < 0 || r8_15 - 1 < 0 || rbp_3 >= r14 || r8_15 - 1 >= var_60)
                        rdx_10 = rcx_33;
                    else
                        rdx_10 = *(*(rdi_6 + rbx_4 + 0x18) + r12_1);

                    uint64_t var_58_3 = rdx_10;
                    int32_t r9_16 = rdx_10 + 1;
                    var_58_3 = r9_16;
                    int32_t rdx_13 = *var_58_3[4];

                    if (rdx_13 * rdx_13 + r9_16 * r9_16 < r10_3 * r10_3 + rax_11 * rax_11)
                        rax_11 = var_58_3;

                    uint64_t rdx_18;

                    if (rbp_3 - 1 < 0 || r8_15 < 0 || rbp_3 - 1 >= r14 || r8_15 >= var_60)
                        rdx_18 = rcx_33;
                    else
                        rdx_18 = *(*(rdi_6 + rbx_4) + (r8_15 << 3));

                    int32_t r10_6 = rdx_18;
                    uint32_t r11_4 = rax_11 >> 0x20;
                    uint64_t var_58_4;
                    *var_58_4[4] = (rdx_18 >> 0x20) + 1;

                    if (r10_6 * r10_6 + ((rdx_18 >> 0x20) + 1) * ((rdx_18 >> 0x20) + 1) < r11_4 * r11_4 + rax_11 * rax_11)
                        rax_11 = var_58_4;

                    uint64_t var_58_5;
                    uint64_t rdx_24;

                    if (rbp_3 - 2 < 0 || r8_15 < 0 || rbp_3 - 2 >= r14 || r8_15 >= var_60)
                    {
                        rdx_24 = rcx_33;
                        var_58_5 = rcx_33;
                    }
                    else
                    {
                        rdx_24 = *(*(rdi_6 + rbx_4 - 0x18) + (r8_15 << 3));
                        var_58_5 = rdx_24;
                    }

                    int32_t r11_7 = rdx_24 - 1;
                    uint32_t r10_10 = rax_11 >> 0x20;

                    if ((*var_58_5[4] + 1) * (*var_58_5[4] + 1) + r11_7 * r11_7 < r10_10 * r10_10 + rax_11 * rax_11)
                        rax_11 = (*var_58_5[4] + 1) << 0x20 | r11_7;

                    r15_2 = var_60;

                    if (rbp_3 < 0 || r8_15 < 0 || rbp_3 >= r14 || r8_15 >= r15_2)
                        rbx_4 = rsi_7;
                    else
                        rcx_33 = *(*(rdi_6 + rbx_4 + 0x18) + (r8_15 << 3));

                    int32_t r10_13 = rcx_33 + 1;
                    uint32_t r9_24 = rax_11 >> 0x20;

                    if ((*rcx_33[4] + 1) * (*rcx_33[4] + 1) + r10_13 * r10_13 < r9_24 * r9_24 + rax_11 * rax_11)
                        rax_11 = (*rcx_33[4] + 1) << 0x20 | r10_13;

                    int64_t rcx_39 = *(rdi_6 + rbx_4);
                    rdi_6 -= 0x18;
                    temp2_1 = r13_1;
                    r13_1 -= 1;
                    rbp_3 -= 1;
                    i_1 = i_2;
                    r9 = arg1;
                    r11 = arg2;
                    r10 = arg3;
                    *(r12_1 + rcx_39) = rax_11;
                } while (temp2_1 - 1 >= 0);
            }

            int64_t rsi_8 = 0;

            if (r14 > 0)
            {
                int64_t* r11_10 = nullptr;

                do
                {
                    int64_t rcx_41 = data_140028038;
                    int64_t** rdx_33 = *arg1;
                    int64_t** r10_14 = rdx_33;
                    int64_t rax_17;

                    if (i_1 >= r10)
                        rax_17 = rcx_41;
                    else
                        rax_17 = *(*(rdx_33 + r11_10) + r12_1);

                    uint32_t r9_28 = rax_17 >> 0x20;

                    if (rsi_8 - 1 < 0 || r8_15 - 1 < 0 || rsi_8 - 1 >= r14 || r8_15 - 1 >= r15_2)
                        r10_14 = rdx_33;
                    else
                        rcx_41 = *(*(r11_10 + r10_14 - 0x18) + r12_1);

                    int64_t var_58_7 = rcx_41;
                    int32_t rdx_34 = rcx_41 - 1;
                    var_58_7 = rdx_34;
                    int32_t rcx_44 = *var_58_7[4];
                    i_1 = i_2;
                    int64_t rcx_47 = *(r11_10 + r10_14);
                    r10 = arg3;

                    if (rcx_44 * rcx_44 + rdx_34 * rdx_34 < r9_28 * r9_28 + rax_17 * rax_17)
                        rax_17 = var_58_7;

                    rsi_8 += 1;
                    r11_10 = &r11_10[3];
                    *(r12_1 + rcx_47) = rax_17;
                } while (rsi_8 < r14);
            }

            r9 = arg1;
            i_1 -= 1;
            rax = var_68_1;
            r8_15 -= 1;
            r11 = arg2;
            r12_1 -= 8;
            r10 = arg3;
            i_2 = i_1;
        } while (i_1 >= 0);
    }
}

int64_t sub_140013970(int64_t* arg1, int64_t* arg2)
{
    uint128_t zmm6;
    uint128_t var_38 = zmm6;
    void var_b8;
    int64_t rax_1 = __security_cookie ^ &var_b8;
    int64_t result = arg1[1];
    int32_t var_98 = result;
    int64_t r13 = arg1[2];
    int64_t var_80_1;

    if (arg2[1] == result)
        var_80_1 = r13;

    if (arg2[1] != result || arg2[2] != r13)
        result = 0;
    else
    {
        int128_t s_1;
        __builtin_memset(&s_1, 0, 0x18);
        int32_t r9;

        if (result)
            r9 = sub_14001c9e0(&s_1, result);

        void* rbx_1 = s_1;
        int64_t i;

        if (rbx_1 != i)
        {
            int64_t* rbx_2 = rbx_1 + 8;
            r13 = var_80_1;

            do
            {
                int64_t rdi_1 = *rbx_2;
                int64_t rdx_1 = rbx_2[-1];
                int64_t rcx_3 = (rdi_1 - rdx_1) >> 3;

                if (r13 < rcx_3)
                    *rbx_2 = rdx_1 + (r13 << 3);
                else if (r13 > rcx_3)
                {
                    if (r13 <= (rbx_2[1] - rdx_1) >> 3)
                    {
                        int64_t rsi_2 = r13 - rcx_3;

                        if (r13 != rcx_3)
                        {
                            r9 = memset(rdi_1, 0, rsi_2 << 3);
                            rdi_1 += rsi_2 << 3;
                        }

                        *rbx_2 = rdi_1;
                    }
                    else
                        r9 = sub_14001c870(&rbx_2[-1], r13);
                }

                rbx_2 = &rbx_2[3];
            } while (&rbx_2[-1] != i);
        }

        int128_t s;
        __builtin_memset(&s, 0, 0x18);

        if (result)
            r9 = sub_14001c9e0(&s, result);

        int64_t i_1 = *s[8];
        void* rbx_3 = s;

        if (rbx_3 != i_1)
        {
            int64_t* rbx_4 = rbx_3 + 8;
            r13 = var_80_1;

            do
            {
                int64_t rdi_2 = *rbx_4;
                int64_t rdx_4 = rbx_4[-1];
                int64_t rcx_9 = (rdi_2 - rdx_4) >> 3;

                if (r13 < rcx_9)
                    *rbx_4 = rdx_4 + (r13 << 3);
                else if (r13 > rcx_9)
                {
                    if (r13 <= (rbx_4[1] - rdx_4) >> 3)
                    {
                        int64_t rsi_4 = r13 - rcx_9;

                        if (r13 != rcx_9)
                        {
                            r9 = memset(rdi_2, 0, rsi_4 << 3);
                            rdi_2 += rsi_4 << 3;
                        }

                        *rbx_4 = rdi_2;
                    }
                    else
                        r9 = sub_14001c870(&rbx_4[-1], r13);
                }

                rbx_4 = &rbx_4[3];
            } while (&rbx_4[-1] != i_1);
        }

        int64_t r12_2 = r13;

        if (r13 <= 0)
            sub_1400132e0(&s, var_98, r13, sub_1400132e0(&s_1, var_98, r13, r9));
        else
        {
            int64_t r9_1 = 0;

            do
            {
                int64_t r8_3 = 0;

                if (result > 0)
                {
                    int64_t rdx_6 = 0;

                    do
                    {
                        int64_t* rax_16;

                        if (!*(*arg1 + ((arg1[1] * r9_1 + r8_3) << 1)))
                        {
                            *(*(s_1 + rdx_6) + (r9_1 << 3)) = 0;
                            rax_16 = s;
                        }
                        else
                        {
                            *(*(s + rdx_6) + (r9_1 << 3)) = 0;
                            rax_16 = s_1;
                        }

                        *(*(rax_16 + rdx_6) + (r9_1 << 3)) = data_140028038;
                        r8_3 += 1;
                        rdx_6 += 0x18;
                    } while (r8_3 < result);
                }

                r9_1 += 1;
            } while (r9_1 < r12_2);

            sub_1400132e0(&s, var_98, r13, sub_1400132e0(&s_1, var_98, r13, r9_1));
            int64_t r14_1 = 0;

            do
            {
                int64_t i_2 = 0;
                uint128_t zmm0;
                uint128_t zmm1;

                if (result >= 4)
                {
                    var_98 = 2;
                    int64_t r13_1 = 0;

                    do
                    {
                        int64_t rbx_5;

                        if (i_2 < 0 || i_2 >= result)
                        {
                            rbx_5 = data_140028038;
                            uint32_t rcx_22 = rbx_5 >> 0x20;
                            zmm1 = _mm_cvtepi32_ps(rbx_5 * rbx_5 + rcx_22 * rcx_22);

                            if ({0} > zmm1)
                                zmm6 = sqrtf(zmm1);
                            else
                                zmm6 = _mm_sqrt_ss(0, zmm1);

                            if (i_2 >= 0 && i_2 < result)
                                rbx_5 = *(*(s + r13_1) + (r14_1 << 3));
                        }
                        else
                        {
                            int64_t rax_21 = *(*(s_1 + r13_1) + (r14_1 << 3));
                            uint32_t rcx_19 = rax_21 >> 0x20;
                            zmm1 = _mm_cvtepi32_ps(rax_21 * rax_21 + rcx_19 * rcx_19);

                            if ({0} > zmm1)
                                zmm6 = sqrtf(zmm1);
                            else
                                zmm6 = _mm_sqrt_ss({0}, zmm1);

                            rbx_5 = *(*(s + r13_1) + (r14_1 << 3));
                        }

                        int64_t r12_3 = *arg2;
                        uint32_t rax_30 = rbx_5 >> 0x20;
                        int64_t rsi_7 = arg2[1] * r14_1 + i_2;
                        zmm1 = _mm_cvtepi32_ps(rax_30 * rax_30 + rbx_5 * rbx_5);

                        if (0f > zmm1)
                            zmm0 = sqrtf(zmm1);
                        else
                            zmm0 = _mm_sqrt_ss(0, zmm1);

                        zmm6 = zmm6 - zmm0;
                        *(r12_3 + (rsi_7 << 2)) = zmm6;
                        int64_t rsi_8 = var_98;
                        int64_t rbx_8;

                        if (rsi_8 - 1 < 0 || rsi_8 - 1 >= result)
                        {
                            rbx_8 = data_140028038;
                            uint32_t rcx_29 = rbx_8 >> 0x20;
                            zmm1 = _mm_cvtepi32_ps(rbx_8 * rbx_8 + rcx_29 * rcx_29);

                            if ({0} > zmm1)
                                zmm6 = sqrtf(zmm1);
                            else
                                zmm6 = _mm_sqrt_ss(0, zmm1);

                            if (rsi_8 - 1 >= 0 && rsi_8 - 1 < result)
                                rbx_8 = *(*(s + r13_1 + 0x18) + (r14_1 << 3));
                        }
                        else
                        {
                            int64_t rax_35 = *(*(s_1 + r13_1 + 0x18) + (r14_1 << 3));
                            uint32_t rcx_25 = rax_35 >> 0x20;
                            zmm1 = _mm_cvtepi32_ps(rcx_25 * rcx_25 + rax_35 * rax_35);

                            if ({0} > zmm1)
                                zmm6 = sqrtf(zmm1);
                            else
                                zmm6 = _mm_sqrt_ss(0, zmm1);

                            rbx_8 = *(*(s + r13_1 + 0x18) + (r14_1 << 3));
                        }

                        int64_t r12_4 = *arg2;
                        uint32_t rax_43 = rbx_8 >> 0x20;
                        int64_t rsi_12 = arg2[1] * r14_1 + i_2;
                        zmm1 = _mm_cvtepi32_ps(rax_43 * rax_43 + rbx_8 * rbx_8);

                        if (0f > zmm1)
                            zmm0 = sqrtf(zmm1);
                        else
                            zmm0 = _mm_sqrt_ss(0, zmm1);

                        zmm6 = zmm6 - zmm0;
                        *(r12_4 + (rsi_12 << 2) + 4) = zmm6;
                        int64_t rsi_13 = var_98;
                        int64_t rbx_11;

                        if (rsi_13 < 0 || rsi_13 >= result)
                        {
                            rbx_11 = data_140028038;
                            uint32_t rcx_35 = rbx_11 >> 0x20;
                            zmm1 = _mm_cvtepi32_ps(rbx_11 * rbx_11 + rcx_35 * rcx_35);

                            if ({0} > zmm1)
                                zmm6 = sqrtf(zmm1);
                            else
                                zmm6 = _mm_sqrt_ss(0, zmm1);

                            if (rsi_13 >= 0 && rsi_13 < result)
                                rbx_11 = *(*(s + r13_1 + 0x30) + (r14_1 << 3));
                        }
                        else
                        {
                            int64_t rax_48 = *(*(s_1 + r13_1 + 0x30) + (r14_1 << 3));
                            uint32_t rcx_32 = rax_48 >> 0x20;
                            zmm1 = _mm_cvtepi32_ps(rax_48 * rax_48 + rcx_32 * rcx_32);

                            if ({0} > zmm1)
                                zmm6 = sqrtf(zmm1);
                            else
                                zmm6 = _mm_sqrt_ss(0, zmm1);

                            rbx_11 = *(*(s + r13_1 + 0x30) + (r14_1 << 3));
                        }

                        int64_t r12_5 = *arg2;
                        int64_t rsi_14 = arg2[1];
                        uint32_t rax_57 = rbx_11 >> 0x20;
                        zmm1 = _mm_cvtepi32_ps(rax_57 * rax_57 + rbx_11 * rbx_11);

                        if (0f > zmm1)
                            zmm0 = sqrtf(zmm1);
                        else
                            zmm0 = _mm_sqrt_ss(0, zmm1);

                        zmm6 = zmm6 - zmm0;
                        *(r12_5 + ((rsi_14 * r14_1 + i_2) << 2) + 8) = zmm6;
                        int64_t r12_6 = var_98;
                        int64_t rbx_14 = data_140028038;
                        int64_t rax_62;

                        if (r12_6 + 1 < 0 || r12_6 + 1 >= result)
                            rax_62 = rbx_14;
                        else
                            rax_62 = *(*(s_1 + r13_1 + 0x48) + (r14_1 << 3));

                        uint32_t rcx_38 = rax_62 >> 0x20;
                        zmm1 = _mm_cvtepi32_ps(rax_62 * rax_62 + rcx_38 * rcx_38);

                        if ({0} > zmm1)
                            zmm6 = sqrtf(zmm1);
                        else
                            zmm6 = _mm_sqrt_ss(0, zmm1);

                        if (r12_6 + 1 >= 0 && r12_6 + 1 < result)
                            rbx_14 = *(*(s + r13_1 + 0x48) + (r14_1 << 3));

                        uint32_t rax_67 = rbx_14 >> 0x20;
                        zmm1 = _mm_cvtepi32_ps(rbx_14 * rbx_14 + rax_67 * rax_67);

                        if (0f > zmm1)
                            zmm0 = sqrtf(zmm1);
                        else
                            zmm0 = _mm_sqrt_ss(0, zmm1);

                        zmm6 = zmm6 - zmm0;
                        *(*arg2 + ((arg2[1] * r14_1 + i_2) << 2) + 0xc) = zmm6;
                        i_2 += 4;
                        r13_1 += 0x60;
                        var_98 = r12_6 + 4;
                    } while (i_2 < result - 3);

                    r12_2 = var_80_1;
                }

                if (i_2 < result)
                {
                    int64_t rsi_19 = i_2 * 0x18;

                    do
                    {
                        int64_t rbx_19 = data_140028038;
                        int64_t rax_74;

                        if (i_2 < 0)
                            rax_74 = rbx_19;
                        else
                            rax_74 = *(*(rsi_19 + s_1) + (r14_1 << 3));

                        uint32_t rcx_42 = rax_74 >> 0x20;
                        zmm1 = _mm_cvtepi32_ps(rax_74 * rax_74 + rcx_42 * rcx_42);

                        if ({0} > zmm1)
                            zmm6 = sqrtf(zmm1);
                        else
                            zmm6 = _mm_sqrt_ss(0, zmm1);

                        if (i_2 >= 0)
                            rbx_19 = *(*(rsi_19 + s) + (r14_1 << 3));

                        uint32_t rax_79 = rbx_19 >> 0x20;
                        zmm1 = _mm_cvtepi32_ps(rbx_19 * rbx_19 + rax_79 * rax_79);

                        if (0f > zmm1)
                            zmm0 = sqrtf(zmm1);
                        else
                            zmm0 = _mm_sqrt_ss(0, zmm1);

                        zmm6 = zmm6 - zmm0;
                        *(*arg2 + ((arg2[1] * r14_1 + i_2) << 2)) = zmm6;
                        i_2 += 1;
                        rsi_19 += 0x18;
                    } while (i_2 < result);
                }

                r14_1 += 1;
            } while (r14_1 < r12_2);
        }

        int64_t* rcx_47 = s;

        if (rcx_47)
        {
            sub_14001b340(rcx_47, *s[8]);
            void* r8_8 = s;
            void* rax_87 = r8_8;
            int64_t var_68;

            if ((var_68 - r8_8) / 0x18 * 0x18 >= 0x1000)
            {
                r8_8 = *(r8_8 - 8);

                if (rax_87 - r8_8 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(r8_8);
            __builtin_memset(&s, 0, 0x18);
        }

        int64_t* rcx_51 = s_1;

        if (rcx_51)
        {
            sub_14001b340(rcx_51, i);
            void* r8_9 = s_1;
            void* rax_93 = r8_9;
            int64_t var_50;

            if ((var_50 - r8_9) / 0x18 * 0x18 >= 0x1000)
            {
                r8_9 = *(r8_9 - 8);

                if (rax_93 - r8_9 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(r8_9);
        }

        result = 1;
    }

    __security_check_cookie(rax_1 ^ &var_b8);
    return result;
}

void sub_1400141b0(int64_t* arg1)
{
    int64_t* rcx = *arg1;

    if (rcx)
    {
        sub_14001b340(rcx, arg1[1]);
        void* rcx_1 = *arg1;
        int64_t rax_1;
        int64_t rdx_4;
        rdx_4 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - rcx_1));
        rax_1 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - rcx_1));
        int64_t rdx_5 = rdx_4 >> 2;

        if ((rdx_5 + (rdx_5 >> 0x3f)) * 0x18 >= 0x1000)
        {
            void* r8_1 = *(rcx_1 - 8);

            if (rcx_1 - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx_1 = r8_1;
        }

        sub_14001e5e4(rcx_1);
        __builtin_memset(arg1, 0, 0x18);
    }
}

void sub_140014240() __noreturn
{
    std::_Xlength_error("map/set too long");
    /* no return */
}

struct std::exception::cmdline::cmdline_error::VTable** sub_140014260(struct std::exception::cmdline::cmdline_error::VTable** arg1, int64_t* arg2)
{
    arg_8 = arg1;
    *(arg1 + 8) = {0};
    *arg1 = &cmdline::cmdline_error::`vftable'{for `std::exception'};
    sub_140019960(&arg1[3], arg2);
    return arg1;
}

int64_t sub_1400142a0(struct std::exception::cmdline::cmdline_error::VTable** arg1)
{
    *arg1 = &cmdline::cmdline_error::`vftable'{for `std::exception'};
    int64_t rdx = arg1[6];

    if (rdx >= 0x10)
    {
        void* rcx = arg1[3];

        if (rdx + 1 >= 0x1000)
        {
            void* r8_1 = *(rcx - 8);

            if (rcx - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx = r8_1;
        }

        sub_14001e5e4(rcx);
    }

    arg1[5] = 0;
    arg1[6] = 0xf;
    arg1[3] = 0;
    *arg1 = &std::exception::`vftable';
    /* tailcall */
    return __std_exception_destroy(&arg1[1]);
}

int64_t* sub_140014320(void* arg1)
{
    int64_t* result = arg1 + 0x18;

    if (*(arg1 + 0x30) < 0x10)
        return result;

    return *result;
}

struct std::exception::cmdline::cmdline_error::VTable** sub_140014330(struct std::exception::cmdline::cmdline_error::VTable** arg1, char arg2)
{
    *arg1 = &cmdline::cmdline_error::`vftable'{for `std::exception'};
    int64_t rdx = arg1[6];

    if (rdx >= 0x10)
    {
        void* rcx = arg1[3];

        if (rdx + 1 >= 0x1000)
        {
            void* r8_1 = *(rcx - 8);

            if (rcx - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx = r8_1;
        }

        sub_14001e5e4(rcx);
    }

    arg1[5] = 0;
    arg1[6] = 0xf;
    arg1[3] = 0;
    *arg1 = &std::exception::`vftable';
    __std_exception_destroy(&arg1[1]);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

int64_t sub_1400143d0(int64_t* arg1)
{
    int64_t* rax = *arg1;
    int64_t* i = *rax;

    if (i != rax)
    {
        do
        {
            int64_t* rcx = i[8];

            if (rcx)
                (**rcx)();

            int64_t* i_1 = i[2];

            if (!*(i_1 + 0x19))
            {
                int64_t* i_3 = *i_1;
                i = i_1;

                if (!*(i_3 + 0x19))
                {
                    int64_t* i_4;

                    do
                    {
                        i_4 = *i_3;
                        i = i_3;
                        i_3 = i_4;
                    } while (!*(i_4 + 0x19));
                }
            }
            else
            {
                int64_t* i_2 = i[1];

                if (!*(i_2 + 0x19))
                {
                    while (i == i_2[2])
                    {
                        i = i_2;
                        i_2 = i_2[1];

                        if (*(i_2 + 0x19))
                            break;
                    }
                }

                i = i_2;
            }
        } while (i != *arg1);
    }

    int64_t* rcx_1 = arg1[0x10];

    if (!rcx_1)
        goto label_1400144c2;

    sub_14001afc0(rcx_1, arg1[0x11]);
    void* rcx_2 = arg1[0x10];

    if (((arg1[0x12] - rcx_2) & 0xffffffffffffffe0) < 0x1000)
        goto label_1400144a8;

    void* r8_1 = *(rcx_2 - 8);

    if (rcx_2 - r8_1 - 8 <= 0x1f)
    {
        rcx_2 = r8_1;
        label_1400144a8:
        sub_14001e5e4(rcx_2);
        __builtin_memset(&arg1[0x10], 0, 0x18);
        label_1400144c2:
        int64_t* rcx_4 = arg1[0xd];

        if (!rcx_4)
            goto label_140014519;

        sub_14001afc0(rcx_4, arg1[0xe]);
        void* rcx_5 = arg1[0xd];

        if (((arg1[0xf] - rcx_5) & 0xffffffffffffffe0) < 0x1000)
            goto label_140014508;

        void* r8_2 = *(rcx_5 - 8);

        if (rcx_5 - r8_2 - 8 <= 0x1f)
        {
            rcx_5 = r8_2;
            label_140014508:
            sub_14001e5e4(rcx_5);
            __builtin_memset(&arg1[0xd], 0, 0x18);
            label_140014519:
            int64_t rdx_11 = arg1[0xc];

            if (rdx_11 < 0x10)
                goto label_140014554;

            void* rcx_7 = arg1[9];

            if (rdx_11 + 1 < 0x1000)
                goto label_14001454f;

            void* r8_3 = *(rcx_7 - 8);

            if (rcx_7 - r8_3 - 8 <= 0x1f)
            {
                rcx_7 = r8_3;
                label_14001454f:
                sub_14001e5e4(rcx_7);
                label_140014554:
                arg1[0xb] = 0;
                arg1[0xc] = 0xf;
                arg1[9] = 0;
                int64_t rdx_14 = arg1[8];

                if (rdx_14 < 0x10)
                    goto label_14001459e;

                void* rcx_9 = arg1[5];

                if (rdx_14 + 1 < 0x1000)
                    goto label_140014599;

                void* r8_4 = *(rcx_9 - 8);

                if (rcx_9 - r8_4 - 8 <= 0x1f)
                {
                    rcx_9 = r8_4;
                    label_140014599:
                    sub_14001e5e4(rcx_9);
                    label_14001459e:
                    arg1[7] = 0;
                    arg1[8] = 0xf;
                    arg1[5] = 0;
                    void* rcx_11 = arg1[2];

                    if (!rcx_11)
                    {
                        sub_14001c7b0(arg1, arg1, *(*arg1 + 8));
                        /* tailcall */
                        return sub_14001e5e4(*arg1);
                    }

                    if (((arg1[4] - rcx_11) & 0xfffffffffffffff8) < 0x1000)
                        goto label_1400145e2;

                    void* r8_5 = *(rcx_11 - 8);

                    if (rcx_11 - r8_5 - 8 <= 0x1f)
                    {
                        rcx_11 = r8_5;
                        label_1400145e2:
                        sub_14001e5e4(rcx_11);
                        __builtin_memset(&arg1[2], 0, 0x18);
                        sub_14001c7b0(arg1, arg1, *(*arg1 + 8));
                        /* tailcall */
                        return sub_14001e5e4(*arg1);
                    }
                }
            }
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

int64_t* sub_140014630(int64_t* arg1, int32_t arg2, int64_t* arg3)
{
    void var_1a8;
    int64_t rax_1 = __security_cookie ^ &var_1a8;
    int64_t* i_2 = arg3;
    int64_t* rdi = arg1;
    int64_t* var_160 = arg1;
    int32_t rsi = 0;
    int32_t var_168 = 0;
    sub_14001afc0(arg1[0x10], arg1[0x11]);
    arg1[0x11] = arg1[0x10];
    sub_14001afc0(rdi[0xd], rdi[0xe]);
    rdi[0xe] = rdi[0xd];
    int64_t* result;
    char var_158;

    if (arg2 >= 1)
    {
        if (!rdi[0xb])
        {
            char* rdx_4 = *arg3;
            char* r8_1 = -ffffffffffffffff;

            do
                r8_1 = &r8_1[1];
             while (*(rdx_4 + r8_1));

            sub_140019e40(&rdi[9], rdx_4, r8_1);
        }

        int128_t var_70 = {0};
        var_70 = 0;
        *var_70[8] = 0;
        int64_t* rax_7 = operator new(0x48);
        *rax_7 = rax_7;
        rax_7[1] = rax_7;
        rax_7[2] = rax_7;
        rax_7[3] = 0x101;
        var_70 = rax_7;
        int64_t** rcx_6 = *rdi;
        int64_t* i_1 = *rcx_6;
        int64_t r13_1 = 0xf;
        int128_t* var_128;
        char var_98;
        char var_60;
        int64_t var_50;
        int64_t var_48;
        uint128_t zmm1;

        if (i_1 == rcx_6)
        {
            label_14001496f:
            int32_t r14_2 = 1;
            int128_t var_108;
            int128_t var_e8;

            if (arg2 > 1)
            {
                int64_t r12_1 = 1;

                do
                {
                    i_1 = i_2;
                    int32_t rax_13 = strncmp(i_1[r12_1], "--", 2);
                    char* _Str1 = i_1[r12_1];

                    if (rax_13)
                    {
                        int32_t rax_55;
                        void** rcx_45;
                        rax_55 = strncmp(_Str1, U"-", 1);
                        char* r8_20 = i_1[r12_1];

                        if (rax_55)
                        {
                            sub_140019920(&var_60, r8_20);
                            sub_1400195e0(&rdi[0xd], &var_60);
                            sub_1400198c0(&var_60);
                        }
                        else
                        {
                            char rdx_40 = r8_20[1];

                            if (rdx_40)
                            {
                                char var_a8 = rdx_40;
                                int32_t rsi_2 = 2;
                                void* rdi_2 = 2;

                                if (r8_20[2] != rax_55)
                                {
                                    char* rax_56 = r8_20;

                                    do
                                    {
                                        void* r9_2 = rdi_2 + rax_56;
                                        var_a8 = *r9_2;
                                        void** rcx_46 = var_70;
                                        void** rax_58 = rcx_46[1];

                                        while (!*(rax_58 + 0x19))
                                        {
                                            if (rax_58[4] >= *(r9_2 - 1))
                                            {
                                                rcx_46 = rax_58;
                                                rax_58 = *rax_58;
                                            }
                                            else
                                                rax_58 = rax_58[2];
                                        }

                                        if (*(rcx_46 + 0x19) || *(r9_2 - 1) < rcx_46[4])
                                            rax_58 = 0;
                                        else
                                            rax_58 = 1;

                                        if (rax_58)
                                        {
                                            int64_t rbx_3 = rsi_2;
                                            void* rax_65;

                                            if (*(sub_140019460(&var_70, r8_20 - 1 + rbx_3) + 0x10))
                                                rax_65 = 0;
                                            else
                                                rax_65 = 1;

                                            if (!rax_65)
                                            {
                                                int64_t* rax_74 = sub_140019460(&var_70, rbx_3 - 1 + i_2[r12_1]);
                                                sub_1400160e0(var_160, rax_74);
                                                i_1 = i_2;
                                            }
                                            else
                                            {
                                                void* var_88_6 = nullptr;
                                                int64_t var_80_6 = 0xf;
                                                var_98 = 0;
                                                int64_t r8_23 = sub_140019e40(&var_98, "ambiguous short option: -", 0x19);
                                                i_1 = i_2;
                                                char r9_4 = *(i_1[r12_1] + rdi_2 - 1);
                                                rcx_45 = var_88_6;

                                                if (rcx_45 >= var_80_6)
                                                    sub_14001b050(&var_98, var_80_6, r8_23, r9_4);
                                                else
                                                {
                                                    var_88_6 = rcx_45 + 1;
                                                    char* rax_68 = &var_98;

                                                    if (var_80_6 >= 0x10)
                                                        rax_68 = var_98;

                                                    *(rax_68 + rcx_45) = r9_4;
                                                    *(rax_68 + rcx_45 + 1) = 0;
                                                }

                                                int128_t zmm0_10 = var_98;
                                                var_108 = zmm0_10;
                                                zmm1 = var_88_6;
                                                int64_t var_88_7 = 0;
                                                int64_t var_80_7 = 0xf;
                                                var_98 = 0;
                                                var_168 |= 0x20;
                                                int128_t* rdx_49 = arg1[0x11];
                                                int64_t rdx_50;

                                                if (rdx_49 == arg1[0x12])
                                                {
                                                    sub_14001ab60(&arg1[0x10], rdx_49, &var_108);
                                                    rdx_50 = *zmm1[8];
                                                }
                                                else
                                                {
                                                    *rdx_49 = zmm0_10;
                                                    rdx_49[1] = zmm1;
                                                    rdx_50 = 0xf;
                                                    var_108 = 0;
                                                    arg1[0x11] += 0x20;
                                                }

                                                if (rdx_50 >= 0x10)
                                                {
                                                    void* rcx_55 = var_108;
                                                    void* rax_69 = rcx_55;

                                                    if (rdx_50 + 1 >= 0x1000)
                                                    {
                                                        rcx_55 = *(rcx_55 - 8);

                                                        if (rax_69 - rcx_55 - 8 > 0x1f)
                                                        {
                                                            _invalid_parameter_noinfo_noreturn();
                                                            /* no return */
                                                        }
                                                    }

                                                    sub_14001e5e4(rcx_55);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            void* var_88_4 = nullptr;
                                            int64_t var_80_4 = 0xf;
                                            var_98 = rax_58;
                                            int64_t r8_21 = sub_140019e40(&var_98, "undefined short option: -", 0x19);
                                            char r9_3 = *(i_1[r12_1] + rdi_2 - 1);
                                            rcx_45 = var_88_4;

                                            if (rcx_45 >= var_80_4)
                                                sub_14001b050(&var_98, var_80_4, r8_21, r9_3);
                                            else
                                            {
                                                var_88_4 = rcx_45 + 1;
                                                char* rax_61 = &var_98;

                                                if (var_80_4 >= 0x10)
                                                    rax_61 = var_98;

                                                *(rax_61 + rcx_45) = r9_3;
                                                *(rax_61 + rcx_45 + 1) = 0;
                                            }

                                            int128_t zmm0_9 = var_98;
                                            int128_t var_c8 = zmm0_9;
                                            zmm1 = var_88_4;
                                            int64_t var_88_5 = 0;
                                            int64_t var_80_5 = 0xf;
                                            var_98 = 0;
                                            var_168 |= 0x10;
                                            int128_t* rdx_43 = arg1[0x11];
                                            int64_t rdx_44;

                                            if (rdx_43 == arg1[0x12])
                                            {
                                                sub_14001ab60(&arg1[0x10], rdx_43, &var_c8);
                                                rdx_44 = *zmm1[8];
                                            }
                                            else
                                            {
                                                *rdx_43 = zmm0_9;
                                                rdx_43[1] = zmm1;
                                                rdx_44 = 0xf;
                                                var_c8 = 0;
                                                arg1[0x11] += 0x20;
                                            }

                                            if (rdx_44 >= 0x10)
                                            {
                                                void* rcx_50 = var_c8;
                                                void* rax_62 = rcx_50;

                                                if (rdx_44 + 1 >= 0x1000)
                                                {
                                                    rcx_50 = *(rcx_50 - 8);

                                                    if (rax_62 - rcx_50 - 8 > 0x1f)
                                                    {
                                                        _invalid_parameter_noinfo_noreturn();
                                                        /* no return */
                                                    }
                                                }

                                                sub_14001e5e4(rcx_50);
                                            }
                                        }

                                        rsi_2 += 1;
                                        rdi_2 += 1;
                                        r8_20 = i_1[r12_1];
                                        rax_56 = r8_20;
                                    } while (*(r8_20 + rdi_2));

                                    rdx_40 = var_a8;
                                }

                                void** rdi_3 = var_70;
                                void** rax_75 = rdi_3[1];
                                void** r8_25 = rdi_3;
                                char r9_5 = *(rax_75 + 0x19);

                                if (!r9_5)
                                {
                                    rcx_45 = rax_75;

                                    do
                                    {
                                        if (rcx_45[4] >= rdx_40)
                                        {
                                            r8_25 = rcx_45;
                                            rcx_45 = *rcx_45;
                                        }
                                        else
                                            rcx_45 = rcx_45[2];
                                    } while (!*(rcx_45 + 0x19));
                                }

                                if (*(r8_25 + 0x19) || rdx_40 < r8_25[4])
                                    rcx_45 = 0;
                                else
                                    rcx_45 = 1;

                                if (rcx_45)
                                {
                                    var_98 = rax_75;
                                    int32_t var_90_1 = 0;
                                    void** rcx_62 = rdi_3;

                                    if (!r9_5)
                                    {
                                        do
                                        {
                                            var_98 = rax_75;

                                            if (rax_75[4] >= rdx_40)
                                            {
                                                int32_t var_90_3 = 1;
                                                rcx_62 = rax_75;
                                                rax_75 = *rax_75;
                                            }
                                            else
                                            {
                                                int32_t var_90_2 = 0;
                                                rax_75 = rax_75[2];
                                            }
                                        } while (!*(rax_75 + 0x19));
                                    }

                                    if (*(rcx_62 + 0x19) || rdx_40 < rcx_62[4])
                                    {
                                        if (*var_70[8] == 0x38e38e38e38e38e)
                                        {
                                            sub_140014240();
                                            /* no return */
                                        }

                                        var_128 = &var_70;
                                        int64_t var_120_4 = 0;
                                        int64_t* rax_81 = operator new(0x48);
                                        rax_81[4] = var_a8;
                                        rax_81[7] = 0;
                                        rax_81[8] = 0xf;
                                        rax_81[5] = 0;
                                        *rax_81 = rdi_3;
                                        rax_81[1] = rdi_3;
                                        rax_81[2] = rdi_3;
                                        rax_81[3] = 0;
                                        int64_t var_120_5 = 0;
                                        sub_14001bec0(&var_128);
                                        var_98 = var_98;
                                        rcx_62 = sub_14001bb20(&var_70, &var_98, rax_81);
                                    }

                                    if (!sub_14001a5e0(&rcx_62[5]))
                                    {
                                        i_1 = r14_2 + 1;

                                        if (i_1 >= arg2)
                                        {
                                            rdi = var_160;
                                            sub_1400160e0(rdi, sub_140019460(&var_70, &var_a8));
                                            rsi = var_168;
                                        }
                                        else
                                        {
                                            int64_t* rax_87 = sub_140019460(&var_70, &var_a8);
                                            rdi = var_160;
                                            int64_t* rcx_73 = *sub_1400196a0(rdi, rax_87);

                                            if (!(*(*rcx_73 + 8))(rcx_73))
                                            {
                                                sub_1400160e0(rdi, sub_140019460(&var_70, &var_a8));
                                                rsi = var_168;
                                            }
                                            else
                                            {
                                                r12_1 += 1;
                                                sub_140019920(&var_60, i_2[r12_1]);
                                                sub_1400162d0(rdi, sub_140019460(&var_70, &var_a8), &var_60);
                                                sub_1400198c0(&var_60);
                                                r14_2 = i_1;
                                                rsi = var_168;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        sub_1400195e0(&arg1[0x10], sub_14001a5f0(&var_60, sub_140019920(&var_98, "ambiguous short option: -"), var_a8));
                                        sub_1400198c0(&var_60);
                                        sub_1400198c0(&var_98);
                                        rdi = var_160;
                                        rsi = var_168;
                                    }
                                }
                                else
                                {
                                    int64_t var_88_8 = 0;
                                    int64_t var_80_8 = 0xf;
                                    var_98 = 0;
                                    sub_140019e40(&var_98, "undefined short option: -", 0x19);
                                    int64_t rdx_55 = var_88_8;
                                    char* rcx_59 = &var_98;

                                    if (rdx_55 >= var_80_8)
                                        sub_14001b050(rcx_59, rdx_55, var_80_8, var_a8);
                                    else
                                    {
                                        var_88_8 = rdx_55 + 1;

                                        if (var_80_8 >= 0x10)
                                            rcx_59 = var_98;

                                        rcx_59[rdx_55] = var_a8;
                                        rcx_59[rdx_55 + 1] = 0;
                                    }

                                    int128_t zmm0_11 = var_98;
                                    var_e8 = zmm0_11;
                                    zmm1 = var_88_8;
                                    int64_t var_88_9 = 0;
                                    int64_t var_80_9 = 0xf;
                                    var_98 = 0;
                                    rsi = var_168 | 0x40;
                                    var_168 = rsi;
                                    int128_t* rdx_56 = arg1[0x11];
                                    int64_t rdx_57;

                                    if (rdx_56 == arg1[0x12])
                                    {
                                        sub_14001ab60(&arg1[0x10], rdx_56, &var_e8);
                                        rdx_57 = *zmm1[8];
                                    }
                                    else
                                    {
                                        *rdx_56 = zmm0_11;
                                        rdx_56[1] = zmm1;
                                        rdx_57 = 0xf;
                                        var_e8 = 0;
                                        arg1[0x11] += 0x20;
                                    }

                                    if (rdx_57 >= 0x10)
                                    {
                                        void* rcx_61 = var_e8;
                                        void* rax_78 = rcx_61;

                                        if (rdx_57 + 1 >= 0x1000)
                                        {
                                            rcx_61 = *(rcx_61 - 8);

                                            if (rax_78 - rcx_61 - 8 > 0x1f)
                                            {
                                                _invalid_parameter_noinfo_noreturn();
                                                /* no return */
                                            }
                                        }

                                        sub_14001e5e4(rcx_61);
                                    }

                                    rdi = var_160;
                                }
                            }
                        }
                    }
                    else
                    {
                        char* rax_14 = strchr(&_Str1[2], rax_13 + 0x3d);
                        char* rdx_11 = i_2[r12_1] + 2;
                        void* rcx_17;

                        if (!rax_14)
                        {
                            int64_t var_88_3 = 0;
                            int64_t var_80_3 = 0xf;
                            var_98 = 0;
                            char* r8_12 = -ffffffffffffffff;

                            do
                                r8_12 = &r8_12[1];
                             while (*(rdx_11 + r8_12));

                            sub_140019e40(&var_98, rdx_11, r8_12);
                            int64_t rax_36;
                            int64_t rdx_26;
                            int64_t r8_13;
                            rax_36 = sub_1400196c0(rdi, &var_98);
                            int64_t rdx_28;

                            if (!rax_36)
                            {
                                if (0x7fffffffffffffff - var_88_3 < 0x14)
                                {
                                    sub_1400011e0();
                                    /* no return */
                                }

                                char* rax_38 = &var_98;

                                if (var_80_3 >= 0x10)
                                    rax_38 = var_98;

                                sub_14001bda0(&var_60, rdx_26, r8_13, "undefined option: --", 0x14, rax_38, var_88_3);
                                rsi |= 4;
                                var_168 = rsi;
                                int128_t* rdx_27 = arg1[0x11];

                                if (rdx_27 == arg1[0x12])
                                {
                                    sub_14001ab60(&arg1[0x10], rdx_27, &var_60);
                                    rdx_28 = var_48;
                                }
                                else
                                {
                                    *rdx_27 = var_60;
                                    rdx_27[1] = var_50;
                                    rdx_28 = 0xf;
                                    var_60 = 0;
                                    arg1[0x11] += 0x20;
                                }

                                goto label_140014e16;
                            }

                            int64_t* rcx_38 = *(*sub_14001adf0(rdi, &var_158, &var_98) + 0x40);
                            char rax_47;
                            int64_t rdx_33;
                            int64_t r8_16;
                            rax_47 = (*(*rcx_38 + 8))(rcx_38);

                            if (!rax_47)
                                sub_1400160e0(rdi, &var_98);
                            else
                            {
                                void* rcx_35;

                                if (r14_2 + 1 < arg2)
                                {
                                    r14_2 += 1;
                                    r12_1 += 1;
                                    char* rdx_35 = i_2[r12_1];
                                    var_50 = 0;
                                    var_48 = 0xf;
                                    var_60 = 0;
                                    char* r8_18 = -ffffffffffffffff;

                                    do
                                        r8_18 = &r8_18[1];
                                     while (*(rdx_35 + r8_18));

                                    sub_140019e40(&var_60, rdx_35, r8_18);
                                    sub_1400162d0(rdi, &var_98, &var_60);

                                    if (var_48 >= 0x10)
                                    {
                                        rcx_35 = var_60;
                                        void* rax_52 = rcx_35;

                                        if (var_48 + 1 >= 0x1000)
                                        {
                                            rcx_35 = *(rcx_35 - 8);

                                            if (rax_52 - rcx_35 - 8 > 0x1f)
                                            {
                                                _invalid_parameter_noinfo_noreturn();
                                                /* no return */
                                            }
                                        }

                                        sub_14001e5e4(rcx_35);
                                    }
                                }
                                else
                                {
                                    if (0x7fffffffffffffff - var_88_3 < 0x16)
                                    {
                                        sub_1400011e0();
                                        /* no return */
                                    }

                                    char* rax_50 = &var_98;

                                    if (var_80_3 >= 0x10)
                                        rax_50 = var_98;

                                    sub_14001bda0(&var_60, rdx_33, r8_16, "option needs value: --", 0x16, rax_50, var_88_3);
                                    rsi |= 8;
                                    var_168 = rsi;
                                    int128_t* rdx_34 = arg1[0x11];

                                    if (rdx_34 == arg1[0x12])
                                    {
                                        sub_14001ab60(&arg1[0x10], rdx_34, &var_60);
                                        rdx_28 = var_48;
                                    }
                                    else
                                    {
                                        *rdx_34 = var_60;
                                        rdx_34[1] = var_50;
                                        rdx_28 = 0xf;
                                        var_60 = 0;
                                        arg1[0x11] += 0x20;
                                    }

                                    label_140014e16:

                                    if (rdx_28 >= 0x10)
                                    {
                                        rcx_35 = var_60;
                                        void* rax_39 = rcx_35;

                                        if (rdx_28 + 1 >= 0x1000)
                                        {
                                            rcx_35 = *(rcx_35 - 8);

                                            if (rax_39 - rcx_35 - 8 > 0x1f)
                                            {
                                                _invalid_parameter_noinfo_noreturn();
                                                /* no return */
                                            }
                                        }

                                        sub_14001e5e4(rcx_35);
                                    }
                                }
                            }

                            if (var_80_3 >= 0x10)
                            {
                                rcx_17 = var_98;
                                void* rax_42 = rcx_17;

                                if (var_80_3 + 1 >= 0x1000)
                                {
                                    rcx_17 = *(rcx_17 - 8);

                                    if (rax_42 - rcx_17 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_17);
                            }
                        }
                        else
                        {
                            var_50 = 0;
                            var_48 = 0xf;
                            var_60 = 0;

                            if (rdx_11 != rax_14)
                                sub_140019e40(&var_60, rdx_11, rax_14 - rdx_11);

                            int64_t var_88_1 = 0;
                            int64_t var_80_1 = 0xf;
                            var_98 = 0;
                            char* r8_7 = -ffffffffffffffff;

                            do
                                r8_7 = &r8_7[1];
                             while (*(&rax_14[1] + r8_7));

                            sub_140019e40(&var_98, &rax_14[1], r8_7);
                            sub_1400162d0(rdi, &var_60, &var_98);

                            if (var_80_1 >= 0x10)
                            {
                                void* rcx_16 = var_98;
                                void* rax_15 = rcx_16;

                                if (var_80_1 + 1 >= 0x1000)
                                {
                                    rcx_16 = *(rcx_16 - 8);

                                    if (rax_15 - rcx_16 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_16);
                            }

                            int64_t var_88_2 = 0;
                            int64_t var_80_2 = 0xf;
                            var_98 = 0;

                            if (var_48 >= 0x10)
                            {
                                rcx_17 = var_60;
                                void* rax_18 = rcx_17;

                                if (var_48 + 1 >= 0x1000)
                                {
                                    rcx_17 = *(rcx_17 - 8);

                                    if (rax_18 - rcx_17 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_17);
                            }
                        }
                    }

                    r14_2 += 1;
                    r12_1 += 1;
                } while (r14_2 < arg2);

                rcx_6 = *rdi;
            }

            int64_t* i = *rcx_6;
            i_2 = i;

            if (i != rcx_6)
            {
                do
                {
                    int64_t* rcx_83 = i[8];

                    if (!(*(*rcx_83 + 0x28))(rcx_83))
                    {
                        int64_t* rax_96;
                        int64_t r9_7;
                        rax_96 = sub_140019960(&var_108, &i[4]);
                        sub_1400195e0(&arg1[0x10], sub_14001a460(&var_e8, "need option: --", rax_96, r9_7));
                        sub_1400198c0(&var_e8);
                        sub_1400198c0(&var_108);
                    }

                    sub_140019570(&i_2, &var_160);
                    i = i_2;
                } while (i != *rdi);
            }

            i_1 = arg1[0x11] - arg1[0x10] < 0x20;
        }
        else
        {
            while (true)
            {
                if (i_1[6])
                {
                    int64_t* rcx_7 = i_1[8];
                    char rax_9 = (*(*rcx_7 + 0x40))(rcx_7);

                    if (rax_9)
                    {
                        void** r14_1 = var_70;
                        void** rcx_8 = r14_1[1];
                        void** rax_10 = r14_1;
                        char r8_2 = *(rcx_8 + 0x19);

                        if (!r8_2)
                        {
                            void** rdx_5 = rcx_8;

                            do
                            {
                                if (rdx_5[4] >= rax_9)
                                {
                                    rax_10 = rdx_5;
                                    rdx_5 = *rdx_5;
                                }
                                else
                                    rdx_5 = rdx_5[2];
                            } while (!*(rdx_5 + 0x19));
                        }

                        if (*(rax_10 + 0x19) || rax_9 < rax_10[4])
                            rax_10 = 0;
                        else
                            rax_10 = 1;

                        if (rax_10)
                        {
                            void** rax_21 = rcx_8;
                            var_158 = rcx_8;
                            int32_t var_150_4 = 0;
                            void** rcx_18 = r14_1;

                            while (!*(rax_21 + 0x19))
                            {
                                var_158 = rax_21;

                                if (rax_21[4] >= rax_9)
                                {
                                    int32_t var_150_6 = 1;
                                    rcx_18 = rax_21;
                                    rax_21 = *rax_21;
                                }
                                else
                                {
                                    int32_t var_150_5 = 0;
                                    rax_21 = rax_21[2];
                                }
                            }

                            if (!*(rcx_18 + 0x19) && rax_9 >= rcx_18[4])
                                goto label_140014b8b;

                            if (*var_70[8] == 0x38e38e38e38e38e)
                            {
                                sub_140014240();
                                /* no return */
                            }

                            var_128 = &var_70;
                            int64_t var_120_3 = 0;
                            void** rax_22 = operator new(0x48);
                            rax_22[4] = rax_9;
                            rax_22[7] = 0;
                            rax_22[8] = 0xf;
                            rax_22[5] = 0;
                            *rax_22 = r14_1;
                            rax_22[1] = r14_1;
                            rax_22[2] = r14_1;
                            rax_22[3] = 0;
                            var_128 = var_158;
                            rcx_18 = sub_14001bb20(&var_70, &var_128, rax_22);
                            label_140014b8b:
                            sub_140019e40(&rcx_18[5], &data_140021570, nullptr);
                            int64_t var_148_2 = 0;
                            int64_t var_140_2 = 0xf;
                            var_158 = 0;
                            int64_t r8_10 = sub_140019e40(&var_158, "short option '", 0xe);
                            int64_t rcx_22 = var_148_2;

                            if (rcx_22 >= var_140_2)
                                r8_10 = sub_14001b050(&var_158, var_140_2, r8_10, rax_9);
                            else
                            {
                                var_148_2 = rcx_22 + 1;
                                char* rax_25 = &var_158;

                                if (var_140_2 >= 0x10)
                                    rax_25 = var_158;

                                rax_25[rcx_22] = rax_9;
                                rax_25[rcx_22 + 1] = 0;
                            }

                            var_128 = var_158;
                            zmm1 = var_148_2;
                            uint128_t var_118_1 = zmm1;
                            int64_t var_148_3 = 0;
                            int64_t var_140_3 = 0xf;
                            var_158 = 0;
                            int64_t rcx_24 = zmm1;
                            int64_t rdx_20 = _mm_bsrli_si128(zmm1, 8);
                            int128_t** rax_29;

                            if (rdx_20 - rcx_24 < 0xe)
                                rax_29 = sub_14001b1b0(&var_128, 0xe, r8_10, "' is ambiguous", 0xe);
                            else
                            {
                                var_118_1 = rcx_24 + 0xe;
                                int128_t* rbx_2 = &var_128;

                                if (rdx_20 >= 0x10)
                                    rbx_2 = var_128;

                                i_1 = rbx_2 + rcx_24;
                                memmove(i_1, "' is ambiguous", 0xe);
                                *(i_1 + 0xe) = 0;
                                rax_29 = &var_128;
                            }

                            int128_t zmm0_6 = *rax_29;
                            var_60 = zmm0_6;
                            zmm1 = *(rax_29 + 0x10);
                            var_50 = zmm1;
                            rax_29[2] = 0;
                            rax_29[3] = 0xf;
                            *rax_29 = nullptr;
                            int128_t* rdx_21 = arg1[0x11];

                            if (rdx_21 == arg1[0x12])
                            {
                                sub_14001ab60(&arg1[0x10], rdx_21, &var_60);
                                r13_1 = var_48;
                            }
                            else
                            {
                                *rdx_21 = zmm0_6;
                                rdx_21[1] = zmm1;
                                var_60 = 0;
                                arg1[0x11] += 0x20;
                            }

                            if (r13_1 >= 0x10)
                            {
                                void* rcx_28 = var_60;
                                void* rax_30 = rcx_28;

                                if (r13_1 + 1 >= 0x1000)
                                {
                                    rcx_28 = *(rcx_28 - 8);

                                    if (rax_30 - rcx_28 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_28);
                            }

                            int64_t rdx_23 = *var_118_1[8];

                            if (rdx_23 >= 0x10)
                            {
                                int128_t* rcx_29 = var_128;
                                int128_t* rax_33 = rcx_29;

                                if (rdx_23 + 1 >= 0x1000)
                                {
                                    rcx_29 = *(rcx_29 - 8);

                                    if (rax_33 - rcx_29 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_29);
                            }

                            i_1 = 0;
                            break;
                        }

                        var_158 = rcx_8;
                        int32_t var_150_1 = 0;
                        void** rax_11 = r14_1;

                        if (!r8_2)
                        {
                            do
                            {
                                var_158 = rcx_8;

                                if (rcx_8[4] >= rax_9)
                                {
                                    int32_t var_150_3 = 1;
                                    rax_11 = rcx_8;
                                    rcx_8 = *rcx_8;
                                }
                                else
                                {
                                    int32_t var_150_2 = 0;
                                    rcx_8 = rcx_8[2];
                                }
                            } while (!*(rcx_8 + 0x19));
                        }

                        if (*(rax_11 + 0x19) || rax_9 < rax_11[4])
                        {
                            if (*var_70[8] == 0x38e38e38e38e38e)
                            {
                                sub_140014240();
                                /* no return */
                            }

                            var_128 = &var_70;
                            int64_t var_120_1 = 0;
                            void** rax_12 = operator new(0x48);
                            rax_12[4] = rax_9;
                            rax_12[7] = 0;
                            rax_12[8] = 0xf;
                            rax_12[5] = 0;
                            *rax_12 = r14_1;
                            rax_12[1] = r14_1;
                            rax_12[2] = r14_1;
                            rax_12[3] = 0;
                            int64_t var_120_2 = 0;
                            var_98 = var_158;
                            rax_11 = sub_14001bb20(&var_70, &var_98, rax_12);
                        }

                        if (&rax_11[5] != &i_1[4])
                        {
                            void* rdx_7 = &i_1[4];

                            if (i_1[7] >= 0x10)
                                rdx_7 = i_1[4];

                            sub_140019e40(&rax_11[5], rdx_7, i_1[6]);
                        }
                    }

                    rdi = var_160;
                }

                int64_t* i_3 = i_1[2];

                if (!*(i_3 + 0x19))
                {
                    i_1 = i_3;
                    int64_t* i_5 = *i_3;

                    if (!*(i_5 + 0x19))
                    {
                        int64_t* i_6;

                        do
                        {
                            i_1 = i_5;
                            i_6 = *i_5;
                            i_5 = i_6;
                        } while (!*(i_6 + 0x19));
                    }
                }
                else
                {
                    int64_t* i_4 = i_1[1];

                    if (!*(i_4 + 0x19))
                    {
                        while (i_1 == i_4[2])
                        {
                            i_1 = i_4;
                            i_4 = i_4[1];

                            if (*(i_4 + 0x19))
                                break;
                        }
                    }

                    i_1 = i_4;
                }

                rcx_6 = *rdi;

                if (i_1 == rcx_6)
                {
                    rsi = var_168;
                    goto label_14001496f;
                }
            }
        }
        sub_140016790(&var_70);
        result = i_1;
    }
    else
    {
        int64_t var_148_1 = 0;
        int64_t r13 = 0xf;
        int64_t var_140_1 = 0xf;
        var_158 = 0;
        sub_140019e40(&var_158, "argument number must be longer t…", 0x25);
        int128_t* rdx_2 = arg1[0x11];

        if (rdx_2 == arg1[0x12])
        {
            sub_14001ab60(&arg1[0x10], rdx_2, &var_158);
            r13 = var_140_1;
        }
        else
        {
            *rdx_2 = var_158;
            rdx_2[1] = var_148_1;
            var_158 = 0;
            arg1[0x11] += 0x20;
        }

        if (r13 >= 0x10)
        {
            void* rcx_4 = var_158;
            void* rax_4 = rcx_4;

            if (r13 + 1 >= 0x1000)
            {
                rcx_4 = *(rcx_4 - 8);

                if (rax_4 - rcx_4 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_4);
        }

        result = 0;
    }
    __security_check_cookie(rax_1 ^ &var_1a8);
    return result;
}

int64_t sub_140015720(int64_t* arg1, int32_t arg2, int64_t* arg3)
{
    int64_t var_b8 = 0;
    int64_t var_b0 = 0xf;
    char var_c8 = 0;
    sub_140019e40(&var_c8, "help", 4);
    int64_t rax = sub_1400196c0(arg1, &var_c8);

    if (var_b0 >= 0x10)
    {
        void* rcx_2 = var_c8;
        void* rax_1 = rcx_2;

        if (var_b0 + 1 >= 0x1000)
        {
            rcx_2 = *(rcx_2 - 8);

            if (rax_1 - rcx_2 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_2);
    }

    if (!rax)
    {
        int64_t var_98_1 = 0;
        int64_t var_90_1 = 0xf;
        char var_a8 = 0;
        sub_140019e40(&var_a8, "print this message", rax + 0x12);
        int64_t var_b8_1 = 0;
        int64_t var_b0_1 = 0xf;
        var_c8 = rax;
        sub_140019e40(&var_c8, "help", rax + 4);
        struct cmdline::parser::option_base::cmdline::parser::option_without_value::VTable** var_88;

        if (sub_1400196c0(arg1, &var_c8))
        {
            void pExceptionObject;
            sub_140014260(&pExceptionObject, sub_14001a3f0(&var_88, "multiple definition: ", &var_c8));
            _CxxThrowException(&pExceptionObject, &data_140026088);
            /* no return */
        }

        struct cmdline::parser::option_base::cmdline::parser::option_without_value::VTable** rax_5 = operator new(rax + 0x58);
        var_88 = rax_5;
        *rax_5 = &cmdline::parser::option_without_value::`vftable'{for `cmdline::parser::option_base'};
        sub_140019960(&rax_5[1], &var_c8);
        rax_5[5] = 0x3f;
        sub_140019960(&rax_5[6], &var_a8);
        rax_5[0xa] = 0;
        *(*sub_14001adf0(arg1, &var_88, &var_c8) + 0x40) = rax_5;
        int64_t* r8_5 = *sub_14001adf0(arg1, &var_88, &var_c8) + 0x40;
        int64_t* rdx_9 = arg1[3];

        if (rdx_9 == arg1[4])
            sub_14001a9c0(&arg1[2], rdx_9, r8_5);
        else
        {
            *rdx_9 = *r8_5;
            arg1[3] += 8;
        }

        if (var_b0_1 >= 0x10)
        {
            void* rcx_13 = var_c8;
            void* rax_9 = rcx_13;

            if (var_b0_1 + 1 >= 0x1000)
            {
                rcx_13 = *(rcx_13 - 8);

                if (rax_9 - rcx_13 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_13);
        }

        int64_t var_b8_2 = 0;
        int64_t var_b0_2 = 0xf;
        var_c8 = 0;

        if (var_90_1 >= 0x10)
        {
            void* rcx_14 = var_a8;
            void* rax_12 = rcx_14;

            if (var_90_1 + 1 >= 0x1000)
            {
                rcx_14 = *(rcx_14 - 8);

                if (rax_12 - rcx_14 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_14);
        }
    }

    /* tailcall */
    return sub_140015f00(arg1, arg2, sub_140014630(arg1, arg2, arg3));
}

int128_t* sub_1400159a0(void* arg1, int128_t* arg2)
{
    int128_t* var_30 = arg2;
    int32_t var_58 = 0;
    int64_t* rdx = *(arg1 + 0x80);
    char var_50;
    int64_t var_38;
    void* var_28;
    int64_t* rax_3;
    int32_t rbx;

    if (!((*(arg1 + 0x88) - rdx) >> 5))
    {
        int64_t var_40_1 = 0;
        var_38 = 0xf;
        var_50 = 0;
        sub_140019e40(&var_50, &data_140021570, nullptr);
        rax_3 = &var_50;
        rbx = 2;
    }
    else
    {
        rax_3 = sub_140019960(&var_28, rdx);
        rbx = 1;
    }

    int32_t var_58_1 = rbx;
    sub_140019960(arg2, rax_3);
    int32_t rbx_1 = rbx | 4;

    if (rbx_1 & 2)
    {
        rbx_1 &= 0xfffffffd;

        if (var_38 >= 0x10)
        {
            void* rcx_3 = var_50;
            void* rax_4 = rcx_3;

            if (var_38 + 1 >= 0x1000)
            {
                rcx_3 = *(rcx_3 - 8);

                if (rax_4 - rcx_3 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_3);
        }
    }

    int64_t var_10;

    if (rbx_1 & 1 && var_10 >= 0x10)
    {
        void* rcx_4 = var_28;
        void* rax_7 = rcx_4;

        if (var_10 + 1 >= 0x1000)
        {
            rcx_4 = *(rcx_4 - 8);

            if (rax_7 - rcx_4 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_4);
    }

    return arg2;
}

char* sub_140015ad0(void* arg1, char* arg2)
{
    void var_178;
    int64_t rax_1 = __security_cookie ^ &var_178;
    char* var_150 = arg2;
    int32_t var_158 = 0;
    void* var_128;
    memset(&var_128, 0, 0xe8);
    sub_1400193b0(&var_128);
    void** rax_2 = sub_14001a060(&var_128, "usage: ");
    wchar16* rdx = arg1 + 0x48;

    if (*(arg1 + 0x60) >= 0x10)
        rdx = *(arg1 + 0x48);

    sub_14001a060(sub_14001c100(rax_2, rdx, *(arg1 + 0x58)), U" ");
    int64_t i = 0;
    int64_t rcx_5 = *(arg1 + 0x10);
    int64_t var_130;

    if ((*(arg1 + 0x18) - rcx_5) >> 3)
    {
        do
        {
            int64_t* rcx_6 = *(rcx_5 + (i << 3));

            if ((*(*rcx_6 + 0x30))(rcx_6))
            {
                int64_t* rax_11 = (*(**(*(arg1 + 0x10) + (i << 3)) + 0x50))();
                int64_t* rdx_1 = rax_11;

                if (rax_11[3] >= 0x10)
                    rdx_1 = *rax_11;

                sub_14001a060(sub_14001c100(&var_128, rdx_1, rax_11[2]), U" ");
                int64_t rdx_2 = var_130;

                if (rdx_2 >= 0x10)
                {
                    void* var_148;
                    void* rcx_10 = var_148;
                    void* rax_13 = rcx_10;

                    if (rdx_2 + 1 >= 0x1000)
                    {
                        rcx_10 = *(rcx_10 - 8);

                        if (rax_13 - rcx_10 - 8 > 0x1f)
                        {
                            _invalid_parameter_noinfo_noreturn();
                            /* no return */
                        }
                    }

                    sub_14001e5e4(rcx_10);
                }
            }

            i += 1;
            rcx_5 = *(arg1 + 0x10);
        } while (i < (*(arg1 + 0x18) - rcx_5) >> 3);
    }

    int64_t* rax_19 = sub_14001a060(&var_128, "[options] ... ");
    void* rdx_4 = arg1 + 0x28;

    if (*(arg1 + 0x40) >= 0x10)
        rdx_4 = *(arg1 + 0x28);

    std::ostream::operator<<(sub_14001c100(rax_19, rdx_4, *(arg1 + 0x38)), sub_14001a5a0);
    std::ostream::operator<<(sub_14001a060(&var_128, "options:"), sub_14001a5a0);
    int64_t rbx = 0;
    int64_t i_1 = 0;
    int64_t rdx_5 = *(arg1 + 0x18);
    int64_t rcx_16 = *(arg1 + 0x10);

    if ((rdx_5 - rcx_16) >> 3)
    {
        do
        {
            int64_t* rcx_17 = *(*(arg1 + 0x10) + (i_1 << 3));
            void* rax_27 = (*(*rcx_17 + 0x38))(rcx_17, rdx_5);

            if (rbx < *(rax_27 + 0x10))
                rbx = *(rax_27 + 0x10);

            i_1 += 1;
            rdx_5 = *(arg1 + 0x18);
            rcx_16 = *(arg1 + 0x10);
        } while (i_1 < (rdx_5 - rcx_16) >> 3);
    }

    int64_t i_2 = 0;

    if ((rdx_5 - rcx_16) >> 3)
    {
        do
        {
            int64_t* rcx_18 = *(rcx_16 + (i_2 << 3));
            void** rax_37;
            void* const rdx_9;

            if (!(*(*rcx_18 + 0x40))(rcx_18))
            {
                rax_37 = &var_128;
                rdx_9 = "      ";
            }
            else
            {
                int64_t* rcx_19 = *(*(arg1 + 0x10) + (i_2 << 3));
                (*(*rcx_19 + 0x40))(rcx_19);
                rax_37 = sub_14001a230(sub_14001a060(&var_128, "  -"));
                rdx_9 = &data_140021d74;
            }

            sub_14001a060(rax_37, rdx_9);
            int64_t* rcx_23 = *(*(arg1 + 0x10) + (i_2 << 3));
            wchar16** rax_40 = (*(*rcx_23 + 0x38))(rcx_23);
            void** rax_41 = sub_14001a060(&var_128, "--");
            wchar16* rdx_10 = rax_40;

            if (rax_40[3] >= 0x10)
                rdx_10 = *rax_40;

            sub_14001c100(rax_41, rdx_10, rax_40[2]);
            int64_t* rcx_26 = *(*(arg1 + 0x10) + (i_2 << 3));
            void* rax_44;
            int64_t rdx_11;
            rax_44 = (*(*rcx_26 + 0x38))(rcx_26);
            int64_t rcx_27 = *(rax_44 + 0x10);

            if (rcx_27 < rbx + 4)
            {
                int64_t j_1 = rbx + 4 - rcx_27;
                int64_t j;

                do
                {
                    rdx_11 = 0x20;
                    sub_14001a230(&var_128);
                    j = j_1;
                    j_1 -= 1;
                } while (j != 1);
            }

            int64_t* rcx_29 = *(*(arg1 + 0x10) + (i_2 << 3));
            wchar16** rax_47 = (*(*rcx_29 + 0x48))(rcx_29);
            wchar16* rdx_12 = rax_47;

            if (rax_47[3] >= 0x10)
                rdx_12 = *rax_47;

            std::ostream::operator<<(sub_14001c100(&var_128, rdx_12, rax_47[2]), sub_14001a5a0);
            i_2 += 1;
            rcx_16 = *(arg1 + 0x10);
        } while (i_2 < (*(arg1 + 0x18) - rcx_16) >> 3);
    }

    *(arg2 + 0x10) = 0;
    *(arg2 + 0x18) = 0xf;
    *arg2 = 0;
    int32_t var_158_1 = 4;
    char var_b0;
    int64_t r8_5;
    int64_t* var_e0;

    if (!(var_b0 & 2))
        r8_5 = *var_e0;
    int64_t rdx_13;

    if (!(var_b0 & 2) && r8_5)
    {
        int64_t* var_100;
        rdx_13 = *var_100;
        int64_t var_b8;

        if (r8_5 < var_b8)
            r8_5 = var_b8;

        sub_140019e40(arg2, rdx_13, r8_5 - rdx_13);
    }
    else if (!(var_b0 & 4))
    {
        int64_t* var_e8;
        int64_t rcx_33 = *var_e8;

        if (rcx_33)
        {
            int64_t* var_108;
            rdx_13 = *var_108;
            int32_t* var_d0;
            sub_140019e40(arg2, rdx_13, *var_d0 - rdx_13 + rcx_33);
        }
    }
    *(&var_128 + *(var_128 + 4)) = &std::ostringstream::`vftable';
    int64_t rdx_15 = *(var_128 + 4);
    *(&*var_130[4] + rdx_15) = rdx_15 - 0x88;
    void var_120;
    sub_1400192f0(&var_120);
    std::ostream::~ostream<char, struct std::char_traits<char> >();
    void var_a0;
    std::ios::~ios<char, struct std::char_traits<char> >(&var_a0);
    __security_check_cookie(rax_1 ^ &var_178);
    return arg2;
}

void sub_140015f00(int64_t* arg1, int32_t arg2, char arg3)
{
    char rbx = 0;
    int32_t var_98 = 0;
    char var_90;
    int64_t var_78;
    void var_68;
    int64_t rdi;

    if (arg2 != 1 || arg3)
    {
        int64_t var_80_1 = 0;
        var_78 = 0xf;
        var_90 = 0;
        sub_140019e40(&var_90, "help", 4);
        rbx = 1;
        int32_t var_98_1 = 1;
        char* r8 = &var_90;

        if (!sub_1400196c0(arg1, &var_90))
        {
            void pExceptionObject;
            sub_140014260(&pExceptionObject, sub_14001a3f0(&var_68, "there is no flag: --", r8));
            _CxxThrowException(&pExceptionObject, &data_140026088);
            /* no return */
        }

        void var_70;
        int64_t* rcx_4 = *(*sub_1400197b0(arg1, &var_70, r8) + 0x40);

        if ((*(*rcx_4 + 0x20))(rcx_4))
            rdi = 1;
        else
            rdi = 0;
    }
    else
        rdi = 1;

    if (rbx & 1 && var_78 >= 0x10)
    {
        void* rcx_5 = var_90;
        void* rax_4 = rcx_5;

        if (var_78 + 1 >= 0x1000)
        {
            rcx_5 = *(rcx_5 - 8);

            if (rax_4 - rcx_5 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_5);
    }

    if (rdi)
    {
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(std::cerr, sub_140015ad0(arg1, &var_90));
        sub_1400198c0(&var_90);
        exit(0);
        /* no return */
    }

    if (arg3)
        return;

    char* rax_8 = sub_140015ad0(arg1, &var_68);
    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(std::ostream::operator<<(std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(std::cerr, sub_1400159a0(arg1, &var_90)), sub_14001a5a0), rax_8);
    sub_1400198c0(&var_90);
    sub_1400198c0(&var_68);
    exit(1);
    /* no return */
}

int64_t sub_1400160e0(int64_t* arg1, int64_t* arg2)
{
    int64_t* rbx = arg2;
    int64_t rax;
    int64_t rdx;
    int64_t r8;
    rax = sub_1400196c0(arg1, arg2);
    void* rcx_3;
    int128_t var_28;
    int128_t var_18;
    int64_t result_1;
    int64_t result;

    if (rax)
    {
        int64_t* rcx_6 = *(*sub_14001adf0(arg1, &var_28, rbx) + 0x40);
        int64_t rdx_4;
        int64_t r8_3;
        result = (*(*rcx_6 + 0x18))(rcx_6);

        if (result)
            return result;

        int64_t rcx_7 = rbx[2];

        if (0x7fffffffffffffff - rcx_7 < 0x16)
        {
            sub_1400011e0();
            /* no return */
        }

        if (rbx[3] >= 0x10)
            rbx = *rbx;

        sub_14001bda0(&var_28, rdx_4, r8_3, "option needs value: --", 0x16, rbx, rcx_7);
        int128_t* rdx_5 = arg1[0x11];

        if (rdx_5 == arg1[0x12])
        {
            sub_14001ab60(&arg1[0x10], rdx_5, &var_28);
            result = result_1;
        }
        else
        {
            *rdx_5 = var_28;
            rdx_5[1] = var_18;
            result = 0xf;
            var_28 = 0;
            arg1[0x11] += 0x20;
        }

        if (result < 0x10)
            return result;

        rcx_3 = var_28;
        void* rax_8 = rcx_3;

        if (result + 1 >= 0x1000)
        {
            rcx_3 = *(rcx_3 - 8);

            if (rax_8 - rcx_3 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
    }
    else
    {
        int64_t rcx = rbx[2];

        if (0x7fffffffffffffff - rcx < 0x14)
        {
            sub_1400011e0();
            /* no return */
        }

        if (rbx[3] >= 0x10)
            rbx = *rbx;

        sub_14001bda0(&var_28, rdx, r8, "undefined option: --", 0x14, rbx, rcx);
        int128_t* rdx_1 = arg1[0x11];

        if (rdx_1 == arg1[0x12])
        {
            sub_14001ab60(&arg1[0x10], rdx_1, &var_28);
            result = result_1;
        }
        else
        {
            *rdx_1 = var_28;
            rdx_1[1] = var_18;
            result = 0xf;
            var_28 = 0;
            arg1[0x11] += 0x20;
        }

        if (result < 0x10)
            return result;

        rcx_3 = var_28;
        void* rax_2 = rcx_3;

        if (result + 1 >= 0x1000)
        {
            rcx_3 = *(rcx_3 - 8);

            if (rax_2 - rcx_3 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
    }
    return sub_14001e5e4(rcx_3);
}

void** sub_1400162d0(int64_t* arg1, int64_t* arg2, int64_t* arg3)
{
    int64_t* rbx = arg2;
    int64_t rax;
    int64_t r8;
    rax = sub_1400196c0(arg1, arg2);
    void** result;
    int128_t var_68;
    int64_t var_58;
    int64_t var_50;
    void* rcx_2;

    if (rax)
    {
        int128_t var_88;
        int64_t rdx_4;
        int64_t r8_3;
        result = (*(**(*sub_14001adf0(arg1, &var_88, rbx) + 0x40) + 0x10))();

        if (!result)
        {
            int64_t rcx_6 = rbx[2];

            if (0x7fffffffffffffff - rcx_6 < 0x1b)
            {
                sub_1400011e0();
                /* no return */
            }

            if (rbx[3] >= 0x10)
                rbx = *rbx;

            int64_t r8_4 = sub_14001bda0(&var_68, rdx_4, r8_3, "option value is invalid: --", 0x1b, rbx, rcx_6);
            int128_t* rax_12;

            if (var_50 - var_58 < 1)
                rax_12 = sub_14001b1b0(&var_68, 1, r8_4, &data_140021d84, 1);
            else
            {
                int64_t var_58_1 = var_58 + 1;
                int128_t* rax_11 = &var_68;

                if (var_50 >= 0x10)
                    rax_11 = var_68;

                *(rax_11 + var_58) = 0x3d;
                rax_12 = &var_68;
            }

            int64_t var_78_1 = 0;
            int64_t var_70_1 = 0;
            var_88 = *rax_12;
            var_78_1 = rax_12[1];
            rax_12[1] = 0;
            *(rax_12 + 0x18) = 0xf;
            *rax_12 = 0;
            int64_t* r9_1 = arg3;

            if (arg3[3] >= 0x10)
                r9_1 = *arg3;

            int64_t rsi_1 = arg3[2];

            if (rsi_1 > var_70_1 - var_78_1)
                result = sub_14001b1b0(&var_88, rsi_1, r8_4, r9_1, rsi_1);
            else
            {
                int64_t var_78_2 = var_78_1 + rsi_1;
                int128_t* rbx_1 = &var_88;

                if (var_70_1 >= 0x10)
                    rbx_1 = var_88;

                void* rbx_2 = rbx_1 + var_78_1;
                memmove(rbx_2, r9_1, rsi_1);
                *(rbx_2 + rsi_1) = 0;
                result = &var_88;
            }

            int128_t zmm0_3 = *result;
            int128_t var_48 = zmm0_3;
            int128_t zmm1 = *(result + 0x10);
            result[2] = 0;
            result[3] = 0xf;
            *result = nullptr;
            int128_t* rdx_9 = arg1[0x11];
            int64_t rdx_10;

            if (rdx_9 == arg1[0x12])
            {
                result = sub_14001ab60(&arg1[0x10], rdx_9, &var_48);
                rdx_10 = *zmm1[8];
            }
            else
            {
                *rdx_9 = zmm0_3;
                rdx_9[1] = zmm1;
                rdx_10 = 0xf;
                var_48 = 0;
                arg1[0x11] += 0x20;
            }

            if (rdx_10 >= 0x10)
            {
                void* rcx_14 = var_48;
                void* rax_16 = rcx_14;

                if (rdx_10 + 1 >= 0x1000)
                {
                    rcx_14 = *(rcx_14 - 8);

                    if (rax_16 - rcx_14 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }
                }

                result = sub_14001e5e4(rcx_14);
            }

            if (var_70_1 >= 0x10)
            {
                void* rcx_15 = var_88;
                void* rax_19 = rcx_15;

                if (var_70_1 + 1 >= 0x1000)
                {
                    rcx_15 = *(rcx_15 - 8);

                    if (rax_19 - rcx_15 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }
                }

                result = sub_14001e5e4(rcx_15);
            }

            int64_t var_78_3 = 0;
            int64_t var_70_2 = 0xf;
            var_88 = 0;

            if (var_50 >= 0x10)
            {
                rcx_2 = var_68;
                void* rax_22 = rcx_2;

                if (var_50 + 1 >= 0x1000)
                {
                    rcx_2 = *(rcx_2 - 8);

                    if (rax_22 - rcx_2 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }
                }

                return sub_14001e5e4(rcx_2);
            }
        }
    }
    else
    {
        int64_t rdx = rbx[2];

        if (0x7fffffffffffffff - rdx < 0x14)
        {
            sub_1400011e0();
            /* no return */
        }

        if (rbx[3] >= 0x10)
            rbx = *rbx;

        result = sub_14001bda0(&var_68, rdx, r8, "undefined option: --", 0x14, rbx, rdx);
        int128_t* rdx_1 = arg1[0x11];
        int64_t rdi_1;

        if (rdx_1 == arg1[0x12])
        {
            result = sub_14001ab60(&arg1[0x10], rdx_1, &var_68);
            rdi_1 = var_50;
        }
        else
        {
            *rdx_1 = var_68;
            rdx_1[1] = var_58;
            rdi_1 = 0xf;
            var_68 = 0;
            arg1[0x11] += 0x20;
        }

        if (rdi_1 >= 0x10)
        {
            rcx_2 = var_68;
            void* rax_2 = rcx_2;

            if (rdi_1 + 1 >= 0x1000)
            {
                rcx_2 = *(rcx_2 - 8);

                if (rax_2 - rcx_2 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            return sub_14001e5e4(rcx_2);
        }
    }
    return result;
}

void sub_140016650(struct cmdline::parser::option_base::VTable** arg1)
{
    *arg1 = &cmdline::parser::option_base::`vftable';
}

int64_t sub_140016660() __pure
{
    int64_t result;
    result = 0;
    return result;
}

int64_t sub_140016670(void* arg1)
{
    *(arg1 + 0x50) = 1;
    int64_t result;
    result = 1;
    return result;
}

uint64_t sub_140016680(void* arg1)
{
    return *(arg1 + 0x50);
}

int64_t sub_140016690() __pure
{
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_1400166a0(int64_t arg1) __pure
{
    return arg1 + 8;
}

uint64_t sub_1400166b0(void* arg1)
{
    return *(arg1 + 0x28);
}

int64_t sub_1400166c0(int64_t arg1) __pure
{
    return arg1 + 0x30;
}

void** sub_1400166d0(void* arg1, void** arg2, int64_t arg3)
{
    void** rcx = arg1 + 8;
    int64_t rdx = rcx[2];

    if (0x7fffffffffffffff - rdx < 2)
    {
        sub_1400011e0();
        /* no return */
    }

    if (rcx[3] >= 0x10)
        rcx = *rcx;

    sub_14001bda0(arg2, rdx, arg3, &data_140021ca0, 2, rcx, rdx);
    return arg2;
}

struct std::exception::cmdline::cmdline_error::VTable** sub_140016730(struct std::exception::VTable** arg1, void* arg2)
{
    arg_8 = arg1;
    struct std::exception::cmdline::cmdline_error::VTable** result = arg1;
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *result = &cmdline::cmdline_error::`vftable'{for `std::exception'};
    sub_140019960(&result[3], arg2 + 0x18);
    return result;
}

int64_t sub_140016790(int64_t* arg1)
{
    sub_14001c6f0(arg1, arg1, *(*arg1 + 8));
    /* tailcall */
    return sub_14001e5e4(*arg1);
}

int64_t sub_1400167c0(int64_t* arg1)
{
    *(*(*arg1 + 4) + &arg1[0x11] - 0x88) = &std::ostringstream::`vftable';
    int64_t rdx_1 = *(*arg1 + 4);
    *(rdx_1 + &arg1[0x11] - 0x8c) = rdx_1 - 0x88;
    sub_1400192f0(&arg1[1]);
    std::ostream::~ostream<char, struct std::char_traits<char> >();
    /* tailcall */
    return std::ios::~ios<char, struct std::char_traits<char> >(&arg1[0x11]);
}

struct cmdline::parser::option_base::VTable** Concurrency::ITarget<enum Concurrency::agent_status>::`scalar deleting destructor'(struct cmdline::parser::option_base::VTable** arg1, char arg2)
{
    *arg1 = &cmdline::parser::option_base::`vftable';

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

struct cmdline::parser::option_base::cmdline::parser::option_without_value::VTable** sub_140016850(struct cmdline::parser::option_base::cmdline::parser::option_without_value::VTable** arg1, char arg2)
{
    *arg1 = &cmdline::parser::option_without_value::`vftable'{for `cmdline::parser::option_base'};
    int64_t rdx = arg1[9];

    if (rdx < 0x10)
        goto label_1400168a4;

    void* rcx = arg1[6];

    if (rdx + 1 < 0x1000)
        goto label_14001689f;

    void* r8_1 = *(rcx - 8);

    if (rcx - r8_1 - 8 <= 0x1f)
    {
        rcx = r8_1;
        label_14001689f:
        sub_14001e5e4(rcx);
        label_1400168a4:
        arg1[8] = 0;
        arg1[9] = 0xf;
        arg1[6] = 0;
        int64_t rdx_2 = arg1[4];

        if (rdx_2 < 0x10)
            goto label_1400168ef;

        void* rcx_2 = arg1[1];

        if (rdx_2 + 1 < 0x1000)
            goto label_1400168ea;

        void* r8_2 = *(rcx_2 - 8);

        if (rcx_2 - r8_2 - 8 <= 0x1f)
        {
            rcx_2 = r8_2;
            label_1400168ea:
            sub_14001e5e4(rcx_2);
            label_1400168ef:
            arg1[3] = 0;
            arg1[4] = 0xf;
            arg1[1] = 0;
            *arg1 = &cmdline::parser::option_base::`vftable';

            if (arg2 & 1)
                sub_14001e5e4(arg1);

            return arg1;
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

int64_t main(int32_t arg1, int64_t* arg2)
{
    uint128_t zmm6;
    uint128_t var_48 = zmm6;
    void var_5e8;
    int64_t rax_1 = __security_cookie ^ &var_5e8;
    int64_t r12 = 0;
    int32_t var_528 = 0;
    std::ostream::operator<<(sub_14001a060(std::cout, &data_140021da8), sub_14001a5a0);
    int128_t s_7 = {0};
    __builtin_memset(&s_7, 0, 0x98);
    int64_t* rax_3 = operator new(0x48);
    *rax_3 = rax_3;
    rax_3[1] = rax_3;
    rax_3[2] = rax_3;
    rax_3[3] = 0x101;
    s_7 = rax_3;
    int128_t s_8;
    __builtin_memset(&s_8, 0, 0x19);
    int128_t var_248;
    *var_248[8] = 0;
    int128_t var_238;
    var_238 = 0xf;
    int128_t var_228;
    *var_228[8] = 0;
    int128_t var_218;
    var_218 = 0xf;
    *var_238[8] = 0;
    __builtin_memset(&*var_218[8], 0, 0x30);
    int64_t var_3e0 = 0;
    int64_t var_3d8 = 0xf;
    char var_3f0 = 0;
    int64_t var_568 = 0x18;
    sub_140019e40(&var_3f0, "source image folder path", 0x18);
    int64_t var_428 = 0;
    int64_t var_420 = 0xf;
    char var_438 = 0;
    sub_140019e40(&var_438, "folderpath", 0xa);
    int64_t var_598 = 0;
    int64_t var_590 = 0xf;
    char var_5a8 = 0;
    char* var_418 = &var_5a8;
    int128_t s;
    sub_14001c2c0(&s_7, &var_438, 0x70, &var_3f0, 1, sub_140019960(&s, &var_5a8));

    if (var_590 >= 0x10)
    {
        void* rcx_6 = var_5a8;
        void* rax_5 = rcx_6;

        if (var_590 + 1 >= 0x1000)
        {
            rcx_6 = *(rcx_6 - 8);

            if (rax_5 - rcx_6 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_6);
    }

    int64_t var_598_1 = 0;
    int64_t var_590_1 = 0xf;
    var_5a8 = 0;

    if (var_420 >= 0x10)
    {
        void* rcx_7 = var_438;
        void* rax_8 = rcx_7;

        if (var_420 + 1 >= 0x1000)
        {
            rcx_7 = *(rcx_7 - 8);

            if (rax_8 - rcx_7 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_7);
    }

    int64_t var_428_1 = 0;
    int64_t var_420_1 = 0xf;
    var_438 = 0;

    if (var_3d8 >= 0x10)
    {
        void* rcx_8 = var_3f0;
        void* rax_11 = rcx_8;

        if (var_3d8 + 1 >= 0x1000)
        {
            rcx_8 = *(rcx_8 - 8);

            if (rax_11 - rcx_8 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_8);
    }

    int64_t var_3e0_1 = 0;
    int64_t var_3d8_1 = 0xf;
    var_3f0 = 0;
    sub_140019e40(&var_3f0, "image name", 0xa);
    int64_t var_428_2 = 0;
    int64_t var_420_2 = 0xf;
    var_438 = 0;
    sub_140019e40(&var_438, "name", 4);
    int64_t var_598_2 = 0;
    int64_t var_590_2 = 0xf;
    var_5a8 = 0;
    var_418 = &var_5a8;
    sub_14001c2c0(&s_7, &var_438, 0x6e, &var_3f0, 1, sub_140019960(&s, &var_5a8));

    if (var_590_2 >= 0x10)
    {
        void* rcx_13 = var_5a8;
        void* rax_15 = rcx_13;

        if (var_590_2 + 1 >= 0x1000)
        {
            rcx_13 = *(rcx_13 - 8);

            if (rax_15 - rcx_13 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_13);
    }

    int64_t var_598_3 = 0;
    int64_t var_590_3 = 0xf;
    var_5a8 = 0;

    if (var_420_2 >= 0x10)
    {
        void* rcx_14 = var_438;
        void* rax_18 = rcx_14;

        if (var_420_2 + 1 >= 0x1000)
        {
            rcx_14 = *(rcx_14 - 8);

            if (rax_18 - rcx_14 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_14);
    }

    int64_t var_428_3 = 0;
    int64_t var_420_3 = 0xf;
    var_438 = 0;

    if (var_3d8_1 >= 0x10)
    {
        void* rcx_15 = var_3f0;
        void* rax_21 = rcx_15;

        if (var_3d8_1 + 1 >= 0x1000)
        {
            rcx_15 = *(rcx_15 - 8);

            if (rax_21 - rcx_15 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_15);
    }

    int64_t var_3e0_2 = 0;
    int64_t var_3d8_2 = 0xf;
    var_3f0 = 0;
    sub_140019e40(&var_3f0, "folder path and image name", 0x1a);
    int64_t var_428_4 = 0;
    int64_t var_420_4 = 0xf;
    var_438 = 0;
    sub_140019e40(&var_438, "exportpath", 0xa);
    int64_t var_598_4 = 0;
    int64_t var_590_4 = 0xf;
    var_5a8 = 0;
    var_418 = &var_5a8;
    sub_14001c2c0(&s_7, &var_438, 0x65, &var_3f0, 1, sub_140019960(&s, &var_5a8));

    if (var_590_4 >= 0x10)
    {
        void* rcx_20 = var_5a8;
        void* rax_25 = rcx_20;

        if (var_590_4 + 1 >= 0x1000)
        {
            rcx_20 = *(rcx_20 - 8);

            if (rax_25 - rcx_20 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_20);
    }

    int64_t var_598_5 = 0;
    int64_t var_590_5 = 0xf;
    var_5a8 = 0;

    if (var_420_4 >= 0x10)
    {
        void* rcx_21 = var_438;
        void* rax_28 = rcx_21;

        if (var_420_4 + 1 >= 0x1000)
        {
            rcx_21 = *(rcx_21 - 8);

            if (rax_28 - rcx_21 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_21);
    }

    int64_t var_428_5 = 0;
    int64_t var_420_5 = 0xf;
    var_438 = 0;

    if (var_3d8_2 >= 0x10)
    {
        void* rcx_22 = var_3f0;
        void* rax_31 = rcx_22;

        if (var_3d8_2 + 1 >= 0x1000)
        {
            rcx_22 = *(rcx_22 - 8);

            if (rax_31 - rcx_22 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_22);
    }

    int64_t var_3e0_3 = 0;
    int64_t var_3d8_3 = 0xf;
    var_3f0 = 0;
    sub_140019e40(&var_3f0, "blending times", 0xe);
    int64_t var_598_6 = 0;
    int64_t var_590_6 = 0xf;
    var_5a8 = 0;
    sub_140019e40(&var_5a8, "blendingtimes", 0xd);
    int64_t* var_5c0_2;
    var_5c0_2 = 0;
    sub_14001c560(&s_7, &var_5a8, 0x62, &var_3f0, 1, var_5c0_2);

    if (var_590_6 >= 0x10)
    {
        void* rcx_26 = var_5a8;
        void* rax_34 = rcx_26;

        if (var_590_6 + 1 >= 0x1000)
        {
            rcx_26 = *(rcx_26 - 8);

            if (rax_34 - rcx_26 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_26);
    }

    int64_t var_598_7 = 0;
    int64_t var_590_7 = 0xf;
    var_5a8 = 0;

    if (var_3d8_3 >= 0x10)
    {
        void* rcx_27 = var_3f0;
        void* rax_37 = rcx_27;

        if (var_3d8_3 + 1 >= 0x1000)
        {
            rcx_27 = *(rcx_27 - 8);

            if (rax_37 - rcx_27 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_27);
    }

    sub_140015720(&s_7, arg1, arg2);
    int64_t var_598_8 = 0;
    int64_t var_590_8 = 0xf;
    var_5a8 = 0;
    sub_140019e40(&var_5a8, "folderpath", 0xa);
    char* r8_5 = &var_5a8;
    struct std::exception::cmdline::cmdline_error::VTable* pExceptionObject_1;

    if (!sub_1400196c0(&s_7, &var_5a8))
    {
        sub_140014260(&pExceptionObject_1, sub_14001a3f0(&var_3f0, "there is no flag: --", r8_5));
        _CxxThrowException(&pExceptionObject_1, &data_140026088);
        /* no return */
    }

    char isReference;
    isReference = 0;
    void* rax_42 = __RTDynamicCast(*(*sub_1400197b0(&s_7, &var_418, r8_5) + 0x40), 0, &class cmdline::parser::option_base `RTTI Type Descriptor', &class cmdline::parser::option_with_value<class std::string> `RTTI Type Descriptor', isReference);
    void pExceptionObject;
    int64_t var_2f0;

    if (!rax_42)
    {
        sub_140014260(&pExceptionObject, sub_14001a680(&var_2f0, sub_14001a3f0(&s, "type mismatch flag '", &var_5a8), U"'"));
        _CxxThrowException(&pExceptionObject, &data_140026088);
        /* no return */
    }

    void** rsi = rax_42 + 0x78;
    int64_t var_428_6 = 0;
    int64_t var_420_6 = 0;
    int64_t rdi_1 = rsi[2];

    if (rsi[3] >= 0x10)
        rsi = *rsi;

    int64_t var_420_7;

    if (rdi_1 >= 0x10)
    {
        int64_t rbx_2 = rdi_1 | 0xf;

        if (rbx_2 > 0x7fffffffffffffff)
            rbx_2 = 0x7fffffffffffffff;

        void* const rax_46;

        if (rbx_2 + 1 >= 0x1000)
        {
            if (rbx_2 + 0x28 <= rbx_2 + 1)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_44 = operator new(rbx_2 + 0x28);

            if (!rax_44)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rax_46 = (rax_44 + 0x27) & 0xffffffffffffffe0;
            *(rax_46 - 8) = rax_44;
        }
        else if (rbx_2 == -1)
            rax_46 = nullptr;
        else
            rax_46 = operator new(rbx_2 + 1);

        var_438 = rax_46;
        memcpy(rax_46, rsi, rdi_1 + 1);
        var_420_7 = rbx_2;
    }
    else
    {
        var_438 = *rsi;
        var_420_7 = 0xf;
    }

    int64_t var_428_7 = rdi_1;

    if (var_590_8 >= 0x10)
    {
        void* rcx_38 = var_5a8;
        void* rax_47 = rcx_38;

        if (var_590_8 + 1 >= 0x1000)
        {
            rcx_38 = *(rcx_38 - 8);

            if (rax_47 - rcx_38 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_38);
    }

    int64_t var_598_9 = 0;
    int64_t var_590_9 = 0xf;
    var_5a8 = 0;
    sub_140019e40(&var_5a8, "name", 4);
    char* r8_7 = &var_5a8;

    if (!sub_1400196c0(&s_7, &var_5a8))
    {
        sub_140014260(&pExceptionObject, sub_14001a3f0(&s, "there is no flag: --", r8_7));
        _CxxThrowException(&pExceptionObject, &data_140026088);
        /* no return */
    }

    isReference = 0;
    void* rax_52 = __RTDynamicCast(*(*sub_1400197b0(&s_7, &var_418, r8_7) + 0x40), 0, &class cmdline::parser::option_base `RTTI Type Descriptor', &class cmdline::parser::option_with_value<class std::string> `RTTI Type Descriptor', isReference);
    void pExceptionObject_2;

    if (!rax_52)
    {
        sub_140014260(&pExceptionObject_2, sub_14001a680(&pExceptionObject_1, sub_14001a3f0(&var_2f0, "type mismatch flag '", &var_5a8), U"'"));
        _CxxThrowException(&pExceptionObject_2, &data_140026088);
        /* no return */
    }

    void** rsi_1 = rax_52 + 0x78;
    int64_t var_3e0_4 = 0;
    int64_t var_3d8_4 = 0;
    int64_t r14 = rsi_1[2];

    if (rsi_1[3] >= 0x10)
        rsi_1 = *rsi_1;

    if (r14 >= 0x10)
    {
        int64_t rbx_4 = r14 | 0xf;

        if (rbx_4 > 0x7fffffffffffffff)
            rbx_4 = 0x7fffffffffffffff;

        void* const rax_56;

        if (rbx_4 + 1 >= 0x1000)
        {
            if (rbx_4 + 0x28 <= rbx_4 + 1)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_54 = operator new(rbx_4 + 0x28);

            if (!rax_54)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rax_56 = (rax_54 + 0x27) & 0xffffffffffffffe0;
            *(rax_56 - 8) = rax_54;
        }
        else if (rbx_4 == -1)
            rax_56 = nullptr;
        else
            rax_56 = operator new(rbx_4 + 1);

        var_3f0 = rax_56;
        memcpy(rax_56, rsi_1, r14 + 1);
        int64_t var_3d8_6 = rbx_4;
    }
    else
    {
        var_3f0 = *rsi_1;
        int64_t var_3d8_5 = 0xf;
    }

    int64_t var_3e0_5 = r14;

    if (var_590_9 >= 0x10)
    {
        void* rcx_48 = var_5a8;
        void* rax_57 = rcx_48;

        if (var_590_9 + 1 >= 0x1000)
        {
            rcx_48 = *(rcx_48 - 8);

            if (rax_57 - rcx_48 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_48);
    }

    int64_t var_598_10 = 0;
    int64_t var_590_10 = 0xf;
    var_5a8 = 0;
    sub_140019e40(&var_5a8, "exportpath", 0xa);
    char* r8_9 = &var_5a8;

    if (!sub_1400196c0(&s_7, &var_5a8))
    {
        sub_140014260(&pExceptionObject_2, sub_14001a3f0(&s, "there is no flag: --", r8_9));
        _CxxThrowException(&pExceptionObject_2, &data_140026088);
        /* no return */
    }

    isReference = 0;
    void* rax_62 = __RTDynamicCast(*(*sub_1400197b0(&s_7, &var_418, r8_9) + 0x40), 0, &class cmdline::parser::option_base `RTTI Type Descriptor', &class cmdline::parser::option_with_value<class std::string> `RTTI Type Descriptor', isReference);

    if (!rax_62)
    {
        sub_140014260(&pExceptionObject, sub_14001a680(&pExceptionObject_1, sub_14001a3f0(&var_2f0, "type mismatch flag '", &var_5a8), U"'"));
        _CxxThrowException(&pExceptionObject, &data_140026088);
        /* no return */
    }

    void** rsi_2 = rax_62 + 0x78;
    int64_t var_2c0 = 0;
    int64_t var_2b8 = 0;
    int64_t r14_1 = rsi_2[2];

    if (rsi_2[3] >= 0x10)
        rsi_2 = *rsi_2;

    int128_t var_2d0;

    if (r14_1 >= 0x10)
    {
        int64_t rbx_6 = r14_1 | 0xf;

        if (rbx_6 > 0x7fffffffffffffff)
            rbx_6 = 0x7fffffffffffffff;

        void* const rax_66;

        if (rbx_6 + 1 >= 0x1000)
        {
            if (rbx_6 + 0x28 <= rbx_6 + 1)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_64 = operator new(rbx_6 + 0x28);

            if (!rax_64)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rax_66 = (rax_64 + 0x27) & 0xffffffffffffffe0;
            *(rax_66 - 8) = rax_64;
        }
        else if (rbx_6 == -1)
            rax_66 = nullptr;
        else
            rax_66 = operator new(rbx_6 + 1);

        var_2d0 = rax_66;
        memcpy(rax_66, rsi_2, r14_1 + 1);
        int64_t var_2b8_2 = rbx_6;
    }
    else
    {
        var_2d0 = *rsi_2;
        int64_t var_2b8_1 = 0xf;
    }

    int64_t var_2c0_1 = r14_1;

    if (var_590_10 < 0x10)
        goto label_14001756a;

    void* rcx_58 = var_5a8;
    void* rax_67 = rcx_58;

    if (var_590_10 + 1 >= 0x1000)
        rcx_58 = *(rcx_58 - 8);

    if (var_590_10 + 1 < 0x1000 || rax_67 - rcx_58 - 8 <= 0x1f)
    {
        sub_14001e5e4(rcx_58);
        label_14001756a:
        int64_t var_598_11 = 0;
        int64_t var_590_11 = 0xf;
        var_5a8 = 0;
        sub_140019e40(&var_5a8, "blendingtimes", 0xd);
        char* r8_11 = &var_5a8;

        if (!sub_1400196c0(&s_7, &var_5a8))
        {
            sub_140014260(&pExceptionObject_2, sub_14001a3f0(&s, "there is no flag: --", r8_11));
            _CxxThrowException(&pExceptionObject_2, &data_140026088);
            /* no return */
        }

        isReference = 0;
        void* rax_72 = __RTDynamicCast(*(*sub_1400197b0(&s_7, &var_418, r8_11) + 0x40), 0, &class cmdline::parser::option_base `RTTI Type Descriptor', &class cmdline::parser::option_with_value<int32_t> `RTTI Type Descriptor', isReference);

        if (!rax_72)
        {
            sub_140014260(&pExceptionObject, sub_14001a680(&pExceptionObject_1, sub_14001a3f0(&var_2f0, "type mismatch flag '", &var_5a8), U"'"));
            _CxxThrowException(&pExceptionObject, &data_140026088);
            /* no return */
        }

        int32_t rbx_7 = *(rax_72 + 0x58);

        if (var_590_11 < 0x10)
            goto label_140017637;

        void* rcx_64 = var_5a8;
        void* rax_73 = rcx_64;

        if (var_590_11 + 1 >= 0x1000)
            rcx_64 = *(rcx_64 - 8);

        if (var_590_11 + 1 < 0x1000 || rax_73 - rcx_64 - 8 <= 0x1f)
        {
            sub_14001e5e4(rcx_64);
            label_140017637:
            int32_t rbx_8;

            if (rbx_7 >= 0x14)
                rbx_8 = rbx_7 + 1;
            else
                rbx_8 = 0x15;

            uint128_t zmm9 = _mm_cvtepi32_ps(rbx_8);
            float zmm7[0x4] = 0x3f800000;
            int128_t zmm8;
            zmm8 = 1f / (zmm9 - 1f);
            void* const var_188;
            memset(&var_188, 0, 0xf8);
            var_188 = &data_140022be8;
            void* const var_178 = &data_1400224c0;
            void var_f0;
            std::ios::ios<char, struct std::char_traits<char> >(&var_f0);
            int32_t rbx_9 = 1;
            int32_t var_570 = 1;
            var_528 = 1;
            void _Strbuf;
            std::iostream::iostream<char, struct std::char_traits<char> >(&var_188, &_Strbuf);
            *(&var_188 + *(var_188 + 4)) = &std::stringstream::`vftable';
            int64_t rcx_69 = *(var_188 + 4);
            void var_18c;
            *(&var_18c + rcx_69) = rcx_69 - 0x98;
            sub_140019cb0(&_Strbuf, &var_3f0, 3);
            wchar16* var_348 = nullptr;
            int64_t var_340 = 0xf;
            char var_358 = 0;
            int128_t s_2;
            __builtin_memset(&s_2, 0, 0x18);
            __builtin_memset(&s, 0, 0x18);
            int64_t r15 = 0;
            int128_t s_5;
            __builtin_memset(&s_5, 0, 0x18);
            std::ostream::operator<<(sub_14001a060(std::cout, "Begin Load Texture..."), sub_14001a5a0);

            while (true)
            {
                int64_t* rax_79 = sub_14001bf60(&var_188, &var_358, 0x20);
                wchar16* var_5b8;

                if (!std::ios_base(*(*rax_79 + 4) + rax_79))
                {
                    void* r8_16 = s_2;
                    int64_t rax_90 = (*s_2[8] - r8_16) >> 5;
                    var_2f0 = rax_90;

                    if (rax_90 < 2)
                    {
                        std::ostream::operator<<(sub_14001a060(std::cout, "At Least Two Texture Are Require…"), sub_14001a5a0);
                        label_140018979:
                        sub_140018d00(&s_5);
                        sub_140018d80(&s);
                        sub_140019630(&s_2);
                        sub_1400198c0(&var_358);
                        sub_140018c80(&var_188);
                        sub_1400198c0(&var_2d0);
                        sub_1400198c0(&var_3f0);
                        sub_1400198c0(&var_438);
                        sub_1400143d0(&s_7);
                        __security_check_cookie(rax_1 ^ &var_5e8);
                        return 0;
                    }

                    int64_t i_9 = rax_90;
                    int64_t i_10 = i_9;
                    int32_t var_524;
                    int32_t var_520;
                    uint128_t var_508;
                    int32_t var_410;
                    FILE* _Stream;

                    if (rax_90 > 0)
                    {
                        int64_t rsi_3 = 0;
                        int64_t i_8 = i_9;
                        int64_t i;

                        do
                        {
                            void** _FileName = r8_16 + rsi_3;

                            if (_FileName[3] >= 0x10)
                                _FileName = *_FileName;

                            errno_t rax_92 = fopen_s(&_Stream, _FileName, "rb");
                            FILE* _Stream_1 = _Stream;

                            if (rax_92)
                                _Stream_1 = nullptr;

                            _Stream = _Stream_1;
                            struct std::exception::cmdline::cmdline_error::VTable* pExceptionObject_3;

                            if (_Stream_1)
                            {
                                var_508 = *data_140028040;
                                int64_t var_4f8_1 = data_140028050;
                                FILE* _Stream_2 = _Stream_1;
                                int32_t var_4e4_1 = 0x80;
                                int32_t var_4e8_1 = 1;
                                int32_t var_460_1 = 0;
                                void var_4e0;
                                void* var_448_1 = &var_4e0;
                                int32_t var_458_1 = &var_4e0;
                                void var_518;
                                sub_140001d70(&var_518);
                                int64_t var_450;
                                int64_t var_440_1 = var_450;
                                isReference = 0;
                                struct std::exception::cmdline::cmdline_error::VTable* pExceptionObject_5;
                                pExceptionObject_5 = sub_140001b20(&var_518, &var_528, &var_520, &var_524, isReference);
                                pExceptionObject_3 = pExceptionObject_5;

                                if (pExceptionObject_5)
                                    fseek(_Stream_1, var_458_1 - var_450, 1);

                                fclose(_Stream_1);
                            }
                            else
                            {
                                TEB* gsbase;
                                *(0x10 + *gsbase->ThreadLocalStoragePointer) = "can't fopen";
                                pExceptionObject_3 = nullptr;
                            }

                            pExceptionObject_1 = pExceptionObject_3;
                            struct std::exception::cmdline::cmdline_error::VTable** rax_95 = *s[8];

                            if (rax_95 == r15)
                            {
                                sub_14001a9c0(&s, rax_95, &pExceptionObject_1);
                                int64_t var_3c0;
                                r15 = var_3c0;
                            }
                            else
                            {
                                *rax_95 = pExceptionObject_3;
                                *s[8] = &rax_95[1];
                            }

                            var_418 = var_528;
                            *var_418[4] = var_520;
                            int32_t rax_99 = var_524;
                            var_410 = rax_99;
                            uint64_t* rdx_62 = *s_5[8];
                            int64_t var_310;

                            if (rdx_62 == var_310)
                                sub_14001a740(&s_5, rdx_62, &var_418);
                            else
                            {
                                *rdx_62 = var_418;
                                rdx_62[1] = rax_99;
                                *s_5[8] += 0xc;
                            }

                            rsi_3 += 0x20;
                            i = i_8;
                            i_8 -= 1;
                            r8_16 = s_2;
                        } while (i != 1);
                        i_9 = i_10;
                    }

                    int64_t rcx_94 = 0;
                    int32_t* r9_6 = s_5;
                    void* rax_100 = &r9_6[2];
                    int32_t rdx_63 = 0;

                    while (true)
                    {
                        if (*(rax_100 - 8) >= 2 && *(rax_100 - 4) >= 2 && *rax_100 >= 3)
                        {
                            rdx_63 += 1;
                            rcx_94 += 1;
                            rax_100 += 0xc;

                            if (rcx_94 >= i_9)
                                break;

                            continue;
                        }

                        void* rdi_31 = (rdx_63 << 5) + r8_16;
                        int64_t* rax_189 = sub_14001a060(std::cout, "Error Texture : ");
                        void* rdx_118 = rdi_31;

                        if (*(rdi_31 + 0x18) >= 0x10)
                            rdx_118 = *rdi_31;

                        std::ostream::operator<<(sub_14001c100(rax_189, rdx_118, *(rdi_31 + 0x10)), sub_14001a5a0);
                        int64_t* i_1 = s;

                        for (int64_t rbx_17 = *s[8]; i_1 != rbx_17; i_1 = &i_1[1])
                            free(*i_1);

                        goto label_140018979;
                    }

                    int64_t rdx_64 = 1;
                    void* rcx_95 = &r9_6[2];
                    int32_t rdi_2 = 1;

                    while (true)
                    {
                        if (*(rcx_95 - 8) == *(rcx_95 + 4) && *(rcx_95 - 4) == *(rcx_95 + 8) && *rcx_95 == *(rcx_95 + 0xc))
                        {
                            rdi_2 += 1;
                            rdx_64 += 1;
                            rcx_95 += 0xc;

                            if (rdx_64 >= i_9)
                                break;

                            continue;
                        }

                        void* rdi_28 = (rdi_2 << 5) + r8_16;
                        int64_t* rax_187 = sub_14001a060(std::cout, "Texture Message Not Uniform: ");
                        void* rdx_117 = rdi_28;

                        if (*(rdi_28 + 0x18) >= 0x10)
                            rdx_117 = *rdi_28;

                        std::ostream::operator<<(sub_14001c100(rax_187, rdx_117, *(rdi_28 + 0x10)), sub_14001a5a0);
                        int64_t* i_2 = s;

                        for (int64_t rbx_16 = *s[8]; i_2 != rbx_16; i_2 = &i_2[1])
                            free(*i_2);

                        goto label_140018979;
                    }

                    int32_t var_584 = *r9_6;
                    int32_t var_580 = r9_6[1];
                    int32_t rbx_10 = r9_6[2];
                    int128_t s_6;
                    __builtin_memset(&s_6, 0, 0x18);

                    if (i_9 > 0xaaaaaaaaaaaaaaa)
                    {
                        sub_14001bb00();
                        /* no return */
                    }

                    int64_t rdi_5 = i_9 * 0x18;
                    void* s_9;
                    void* rdx_65;
                    void* s_11;

                    if (rdi_5 < 0x1000)
                    {
                        if (!rdi_5)
                        {
                            s_9 = nullptr;
                            rdx_65 = rdi_5;
                            s_11 = nullptr;
                        }
                        else
                        {
                            s_9 = operator new(rdi_5);
                            rdx_65 = s_9 + rdi_5;
                            s_11 = s_9;
                        }

                        goto label_140017c3b;
                    }

                    if (rdi_5 + 0x27 <= rdi_5)
                    {
                        stdext::threads::_Throw_lock_error();
                        /* no return */
                    }

                    int64_t rax_106 = operator new(rdi_5 + 0x27);

                    if (!rax_106)
                        break;

                    s_9 = (rax_106 + 0x27) & 0xffffffffffffffe0;
                    *(s_9 - 8) = rax_106;
                    rdx_65 = s_9 + rdi_5;
                    s_11 = s_9;
                    label_140017c3b:
                    int64_t i_6 = i_9;
                    s_6 = s_11;
                    void* var_2f8_1 = rdx_65;
                    int64_t i_3;

                    do
                    {
                        __builtin_memset(s_9, 0, 0x18);
                        s_9 += 0x18;
                        i_3 = i_6;
                        i_6 -= 1;
                    } while (i_3 != 1);
                    *s_6[8] = s_9;
                    int128_t s_4;
                    __builtin_memset(&s_4, 0, 0x18);

                    if (i_9 > 0xaaaaaaaaaaaaaaa)
                    {
                        sub_14001bb00();
                        /* no return */
                    }

                    int64_t rdi_8 = i_9 * 0x18;
                    void* s_10;
                    void* rdx_66;
                    void* s_12;

                    if (rdi_8 >= 0x1000)
                    {
                        if (rdi_8 + 0x27 <= rdi_8)
                        {
                            stdext::threads::_Throw_lock_error();
                            /* no return */
                        }

                        int64_t rax_108 = operator new(rdi_8 + 0x27);

                        if (!rax_108)
                        {
                            _invalid_parameter_noinfo_noreturn();
                            /* no return */
                        }

                        s_10 = (rax_108 + 0x27) & 0xffffffffffffffe0;
                        *(s_10 - 8) = rax_108;
                        rdx_66 = s_10 + rdi_8;
                        s_12 = s_10;
                    }
                    else if (!rdi_8)
                    {
                        s_10 = nullptr;
                        rdx_66 = rdi_8;
                        s_12 = nullptr;
                    }
                    else
                    {
                        s_10 = operator new(rdi_8);
                        rdx_66 = s_10 + rdi_8;
                        s_12 = s_10;
                    }

                    int64_t i_7 = i_9;
                    s_4 = s_12;
                    void* var_328_1 = rdx_66;
                    int64_t i_4;

                    do
                    {
                        __builtin_memset(s_10, 0, 0x18);
                        s_10 += 0x18;
                        i_4 = i_7;
                        i_7 -= 1;
                    } while (i_4 != 1);
                    *s_4[8] = s_10;
                    var_524 = rbx_10 * var_584;
                    zmm6 = {0};
                    void var_588;
                    uint128_t zmm0_5;

                    if (i_9 > 0)
                    {
                        int64_t* rbx_11 = nullptr;

                        do
                        {
                            int64_t r14_2 = var_584;
                            int64_t rsi_4 = var_580;
                            int64_t rdi_9 = s_6;
                            int64_t rcx_102 = *(rbx_11 + rdi_9 + 8);
                            int64_t rax_112;

                            if (rcx_102 == r14_2)
                                rax_112 = *(rbx_11 + rdi_9 + 0x10);

                            if (rcx_102 != r14_2 || rax_112 != rsi_4)
                            {
                                if (r14_2 && rsi_4 && r14_2 > 0x7fffffffffffffff / rsi_4)
                                {
                                    __scrt_throw_std_bad_alloc();
                                    /* no return */
                                }

                                int64_t r15_2 = r14_2 * rsi_4;

                                if (r15_2 != rcx_102 * *(rbx_11 + rdi_9 + 0x10))
                                {
                                    free(*(rbx_11 + rdi_9));

                                    if (!r15_2)
                                        *(rbx_11 + rdi_9) = 0;
                                    else
                                        *(rbx_11 + rdi_9) = sub_14001e500(r15_2);
                                }

                                *(rbx_11 + rdi_9 + 8) = r14_2;
                                *(rbx_11 + rdi_9 + 0x10) = rsi_4;
                                rax_112 = rsi_4;
                                rcx_102 = r14_2;
                            }

                            int64_t rcx_106 = rcx_102 * rax_112;

                            if (rcx_106 > 0)
                                __builtin_memset(*(rbx_11 + rdi_9), 0, rcx_106 << 1);

                            int64_t r14_3 = var_584;
                            int64_t rsi_5 = var_580;
                            char** rdi_12 = s_4 + rbx_11;
                            _Stream = 0;
                            int64_t r8_20 = rdi_12[1];
                            int64_t rax_116;

                            if (r8_20 == r14_3)
                                rax_116 = rdi_12[2];

                            if (r8_20 != r14_3 || rax_116 != rsi_5)
                            {
                                if (r14_3 && rsi_5 && r14_3 > 0x7fffffffffffffff / rsi_5)
                                {
                                    __scrt_throw_std_bad_alloc();
                                    /* no return */
                                }

                                int64_t r15_4 = r14_3 * rsi_5;

                                if (r15_4 != rdi_12[2] * r8_20)
                                {
                                    free(*rdi_12);

                                    if (!r15_4)
                                        *rdi_12 = nullptr;
                                    else
                                        *rdi_12 = sub_14001e050(r15_4);
                                }

                                rdi_12[1] = r14_3;
                                rdi_12[2] = rsi_5;
                                r8_20 = r14_3;
                                rax_116 = rsi_5;
                            }

                            char* rcx_109 = *rdi_12;
                            var_418 = rcx_109;
                            var_410 = r8_20;
                            var_5a8 = &var_418;
                            FILE** var_5a0_1 = &_Stream;
                            void* var_598_12 = &var_588;
                            char** var_590_12 = rdi_12;
                            int64_t r8_21 = r8_20 * rax_116;
                            int64_t rax_123;
                            int32_t rdx_70;
                            rdx_70 = HIGHQ(r8_21);
                            rax_123 = LOWQ(r8_21);
                            int64_t rdx_73 = ((rdx_70 & 3) + rax_123) & 0xfffffffffffffffc;
                            int64_t rax_124 = 0;

                            if (rdx_73 > 0)
                            {
                                while (true)
                                {
                                    zmm0_5 = _Stream;
                                    *(rcx_109 + (rax_124 << 2)) = _mm_shuffle_ps(zmm0_5, zmm0_5, 0);
                                    rax_124 += 4;

                                    if (rax_124 >= rdx_73)
                                        break;

                                    rcx_109 = var_418;
                                }
                            }

                            sub_14001e2e0(&var_5a8, rdx_73, r8_21);
                            r12 += 1;
                            rbx_11 = &rbx_11[3];
                        } while (r12 < i_9);
                    }

                    int32_t r15_5 = 0;
                    var_520 = 0;
                    struct std::exception::cmdline::cmdline_error::VTable* pExceptionObject_4 = s;
                    pExceptionObject_1 = pExceptionObject_4;
                    var_528 = 2;
                    int64_t r12_1 = *s[8];

                    if (pExceptionObject_4 != r12_1)
                    {
                        int64_t i_11 = 0;
                        i_10 = 0;
                        FILE* _Stream_3 = nullptr;
                        _Stream = nullptr;

                        do
                        {
                            int64_t rbx_12 = ;
                            void* var_598_13 = nullptr;
                            int64_t var_590_13 = 0xf;
                            var_5a8 = 0;
                            int64_t r8_22 = sub_140019e40(&var_5a8, "Converting: ", 0xc);
                            void* rsi_7 = s_2 + _Stream_3;
                            void* r9_7 = rsi_7;

                            if (*(rsi_7 + 0x18) >= 0x10)
                                r9_7 = *rsi_7;

                            char* rsi_8 = *(rsi_7 + 0x10);
                            int64_t* rax_128;

                            if (rsi_8 > var_590_13 - var_598_13)
                            {
                                isReference = rsi_8;
                                rax_128 = sub_14001b1b0(&var_5a8, rsi_8, r8_22, r9_7, isReference);
                            }
                            else
                            {
                                void* var_598_14 = var_598_13 + rsi_8;
                                char* rdi_13 = &var_5a8;

                                if (var_590_13 >= 0x10)
                                    rdi_13 = var_5a8;

                                void* rdi_14 = rdi_13 + var_598_13;
                                memmove(rdi_14, r9_7, rsi_8);
                                *(rsi_8 + rdi_14) = 0;
                                rax_128 = &var_5a8;
                                _Stream_3 = _Stream;
                            }

                            wchar16* var_408_1 = nullptr;
                            int64_t var_400_1 = 0;
                            var_418 = *rax_128;
                            var_408_1 = *(rax_128 + 0x10);
                            rax_128[2] = 0;
                            rax_128[3] = 0xf;
                            *rax_128 = 0;
                            var_570 |= 4;
                            char* rdx_77 = &var_418;

                            if (var_400_1 >= 0x10)
                                rdx_77 = var_418;

                            std::ostream::operator<<(sub_14001c100(std::cout, rdx_77, var_408_1), sub_14001a5a0);

                            if (var_400_1 >= 0x10)
                            {
                                char* rcx_117 = var_418;
                                char* rax_130 = rcx_117;

                                if (var_400_1 + 1 >= 0x1000)
                                {
                                    rcx_117 = *(rcx_117 - 8);

                                    if (rax_130 - rcx_117 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_117);
                            }

                            int64_t var_408_2 = 0;
                            int64_t var_400_2 = 0xf;
                            var_418 = 0;

                            if (var_590_13 >= 0x10)
                            {
                                void* rcx_118 = var_5a8;
                                void* rax_133 = rcx_118;

                                if (var_590_13 + 1 >= 0x1000)
                                {
                                    rcx_118 = *(rcx_118 - 8);

                                    if (rax_133 - rcx_118 - 8 > 0x1f)
                                    {
                                        _invalid_parameter_noinfo_noreturn();
                                        /* no return */
                                    }
                                }

                                sub_14001e5e4(rcx_118);
                            }

                            int64_t* r14_4 = i_11 + s_6;
                            char* rax_138 = s_4 + r15_5 * 0x18;
                            var_418 = rax_138;
                            int32_t r12_2 = 0;
                            int64_t rsi_9 = 0;
                            int32_t rcx_120 = var_580;

                            if (rcx_120 > 0)
                            {
                                int32_t r15_6 = 2;
                                int32_t rax_139 = var_584;
                                int32_t rdx_82 = var_524;

                                do
                                {
                                    int32_t r10_1 = 0;
                                    int64_t r11_1 = 0;

                                    if (rax_139 > 0)
                                    {
                                        int32_t r9_8 = r15_6;

                                        do
                                        {
                                            int16_t rax_143;
                                            rax_143 = *(r9_8 + rbx_12 - 2) + *(r9_8 + rbx_12 - 1) + *(r9_8 + rbx_12) >= 0x100;
                                            *(*r14_4 + ((rsi_9 * r14_4[1] + r11_1) << 1)) = rax_143;
                                            r10_1 += 1;
                                            r9_8 += rbx_10;
                                            r11_1 += 1;
                                            rax_139 = var_584;
                                        } while (r10_1 < rax_139);

                                        rcx_120 = var_580;
                                        rdx_82 = var_524;
                                    }

                                    r12_2 += 1;
                                    r15_6 += rdx_82;
                                    rsi_9 += 1;
                                } while (r12_2 < rcx_120);

                                pExceptionObject_4 = pExceptionObject_1;
                                rax_138 = var_418;
                                _Stream_3 = _Stream;
                                r15_5 = var_520;
                            }

                            zmm6 = sub_140013970(r14_4, rax_138);
                            r15_5 += 1;
                            var_520 = r15_5;
                            _Stream_3 = &_Stream_3[4];
                            _Stream = _Stream_3;
                            i_11 = i_10 + 0x18;
                            i_10 = i_11;
                            pExceptionObject_4 = &;
                            pExceptionObject_1 = pExceptionObject_4;
                            r12_1 = *s[8];
                        } while (pExceptionObject_4 != r12_1);
                    }

                    std::ostream::operator<<(sub_14001a060(std::cout, "Blending..."), sub_14001a5a0);
                    int64_t rbx_13 = var_584;
                    int64_t rsi_10 = var_580;
                    int128_t s_1;
                    __builtin_memset(&s_1, 0, 0x18);

                    if (rbx_13 && rsi_10)
                    {
                        int64_t rax_145;
                        int64_t rdx_87;
                        rdx_87 = HIGHQ(0x7fffffffffffffff);
                        rax_145 = LOWQ(0x7fffffffffffffff);
                        int64_t rax_147;
                        int64_t rdx_89;

                        if (rbx_13 <= COMBINE(rdx_87, rax_145) / rsi_10)
                            rdx_89 = HIGHQ(0x7fffffffffffffff);
                            rax_147 = LOWQ(0x7fffffffffffffff);

                        if (rbx_13 > COMBINE(rdx_87, rax_145) / rsi_10 || rbx_13 > COMBINE(rdx_89, rax_147) / rsi_10)
                        {
                            __scrt_throw_std_bad_alloc();
                            /* no return */
                        }
                    }

                    int64_t rdi_19 = rsi_10 * rbx_13;
                    char* rcx_127;

                    if (!rdi_19)
                        rcx_127 = s_1;
                    else
                    {
                        free(nullptr);
                        char* rax_149 = sub_14001e050(rdi_19);
                        rcx_127 = rax_149;
                        s_1 = rax_149;
                    }

                    *s_1[8] = rbx_13;
                    int64_t var_3a0_1 = rsi_10;
                    pExceptionObject_1 = zmm6;
                    var_418 = rcx_127;
                    var_410 = rbx_13;
                    var_5a8 = &var_418;
                    struct std::exception::cmdline::cmdline_error::VTable** var_5a0_2 = &pExceptionObject_1;
                    void* var_598_15 = &var_588;
                    int128_t* var_590_14 = &s_1;
                    int64_t rax_151;
                    int32_t rdx_90;
                    rdx_90 = HIGHQ(rdi_19);
                    rax_151 = LOWQ(rdi_19);
                    int64_t rdx_93 = ((rdx_90 & 3) + rax_151) & 0xfffffffffffffffc;
                    int64_t rax_152 = 0;

                    if (rdx_93 > 0)
                    {
                        while (true)
                        {
                            *(rcx_127 + (rax_152 << 2)) = _mm_shuffle_ps(zmm6, zmm6, 0);
                            rax_152 += 4;

                            if (rax_152 >= rdx_93)
                                break;

                            zmm6 = pExceptionObject_1;
                            rcx_127 = var_418;
                        }
                    }

                    sub_14001e2e0(&var_5a8, rdx_93, rdi_19);
                    int128_t s_3;
                    __builtin_memset(&s_3, 0, 0x18);
                    int64_t r15_7 = 1;
                    int32_t rax_153 = var_2f0;
                    int64_t r13_2 = rax_153;
                    void var_57c;

                    if (1 < r13_2)
                    {
                        int32_t rcx_129 = rbx_8;

                        do
                        {
                            void* r14_7 = s_4 + var_568;
                            int32_t rbx_14 = 0;

                            if (rcx_129 > 0)
                            {
                                do
                                {
                                    zmm0_5 = _mm_cvtepi32_ps(rbx_14) * zmm8;
                                    zmm7[0] = zmm7[0] - zmm0_5;
                                    int64_t r9_9 = *(r14_7 + 0x10);
                                    int64_t rdi_20 = *(r14_7 + 8);
                                    int64_t rax_154 = *(r14_7 - 0x10);
                                    var_508 = r14_7 - 0x18;
                                    int64_t var_4f8_2 = rax_154;
                                    int64_t var_4f0_1 = *(r14_7 - 8);
                                    float var_4e8_2 = zmm7[0];
                                    void* var_4d0_1 = r14_7;
                                    int64_t var_4c0_1 = rdi_20;
                                    int64_t var_4b8_1 = r9_9;
                                    int32_t var_4b0_1 = zmm0_5;
                                    int64_t var_1c8_1 = *(r14_7 - 0x18);
                                    int64_t var_1c0_1 = rax_154;
                                    float var_1b8_1 = zmm7[0];
                                    void var_4d8;
                                    void var_1b0;
                                    sub_14001e360(&var_1b0, &var_4d8);
                                    int64_t rcx_133 = *s_3[8];
                                    int64_t var_370;

                                    if (rcx_133 != rdi_20 || var_370 != r9_9)
                                    {
                                        if (rdi_20 && r9_9 && rdi_20 > 0x7fffffffffffffff / r9_9)
                                        {
                                            __scrt_throw_std_bad_alloc();
                                            /* no return */
                                        }

                                        sub_14001df30(&s_3, rdi_20 * r9_9, rdi_20, r9_9);
                                        rcx_133 = *s_3[8];
                                    }

                                    var_418 = s_3;
                                    var_410 = rcx_133;
                                    isReference = &s_3;
                                    <lambda_532e024f4337e6fc7ad266c2bef9f4ed>::<lambda_532e024f4337e6fc7ad266c2bef9f4ed>(&var_5a8, &var_418, &pExceptionObject_2, &var_588, isReference);
                                    int64_t r8_30 = var_590_14[1] * *(var_590_14 + 8);
                                    int64_t rax_159;
                                    int32_t rdx_100;
                                    rdx_100 = HIGHQ(r8_30);
                                    rax_159 = LOWQ(r8_30);
                                    int64_t rdx_103 = ((rdx_100 & 3) + rax_159) & 0xfffffffffffffffc;
                                    int64_t rcx_137 = 0;

                                    if (rdx_103 > 0)
                                    {
                                        int64_t* r9_11 = var_5a8;

                                        do
                                        {
                                            zmm0_5 = var_5a0_2[8];
                                            zmm0_5 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0);
                                            float temp0_10[0x4] = _mm_mul_ps(*(var_5a0_2[6] + (rcx_137 << 2)), zmm0_5);
                                            zmm0_5 = var_5a0_2[4];
                                            zmm0_5 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0);
                                            *(*r9_11 + (rcx_137 << 2)) = _mm_add_ps(_mm_mul_ps(*(var_5a0_2[2] + (rcx_137 << 2)), zmm0_5), temp0_10);
                                            rcx_137 += 4;
                                        } while (rcx_137 < rdx_103);
                                    }

                                    sub_14001e380(&var_5a8, rdx_103, r8_30);
                                    isReference = &var_580;
                                    _vcomp_fork(1, 3, sub_14001f2e0, &s_3, isReference, &var_584, var_5b8);
                                    pExceptionObject_1 = s_3;
                                    int64_t var_2a8_1 = *s_3[8];
                                    i_10 = s_1;
                                    int64_t var_360_1 = *s_1[8];
                                    isReference = &s_1;
                                    <lambda_532e024f4337e6fc7ad266c2bef9f4ed>::<lambda_532e024f4337e6fc7ad266c2bef9f4ed>(&var_5a8, &i_10, &pExceptionObject_1, &var_57c, isReference);
                                    void* r8_33 = var_590_14[1] * *(var_590_14 + 8);
                                    int64_t rax_168;
                                    int32_t rdx_105;
                                    rdx_105 = HIGHQ(r8_33);
                                    rax_168 = LOWQ(r8_33);
                                    int64_t rdx_108 = ((rdx_105 & 3) + rax_168) & 0xfffffffffffffffc;
                                    int64_t rdi_22 = 0;

                                    if (rdx_108 > 0)
                                    {
                                        int64_t* r10_2 = var_5a8;

                                        do
                                        {
                                            int64_t rcx_141 = *r10_2;
                                            *(rcx_141 + (rdi_22 << 2)) = __addps_xmmps_memps(*(rcx_141 + (rdi_22 << 2)), *(*var_5a0_2 + (rdi_22 << 2)));
                                            rdi_22 += 4;
                                        } while (rdi_22 < rdx_108);
                                    }

                                    sub_14001e150(&var_5a8, rdx_108, r8_33);
                                    rbx_14 += 1;
                                } while (rbx_14 < rbx_8);

                                rcx_129 = rbx_8;
                            }

                            r15_7 += 1;
                            var_568 += 0x18;
                        } while (r15_7 < r13_2);

                        rax_153 = var_2f0;
                    }

                    zmm0_5 = _mm_cvtepi32_ps(rax_153 - 1) * zmm9;
                    var_418 = zmm0_5;
                    var_2f0 = s_1;
                    int64_t var_2e8_1 = *s_1[8];
                    isReference = &s_1;
                    <lambda_532e024f4337e6fc7ad266c2bef9f4ed>::<lambda_532e024f4337e6fc7ad266c2bef9f4ed>(&var_5a8, &var_2f0, &var_418, &var_57c, isReference);
                    int64_t r8_36 = var_590_14[1] * *(var_590_14 + 8);
                    int64_t rax_174;
                    int32_t rdx_110;
                    rdx_110 = HIGHQ(r8_36);
                    rax_174 = LOWQ(r8_36);
                    int64_t rdx_113 = ((rdx_110 & 3) + rax_174) & 0xfffffffffffffffc;
                    int64_t rcx_145 = 0;

                    if (rdx_113 > 0)
                    {
                        int64_t* r9_16 = var_5a8;

                        do
                        {
                            float zmm1_1[0x4] = *var_5a0_2;
                            float temp0_16[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0);
                            int64_t rax_175 = *r9_16;
                            *(rax_175 + (rcx_145 << 2)) = _mm_div_ps(*(rax_175 + (rcx_145 << 2)), temp0_16);
                            rcx_145 += 4;
                        } while (rcx_145 < rdx_113);
                    }

                    sub_14001e0c0(&var_5a8, rdx_113, r8_36);
                    int64_t rax_179 = j_operator new(var_580 * var_584 * 3);
                    int32_t r11_2 = 0;
                    int32_t rdi_24 = var_584;
                    int32_t rdx_114 = var_580;

                    if (rdi_24 > 0)
                    {
                        int64_t r10_3 = 0;
                        int32_t rax_180 = rbx_10;
                        int32_t r12_3 = var_524;
                        int32_t rcx_148 = 2;

                        do
                        {
                            int32_t r8_37 = 0;
                            int64_t r9_17 = 0;

                            if (rdx_114 > 0)
                            {
                                int32_t rdi_25 = rcx_148;

                                do
                                {
                                    char rdx_115 = *(s_1 + ((*s_1[8] * r9_17 + r10_3) << 2));
                                    *(rdi_25 + rax_179 - 2) = rdx_115;
                                    *(rdi_25 + rax_179 - 1) = rdx_115;
                                    rdi_25[rax_179] = rdx_115;
                                    r8_37 += 1;
                                    rdi_25 += r12_3;
                                    r9_17 += 1;
                                    rdx_114 = var_580;
                                } while (r8_37 < rdx_114);

                                rdi_24 = var_584;
                                rax_180 = rbx_10;
                                rcx_148 = var_528;
                            }

                            r11_2 += 1;
                            rcx_148 += rax_180;
                            var_528 = rcx_148;
                            r10_3 += 1;
                        } while (r11_2 < rdi_24);

                        r12_1 = *s[8];
                    }

                    var_5c0_2 = 0;
                    isReference = rax_179;
                    sub_1400131f0(sub_1400198b0(&var_2d0), rdi_24, rdx_114, rbx_10, isReference, var_5c0_2);
                    sub_14001e5e4(rax_179);

                    for (int64_t* i_5 = s; i_5 != r12_1; i_5 = &i_5[1])
                        free(*i_5);

                    std::ostream::operator<<(sub_14001a060(std::cout, "Finish"), sub_14001a5a0);
                    free(s_3);
                    free(s_1);
                    sub_140019bf0(&s_4);
                    sub_140019bf0(&s_6);
                    goto label_140018979;
                }

                if (var_348 >= 4)
                {
                    void** rax_81 = sub_14001a060(std::cout, "Load: ");
                    char* rdx_53 = &var_358;

                    if (var_340 >= 0x10)
                        rdx_53 = var_358;

                    int64_t rdx_54;
                    int64_t r8_14;
                    rdx_54 = std::ostream::operator<<(sub_14001c100(rax_81, rdx_53, var_348), sub_14001a5a0);

                    if (0x7fffffffffffffff - rdi_1 < var_348)
                    {
                        sub_1400011e0();
                        /* no return */
                    }

                    char* r9_4 = &var_438;

                    if (var_420_7 >= 0x10)
                        r9_4 = var_438;

                    int64_t* rax_84 = &var_358;

                    if (var_340 >= 0x10)
                        rax_84 = var_358;

                    var_5b8 = var_348;
                    isReference = rdi_1;
                    sub_14001bda0(&var_5a8, rdx_54, r8_14, r9_4, isReference, rax_84, var_5b8);
                    rbx_9 |= 2;
                    var_570 = rbx_9;
                    int128_t* rdx_55 = *s_2[8];
                    int64_t var_388;
                    int64_t rdx_56;

                    if (rdx_55 == var_388)
                    {
                        sub_14001ab60(&s_2, rdx_55, &var_5a8);
                        rdx_56 = var_590_11;
                    }
                    else
                    {
                        *rdx_55 = var_5a8;
                        rdx_55[1] = var_598_11;
                        rdx_56 = 0xf;
                        var_5a8 = 0;
                        *s_2[8] += 0x20;
                    }

                    if (rdx_56 >= 0x10)
                    {
                        void* rcx_83 = var_5a8;
                        void* rax_85 = rcx_83;

                        if (rdx_56 + 1 >= 0x1000)
                        {
                            rcx_83 = *(rcx_83 - 8);

                            if (rax_85 - rcx_83 - 8 > 0x1f)
                                break;
                        }

                        sub_14001e5e4(rcx_83);
                    }

                    rdi_1 = var_428_7;
                }
            }

            _invalid_parameter_noinfo_noreturn();
            /* no return */
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

int64_t sub_140018c80(int64_t* arg1)
{
    *(*(*arg1 + 4) + &arg1[0x13] - 0x98) = &std::stringstream::`vftable';
    int64_t rdx_1 = *(*arg1 + 4);
    *(rdx_1 + &arg1[0x13] - 0x9c) = rdx_1 - 0x98;
    sub_1400192f0(&arg1[3]);
    std::iostream::~iostream<char, struct std::char_traits<char> >(&arg1[4]);
    /* tailcall */
    return std::ios::~ios<char, struct std::char_traits<char> >(&arg1[0x13]);
}

int64_t sub_140018ce0(int64_t* arg1)
{
    /* tailcall */
    return free(*arg1);
}

void j_sub_140019bf0(int64_t* arg1)
{
    /* tailcall */
    return sub_140019bf0(arg1);
}

void sub_140018d00(int64_t* arg1)
{
    void* rcx = *arg1;

    if (rcx)
    {
        int64_t rax_1;
        int64_t rdx_3;
        rdx_3 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - rcx));
        rax_1 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - rcx));
        int64_t rdx_4 = rdx_3 >> 1;

        if ((rdx_4 + (rdx_4 >> 0x3f)) * 0xc >= 0x1000)
        {
            void* r8_1 = *(rcx - 8);

            if (rcx - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx = r8_1;
        }

        sub_14001e5e4(rcx);
        __builtin_memset(arg1, 0, 0x18);
    }
}

void sub_140018d80(int64_t* arg1)
{
    void* rcx = *arg1;

    if (rcx)
    {
        if (((arg1[2] - rcx) & 0xfffffffffffffff8) >= 0x1000)
        {
            void* r8_1 = *(rcx - 8);

            if (rcx - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx = r8_1;
        }

        sub_14001e5e4(rcx);
        __builtin_memset(arg1, 0, 0x18);
    }
}

int64_t* sub_140018de0(void* arg1, int64_t* arg2, void* arg3, char arg4)
{
    int64_t* r14 = *(arg1 + 0x38);
    int64_t r11_1 = *(arg3 + 8) + *arg3;
    int64_t rsi = *r14;
    int64_t rcx = **(arg1 + 0x40);

    if (rcx && *(arg1 + 0x68) < rcx)
        *(arg1 + 0x68) = rcx;

    int64_t rbx = *(arg1 + 0x68);
    int64_t rdi = **(arg1 + 0x18);

    if (r11_1 > rbx - rdi || (r11_1 && ((arg4 & 1 && !rsi) || (arg4 & 2 && !rcx))))
        *arg2 = -1;
    else
    {
        int64_t r8 = rdi + r11_1;

        if (arg4 & 1 && rsi)
        {
            *r14 = r8;
            **(arg1 + 0x50) = rbx - r8;
        }

        if (arg4 & 2 && rcx)
        {
            int32_t rcx_3 = **(arg1 + 0x58) + **(arg1 + 0x40) - r8;
            **(arg1 + 0x20) = rdi;
            **(arg1 + 0x40) = r8;
            **(arg1 + 0x58) = rcx_3;
        }

        *arg2 = r11_1;
    }

    arg2[1] = 0;
    arg2[2] = 0;
    return arg2;
}

int64_t* sub_140018ed0(void* arg1, int64_t* arg2, int64_t arg3, int32_t arg4, char arg5)
{
    int64_t* r14 = *(arg1 + 0x38);
    int64_t rdi = *r14;
    int64_t rcx = **(arg1 + 0x40);

    if (rcx && *(arg1 + 0x68) < rcx)
        *(arg1 + 0x68) = rcx;

    int64_t rsi = *(arg1 + 0x68);
    int64_t rbx = **(arg1 + 0x18);
    int64_t r11_1 = rsi - rbx;
    int64_t rax_2;

    if (!arg4)
    {
        rax_2 = 0;
        label_140018f81:
        int64_t r9_1 = rax_2 + arg3;

        if (r9_1 > r11_1 || (r9_1 && ((arg5 & 1 && !rdi) || (arg5 & 2 && !rcx))))
            *arg2 = -1;
        else
        {
            int64_t r11_2 = rbx + r9_1;

            if (arg5 & 1 && rdi)
            {
                *r14 = r11_2;
                **(arg1 + 0x50) = rsi - r11_2;
            }

            if (arg5 & 2 && rcx)
            {
                int32_t rcx_3 = **(arg1 + 0x58) + **(arg1 + 0x40) - r11_2;
                **(arg1 + 0x20) = rbx;
                **(arg1 + 0x40) = r11_2;
                **(arg1 + 0x58) = rcx_3;
            }

            *arg2 = r9_1;
        }
    }
    else if (arg4 != 1)
    {
        if (arg4 == 2)
        {
            rax_2 = r11_1;
            goto label_140018f81;
        }

        *arg2 = -1;
    }
    else if ((arg5 & 3) == 3)
        *arg2 = -1;
    else if (!(arg5 & 1))
    {
        if (arg5 & 2 && (rcx || !rbx))
        {
            rax_2 = rcx - rbx;
            goto label_140018f81;
        }

        *arg2 = -1;
    }
    else
    {
        if (rdi || !rbx)
        {
            rax_2 = rdi - rbx;
            goto label_140018f81;
        }

        *arg2 = -1;
    }
    arg2[1] = 0;
    arg2[2] = 0;
    return arg2;
}

uint64_t sub_140019030(void* arg1)
{
    int64_t* r10 = *(arg1 + 0x38);
    char* r8 = *r10;

    if (r8)
    {
        if (r8 < &r8[**(arg1 + 0x50)])
            return *r8;

        int64_t r9_1 = **(arg1 + 0x40);

        if (r9_1 && !(*(arg1 + 0x70) & 4))
        {
            int64_t rcx_2 = *(arg1 + 0x68);

            if (rcx_2 < r9_1)
                rcx_2 = r9_1;

            if (rcx_2 > r8)
            {
                *(arg1 + 0x68) = rcx_2;
                int64_t rax_4 = *r10;
                *r10 = rax_4;
                **(arg1 + 0x50) = rcx_2 - rax_4;
                return ***(arg1 + 0x38);
            }
        }
    }

    return 0xffffffff;
}

uint64_t sub_1400190a0(void* arg1, int32_t arg2)
{
    void* r8 = **(arg1 + 0x38);

    if (!r8 || r8 <= **(arg1 + 0x18) || (arg2 != 0xffffffff && arg2 != *(r8 - 1) && *(arg1 + 0x70) & 2))
        return 0xffffffff;

    int32_t* rax_1 = *(arg1 + 0x50);
    *rax_1 += 1;
    int64_t* rax_2 = *(arg1 + 0x38);
    *rax_2 -= 1;

    if (arg2 != 0xffffffff)
        ***(arg1 + 0x38) = arg2;

    if (arg2 == 0xffffffff)
        arg2 = 0;

    return arg2;
}

uint64_t sub_140019100(void* arg1, int32_t arg2)
{
    if (!(*(arg1 + 0x70) & 2))
    {
        if (arg2 == 0xffffffff)
            return 0;

        int64_t rsi_1 = **(arg1 + 0x40);
        int64_t rdi_2 = **(arg1 + 0x58) + rsi_1;

        if (rsi_1 && rsi_1 < rdi_2)
        {
            *std::streambuf::_Pninc() = arg2;
            *(arg1 + 0x68) = rsi_1 + 1;
            return arg2;
        }

        void* r14_1 = **(arg1 + 0x18);
        void* rdi_3 = rdi_2 - r14_1;

        if (!rsi_1)
            rdi_3 = nullptr;

        uint64_t rbp_1;
        void* const rsi_2;

        if (rdi_3 < 0x20)
        {
            rbp_1 = 0x20;
            rsi_2 = operator new(0x20);
            label_140019203:
            memcpy(rsi_2, r14_1, rdi_3);
            void* rdx_1 = rdi_3 + rsi_2;
            *(arg1 + 0x68) = rdx_1 + 1;
            **(arg1 + 0x20) = rsi_2;
            **(arg1 + 0x40) = rdx_1;
            **(arg1 + 0x58) = rsi_2 - rdx_1 + rbp_1;

            if (!(*(arg1 + 0x70) & 4))
            {
                void* rcx_8 = **(arg1 + 0x38) - r14_1 + rsi_2;
                int32_t rdx_3 = *(arg1 + 0x68) - rcx_8;
                **(arg1 + 0x18) = rsi_2;
                **(arg1 + 0x38) = rcx_8;
                **(arg1 + 0x50) = rdx_3;
            }
            else
            {
                **(arg1 + 0x18) = rsi_2;
                **(arg1 + 0x38) = 0;
                **(arg1 + 0x50) = rsi_2;
            }

            int32_t rax_22 = *(arg1 + 0x70);

            if (!(rax_22 & 1))
                goto label_1400192ad;

            if (rdi_3 < 0x1000)
                goto label_14001929f;

            void* rcx_9 = *(r14_1 - 8);

            if (r14_1 - rcx_9 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            r14_1 = rcx_9;
            label_14001929f:
            sub_14001e5e4(r14_1);
            rax_22 = *(arg1 + 0x70);
            label_1400192ad:
            *(arg1 + 0x70) = rax_22 | 1;
            *std::streambuf::_Pninc() = arg2;
            return arg2;
        }

        uint64_t rcx;

        if (rdi_3 < 0x3fffffff)
        {
            rbp_1 = rdi_3 * 2;

            if (rbp_1 < 0x1000)
            {
                if (!rbp_1)
                    rsi_2 = nullptr;
                else
                    rsi_2 = operator new(rbp_1);

                goto label_140019203;
            }

            rcx = rbp_1 + 0x27;

            if (rcx > rbp_1)
                goto label_1400191e0;

            stdext::threads::_Throw_lock_error();
            /* no return */
        }

        rbp_1 = 0x7fffffff;

        if (rdi_3 < 0x7fffffff)
        {
            rcx = 0x80000026;
            label_1400191e0:
            int64_t rax_9 = operator new(rcx);

            if (!rax_9)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rsi_2 = (rax_9 + 0x27) & 0xffffffffffffffe0;
            *(rsi_2 - 8) = rax_9;
            goto label_140019203;
        }
    }

    return 0xffffffff;
}

int64_t sub_1400192f0(struct std::streambuf::std::stringbuf::VTable** arg1)
{
    bool cond:0 = !(arg1[0xe] & 1);
    *arg1 = &std::stringbuf::`vftable'{for `std::streambuf'};

    if (!cond:0)
    {
        int64_t vFunc_0 = arg1[8]->vFunc_0;
        int64_t rdx_2;

        if (!vFunc_0)
            rdx_2 = arg1[0xa]->vFunc_0 + arg1[7]->vFunc_0;
        else
            rdx_2 = arg1[0xb]->vFunc_0 + vFunc_0;

        void* vFunc_0_1 = arg1[3]->vFunc_0;

        if (rdx_2 - vFunc_0_1 >= 0x1000)
        {
            void* vFunc_0_2 = *(vFunc_0_1 - 8);

            if (vFunc_0_1 - vFunc_0_2 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            vFunc_0_1 = vFunc_0_2;
        }

        sub_14001e5e4(vFunc_0_1);
    }

    arg1[3]->vFunc_0 = 0;
    arg1[7]->vFunc_0 = 0;
    arg1[0xa]->vFunc_0 = 0;
    arg1[4]->vFunc_0 = 0;
    arg1[8]->vFunc_0 = 0;
    arg1[0xb]->vFunc_0 = 0;
    arg1[0xe] &= 0xfffffffe;
    arg1[0xd] = 0;
    /* tailcall */
    return std::streambuf::~streambuf<char, struct std::char_traits<char> >(arg1);
}

void** sub_1400193b0(void** arg1)
{
    int32_t rdx;
    arg_10 = rdx;
    arg_8 = arg1;
    arg_10 = 0;
    *arg1 = &data_1400224c0;
    std::ios::ios<char, struct std::char_traits<char> >(&arg1[0x11]);
    arg_10 = 1;
    std::ostream::ostream<char, struct std::char_traits<char> >(arg1, &arg1[1], 0);
    *(*(*arg1 + 4) + arg1) = &std::ostringstream::`vftable';
    int64_t rcx_3 = *(*arg1 + 4);
    *(rcx_3 + arg1 - 4) = rcx_3 - 0x88;
    arg_18 = &arg1[1];
    std::streambuf::streambuf<char, struct std::char_traits<char> >();
    arg1[1] = &std::stringbuf::`vftable'{for `std::streambuf'};
    arg1[0xe] = 0;
    arg1[0xf] = 4;
    return arg1;
}

void* sub_140019460(int64_t* arg1, char* arg2)
{
    void** rdi = *arg1;
    void** rax = rdi[1];
    void** var_28 = rax;
    int32_t var_20 = 0;
    void** rcx = rdi;

    while (!*(rax + 0x19))
    {
        var_28 = rax;

        if (rax[4] >= *arg2)
        {
            int32_t var_20_2 = 1;
            rcx = rax;
            rax = *rax;
        }
        else
        {
            int32_t var_20_1 = 0;
            rax = rax[2];
        }
    }

    if (*(rcx + 0x19) || *arg2 < rcx[4])
    {
        if (arg1[1] == 0x38e38e38e38e38e)
        {
            sub_140014240();
            /* no return */
        }

        int64_t* var_38 = arg1;
        int64_t var_30_1 = 0;
        void** rax_2 = operator new(0x48);
        rax_2[4] = *arg2;
        rax_2[7] = 0;
        rax_2[8] = 0xf;
        rax_2[5] = 0;
        *rax_2 = rdi;
        rax_2[1] = rdi;
        rax_2[2] = rdi;
        rax_2[3] = 0;
        var_38 = var_28;
        rcx = sub_14001bb20(arg1, &var_38, rax_2);
    }

    return &rcx[5];
}

int64_t* sub_140019570(int64_t* arg1, int64_t* arg2)
{
    void* i = *arg1;
    *arg2 = i;
    int64_t* r9 = *(i + 0x10);

    if (!*(r9 + 0x19))
    {
        int64_t* rcx = *r9;

        if (!*(rcx + 0x19))
        {
            int64_t* rax_2;

            do
            {
                rax_2 = *rcx;
                r9 = rcx;
                rcx = rax_2;
            } while (!*(rax_2 + 0x19));
        }

        *arg1 = r9;
        return arg2;
    }

    void* i_1 = *(i + 8);

    if (!*(i_1 + 0x19))
    {
        while (i == *(i_1 + 0x10))
        {
            *arg1 = i_1;
            i = i_1;
            i_1 = *(i_1 + 8);

            if (*(i_1 + 0x19))
                break;
        }
    }

    *arg1 = i_1;
    return arg2;
}

void sub_1400195e0(int64_t* arg1, int128_t* arg2)
{
    int128_t* rdx = arg1[1];

    if (rdx == arg1[2])
        /* tailcall */
        return sub_14001ab60(arg1, rdx, arg2);

    rdx[1] = 0;
    *(rdx + 0x18) = 0;
    *rdx = *arg2;
    rdx[1] = arg2[1];
    arg2[1] = 0;
    *(arg2 + 0x18) = 0xf;
    *arg2 = 0;
    arg1[1] += 0x20;
}

void sub_140019630(int64_t* arg1)
{
    int64_t* rcx = *arg1;

    if (rcx)
    {
        sub_14001afc0(rcx, arg1[1]);
        void* rcx_1 = *arg1;

        if (((arg1[2] - rcx_1) & 0xffffffffffffffe0) >= 0x1000)
        {
            void* r8_1 = *(rcx_1 - 8);

            if (rcx_1 - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx_1 = r8_1;
        }

        sub_14001e5e4(rcx_1);
        __builtin_memset(arg1, 0, 0x18);
    }
}

void* sub_1400196a0(int64_t* arg1, int64_t* arg2)
{
    void var_18;
    return *sub_14001adf0(arg1, &var_18, arg2) + 0x40;
}

int64_t sub_1400196c0(int64_t* arg1, int64_t* arg2)
{
    void** rbp = *arg1;
    void** rbx = rbp[1];

    if (!*(rbx + 0x19))
    {
        uint64_t count_5 = arg2[2];
        int64_t r15_1 = arg2[3];

        do
        {
            int64_t* buffer2 = arg2;

            if (r15_1 >= 0x10)
                buffer2 = *arg2;

            void* buffer1 = &rbx[4];

            if (rbx[7] >= 0x10)
                buffer1 = rbx[4];

            uint64_t count_3 = rbx[6];
            uint64_t count = count_3;

            if (count_5 < count_3)
                count = count_5;

            int32_t rax_1 = memcmp(buffer1, buffer2, count);

            if (!rax_1)
            {
                if (count_3 >= count_5)
                {
                    rbp = rbx;
                    rbx = *rbx;
                }
                else
                    rbx = rbx[2];
            }
            else if (rax_1 < 0)
                rbx = rbx[2];
            else
            {
                rbp = rbx;
                rbx = *rbx;
            }
        } while (!*(rbx + 0x19));
    }

    if (!*(rbp + 0x19))
    {
        void* buffer2_1 = &rbp[4];

        if (rbp[7] >= 0x10)
            buffer2_1 = rbp[4];

        int64_t* buffer1_1 = arg2;

        if (arg2[3] >= 0x10)
            buffer1_1 = *arg2;

        uint64_t count_4 = rbp[6];
        uint64_t count_2 = arg2[2];
        uint64_t count_1 = count_2;

        if (count_4 < count_2)
            count_1 = count_4;

        int32_t rax_2 = memcmp(buffer1_1, buffer2_1, count_1);

        if (!rax_2)
        {
            if (count_2 >= count_4)
                return 1;
        }
        else if (rax_2 >= 0)
            return 1;
    }

    return 0;
}

void** sub_1400197b0(int64_t* arg1, void** arg2, int64_t* arg3)
{
    void** r13 = *arg1;
    void** rbp = r13;
    void** rbx = r13[1];

    if (!*(rbx + 0x19))
    {
        int64_t r12_1 = arg3[3];
        uint64_t count_5 = arg3[2];

        do
        {
            int64_t* buffer2 = arg3;

            if (r12_1 >= 0x10)
                buffer2 = *arg3;

            void* buffer1 = &rbx[4];

            if (rbx[7] >= 0x10)
                buffer1 = rbx[4];

            uint64_t count_3 = rbx[6];
            uint64_t count = count_3;

            if (count_5 < count_3)
                count = count_5;

            int32_t rax_1 = memcmp(buffer1, buffer2, count);

            if (!rax_1)
            {
                if (count_3 >= count_5)
                {
                    rbp = rbx;
                    rbx = *rbx;
                }
                else
                    rbx = rbx[2];
            }
            else if (rax_1 < 0)
                rbx = rbx[2];
            else
            {
                rbp = rbx;
                rbx = *rbx;
            }
        } while (!*(rbx + 0x19));
    }

    if (*(rbp + 0x19))
        *arg2 = r13;
    else
    {
        void* buffer2_1 = &rbp[4];

        if (rbp[7] >= 0x10)
            buffer2_1 = rbp[4];

        int64_t* buffer1_1 = arg3;

        if (arg3[3] >= 0x10)
            buffer1_1 = *arg3;

        uint64_t count_4 = rbp[6];
        uint64_t count_2 = arg3[2];
        uint64_t count_1 = count_2;

        if (count_4 < count_2)
            count_1 = count_4;

        int32_t rax_2 = memcmp(buffer1_1, buffer2_1, count_1);

        if (!rax_2)
        {
            if (count_2 < count_4)
                *arg2 = r13;
            else
                *arg2 = rbp;
        }
        else if (rax_2 >= 0)
            *arg2 = rbp;
        else
            *arg2 = r13;
    }

    return arg2;
}

int64_t* sub_1400198b0(int64_t* arg1)
{
    if (arg1[3] < 0x10)
        return arg1;

    return *arg1;
}

void sub_1400198c0(int64_t* arg1)
{
    int64_t rdx = arg1[3];

    if (rdx >= 0x10)
    {
        void* rcx = *arg1;

        if (rdx + 1 >= 0x1000)
        {
            void* r8_1 = *(rcx - 8);

            if (rcx - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx = r8_1;
        }

        sub_14001e5e4(rcx);
    }

    arg1[2] = 0;
    arg1[3] = 0xf;
    *arg1 = 0;
}

int64_t* sub_140019920(int64_t* arg1, char* arg2)
{
    arg1[2] = 0;
    arg1[3] = 0xf;
    char* r8 = -ffffffffffffffff;
    *arg1 = 0;

    do
        r8 = &r8[1];
     while (*(arg2 + r8));

    sub_140019e40(arg1, arg2, r8);
    return arg1;
}

int64_t* sub_140019960(int128_t* arg1, int64_t* arg2)
{
    void* rax = nullptr;
    int128_t* rdi = arg2;
    arg1[1] = 0;
    int64_t* result = arg1;
    *(arg1 + 0x18) = 0;
    int64_t rbp = arg2[2];

    if (arg2[3] >= 0x10)
        rdi = *arg2;

    int64_t rsi;

    if (rbp >= 0x10)
    {
        rsi = rbp | 0xf;

        if (rsi > 0x7fffffffffffffff)
            rsi = 0x7fffffffffffffff;

        if (rsi + 1 >= 0x1000)
        {
            if (rsi + 0x28 <= rsi + 1)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_2 = operator new(rsi + 0x28);

            if (!rax_2)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rax = (rax_2 + 0x27) & 0xffffffffffffffe0;
            *(rax - 8) = rax_2;
        }
        else if (rsi != -1)
            rax = operator new(rsi + 1);

        *result = rax;
        memcpy(rax, rdi, rbp + 1);
    }
    else
    {
        rsi = 0xf;
        *arg1 = *rdi;
    }

    result[2] = rbp;
    result[3] = rsi;
    return result;
}

void* sub_140019a30(class std::basic_ios<unsigned short>* arg1, char arg2)
{
    *(*(*(arg1 + -0x98) + 4) + arg1 - 0x98) = &std::stringstream::`vftable';
    int64_t r8_1 = *(*(arg1 + -0x98) + 4);
    *(r8_1 + arg1 - 0x9c) = r8_1 - 0x98;
    sub_1400192f0(arg1 - 0x80);
    std::iostream::~iostream<char, struct std::char_traits<char> >(arg1 - 0x78);
    std::ios::~ios<char, struct std::char_traits<char> >(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1 - 0x98);

    return arg1 - 0x98;
}

struct std::streambuf::std::stringbuf::VTable** sub_140019ad0(struct std::streambuf::std::stringbuf::VTable** arg1, char arg2)
{
    sub_1400192f0(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

void* sub_140019b10(class std::basic_ios<unsigned short>* arg1, char arg2)
{
    *(*(*(arg1 + -0x88) + 4) + arg1 - 0x88) = &std::ostringstream::`vftable';
    int64_t r8_1 = *(*(arg1 + -0x88) + 4);
    *(r8_1 + arg1 - 0x8c) = r8_1 - 0x88;
    sub_1400192f0(arg1 - 0x80);
    std::ostream::~ostream<char, struct std::char_traits<char> >();
    std::ios::~ios<char, struct std::char_traits<char> >(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1 - 0x88);

    return arg1 - 0x88;
}

void* sub_140019bb0(int64_t* arg1)
{
    if (!std::uncaught_exception())
        std::ostream::_Osfx(*arg1);

    int64_t* rdx = *arg1;
    void* result = *rdx;
    int64_t* rcx_2 = *(*(result + 4) + rdx + 0x48);

    if (!rcx_2)
        return result;

    return (*(*rcx_2 + 0x10))(rcx_2);
}

void sub_140019bf0(int64_t* arg1)
{
    int64_t* rbx = *arg1;

    if (rbx)
    {
        int64_t rsi_1 = arg1[1];

        if (rbx != rsi_1)
        {
            do
            {
                free(*rbx);
                rbx = &rbx[3];
            } while (rbx != rsi_1);

            rbx = *arg1;
        }

        int64_t rax_1;
        int64_t rdx_1;
        rdx_1 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - rbx));
        rax_1 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - rbx));
        int64_t rdx_2 = rdx_1 >> 2;

        if ((rdx_2 + (rdx_2 >> 0x3f)) * 0x18 >= 0x1000)
        {
            int64_t* rax_4 = rbx[-1];

            if (rbx - rax_4 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rbx = rax_4;
        }

        sub_14001e5e4(rbx);
        __builtin_memset(arg1, 0, 0x18);
    }
}

struct std::streambuf::std::stringbuf::VTable** sub_140019cb0(struct std::streambuf::std::stringbuf::VTable** arg1, int64_t* arg2, int32_t arg3)
{
    arg_8 = arg1;
    std::streambuf::streambuf<char, struct std::char_traits<char> >();
    *arg1 = &std::stringbuf::`vftable'{for `std::streambuf'};
    int32_t r9_3 = (~arg3 & 1) << 2;
    int32_t rcx_1 = r9_3 | 2;

    if (arg3 & 2)
        rcx_1 = r9_3;

    int32_t rdx_1 = rcx_1 | 8;

    if (!(arg3 & 8))
        rdx_1 = rcx_1;

    int32_t rbp_1 = rdx_1 | 0x10;
    int32_t rbx;
    rbx = arg3 & 4;

    if (!rbx)
        rbp_1 = rdx_1;

    int64_t* r14 = arg2;

    if (arg2[3] >= 0x10)
        r14 = *arg2;

    uint64_t rsi_1 = arg2[2];

    if (rsi_1 > 0x7fffffff)
    {
        std::_Xbad_alloc();
        /* no return */
    }

    if (!rsi_1 || (rbp_1 & 6) == 6)
        arg1[0xd] = 0;
    else
    {
        void* rbx_2;

        if (rsi_1 < 0x1000)
            rbx_2 = operator new(rsi_1);
        else
        {
            if (rsi_1 + 0x27 <= rsi_1)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_4 = operator new(rsi_1 + 0x27);

            if (!rax_4)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rbx_2 = (rax_4 + 0x27) & 0xffffffffffffffe0;
            *(rbx_2 - 8) = rax_4;
        }

        memcpy(rbx_2, r14, rsi_1);
        void* rcx_5 = rbx_2 + rsi_1;
        arg1[0xd] = rcx_5;
        int32_t r8_2 = rbp_1 & 4;

        if (!r8_2)
        {
            arg1[3]->vFunc_0 = rbx_2;
            arg1[7]->vFunc_0 = rbx_2;
            arg1[0xa]->vFunc_0 = rcx_5 - rbx_2;
        }

        if (!(rbp_1 & 2))
        {
            void* rdx_3 = arg1[0xd];
            void* rcx_7 = rdx_3;

            if (!(rbp_1 & 0x18))
                rcx_7 = rbx_2;

            arg1[4]->vFunc_0 = rbx_2;
            arg1[8]->vFunc_0 = rcx_7;
            arg1[0xb]->vFunc_0 = rdx_3 - rcx_7;

            if (r8_2)
            {
                arg1[3]->vFunc_0 = rbx_2;
                arg1[7]->vFunc_0 = 0;
                arg1[0xa]->vFunc_0 = rbx_2;
            }
        }

        rbp_1 |= 1;
    }

    arg1[0xe] = rbp_1;
    return arg1;
}

int64_t* sub_140019e40(int64_t* arg1, int64_t arg2, char* arg3)
{
    int64_t rbp = arg1[3];

    if (arg3 <= rbp)
    {
        int64_t* rdi = arg1;

        if (rbp >= 0x10)
            rdi = *arg1;

        arg1[2] = arg3;
        memmove(rdi, arg2, arg3);
        *(arg3 + rdi) = 0;
        return arg1;
    }

    int64_t rdi_1 = 0x7fffffffffffffff;

    if (arg3 > 0x7fffffffffffffff)
    {
        sub_1400011e0();
        /* no return */
    }

    int64_t rcx_2 = arg3 | 0xf;

    if (rcx_2 <= 0x7fffffffffffffff)
    {
        uint64_t rdx_1 = rbp >> 1;

        if (rbp <= 0x7fffffffffffffff - rdx_1)
        {
            int64_t rax_3 = rdx_1 + rbp;
            rdi_1 = rcx_2;

            if (rcx_2 < rax_3)
                rdi_1 = rax_3;
        }
    }

    uint64_t rcx_4 = rdi_1 + 1;

    if (rdi_1 >= -1)
        rcx_4 = -1;

    void* const rsi_2;

    if (rcx_4 < 0x1000)
    {
        if (!rcx_4)
            rsi_2 = nullptr;
        else
            rsi_2 = operator new(rcx_4);

        goto label_140019f28;
    }

    if (rcx_4 + 0x27 <= rcx_4)
    {
        stdext::threads::_Throw_lock_error();
        /* no return */
    }

    int64_t rax_5 = operator new(rcx_4 + 0x27);

    if (rax_5)
    {
        rsi_2 = (rax_5 + 0x27) & 0xffffffffffffffe0;
        *(rsi_2 - 8) = rax_5;
        label_140019f28:
        arg1[2] = arg3;
        arg1[3] = rdi_1;
        memcpy(rsi_2, arg2, arg3);
        *(arg3 + rsi_2) = 0;

        if (rbp < 0x10)
        {
            *arg1 = rsi_2;
            return arg1;
        }

        void* rcx_7 = *arg1;

        if (rbp + 1 < 0x1000)
            goto label_140019f6e;

        void* r8_1 = *(rcx_7 - 8);

        if (rcx_7 - r8_1 - 8 <= 0x1f)
        {
            rcx_7 = r8_1;
            label_140019f6e:
            sub_14001e5e4(rcx_7);
            *arg1 = rsi_2;
            return arg1;
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

void* sub_140019fa0(int64_t* arg1)
{
    int64_t* rdx = *arg1;
    void* result = *rdx;
    int64_t* rcx_1 = *(*(result + 4) + rdx + 0x48);

    if (!rcx_1)
        return result;

    return (*(*rcx_1 + 0x10))(rcx_1);
}

int64_t* sub_140019fd0(int64_t* arg1, int128_t* arg2)
{
    if (arg1 != arg2)
    {
        int64_t rdx = arg1[3];

        if (rdx >= 0x10)
        {
            void* rcx = *arg1;

            if (rdx + 1 >= 0x1000)
            {
                void* r8_1 = *(rcx - 8);

                if (rcx - r8_1 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rcx = r8_1;
            }

            sub_14001e5e4(rcx);
        }

        arg1[3] = 0xf;
        arg1[2] = 0;
        *arg1 = 0;
        *arg1 = *arg2;
        *(arg1 + 0x10) = arg2[1];
        arg2[1] = 0;
        *(arg2 + 0x18) = 0xf;
        *arg2 = 0;
    }

    return arg1;
}

void** sub_14001a060(int64_t* arg1, char* arg2)
{
    arg_8 = arg1;
    void** result = arg1;
    int32_t _State = 0;
    arg_18 = 0;
    wchar16* _Last = -ffffffffffffffff;

    do
        _Last += 1;
     while (*(arg2 + _Last));

    void* rcx = *arg1;
    int64_t rax = *(rcx + 4);
    int64_t rdi = *(rax + result + 0x28);
    void* i;

    if (rdi <= 0 || rdi <= _Last)
        i = nullptr;
    else
        i = rdi - _Last;

    class std::wostream* result_2 = result;
    void** result_1 = result;
    int64_t* r8 = *(rax + result + 0x48);
    void* rdx = rcx;

    if (r8)
    {
        (*(*r8 + 8))(r8, rdx);
        rcx = *result;
        rdx = rcx;
    }

    int64_t rax_2 = *(rcx + 4);

    if (!*(rax_2 + result + 0x10))
    {
        rax_2 = *(rax_2 + result + 0x50);

        if (!rax_2 || rax_2 == result)
            rax_2 = 1;
        else
        {
            std::ostream::flush(rax_2);
            rcx = *result;
            rax_2 = !*(*(rcx + 4) + result + 0x10);
            rdx = rcx;
        }
    }
    else
        rax_2 = 0;

    char var_30 = rax_2;

    if (rax_2)
    {
        if ((*(*(rcx + 4) + result + 0x18) & 0x1c0) != 0x40)
        {
            while (true)
            {
                if (i <= 0)
                {
                    rdx = *result;
                    goto label_14001a178;
                }

                if (std::streambuf::sputc(*(*(*result + 4) + result + 0x48)) == 0xffffffff)
                    break;

                i -= 1;
            }

            goto label_14001a1a9;
        }

        label_14001a178:

        if (std::streambuf::sputn(*(*(rdx + 4) + result + 0x48), arg2, _Last) != _Last)
        {
            label_14001a1a9:
            _State = 4;
            arg_18 = 4;
        }
        else
        {
            for (; i > 0; i -= 1)
            {
                if (std::streambuf::sputc(*(*(*result + 4) + result + 0x48)) == 0xffffffff)
                    goto label_14001a1a9;
            }
        }

        *(*(*result + 4) + result + 0x28) = 0;
    }
    else
        _State = 4;

    std::ios::setstate(*(*result + 4) + result, _State, 0);

    if (!std::uncaught_exception())
        std::ostream::_Osfx(result_2);

    int64_t* rcx_15 = *(*result_2->vtable->__vecDelDtor[4] + result_2 + 0x48);

    if (rcx_15)
        (*(*rcx_15 + 0x10))(rcx_15);

    return result;
}

void** sub_14001a230(int64_t* arg1)
{
    arg_8 = arg1;
    void** result = arg1;
    int32_t _State = 0;
    _State_1 = 0;
    void** r15 = arg1;
    int64_t* var_38 = arg1;
    void* r8 = *arg1;
    int64_t* rcx = *(*(r8 + 4) + arg1 + 0x48);

    if (rcx)
    {
        (*(*rcx + 8))(rcx);
        r8 = *r15;
    }

    int64_t rcx_1 = *(r8 + 4);
    int64_t rax;
    void* rcx_3;

    if (!*(rcx_1 + result + 0x10))
    {
        class std::ostream* rcx_2 = *(rcx_1 + result + 0x50);

        if (!rcx_2 || rcx_2 == result)
        {
            rax = 1;
            rcx_3 = r8;
        }
        else
        {
            std::ostream::flush(rcx_2);
            rcx_3 = *result;
            rax = !*(*(rcx_3 + 4) + result + 0x10);
            r8 = rcx_3;
        }
    }
    else
    {
        rax = 0;
        rcx_3 = r8;
    }

    char var_30 = rax;

    if (rax)
    {
        int64_t rax_2 = *(rcx_3 + 4);
        int64_t rdx_1 = *(rax_2 + result + 0x28);
        int64_t rdi_1 = 0;

        if (rdx_1 > 1)
            rdi_1 = rdx_1 - 1;

        if ((*(rax_2 + result + 0x18) & 0x1c0) != 0x40)
        {
            while (true)
            {
                if (_State)
                    goto label_14001a384;

                if (rdi_1 <= 0)
                {
                    r8 = *result;
                    break;
                }

                if (std::streambuf::sputc(*(*(*result + 4) + result + 0x48)) == 0xffffffff)
                    _State = 4;

                _State_1 = _State;
                rdi_1 -= 1;
            }
        }

        if (std::streambuf::sputc(*(*(r8 + 4) + result + 0x48)) == 0xffffffff)
            _State = 4;

        while (true)
        {
            _State_1 = _State;

            if (_State)
                break;

            if (rdi_1 <= 0)
                break;

            if (std::streambuf::sputc(*(*(*result + 4) + result + 0x48)) == 0xffffffff)
                _State = 4;

            rdi_1 -= 1;
        }
    }

    label_14001a384:
    *(*(*result + 4) + result + 0x28) = 0;
    std::ios::setstate(*(*result + 4) + result, _State, 0);

    if (!std::uncaught_exception())
        std::ostream::_Osfx(r15);

    int64_t* rcx_16 = *(*(*r15 + 4) + r15 + 0x48);

    if (rcx_16)
        (*(*rcx_16 + 0x10))(rcx_16);

    return result;
}

void** sub_14001a3f0(void** arg1, char* arg2, void** arg3)
{
    void* r9 = -ffffffffffffffff;

    do
        r9 += 1;
     while (*(arg2 + r9));

    int64_t rcx = arg3[2];

    if (0x7fffffffffffffff - rcx < r9)
    {
        sub_1400011e0();
        /* no return */
    }

    if (arg3[3] >= 0x10)
        arg3 = *arg3;

    sub_14001bda0(arg1, arg2, arg3, arg2, r9, arg3, rcx);
    return arg1;
}

int128_t* sub_14001a460(int128_t* arg1, char* arg2, int64_t* arg3, int64_t arg4)
{
    int64_t* rdi = arg3;
    void* rbx = -ffffffffffffffff;

    do
        rbx += 1;
     while (*(arg2 + rbx));

    int64_t rcx = rdi[3];
    void* r8 = arg3[2];

    if (rbx > rcx - r8)
    {
        void* var_20_1 = rbx;
        char* var_28_1 = arg2;
        rdi = sub_14001ccc0(rdi, rbx, r8, arg4);
    }
    else
    {
        rdi[2] = r8 + rbx;
        int64_t* r14_1 = rdi;

        if (rcx >= 0x10)
            r14_1 = *rdi;

        void* r15_1;

        if (rbx + arg2 <= r14_1 || arg2 > r14_1 + r8)
            r15_1 = rbx;
        else if (r14_1 > arg2)
            r15_1 = r14_1 - arg2;
        else
            r15_1 = nullptr;

        memmove(r14_1 + rbx, r14_1, r8 + 1);
        memcpy(r14_1, arg2, r15_1);
        memcpy(r14_1 + r15_1, r15_1 + rbx + arg2, rbx - r15_1);
    }

    arg1[1] = 0;
    *(arg1 + 0x18) = 0;
    *arg1 = *rdi;
    arg1[1] = *(rdi + 0x10);
    rdi[2] = 0;
    rdi[3] = 0xf;
    *rdi = 0;
    return arg1;
}

int64_t std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator+=(int64_t* arg1, int64_t* arg2)
{
    int64_t* rax = arg2;

    if (arg2[3] >= 0x10)
        rax = *arg2;

    /* tailcall */
    return sub_14001c100(arg1, rax, arg2[2]);
}

class std::basic_ostream<char,struct std::char_traits<char> >& __ptr64 sub_14001a5a0(class std::basic_ostream<char,struct std::char_traits<char> >& __ptr64 arg1)
{
    std::ostream::put(arg1, std::ios::widen(*(*arg1 + 4) + arg1, 0xa));
    std::ostream::flush(arg1);
    return arg1;
}

int64_t sub_14001a5e0(void* arg1)
{
    int64_t result;

    if (!*(arg1 + 0x10))
    {
        result = 1;
        return result;
    }

    result = 0;
    return result;
}

int128_t* sub_14001a5f0(int128_t* arg1, int64_t* arg2, int64_t arg3)
{
    int128_t* var_18 = arg1;
    int64_t rcx = arg2[2];
    int64_t rdx = arg2[3];

    if (rcx >= rdx)
        sub_14001b050(arg2, rdx, arg3, arg3);
    else
    {
        arg2[2] = rcx + 1;
        int64_t* rax_2 = arg2;

        if (rdx >= 0x10)
            rax_2 = *arg2;

        *(rax_2 + rcx) = arg3;
        *(rax_2 + rcx + 1) = 0;
    }

    arg1[1] = 0;
    *(arg1 + 0x18) = 0;
    *arg1 = *arg2;
    arg1[1] = *(arg2 + 0x10);
    arg2[2] = 0;
    *arg2 = 0;
    arg2[3] = 0xf;
    return arg1;
}

int128_t* sub_14001a680(int128_t* arg1, int64_t* arg2, char* arg3)
{
    int64_t* rsi = arg2;
    int64_t rdi = -1;

    do
        rdi += 1;
     while (arg3[rdi]);

    int64_t rcx = arg2[2];
    int64_t rdx = arg2[3];

    if (rdi > rdx - rcx)
        rsi = sub_14001b1b0(rsi, rdi, arg3, arg3, rdi);
    else
    {
        rsi[2] = rcx + rdi;
        int64_t* rax_3 = rsi;

        if (rdx >= 0x10)
            rax_3 = *rsi;

        void* rbx_1 = rax_3 + rcx;
        memmove(rbx_1, arg3, rdi);
        *(rbx_1 + rdi) = 0;
    }

    arg1[1] = 0;
    *(arg1 + 0x18) = 0;
    *arg1 = *rsi;
    arg1[1] = *(rsi + 0x10);
    rsi[2] = 0;
    *rsi = 0;
    rsi[3] = 0xf;
    return arg1;
}

void* sub_14001a740(int64_t* arg1, int64_t* arg2, int64_t* arg3)
{
    int64_t r9 = *arg1;
    int64_t* rbx = arg2;
    int64_t rax_3;
    int64_t rdx_2;
    rdx_2 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[1] - r9));
    rax_3 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[1] - r9));
    int64_t rdx_3 = rdx_2 >> 1;
    int64_t rdx_4 = rdx_3 + (rdx_3 >> 0x3f);

    if (rdx_4 == 0x1555555555555555)
    {
        sub_14001bb00();
        /* no return */
    }

    int64_t rax_6;
    int64_t rdx_5;
    rdx_5 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - r9));
    rax_6 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - r9));
    int64_t rdx_6 = rdx_5 >> 1;
    int64_t rdx_7 = rdx_6 + (rdx_6 >> 0x3f);
    uint64_t rcx_5 = rdx_7 >> 1;

    if (rdx_7 <= 0x1555555555555555 - rcx_5)
    {
        int64_t rax_10 = rcx_5 + rdx_7;
        int64_t rcx_6 = rdx_4 + 1;

        if (rax_10 >= rdx_4 + 1)
            rcx_6 = rax_10;

        if (rcx_6 <= 0x1555555555555555)
        {
            int64_t r14_1 = rcx_6 * 0xc;
            void* rdi_2;

            if (r14_1 < 0x1000)
            {
                if (!r14_1)
                    rdi_2 = nullptr;
                else
                    rdi_2 = operator new(r14_1);

                goto label_14001a875;
            }

            if (r14_1 + 0x27 > r14_1)
            {
                int64_t rax_12 = operator new(r14_1 + 0x27);

                if (!rax_12)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rdi_2 = (rax_12 + 0x27) & 0xffffffffffffffe0;
                *(rdi_2 - 8) = rax_12;
                label_14001a875:
                void* result = rdi_2 + (arg2 - r9) / 0xc * 0xc;
                void* rdx_8 = rdi_2;
                *result = *arg3;
                *(result + 8) = arg3[1];
                int64_t r8 = arg1[1];
                int64_t* rax_16 = *arg1;

                if (rbx != r8)
                {
                    if (rax_16 != rbx)
                    {
                        do
                        {
                            *rdx_8 = *rax_16;
                            rdx_8 += 0xc;
                            int32_t rcx_10 = rax_16[1];
                            rax_16 += 0xc;
                            *(rdx_8 - 4) = rcx_10;
                        } while (rax_16 != rbx);

                        r8 = arg1[1];
                    }

                    if (rbx != r8)
                    {
                        void* rcx_12 = result - rbx;

                        do
                        {
                            *(rcx_12 + rbx + 0xc) = *rbx;
                            *(rcx_12 + rbx + 0x14) = rbx[1];
                            rbx += 0xc;
                        } while (rbx != r8);
                    }
                }
                else
                {
                    while (rax_16 != r8)
                    {
                        *rdx_8 = *rax_16;
                        rdx_8 += 0xc;
                        int32_t rcx_9 = rax_16[1];
                        rax_16 += 0xc;
                        *(rdx_8 - 4) = rcx_9;
                    }
                }

                void* r8_2 = *arg1;

                if (!r8_2)
                    goto label_14001a971;

                int64_t rax_18;
                int64_t rdx_9;
                rdx_9 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - r8_2));
                rax_18 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - r8_2));
                int64_t rdx_10 = rdx_9 >> 1;

                if ((rdx_10 + (rdx_10 >> 0x3f)) * 0xc < 0x1000)
                    goto label_14001a968;

                void* rcx_15 = *(r8_2 - 8);

                if (r8_2 - rcx_15 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                r8_2 = rcx_15;
                label_14001a968:
                sub_14001e5e4(r8_2);
                label_14001a971:
                *arg1 = rdi_2;
                arg1[1] = rdi_2 + (rdx_4 + 1) * 0xc;
                arg1[2] = r14_1 + rdi_2;
                return result;
            }
        }
    }

    stdext::threads::_Throw_lock_error();
    /* no return */
}

void* sub_14001a9c0(int64_t* arg1, int64_t arg2, int64_t* arg3)
{
    int64_t rdx = *arg1;
    int64_t rax_2 = (arg1[1] - rdx) >> 3;

    if (rax_2 == 0x1fffffffffffffff)
    {
        sub_14001bb00();
        /* no return */
    }

    int64_t rcx_2 = (arg1[2] - rdx) >> 3;
    uint64_t rdx_2 = rcx_2 >> 1;

    if (rcx_2 <= 0x1fffffffffffffff - rdx_2)
    {
        int64_t rax_4 = rdx_2 + rcx_2;
        int64_t rsi_1 = rax_2 + 1;

        if (rax_4 >= rax_2 + 1)
            rsi_1 = rax_4;

        if (rsi_1 <= 0x1fffffffffffffff)
        {
            int64_t rsi_2 = rsi_1 << 3;
            void* rbx_2;

            if (rsi_2 < 0x1000)
            {
                if (!rsi_2)
                    rbx_2 = nullptr;
                else
                    rbx_2 = operator new(rsi_2);

                goto label_14001aaa0;
            }

            if (rsi_2 + 0x27 > rsi_2)
            {
                int64_t rax_5 = operator new(rsi_2 + 0x27);

                if (!rax_5)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rbx_2 = (rax_5 + 0x27) & 0xffffffffffffffe0;
                *(rbx_2 - 8) = rax_5;
                label_14001aaa0:
                void* result = rbx_2 + ((arg2 - rdx) >> 3 << 3);
                *result = *arg3;
                void* rcx_5 = rbx_2;
                int64_t r8 = arg1[1];
                int64_t rdx_3 = *arg1;
                uint32_t count;

                if (arg2 != r8)
                {
                    memmove(rcx_5, rdx_3, arg2 - rdx_3);
                    rcx_5 = result + 8;
                    count = arg1[1] - arg2;
                    rdx_3 = arg2;
                }
                else
                    count = r8 - rdx_3;

                memmove(rcx_5, rdx_3, count);
                void* rcx_6 = *arg1;

                if (!rcx_6)
                    goto label_14001ab16;

                if (((arg1[2] - rcx_6) & 0xfffffffffffffff8) < 0x1000)
                    goto label_14001ab0d;

                void* r8_4 = *(rcx_6 - 8);

                if (rcx_6 - r8_4 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rcx_6 = r8_4;
                label_14001ab0d:
                sub_14001e5e4(rcx_6);
                label_14001ab16:
                *arg1 = rbx_2;
                arg1[1] = rbx_2 + ((rax_2 + 1) << 3);
                arg1[2] = rsi_2 + rbx_2;
                return result;
            }
        }
    }

    stdext::threads::_Throw_lock_error();
    /* no return */
}

void* sub_14001ab60(int64_t* arg1, int128_t* arg2, int128_t* arg3)
{
    int128_t* i_1 = arg2;
    int64_t rdx = *arg1;
    int64_t rax_2 = (arg1[1] - rdx) >> 5;

    if (rax_2 == 0x7ffffffffffffff)
    {
        sub_14001bb00();
        /* no return */
    }

    int64_t rcx_2 = (arg1[2] - rdx) >> 5;
    uint64_t rdx_2 = rcx_2 >> 1;

    if (rcx_2 <= 0x7ffffffffffffff - rdx_2)
    {
        int64_t rax_4 = rdx_2 + rcx_2;
        int64_t rsi_1 = rax_2 + 1;

        if (rax_4 >= rax_2 + 1)
            rsi_1 = rax_4;

        if (rsi_1 <= 0x7ffffffffffffff)
        {
            int64_t rsi_2 = rsi_1 << 5;
            void* rdi_2;

            if (rsi_2 < 0x1000)
            {
                if (!rsi_2)
                    rdi_2 = nullptr;
                else
                    rdi_2 = operator new(rsi_2);

                goto label_14001ac3d;
            }

            if (rsi_2 + 0x27 > rsi_2)
            {
                int64_t rax_5 = operator new(rsi_2 + 0x27);

                if (!rax_5)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rdi_2 = (rax_5 + 0x27) & 0xffffffffffffffe0;
                *(rdi_2 - 8) = rax_5;
                label_14001ac3d:
                void* rcx_5 = rdi_2;
                void* result = ((i_1 - rdx) & 0xffffffffffffffe0) + rdi_2;
                *(result + 0x10) = 0;
                *(result + 0x18) = 0;
                *result = *arg3;
                *(result + 0x10) = arg3[1];
                arg3[1] = 0;
                *(arg3 + 0x18) = 0xf;
                *arg3 = 0;
                int64_t rdx_3 = arg1[1];
                int128_t* i = *arg1;

                if (i_1 != rdx_3)
                {
                    for (; i != i_1; i = &i[2])
                    {
                        *(rcx_5 + 0x10) = 0;
                        *(rcx_5 + 0x18) = 0;
                        *rcx_5 = *i;
                        *(rcx_5 + 0x10) = i[1];
                        i[1] = 0;
                        rcx_5 += 0x20;
                        *(i + 0x18) = 0xf;
                        *i = 0;
                    }

                    sub_14001afc0(rcx_5, rcx_5);
                    int64_t rax_7 = arg1[1];
                    rcx_5 = result + 0x20;

                    for (; i_1 != rax_7; i_1 = &i_1[2])
                    {
                        *(rcx_5 + 0x10) = 0;
                        *(rcx_5 + 0x18) = 0;
                        *rcx_5 = *i_1;
                        *(rcx_5 + 0x10) = i_1[1];
                        i_1[1] = 0;
                        rcx_5 += 0x20;
                        *(i_1 + 0x18) = 0xf;
                        *i_1 = 0;
                    }
                }
                else
                {
                    for (; i != rdx_3; i = &i[2])
                    {
                        *(rcx_5 + 0x10) = 0;
                        *(rcx_5 + 0x18) = 0;
                        *rcx_5 = *i;
                        *(rcx_5 + 0x10) = i[1];
                        i[1] = 0;
                        rcx_5 += 0x20;
                        *(i + 0x18) = 0xf;
                        *i = 0;
                    }
                }

                sub_14001afc0(rcx_5, rcx_5);
                int64_t* rcx_6 = *arg1;

                if (!rcx_6)
                    goto label_14001adb0;

                sub_14001afc0(rcx_6, arg1[1]);
                void* rcx_7 = *arg1;

                if (((arg1[2] - rcx_7) & 0xffffffffffffffe0) < 0x1000)
                    goto label_14001ad9a;

                void* r8 = *(rcx_7 - 8);

                if (rcx_7 - r8 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rcx_7 = r8;
                label_14001ad9a:
                sub_14001e5e4(rcx_7);
                label_14001adb0:
                *arg1 = rdi_2;
                arg1[1] = ((rax_2 + 1) << 5) + rdi_2;
                arg1[2] = rsi_2 + rdi_2;
                return result;
            }
        }
    }

    stdext::threads::_Throw_lock_error();
    /* no return */
}

void** sub_14001adf0(int64_t* arg1, void** arg2, int64_t* arg3)
{
    int64_t* rbp = arg1;
    int64_t* var_68 = arg1;
    void** r13 = *arg1;
    void** rbx = r13[1];
    void** var_58 = rbx;
    int32_t var_50 = 0;
    void** r14 = r13;

    if (!*(rbx + 0x19))
    {
        int64_t r12_1 = arg3[3];
        uint64_t count_3 = arg3[2];

        do
        {
            var_58 = rbx;
            int64_t* buffer2 = arg3;

            if (r12_1 >= 0x10)
                buffer2 = *arg3;

            void* buffer1 = &rbx[4];

            if (rbx[7] >= 0x10)
                buffer1 = rbx[4];

            uint64_t count_4 = rbx[6];
            uint64_t count = count_4;

            if (count_3 < count_4)
                count = count_3;

            int32_t rax_1 = memcmp(buffer1, buffer2, count);

            if (!rax_1)
            {
                if (count_4 >= count_3)
                    rax_1 = count_4 > count_3;
                else
                    rax_1 = -1;
            }

            if (!(rax_1 >> 0x1f))
            {
                int32_t var_50_2 = 1;
                r14 = rbx;
                rbx = *rbx;
            }
            else
            {
                int32_t var_50_1 = 0;
                rbx = rbx[2];
            }
        } while (!*(rbx + 0x19));

        rbp = var_68;
    }

    uint8_t rax_4;

    if (!*(r14 + 0x19))
    {
        void* buffer2_1 = &r14[4];

        if (r14[7] >= 0x10)
            buffer2_1 = r14[4];

        int64_t* buffer1_1 = arg3;

        if (arg3[3] >= 0x10)
            buffer1_1 = *arg3;

        uint64_t count_5 = r14[6];
        uint64_t count_2 = arg3[2];
        uint64_t count_1 = count_2;

        if (count_5 < count_2)
            count_1 = count_5;

        int32_t rax_3 = memcmp(buffer1_1, buffer2_1, count_1);

        if (!rax_3)
        {
            if (count_2 >= count_5)
                rax_3 = count_2 > count_5;
            else
                rax_3 = -1;
        }

        rax_4 = rax_3 >> 0x1f;
    }

    if (*(r14 + 0x19) || rax_4)
    {
        if (rbp[1] == 0x38e38e38e38e38e)
        {
            sub_140014240();
            /* no return */
        }

        var_68 = rbp;
        int64_t var_60_1 = 0;
        void** rax_5 = operator new(0x48);
        void** var_60_2 = rax_5;
        sub_140019960(&rax_5[4], arg3);
        rax_5[8] = 0;
        *rax_5 = r13;
        rax_5[1] = r13;
        rax_5[2] = r13;
        rax_5[3] = 0;
        var_68 = var_58;
        *arg2 = sub_14001bb20(rbp, &var_68, rax_5);
        arg2[1] = 1;
    }
    else
    {
        *arg2 = r14;
        arg2[1] = rax_4;
    }

    return arg2;
}

void sub_14001afc0(int64_t* arg1, int64_t arg2)
{
    if (arg1 != arg2)
    {
        int64_t* rbx_1 = arg1;

        do
        {
            int64_t rdx = rbx_1[3];

            if (rdx >= 0x10)
            {
                void* rcx = *rbx_1;

                if (rdx + 1 >= 0x1000)
                {
                    void* r8_1 = *(rcx - 8);

                    if (rcx - r8_1 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }

                    rcx = r8_1;
                }

                sub_14001e5e4(rcx);
            }

            rbx_1[2] = 0;
            rbx_1[3] = 0xf;
            *rbx_1 = 0;
            rbx_1 = &rbx_1[4];
        } while (rbx_1 != arg2);
    }
}

int64_t* sub_14001b050(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4)
{
    int64_t rbp = arg1[2];
    int64_t rbx = 0x7fffffffffffffff;

    if (0x7fffffffffffffff - rbp < 1)
    {
        sub_1400011e0();
        /* no return */
    }

    int64_t r14 = arg1[3];
    int64_t rcx_1 = (rbp + 1) | 0xf;

    if (rcx_1 <= 0x7fffffffffffffff)
    {
        uint64_t rdx_1 = r14 >> 1;

        if (r14 <= 0x7fffffffffffffff - rdx_1)
        {
            int64_t rax_2 = rdx_1 + r14;
            rbx = rcx_1;

            if (rcx_1 < rax_2)
                rbx = rax_2;
        }
    }

    uint64_t rcx_3 = rbx + 1;

    if (rbx >= -1)
        rcx_3 = -1;

    char* rdi_2;

    if (rcx_3 < 0x1000)
    {
        if (!rcx_3)
            rdi_2 = nullptr;
        else
            rdi_2 = operator new(rcx_3);

        goto label_14001b115;
    }

    if (rcx_3 + 0x27 <= rcx_3)
    {
        stdext::threads::_Throw_lock_error();
        /* no return */
    }

    int64_t rax_4 = operator new(rcx_3 + 0x27);

    if (rax_4)
    {
        rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0;
        *(rdi_2 - 8) = rax_4;
        label_14001b115:
        arg1[2] = rbp + 1;
        uint32_t count = rbp;
        arg1[3] = rbx;

        if (r14 < 0x10)
        {
            memcpy(rdi_2, arg1, count);
            rdi_2[rbp] = arg4;
            rdi_2[rbp + 1] = 0;
            *arg1 = rdi_2;
            return arg1;
        }

        void* rbx_1 = *arg1;
        memcpy(rdi_2, rbx_1, count);
        rdi_2[rbp] = arg4;
        rdi_2[rbp + 1] = 0;

        if (r14 + 1 < 0x1000)
            goto label_14001b165;

        void* rcx_6 = *(rbx_1 - 8);

        if (rbx_1 - rcx_6 - 8 <= 0x1f)
        {
            rbx_1 = rcx_6;
            label_14001b165:
            sub_14001e5e4(rbx_1);
            *arg1 = rdi_2;
            return arg1;
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

int64_t* sub_14001b1b0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)
{
    int64_t r12 = arg1[2];
    int64_t rbx = 0x7fffffffffffffff;

    if (0x7fffffffffffffff - r12 < arg2)
    {
        sub_1400011e0();
        /* no return */
    }

    int64_t rbp = arg1[3];
    int64_t r14 = arg2 + r12;
    int64_t rcx_1 = r14 | 0xf;

    if (rcx_1 <= 0x7fffffffffffffff)
    {
        uint64_t rdx_1 = rbp >> 1;

        if (rbp <= 0x7fffffffffffffff - rdx_1)
        {
            int64_t rax_2 = rdx_1 + rbp;
            rbx = rcx_1;

            if (rcx_1 < rax_2)
                rbx = rax_2;
        }
    }

    uint64_t rcx_3 = rbx + 1;

    if (rbx >= -1)
        rcx_3 = -1;

    void* const rdi_2;

    if (rcx_3 < 0x1000)
    {
        if (!rcx_3)
            rdi_2 = nullptr;
        else
            rdi_2 = operator new(rcx_3);

        goto label_14001b285;
    }

    if (rcx_3 + 0x27 <= rcx_3)
    {
        stdext::threads::_Throw_lock_error();
        /* no return */
    }

    int64_t rax_4 = operator new(rcx_3 + 0x27);

    if (rax_4)
    {
        rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0;
        *(rdi_2 - 8) = rax_4;
        label_14001b285:
        uint32_t count = r12;
        arg1[2] = r14;
        void* r14_1 = rdi_2 + r12;
        arg1[3] = rbx;

        if (rbp < 0x10)
        {
            memcpy(rdi_2, arg1, count);
            memcpy(r14_1, arg4, arg5);
            *(r14_1 + arg5) = 0;
            *arg1 = rdi_2;
            return arg1;
        }

        void* rbx_1 = *arg1;
        memcpy(rdi_2, rbx_1, count);
        memcpy(r14_1, arg4, arg5);
        *(r14_1 + arg5) = 0;

        if (rbp + 1 < 0x1000)
            goto label_14001b2e3;

        void* rcx_7 = *(rbx_1 - 8);

        if (rbx_1 - rcx_7 - 8 <= 0x1f)
        {
            rbx_1 = rcx_7;
            label_14001b2e3:
            sub_14001e5e4(rbx_1);
            *arg1 = rdi_2;
            return arg1;
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

void sub_14001b340(int64_t* arg1, int64_t arg2)
{
    if (arg1 != arg2)
    {
        int64_t* s = arg1;

        do
        {
            void* rcx_1 = *s;

            if (rcx_1)
            {
                if (((s[2] - rcx_1) & 0xfffffffffffffff8) >= 0x1000)
                {
                    void* r8_1 = *(rcx_1 - 8);

                    if (rcx_1 - r8_1 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }

                    rcx_1 = r8_1;
                }

                sub_14001e5e4(rcx_1);
                __builtin_memset(s, 0, 0x18);
            }

            s = &s[3];
        } while (s != arg2);
    }
}

int128_t* sub_14001b3d0(void* arg1, int128_t* arg2)
{
    int128_t* var_38 = arg2;
    void* var_30;
    int128_t* rax;
    int64_t rdx;
    int64_t r8;
    rax = sub_14001cc10(&var_30);
    void** rbx_1 = arg1 + 8;
    int64_t rcx_1 = rbx_1[2];

    if (0x7fffffffffffffff - rcx_1 < 2)
    {
        sub_1400011e0();
        /* no return */
    }

    if (rbx_1[3] >= 0x10)
        rbx_1 = *rbx_1;

    void** var_78;
    int64_t r8_1 = sub_14001bda0(&var_78, rdx, r8, &data_140021ca0, 2, rbx_1, rcx_1);
    int64_t var_60;
    int64_t rdx_1 = var_60;
    int64_t var_68;
    void*** rax_6;

    if (rdx_1 - var_68 < 1)
        rax_6 = sub_14001b1b0(&var_78, 1, r8_1, &data_140021d84, 1);
    else
    {
        int64_t var_68_1 = var_68 + 1;
        void** rax_5 = &var_78;

        if (rdx_1 >= 0x10)
            rax_5 = var_78;

        *(rax_5 + var_68) = 0x3d;
        rax_6 = &var_78;
    }

    int128_t var_58 = *rax_6;
    int128_t zmm1 = *(rax_6 + 0x10);
    rax_6[2] = 0;
    rax_6[3] = 0xf;
    *rax_6 = nullptr;
    sub_14001cff0(arg2, rdx_1, &var_58, rax);
    int64_t rdx_2 = *zmm1[8];

    if (rdx_2 >= 0x10)
    {
        void* rcx_6 = var_58;
        void* rax_7 = rcx_6;

        if (rdx_2 + 1 >= 0x1000)
        {
            rcx_6 = *(rcx_6 - 8);

            if (rax_7 - rcx_6 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_6);
    }

    if (var_60 >= 0x10)
    {
        void** rcx_7 = var_78;
        void** rax_10 = rcx_7;

        if (var_60 + 1 >= 0x1000)
        {
            rcx_7 = rcx_7[-1];

            if (rax_10 - rcx_7 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_7);
    }

    int64_t var_68_2 = 0;
    int64_t var_60_1 = 0xf;
    var_78 = 0;
    int64_t var_18;

    if (var_18 >= 0x10)
    {
        void* rcx_8 = var_30;
        void* rax_13 = rcx_8;

        if (var_18 + 1 >= 0x1000)
        {
            rcx_8 = *(rcx_8 - 8);

            if (rax_13 - rcx_8 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_8);
    }

    return arg2;
}

uint64_t sub_14001b5e0(void* arg1)
{
    return *(arg1 + 0x29);
}

int64_t sub_14001b5f0(void* arg1)
{
    int64_t result;

    if (!*(arg1 + 0x29) || *(arg1 + 0x50))
    {
        result = 1;
        return result;
    }

    result = 0;
    return result;
}

int64_t sub_14001b610(int64_t* arg1)
{
    arg1[0xb] = (*(*arg1 + 0x58))();
    arg1[0xa] = 1;
    int32_t result;
    result = 1;
    return result;
}

int64_t sub_14001b62e(int64_t arg1) __pure
{
    int64_t result;
    result = 0;
    return result;
}

void sub_14001b640(struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** arg1)
{
    *arg1 = &cmdline::parser::option_with_value<int32_t>::`vftable'{for `cmdline::parser::option_base'};
    int64_t rdx = arg1[9];

    if (rdx < 0x10)
        goto label_14001b68a;

    void* rcx = arg1[6];

    if (rdx + 1 < 0x1000)
        goto label_14001b685;

    void* r8_1 = *(rcx - 8);

    if (rcx - r8_1 - 8 <= 0x1f)
    {
        rcx = r8_1;
        label_14001b685:
        sub_14001e5e4(rcx);
        label_14001b68a:
        arg1[8] = 0;
        arg1[9] = 0xf;
        arg1[6] = 0;
        int64_t rdx_2 = arg1[4];

        if (rdx_2 < 0x10)
            goto label_14001b6dc;

        void* rcx_2 = arg1[1];

        if (rdx_2 + 1 < 0x1000)
            goto label_14001b6d0;

        void* r8_2 = *(rcx_2 - 8);

        if (rcx_2 - r8_2 - 8 <= 0x1f)
        {
            rcx_2 = r8_2;
            label_14001b6d0:
            sub_14001e5e4(rcx_2);
            label_14001b6dc:
            arg1[3] = 0;
            arg1[4] = 0xf;
            arg1[1] = 0;
            *arg1 = &cmdline::parser::option_base::`vftable';
            return;
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

int128_t* sub_14001b700(void* arg1, int128_t* arg2)
{
    int128_t* var_18 = arg2;
    int64_t var_48 = 0;
    int64_t var_40 = 0xf;
    char var_58 = 0;
    int64_t rdx;
    int64_t r8;
    rdx = sub_140019e40(&var_58, "string", 6);
    void** rbx_1 = arg1 + 8;
    int64_t rcx_1 = rbx_1[2];

    if (0x7fffffffffffffff - rcx_1 < 2)
    {
        sub_1400011e0();
        /* no return */
    }

    if (rbx_1[3] >= 0x10)
        rbx_1 = *rbx_1;

    void** var_78;
    int64_t r8_1 = sub_14001bda0(&var_78, rdx, r8, &data_140021ca0, 2, rbx_1, rcx_1);
    int64_t var_60;
    int64_t rdx_1 = var_60;
    int64_t var_68;
    void*** rax_5;

    if (rdx_1 - var_68 < 1)
        rax_5 = sub_14001b1b0(&var_78, 1, r8_1, &data_140021d84, 1);
    else
    {
        int64_t var_68_1 = var_68 + 1;
        void** rax_4 = &var_78;

        if (rdx_1 >= 0x10)
            rax_4 = var_78;

        *(rax_4 + var_68) = 0x3d;
        rax_5 = &var_78;
    }

    int128_t var_38 = *rax_5;
    int128_t zmm1 = *(rax_5 + 0x10);
    rax_5[2] = 0;
    rax_5[3] = 0xf;
    *rax_5 = nullptr;
    sub_14001cff0(arg2, rdx_1, &var_38, &var_58);
    int64_t rdx_2 = *zmm1[8];

    if (rdx_2 >= 0x10)
    {
        void* rcx_6 = var_38;
        void* rax_6 = rcx_6;

        if (rdx_2 + 1 >= 0x1000)
        {
            rcx_6 = *(rcx_6 - 8);

            if (rax_6 - rcx_6 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_6);
    }

    if (var_60 >= 0x10)
    {
        void** rcx_7 = var_78;
        void** rax_9 = rcx_7;

        if (var_60 + 1 >= 0x1000)
        {
            rcx_7 = rcx_7[-1];

            if (rax_9 - rcx_7 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_7);
    }

    int64_t var_68_2 = 0;
    int64_t var_60_1 = 0xf;
    var_78 = 0;

    if (var_40 >= 0x10)
    {
        void* rcx_8 = var_58;
        void* rax_12 = rcx_8;

        if (var_40 + 1 >= 0x1000)
        {
            rcx_8 = *(rcx_8 - 8);

            if (rax_12 - rcx_8 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_8);
    }

    return arg2;
}

int64_t* sub_14001b910(int64_t* arg1, int64_t arg2, int512_t arg3 @ zmm0)
{
    void* var_38;
    sub_140019fd0(&arg1[0xf], (*(*arg1 + 0x58))(arg3, &var_38, arg2));
    int64_t var_20;

    if (var_20 >= 0x10)
    {
        void* rcx_1 = var_38;
        void* rax_2 = rcx_1;

        if (var_20 + 1 >= 0x1000)
        {
            rcx_1 = *(rcx_1 - 8);

            if (rax_2 - rcx_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_1);
    }

    arg1[0xa] = 1;
    int64_t* result;
    result = 1;
    return result;
}

int64_t sub_14001b97f(int64_t arg1) __pure
{
    int64_t result;
    result = 0;
    return result;
}

void sub_14001b990(struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** arg1)
{
    *arg1 = &cmdline::parser::option_with_value<class std::string>::`vftable'{for `cmdline::parser::option_base'};
    int64_t rdx = arg1[0x12];

    if (rdx < 0x10)
        goto label_14001b9e7;

    void* rcx = arg1[0xf];

    if (rdx + 1 < 0x1000)
        goto label_14001b9e0;

    void* r8_1 = *(rcx - 8);

    if (rcx - r8_1 - 8 <= 0x1f)
    {
        rcx = r8_1;
        label_14001b9e0:
        sub_14001e5e4(rcx);
        label_14001b9e7:
        arg1[0x12] = 0xf;
        arg1[0x11] = 0;
        arg1[0xf] = 0;
        int64_t rdx_2 = arg1[0xe];

        if (rdx_2 < 0x10)
            goto label_14001ba38;

        void* rcx_2 = arg1[0xb];

        if (rdx_2 + 1 < 0x1000)
            goto label_14001ba33;

        void* r8_2 = *(rcx_2 - 8);

        if (rcx_2 - r8_2 - 8 <= 0x1f)
        {
            rcx_2 = r8_2;
            label_14001ba33:
            sub_14001e5e4(rcx_2);
            label_14001ba38:
            arg1[0xd] = 0;
            arg1[0xe] = 0xf;
            arg1[0xb] = 0;
            int64_t rdx_4 = arg1[9];

            if (rdx_4 < 0x10)
                goto label_14001ba7f;

            void* rcx_4 = arg1[6];

            if (rdx_4 + 1 < 0x1000)
                goto label_14001ba7a;

            void* r8_3 = *(rcx_4 - 8);

            if (rcx_4 - r8_3 - 8 <= 0x1f)
            {
                rcx_4 = r8_3;
                label_14001ba7a:
                sub_14001e5e4(rcx_4);
                label_14001ba7f:
                arg1[8] = 0;
                arg1[9] = 0xf;
                arg1[6] = 0;
                int64_t rdx_6 = arg1[4];

                if (rdx_6 < 0x10)
                    goto label_14001bac6;

                void* rcx_6 = arg1[1];

                if (rdx_6 + 1 < 0x1000)
                    goto label_14001bac1;

                void* r8_4 = *(rcx_6 - 8);

                if (rcx_6 - r8_4 - 8 <= 0x1f)
                {
                    rcx_6 = r8_4;
                    label_14001bac1:
                    sub_14001e5e4(rcx_6);
                    label_14001bac6:
                    arg1[3] = 0;
                    arg1[4] = 0xf;
                    arg1[1] = 0;
                    *arg1 = &cmdline::parser::option_base::`vftable';
                    return;
                }
            }
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

void sub_14001bb00() __noreturn
{
    std::_Xlength_error("vector too long");
    /* no return */
}

void** sub_14001bb20(int64_t* arg1, int64_t* arg2, void** arg3)
{
    arg1[1] += 1;
    void** rdi = *arg1;
    void** rax = *arg2;
    arg3[1] = rax;

    if (rax == rdi)
    {
        *rdi = arg3;
        rdi[1] = arg3;
        rdi[2] = arg3;
        arg3[3] = 1;
        return arg3;
    }

    if (arg2[1])
    {
        *rax = arg3;

        if (rax == *rdi)
            *rdi = arg3;
    }
    else
    {
        rax[2] = arg3;

        if (rax == rdi[2])
            rdi[2] = arg3;
    }

    void** rdx = arg3;

    if (!*(arg3[1] + 0x18))
    {
        do
        {
            void** rcx_3 = rdx[1];
            void*** r9_1 = &rdx[1];
            int64_t* r8 = rcx_3[1];
            void*** r10_1 = &rcx_3[1];
            void* rax_3 = *r8;
            int64_t* rcx_1;
            int64_t** r8_2;

            if (rcx_3 == rax_3)
            {
                rax_3 = r8[2];

                if (!*(rax_3 + 0x18))
                    goto label_14001bca7;

                void** r8_1 = rcx_3[2];

                if (rdx != r8_1)
                    r8_1 = rcx_3;
                else
                {
                    rdx = rcx_3;
                    rcx_3[2] = *r8_1;
                    void* rax_5 = *r8_1;

                    if (!*(rax_5 + 0x19))
                        *(rax_5 + 8) = rcx_3;

                    r8_1[1] = *r10_1;
                    void* rax_7 = *arg1;

                    if (rcx_3 != *(rax_7 + 8))
                    {
                        void** rax_8 = *r10_1;

                        if (rcx_3 != *rax_8)
                        {
                            rax_8[2] = r8_1;
                            r9_1 = r10_1;
                            *r8_1 = rcx_3;
                            *r10_1 = r8_1;
                        }
                        else
                        {
                            *rax_8 = r8_1;
                            r9_1 = r10_1;
                            *r8_1 = rcx_3;
                            *r10_1 = r8_1;
                        }
                    }
                    else
                    {
                        *(rax_7 + 8) = r8_1;
                        r9_1 = r10_1;
                        *r8_1 = rcx_3;
                        *r10_1 = r8_1;
                    }
                }

                r8_1[3] = 1;
                *((*r9_1)[1] + 0x18) = 0;
                rcx_1 = (*r9_1)[1];
                r8_2 = *rcx_1;
                *rcx_1 = r8_2[2];
                void* rax_12 = r8_2[2];

                if (!*(rax_12 + 0x19))
                    *(rax_12 + 8) = rcx_1;

                r8_2[1] = rcx_1[1];
                void* rax_14 = *arg1;

                if (rcx_1 != *(rax_14 + 8))
                {
                    void** rax_15 = rcx_1[1];

                    if (rcx_1 != rax_15[2])
                    {
                        *rax_15 = r8_2;
                        r8_2[2] = rcx_1;
                    }
                    else
                    {
                        rax_15[2] = r8_2;
                        r8_2[2] = rcx_1;
                    }
                }
                else
                {
                    *(rax_14 + 8) = r8_2;
                    r8_2[2] = rcx_1;
                }

                rcx_1[1] = r8_2;
            }
            else if (*(rax_3 + 0x18))
            {
                void** rax_18 = *rcx_3;

                if (rdx == rax_18)
                {
                    rdx = rcx_3;
                    rcx_3 = rax_18;
                    *rdx = rax_18[2];
                    void* rax_20 = rcx_3[2];

                    if (!*(rax_20 + 0x19))
                        *(rax_20 + 8) = rdx;

                    rcx_3[1] = *r10_1;
                    void* rax_22 = *arg1;

                    if (rdx != *(rax_22 + 8))
                    {
                        void*** rax_23 = *r10_1;

                        if (rdx != rax_23[2])
                            *rax_23 = rcx_3;
                        else
                            rax_23[2] = rcx_3;
                    }
                    else
                        *(rax_22 + 8) = rcx_3;

                    rcx_3[2] = rdx;
                    r9_1 = r10_1;
                    *r10_1 = rcx_3;
                }

                rcx_3[3] = 1;
                *((*r9_1)[1] + 0x18) = 0;
                rcx_1 = (*r9_1)[1];
                r8_2 = rcx_1[2];
                rcx_1[2] = *r8_2;
                int64_t* rax_27 = *r8_2;

                if (!*(rax_27 + 0x19))
                    rax_27[1] = rcx_1;

                r8_2[1] = rcx_1[1];
                void* rax_29 = *arg1;

                if (rcx_1 != *(rax_29 + 8))
                {
                    int64_t*** rax_30 = rcx_1[1];

                    if (rcx_1 != *rax_30)
                        rax_30[2] = r8_2;
                    else
                        *rax_30 = r8_2;
                }
                else
                    *(rax_29 + 8) = r8_2;

                *r8_2 = rcx_1;
                rcx_1[1] = r8_2;
            }
            else
            {
                label_14001bca7:
                rcx_3[3] = 1;
                *(rax_3 + 0x18) = 1;
                *((*r9_1)[1] + 0x18) = 0;
                rdx = (*r9_1)[1];
            }
        } while (!*(rdx[1] + 0x18));
    }

    *(rdi[1] + 0x18) = 1;
    return arg3;
}

void** sub_14001bda0(void** arg1, int64_t arg2, int64_t arg3, int64_t arg4, void* arg5, int64_t arg6, int64_t arg7)
{
    int64_t rdi = 0xf;
    arg1[2] = 0;
    arg1[3] = 0;
    void** rbx = arg1;
    void* rbp = arg5 + arg7;

    if (rbp > 0xf)
    {
        int64_t rax_2 = rbp | 0xf;
        rdi = 0x7fffffffffffffff;

        if (rax_2 <= 0x7fffffffffffffff)
        {
            rdi = rax_2;

            if (rax_2 < 0x16)
                rdi = 0x16;
        }

        uint64_t rcx_1 = rdi + 1;

        if (rdi >= -1)
            rcx_1 = -1;

        if (rcx_1 >= 0x1000)
        {
            if (rcx_1 + 0x27 <= rcx_1)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_4 = operator new(rcx_1 + 0x27);

            if (!rax_4)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rbx = (rax_4 + 0x27) & 0xffffffffffffffe0;
            rbx[-1] = rax_4;
        }
        else if (!rcx_1)
            rbx = nullptr;
        else
            rbx = operator new(rcx_1);

        *arg1 = rbx;
    }

    arg1[2] = rbp;
    arg1[3] = rdi;
    memcpy(rbx, arg4, arg5);
    memcpy(arg5 + rbx, arg6, arg7);
    *(rbx + rbp) = 0;
    return arg1;
}

void sub_14001bec0(void* arg1)
{
    int64_t rcx_1 = *(arg1 + 8);

    if (!rcx_1)
        return;

    /* tailcall */
    return sub_14001e5e4(rcx_1);
}

struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** sub_14001bee0(struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** arg1, char arg2)
{
    sub_14001b640(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** std::basic_filebuf<char,struct std::char_traits<char> >::`scalar deleting destructor'(struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** arg1, char arg2)
{
    sub_14001b990(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

int64_t* sub_14001bf60(int64_t* arg1, int64_t* arg2, char arg3)
{
    int64_t* rdi = arg2;
    int64_t* var_40 = arg1;
    int32_t _State = 0;
    int32_t var_44 = 0;
    int64_t r14;
    r14 = 0;
    char var_48 = 0;
    int64_t* var_38 = arg1;
    int64_t* rcx_1 = *(*(*arg1 + 4) + arg1 + 0x48);

    if (rcx_1)
        (*(*rcx_1 + 8))(rcx_1);

    arg2 = 1;
    uint8_t rax_2 = std::istream::_Ipfx(arg1, arg2);
    uint8_t var_30 = rax_2;

    if (rax_2)
    {
        rdi[2] = 0;
        int64_t* rax_3 = rdi;

        if (rdi[3] >= 0x10)
            rax_3 = *rdi;

        *rax_3 = 0;
        uint64_t rdx = std::streambuf::sgetc();

        while (true)
        {
            if (rdx != 0xffffffff)
            {
                if (rdx == arg3)
                {
                    r14 = 1;
                    char var_48_1 = 1;
                    std::streambuf::sbumpc();
                    break;
                }

                int64_t rcx_3 = rdi[2];

                if (rcx_3 < 0x7fffffffffffffff)
                {
                    int64_t r8 = rdi[3];

                    if (rcx_3 >= r8)
                        sub_14001b050(rdi, rdx, r8, rdx);
                    else
                    {
                        rdi[2] = rcx_3 + 1;
                        char* rax_6 = rdi;

                        if (r8 >= 0x10)
                            rax_6 = *rdi;

                        rax_6[rcx_3] = rdx;
                        rax_6[rcx_3 + 1] = 0;
                    }

                    r14 = 1;
                    char var_48_2 = 1;
                    rdx = std::streambuf::snextc();
                    continue;
                }
                else
                    _State = 2;
            }
            else
                _State = rdx + 2;

            int32_t _State_1 = _State;
            break;
        }
    }

    if (!rax_2 || !r14)
        _State |= 2;

    std::ios::setstate(*(*arg1 + 4) + arg1, _State, 0);
    int64_t* rcx_8 = *(*(*arg1 + 4) + arg1 + 0x48);

    if (rcx_8)
    {
        int64_t rdx_3 = *rcx_8;
        (*(rdx_3 + 0x10))(rcx_8, rdx_3);
    }

    return arg1;
}

void** sub_14001c100(int64_t* arg1, wchar16* arg2, wchar16* arg3)
{
    arg_8 = arg1;
    void** result = arg1;
    int32_t _State = 0;
    _State_1 = 0;
    void* rcx = *arg1;
    int64_t rax = *(rcx + 4);
    int64_t rdi = *(rax + result + 0x28);
    void* rdi_1;

    if (rdi <= 0 || rdi <= arg3)
        rdi_1 = nullptr;
    else
        rdi_1 = rdi - arg3;

    class std::wostream* result_2 = result;
    void** result_1 = result;
    int64_t* r8 = *(rax + result + 0x48);
    void* rdx = rcx;

    if (r8)
    {
        (*(*r8 + 8))(r8, rdx);
        rcx = *result;
        rdx = rcx;
    }

    int64_t rax_2 = *(rcx + 4);

    if (!*(rax_2 + result + 0x10))
    {
        rax_2 = *(rax_2 + result + 0x50);

        if (!rax_2 || rax_2 == result)
            rax_2 = 1;
        else
        {
            std::ostream::flush(rax_2);
            rcx = *result;
            rax_2 = !*(*(rcx + 4) + result + 0x10);
            rdx = rcx;
        }
    }
    else
        rax_2 = 0;

    char var_30 = rax_2;

    if (rax_2)
    {
        if ((*(*(rcx + 4) + result + 0x18) & 0x1c0) != 0x40)
        {
            while (true)
            {
                if (!rdi_1)
                {
                    rdx = *result;
                    goto label_14001c243;
                }

                if (std::streambuf::sputc(*(*(*result + 4) + result + 0x48)) == 0xffffffff)
                {
                    _State = 4;
                    _State_1 = 4;
                    break;
                }

                rdi_1 -= 1;
            }

            goto label_14001c1f5;
        }

        label_14001c243:

        if (std::streambuf::sputn(*(*(rdx + 4) + result + 0x48), arg2, arg3) == arg3)
        {
            label_14001c1f5:

            while (true)
            {
                if (!rdi_1)
                    goto label_14001c221;

                if (std::streambuf::sputc(*(*(*result + 4) + result + 0x48)) == 0xffffffff)
                {
                    _State |= 4;
                    break;
                }

                rdi_1 -= 1;
            }
        }
        else
            _State = 4;

        _State_1 = _State;
        label_14001c221:
        *(*(*result + 4) + result + 0x28) = 0;
    }
    else
        _State = 4;

    std::ios::setstate(*(*result + 4) + result, _State, 0);

    if (!std::uncaught_exception())
        std::ostream::_Osfx(result_2);

    int64_t* rcx_15 = *(*result_2->vtable->__vecDelDtor[4] + result_2 + 0x48);

    if (rcx_15)
        (*(*rcx_15 + 0x10))(rcx_15);

    return result;
}

void* sub_14001c2c0(int64_t* arg1, int64_t* arg2, char arg3, void** arg4, char arg5, int64_t* arg6)
{
    void var_d8;
    int64_t rax_1 = __security_cookie ^ &var_d8;
    int64_t* var_48 = arg6;
    char pExceptionObject;
    void var_68;

    if (sub_1400196c0(arg1, arg2))
    {
        sub_140014260(&pExceptionObject, sub_14001a3f0(&var_68, "multiple definition: ", arg2));
        _CxxThrowException(&pExceptionObject, &data_140026088);
        /* no return */
    }

    struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** rax_3 = operator new(0xa0);
    struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** var_70 = rax_3;
    int64_t* rax_4 = sub_140019960(&var_68, arg6);
    int64_t* var_b8 = rax_4;
    *rax_3 = &cmdline::parser::option_with_value<class std::string>::`vftable'{for `cmdline::parser::option_base'};
    sub_140019960(&rax_3[1], arg2);
    rax_3[5] = arg3;
    *(rax_3 + 0x29) = arg5;
    rax_3[8] = 0;
    rax_3[9] = 0xf;
    rax_3[6] = 0;
    rax_3[0xa] = 0;
    sub_140019960(&rax_3[0xb], rax_4);
    sub_140019960(&rax_3[0xf], rax_4);
    sub_140019fd0(&rax_3[6], sub_14001d8e0(rax_3, &pExceptionObject, arg4));
    int64_t var_90;

    if (var_90 >= 0x10)
    {
        void* rcx_7 = pExceptionObject;
        void* rax_6 = rcx_7;

        if (var_90 + 1 >= 0x1000)
        {
            rcx_7 = *(rcx_7 - 8);

            if (rax_6 - rcx_7 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_7);
    }

    int64_t var_98 = 0;
    int64_t var_90_1 = 0xf;
    pExceptionObject = 0;
    *rax_3 = &cmdline::parser::option_with_value_with_reader<class std::string, struct cmdline::default_reader<class std::string> >::`vftable'{for `cmdline::parser::option_base'};
    int64_t rdx_8 = rax_4[3];

    if (rdx_8 >= 0x10)
    {
        void* rcx_8 = *rax_4;

        if (rdx_8 + 1 >= 0x1000)
        {
            void* r8_1 = *(rcx_8 - 8);

            if (rcx_8 - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx_8 = r8_1;
        }

        sub_14001e5e4(rcx_8);
    }

    rax_4[2] = 0;
    rax_4[3] = 0xf;
    *rax_4 = 0;
    *(*sub_14001adf0(arg1, &var_b8, arg2) + 0x40) = rax_3;
    void* r8_5 = *sub_14001adf0(arg1, &var_b8, arg2) + 0x40;
    void** rdx_12 = arg1[3];
    void* result;

    if (rdx_12 == arg1[4])
        result = sub_14001a9c0(&arg1[2], rdx_12, r8_5);
    else
    {
        result = *r8_5;
        *rdx_12 = result;
        arg1[3] += 8;
    }

    int64_t rdx_13 = arg6[3];

    if (rdx_13 >= 0x10)
    {
        void* rcx_14 = *arg6;

        if (rdx_13 + 1 >= 0x1000)
        {
            void* r8_6 = *(rcx_14 - 8);

            if (rcx_14 - r8_6 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            rcx_14 = r8_6;
        }

        result = sub_14001e5e4(rcx_14);
    }

    arg6[2] = 0;
    arg6[3] = 0xf;
    *arg6 = 0;
    __security_check_cookie(rax_1 ^ &var_d8);
    return result;
}

void* sub_14001c560(int64_t* arg1, int64_t* arg2, char arg3, void** arg4, char arg5, int32_t arg6)
{
    int64_t rax = sub_1400196c0(arg1, arg2);
    void* var_88;

    if (rax)
    {
        void pExceptionObject;
        sub_140014260(&pExceptionObject, sub_14001a3f0(&var_88, "multiple definition: ", arg2));
        _CxxThrowException(&pExceptionObject, &data_140026088);
        /* no return */
    }

    struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** rax_1 = operator new(rax + 0x68);
    struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** var_98 = rax_1;
    *rax_1 = &cmdline::parser::option_with_value<int32_t>::`vftable'{for `cmdline::parser::option_base'};
    sub_140019960(&rax_1[1], arg2);
    rax_1[5] = arg3;
    *(rax_1 + 0x29) = arg5;
    rax_1[8] = 0;
    rax_1[9] = 0xf;
    rax_1[6] = 0;
    rax_1[0xa] = 0;
    *(rax_1 + 0x54) = arg6;
    rax_1[0xb] = arg6;
    sub_140019fd0(&rax_1[6], sub_14001d260(rax_1, &var_88, arg4));
    int64_t var_70;

    if (var_70 >= 0x10)
    {
        void* rcx_5 = var_88;
        void* rax_4 = rcx_5;

        if (var_70 + 1 >= 0x1000)
        {
            rcx_5 = *(rcx_5 - 8);

            if (rax_4 - rcx_5 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_5);
    }

    *rax_1 = &cmdline::parser::option_with_value_with_reader<int32_t, struct cmdline::default_reader<int32_t> >::`vftable'{for `cmdline::parser::option_base'};
    *(*sub_14001adf0(arg1, &var_98, arg2) + 0x40) = rax_1;
    int64_t* r8_4 = *sub_14001adf0(arg1, &var_98, arg2) + 0x40;
    int64_t* rdx_7 = arg1[3];

    if (rdx_7 == arg1[4])
        return sub_14001a9c0(&arg1[2], rdx_7, r8_4);

    int64_t result = *r8_4;
    *rdx_7 = result;
    arg1[3] += 8;
    return result;
}

void sub_14001c6f0(int64_t arg1, int64_t arg2, void** arg3)
{
    void** rdi = arg3;

    if (!*(arg3 + 0x19))
    {
        do
        {
            sub_14001c6f0(arg1, arg2, rdi[2]);
            void** rbx_1 = rdi;
            rdi = *rdi;
            int64_t rdx_1 = rbx_1[8];

            if (rdx_1 >= 0x10)
            {
                void* rcx_1 = rbx_1[5];

                if (rdx_1 + 1 >= 0x1000)
                {
                    void* r8_1 = *(rcx_1 - 8);

                    if (rcx_1 - r8_1 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }

                    rcx_1 = r8_1;
                }

                sub_14001e5e4(rcx_1);
            }

            rbx_1[7] = 0;
            rbx_1[8] = 0xf;
            rbx_1[5] = 0;
            sub_14001e5e4(rbx_1);
        } while (!*(rdi + 0x19));
    }
}

void sub_14001c7b0(int64_t arg1, int64_t arg2, void** arg3)
{
    void** rdi = arg3;

    if (!*(arg3 + 0x19))
    {
        do
        {
            sub_14001c7b0(arg1, arg2, rdi[2]);
            void** rbx_1 = rdi;
            rdi = *rdi;
            int64_t rdx_1 = rbx_1[7];

            if (rdx_1 >= 0x10)
            {
                void* rcx_1 = rbx_1[4];

                if (rdx_1 + 1 >= 0x1000)
                {
                    void* r8_1 = *(rcx_1 - 8);

                    if (rcx_1 - r8_1 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }

                    rcx_1 = r8_1;
                }

                sub_14001e5e4(rcx_1);
            }

            rbx_1[6] = 0;
            rbx_1[7] = 0xf;
            rbx_1[4] = 0;
            sub_14001e5e4(rbx_1);
        } while (!*(rdi + 0x19));
    }
}

void* sub_14001c870(int64_t* arg1, int64_t arg2)
{
    if (arg2 > 0x1fffffffffffffff)
    {
        sub_14001bb00();
        /* no return */
    }

    int64_t rcx_2 = (arg1[2] - *arg1) >> 3;
    int64_t r14_2 = (arg1[1] - *arg1) >> 3;
    uint64_t rdx_1 = rcx_2 >> 1;

    if (rcx_2 <= 0x1fffffffffffffff - rdx_1)
    {
        int64_t rsi_1 = rdx_1 + rcx_2;

        if (rsi_1 < arg2)
        {
            rsi_1 = arg2;
            label_14001c8e1:
            int64_t rsi_2 = rsi_1 << 3;
            void* const rbx_2;

            if (rsi_2 < 0x1000)
            {
                if (!rsi_2)
                    rbx_2 = nullptr;
                else
                    rbx_2 = operator new(rsi_2);

                goto label_14001c939;
            }

            if (rsi_2 + 0x27 > rsi_2)
            {
                int64_t rax_1 = operator new(rsi_2 + 0x27);

                if (!rax_1)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rbx_2 = (rax_1 + 0x27) & 0xffffffffffffffe0;
                *(rbx_2 - 8) = rax_1;
                label_14001c939:

                if (arg2 != r14_2)
                    memset(rbx_2 + (r14_2 << 3), 0, (arg2 - r14_2) << 3);

                int64_t rdx_2 = *arg1;
                memmove(rbx_2, rdx_2, arg1[1] - rdx_2);
                void* rcx_7 = *arg1;

                if (!rcx_7)
                    goto label_14001c99e;

                if (((arg1[2] - rcx_7) & 0xfffffffffffffff8) < 0x1000)
                    goto label_14001c990;

                void* r8_6 = *(rcx_7 - 8);

                if (rcx_7 - r8_6 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                rcx_7 = r8_6;
                label_14001c990:
                sub_14001e5e4(rcx_7);
                label_14001c99e:
                *arg1 = rbx_2;
                arg1[1] = rbx_2 + (arg2 << 3);
                void* result = rsi_2 + rbx_2;
                arg1[2] = result;
                return result;
            }
        }
        else if (rsi_1 <= 0x1fffffffffffffff)
            goto label_14001c8e1;
    }

    stdext::threads::_Throw_lock_error();
    /* no return */
}

void* sub_14001c9e0(int64_t* arg1, int64_t arg2)
{
    if (arg2 > 0xaaaaaaaaaaaaaaa)
    {
        sub_14001bb00();
        /* no return */
    }

    int64_t rax;
    int64_t rdx;
    rdx = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[1] - *arg1));
    rax = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[1] - *arg1));
    int64_t r15_1 = rdx >> 2;
    int64_t r15_2 = r15_1 + (r15_1 >> 0x3f);
    int64_t rax_3;
    int64_t rdx_1;
    rdx_1 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - *arg1));
    rax_3 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - *arg1));
    int64_t rdx_2 = rdx_1 >> 2;
    int64_t rdx_3 = rdx_2 + (rdx_2 >> 0x3f);
    uint64_t rcx_5 = rdx_3 >> 1;

    if (rdx_3 <= 0xaaaaaaaaaaaaaaa - rcx_5)
    {
        int64_t rax_7 = rcx_5 + rdx_3;

        if (rax_7 < arg2)
        {
            rax_7 = arg2;
            label_14001ca8f:
            int64_t rsi_1 = rax_7 * 0x18;
            void* s_3;

            if (rsi_1 < 0x1000)
            {
                if (!rsi_1)
                    s_3 = nullptr;
                else
                    s_3 = operator new(rsi_1);

                goto label_14001cae2;
            }

            if (rsi_1 + 0x27 > rsi_1)
            {
                int64_t rax_9 = operator new(rsi_1 + 0x27);

                if (!rax_9)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                s_3 = (rax_9 + 0x27) & 0xffffffffffffffe0;
                *(s_3 - 8) = rax_9;
                label_14001cae2:
                void* s = s_3 + r15_2 * 0x18;
                int64_t i_1 = arg2 - r15_2;

                if (arg2 != r15_2)
                {
                    int64_t i;

                    do
                    {
                        __builtin_memset(s, 0, 0x18);
                        s += 0x18;
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);
                }

                sub_14001b340(s, s);
                int64_t r8_1 = arg1[1];
                void* s_1 = s_3;

                for (int64_t* s_2 = *arg1; s_2 != r8_1; s_2 = &s_2[3])
                {
                    __builtin_memset(s_1, 0, 0x18);
                    *s_1 = *s_2;
                    *(s_1 + 8) = s_2[1];
                    *(s_1 + 0x10) = s_2[2];
                    s_1 += 0x18;
                    __builtin_memset(s_2, 0, 0x18);
                }

                sub_14001b340(s_1, s_1);
                int64_t* rcx_8 = *arg1;

                if (!rcx_8)
                    goto label_14001cbd8;

                sub_14001b340(rcx_8, arg1[1]);
                void* r8_2 = *arg1;
                int64_t rax_16;
                int64_t rdx_7;
                rdx_7 = HIGHQ(0x2aaaaaaaaaaaaaab * (arg1[2] - r8_2));
                rax_16 = LOWQ(0x2aaaaaaaaaaaaaab * (arg1[2] - r8_2));
                int64_t rdx_8 = rdx_7 >> 2;

                if ((rdx_8 + (rdx_8 >> 0x3f)) * 0x18 < 0x1000)
                    goto label_14001cbbc;

                void* rcx_11 = *(r8_2 - 8);

                if (r8_2 - rcx_11 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }

                r8_2 = rcx_11;
                label_14001cbbc:
                sub_14001e5e4(r8_2);
                label_14001cbd8:
                void* result = rsi_1 + s_3;
                *arg1 = s_3;
                arg1[1] = s_3 + arg2 * 0x18;
                arg1[2] = result;
                return result;
            }
        }
        else if (rax_7 <= 0xaaaaaaaaaaaaaaa)
            goto label_14001ca8f;
    }

    stdext::threads::_Throw_lock_error();
    /* no return */
}

int128_t* sub_14001cc10(int128_t* arg1)
{
    int128_t* var_18 = arg1;
    char* rax = __std_type_info_name(&data_140028158, &data_1400287a0);
    int64_t var_28 = 0;
    int64_t var_20 = 0xf;
    char var_38 = 0;
    char* r8 = -ffffffffffffffff;

    do
        r8 = &r8[1];
     while (*(rax + r8));

    sub_140019e40(&var_38, rax, r8);
    sub_140019960(arg1, &var_38);

    if (var_20 >= 0x10)
    {
        void* rcx_2 = var_38;
        void* rax_1 = rcx_2;

        if (var_20 + 1 >= 0x1000)
        {
            rcx_2 = *(rcx_2 - 8);

            if (rax_1 - rcx_2 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_2);
    }

    return arg1;
}

int64_t* sub_14001ccc0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t r14 = arg1[2];
    int64_t rbx = 0x7fffffffffffffff;

    if (0x7fffffffffffffff - r14 < arg2)
    {
        sub_1400011e0();
        /* no return */
    }

    int64_t rbp = arg1[3];
    int64_t r15 = arg2 + r14;
    int64_t rdx_1 = r15 | 0xf;

    if (rdx_1 <= 0x7fffffffffffffff)
    {
        uint64_t rcx_1 = rbp >> 1;

        if (rbp <= 0x7fffffffffffffff - rcx_1)
        {
            int64_t rax_2 = rcx_1 + rbp;
            rbx = rdx_1;

            if (rdx_1 < rax_2)
                rbx = rax_2;
        }
    }

    uint64_t rcx_3 = rbx + 1;

    if (rbx >= -1)
        rcx_3 = -1;

    void* const rdi_2;

    if (rcx_3 < 0x1000)
    {
        if (!rcx_3)
            rdi_2 = nullptr;
        else
            rdi_2 = operator new(rcx_3);

        goto label_14001cd92;
    }

    if (rcx_3 + 0x27 <= rcx_3)
    {
        stdext::threads::_Throw_lock_error();
        /* no return */
    }

    int64_t rax_4 = operator new(rcx_3 + 0x27);

    if (rax_4)
    {
        rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0;
        *(rdi_2 - 8) = rax_4;
        label_14001cd92:
        arg1[2] = r15;
        arg1[3] = rbx;
        void* r15_1 = rdi_2 + arg4;

        if (rbp < 0x10)
        {
            memcpy(rdi_2, arg3, arg4);
            memcpy(r15_1, arg1, r14 + 1);
            *arg1 = rdi_2;
            return arg1;
        }

        void* rbx_1 = *arg1;
        memcpy(rdi_2, arg3, arg4);
        memcpy(r15_1, rbx_1, r14 + 1);

        if (rbp + 1 < 0x1000)
            goto label_14001cde6;

        void* rcx_7 = *(rbx_1 - 8);

        if (rbx_1 - rcx_7 - 8 <= 0x1f)
        {
            rbx_1 = rcx_7;
            label_14001cde6:
            sub_14001e5e4(rbx_1);
            *arg1 = rdi_2;
            return arg1;
        }
    }

    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

void* sub_14001ce40(int64_t* arg1)
{
    int64_t* rdx = *arg1;
    void* result = *rdx;
    int64_t* rcx_1 = *(*(result + 4) + rdx + 0x48);

    if (!rcx_1)
        return result;

    return (*(*rcx_1 + 0x10))(rcx_1);
}

uint64_t sub_14001ce70(int64_t arg1, int64_t* arg2)
{
    void var_148;
    int64_t rax_1 = __security_cookie ^ &var_148;
    int32_t var_128 = 0;
    void* const var_108;
    memset(&var_108, 0, 0xf0);
    var_108 = &data_140022bd8;
    void var_78;
    std::ios::ios<char, struct std::char_traits<char> >(&var_78);
    int32_t var_128_1 = 1;
    void _Strbuf;
    std::istream::istream<char, struct std::char_traits<char> >(&var_108, &_Strbuf, 0);
    *(&var_108 + *(var_108 + 4)) = &std::istringstream::`vftable';
    int64_t rcx_4 = *(var_108 + 4);
    void var_10c;
    *(&var_10c + rcx_4) = rcx_4 - 0x90;
    sub_140019cb0(&_Strbuf, arg2, 1);
    int32_t var_18;
    class std::istream* rax_4 = std::istream::operator>>(&var_108, &var_18);

    if (!(*(*rax_4->vtable->__vecDelDtor[4] + rax_4 + 0x10) & 6))
    {
        int64_t rcx_8 = *(var_108 + 4);

        if (*(&_Strbuf + rcx_8) & 1)
        {
            int32_t rbx_1 = var_18;
            *(&var_108 + rcx_8) = &std::istringstream::`vftable';
            int64_t rdx_4 = *(var_108 + 4);
            *(&var_10c + rdx_4) = rdx_4 - 0x90;
            sub_1400192f0(&_Strbuf);
            std::istream::~istream<char, struct std::char_traits<char> >();
            std::ios::~ios<char, struct std::char_traits<char> >(&var_78);
            __security_check_cookie(rax_1 ^ &var_148);
            return rbx_1;
        }
    }

    void pExceptionObject;
    sub_140001200(&pExceptionObject);
    _CxxThrowException(&pExceptionObject, &data_1400260e0);
    /* no return */
}

int128_t* sub_14001cfd0(int64_t arg1, int128_t* arg2, int64_t* arg3)
{
    sub_140019960(arg2, arg3);
    return arg2;
}

int128_t* sub_14001cff0(int128_t* arg1, int64_t arg2, int128_t* arg3, int64_t* arg4)
{
    void* r14 = nullptr;
    arg1[1] = 0;
    int64_t* rdi = arg4;
    *(arg1 + 0x18) = 0;
    int128_t* rbx = arg3;
    int64_t r15 = arg3[1];
    int64_t r12 = arg4[2];
    int64_t rdx = *(arg3 + 0x18);
    int64_t rcx = arg4[3];
    int64_t r13 = r12 + r15;

    if (r12 <= rdx - r15 && rcx <= rdx)
    {
        int128_t* rax_2 = arg1;
        *arg1 = *arg3;
        arg1[1] = arg3[1];
        arg3[1] = 0;
        *(arg3 + 0x18) = 0xf;
        *arg3 = 0;

        if (*(arg1 + 0x18) >= 0x10)
            rax_2 = *arg1;

        if (arg4[3] >= 0x10)
            rdi = *arg4;

        memcpy(rax_2 + r15, rdi, r12 + 1);
        arg1[1] = r13;
    }
    else if (r15 > rcx - r12)
    {
        int64_t rbp_1 = 0x7fffffffffffffff;

        if (0x7fffffffffffffff - r15 < r12)
        {
            sub_1400011e0();
            /* no return */
        }

        int64_t rax_5 = r13 | 0xf;

        if (rax_5 <= 0x7fffffffffffffff)
        {
            rbp_1 = rax_5;

            if (rax_5 < 0x16)
                rbp_1 = 0x16;
        }

        uint64_t rcx_6 = rbp_1 + 1;

        if (rbp_1 >= -1)
            rcx_6 = -1;

        if (rcx_6 >= 0x1000)
        {
            if (rcx_6 + 0x27 <= rcx_6)
            {
                stdext::threads::_Throw_lock_error();
                /* no return */
            }

            int64_t rax_7 = operator new(rcx_6 + 0x27);

            if (!rax_7)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }

            r14 = (rax_7 + 0x27) & 0xffffffffffffffe0;
            *(r14 - 8) = rax_7;
        }
        else if (rcx_6)
            r14 = operator new(rcx_6);

        *arg1 = r14;
        arg1[1] = r13;
        *(arg1 + 0x18) = rbp_1;

        if (*(rbx + 0x18) >= 0x10)
            rbx = *rbx;

        memcpy(r14, rbx, r15);

        if (rdi[3] >= 0x10)
            rdi = *rdi;

        memcpy(r14 + r15, rdi, r12 + 1);
    }
    else
    {
        *arg1 = *arg4;
        arg1[1] = *(arg4 + 0x10);
        arg4[2] = 0;
        arg4[3] = 0xf;
        *arg4 = 0;
        int64_t rdi_1 = *arg1;
        memmove(rdi_1 + r15, rdi_1, r12 + 1);

        if (*(rbx + 0x18) >= 0x10)
            rbx = *rbx;

        memcpy(rdi_1, rbx, r15);
        arg1[1] = r13;
    }

    return arg1;
}

struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** std::basic_streambuf<char,struct std::char_traits<char> >::`scalar deleting destructor'(struct cmdline::parser::option_base::cmdline::parser::option_with_value<int32_t>::VTable** arg1, char arg2)
{
    sub_14001b640(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** sub_14001d220(struct cmdline::parser::option_base::cmdline::parser::option_with_value<class std::string>::VTable** arg1, char arg2)
{
    sub_14001b990(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

int128_t* sub_14001d260(void* arg1, int128_t* arg2, void** arg3)
{
    void var_288;
    int64_t rax_1 = __security_cookie ^ &var_288;
    void** r15 = arg3;
    int128_t* var_180 = arg2;
    int32_t var_248 = 0;
    char var_240;
    int64_t var_228;
    int128_t var_220;
    int64_t var_208;
    char var_1e0;
    int64_t var_1c8;
    int128_t var_1a0;
    int64_t var_140;
    int32_t rbx_1;
    char* rdi;

    if (!*(arg1 + 0x29))
    {
        void* var_138;
        memset(&var_138, 0, 0xe8);
        sub_1400193b0(&var_138);
        std::ostream::operator<<(&var_138);
        int64_t var_230_1 = 0;
        var_228 = 0xf;
        var_240 = 0;
        int32_t var_248_1 = 0x200;
        char var_c0;
        int64_t r8;
        int64_t* var_f0;

        if (!(var_c0 & 2))
            r8 = *var_f0;
        int64_t rdx;

        if (!(var_c0 & 2) && r8)
        {
            int64_t* var_110;
            rdx = *var_110;
            int64_t var_c8;

            if (r8 < var_c8)
                r8 = var_c8;

            sub_140019e40(&var_240, rdx, r8 - rdx);
        }
        else if (!(var_c0 & 4))
        {
            int64_t* var_f8;
            int64_t rcx_5 = *var_f8;

            if (rcx_5)
            {
                int64_t* var_118;
                rdx = *var_118;
                int32_t* var_e0;
                sub_140019e40(&var_240, rdx, *var_e0 - rdx + rcx_5);
            }
        }
        *(&var_138 + *(var_138 + 4)) = &std::ostringstream::`vftable';
        int64_t rcx_8 = *(var_138 + 4);
        *(&*var_140[4] + rcx_8) = rcx_8 - 0x88;
        void var_130;
        sub_1400192f0(&var_130);
        std::ostream::~ostream<char, struct std::char_traits<char> >();
        void var_b0;
        int64_t r9_1 = std::ios::~ios<char, struct std::char_traits<char> >(&var_b0);
        int32_t var_248_2 = 0x1e2;
        char* rax_13;
        int64_t r8_8;

        if (var_228 - var_230_1 < 3)
        {
            int64_t var_260_1 = 3;
            void* const var_268_1 = &data_140021f40;
            rax_13 = sub_14001ccc0(&var_240, 3, var_230_1, r9_1);
        }
        else
        {
            int64_t var_230_2 = var_230_1 + 3;
            char* rbx_2 = &var_240;

            if (var_228 >= 0x10)
                rbx_2 = var_240;

            int64_t rsi_1;

            if (&data_140021f43 <= rbx_2 || &data_140021f40 > &rbx_2[var_230_1])
                rsi_1 = 3;
            else if (rbx_2 > &data_140021f40)
                rsi_1 = rbx_2 - &data_140021f40;
            else
                rsi_1 = 0;

            memmove(&rbx_2[3], rbx_2, var_230_1 + 1);
            memcpy(rbx_2, &data_140021f40, rsi_1);
            r8_8 = memcpy(&rbx_2[rsi_1], &data_140021f43 + rsi_1, 3 - rsi_1);
            rax_13 = &var_240;
        }

        int64_t var_210_1 = 0;
        var_208 = 0;
        var_220 = *rax_13;
        var_210_1 = *(rax_13 + 0x10);
        *(rax_13 + 0x10) = 0;
        *(rax_13 + 0x18) = 0xf;
        *rax_13 = 0;
        int32_t var_248_3 = 0x5e6;
        int128_t* rax_18;

        if (var_208 - var_210_1 < 1)
            rax_18 = sub_14001b1b0(&var_220, 1, r8_8, &data_140021f3c, 1);
        else
        {
            int64_t var_210_2 = var_210_1 + 1;
            int128_t* rax_17 = &var_220;

            if (var_208 >= 0x10)
                rax_17 = var_220;

            *(rax_17 + var_210_1) = 0x5d;
            rax_18 = &var_220;
        }

        var_1a0 = *rax_18;
        int128_t var_190_1 = rax_18[1];
        rax_18[1] = 0;
        *(rax_18 + 0x18) = 0xf;
        *rax_18 = 0;
        rdi = &var_1a0;
        rbx_1 = 0xdee;
    }
    else
    {
        int64_t var_1d0_1 = 0;
        var_1c8 = 0xf;
        var_1e0 = 0;
        sub_140019e40(&var_1e0, &data_140021570, nullptr);
        rdi = &var_1e0;
        rbx_1 = 1;
    }

    int32_t var_248_4 = rbx_1;
    char var_1c0;
    int128_t* rax_19;
    int64_t rdx_5;
    int64_t r8_9;
    rax_19 = sub_14001cc10(&var_1c0);
    void* rcx_19 = r15[2];

    if (0x7fffffffffffffff - rcx_19 < 2)
    {
        sub_1400011e0();
        /* no return */
    }

    if (r15[3] >= 0x10)
        r15 = *r15;

    int32_t rbx_3 = rbx_1 | 0x1000;
    int32_t var_248_5 = rbx_3;
    int32_t rbx_4 = rbx_3 | 0x2000;
    int32_t var_248_6 = rbx_4;
    int64_t* var_200;
    void* var_178;
    void* var_158;
    int64_t r8_12 = sub_14001cff0(&var_200, sub_14001cff0(&var_178, sub_14001bda0(&var_158, rdx_5, r8_9, r15, rcx_19, &data_140021f44, 2), &var_158, rax_19), &var_178, rdi);
    int32_t rbx_5 = rbx_4 | 0x4000;
    int32_t var_248_7 = rbx_5;
    int64_t var_1f0;
    int64_t var_1e8;
    int64_t** rax_25;

    if (var_1e8 - var_1f0 < 1)
        rax_25 = sub_14001b1b0(&var_200, 1, r8_12, &data_140021f38, 1);
    else
    {
        int64_t var_1f0_1 = var_1f0 + 1;
        int64_t* rax_24 = &var_200;

        if (var_1e8 >= 0x10)
            rax_24 = var_200;

        *(rax_24 + var_1f0) = 0x29;
        rax_25 = &var_200;
    }

    arg2[1] = 0;
    *(arg2 + 0x18) = 0;
    *arg2 = *rax_25;
    arg2[1] = *(rax_25 + 0x10);
    rax_25[2] = 0;
    rax_25[3] = 0xf;
    *rax_25 = nullptr;
    int32_t rbx_6 = rbx_5 | 0x8010;

    if (var_1e8 >= 0x10)
    {
        int64_t* rcx_25 = var_200;
        int64_t* rax_26 = rcx_25;

        if (var_1e8 + 1 >= 0x1000)
        {
            rcx_25 = rcx_25[-1];

            if (rax_26 - rcx_25 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_25);
    }

    int64_t var_1f0_2 = 0;
    int64_t var_1e8_1 = 0xf;
    var_200 = 0;
    int64_t var_160;

    if (var_160 >= 0x10)
    {
        void* rcx_26 = var_178;
        void* rax_29 = rcx_26;

        if (var_160 + 1 >= 0x1000)
        {
            rcx_26 = *(rcx_26 - 8);

            if (rax_29 - rcx_26 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_26);
    }

    int64_t rdx_13 = var_140;

    if (rdx_13 >= 0x10)
    {
        void* rcx_27 = var_158;
        void* rax_32 = rcx_27;

        if (rdx_13 + 1 >= 0x1000)
        {
            rcx_27 = *(rcx_27 - 8);

            if (rax_32 - rcx_27 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_27);
    }

    int64_t var_1a8;

    if (var_1a8 >= 0x10)
    {
        void* rcx_28 = var_1c0;
        void* rax_35 = rcx_28;

        if (var_1a8 + 1 >= 0x1000)
        {
            rcx_28 = *(rcx_28 - 8);

            if (rax_35 - rcx_28 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_28);
    }

    int64_t var_1b0 = 0;
    int64_t var_1a8_1 = 0xf;
    var_1c0 = 0;

    if (rbx_6 & 8)
    {
        rbx_6 &= 0xfffffff7;
        int64_t var_188;

        if (var_188 >= 0x10)
        {
            void* rcx_29 = var_1a0;
            void* rax_38 = rcx_29;

            if (var_188 + 1 >= 0x1000)
            {
                rcx_29 = *(rcx_29 - 8);

                if (rax_38 - rcx_29 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_29);
        }
    }

    if (rbx_6 & 4)
    {
        rbx_6 &= 0xfffffffb;

        if (var_208 >= 0x10)
        {
            void* rcx_30 = var_220;
            void* rax_41 = rcx_30;

            if (var_208 + 1 >= 0x1000)
            {
                rcx_30 = *(rcx_30 - 8);

                if (rax_41 - rcx_30 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_30);
        }

        int64_t var_210_3 = 0;
        int64_t var_208_1 = 0xf;
        var_220 = 0;
    }

    if (rbx_6 & 2)
    {
        rbx_6 &= 0xfffffffd;

        if (var_228 >= 0x10)
        {
            void* rcx_31 = var_240;
            void* rax_44 = rcx_31;

            if (var_228 + 1 >= 0x1000)
            {
                rcx_31 = *(rcx_31 - 8);

                if (rax_44 - rcx_31 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_31);
        }

        int64_t var_230_3 = 0;
        int64_t var_228_1 = 0xf;
        var_240 = 0;
    }

    if (rbx_6 & 1 && var_1c8 >= 0x10)
    {
        void* rcx_32 = var_1e0;
        void* rax_47 = rcx_32;

        if (var_1c8 + 1 >= 0x1000)
        {
            rcx_32 = *(rcx_32 - 8);

            if (rax_47 - rcx_32 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }

        sub_14001e5e4(rcx_32);
    }

    __security_check_cookie(rax_1 ^ &var_288);
    return arg2;
}

int128_t* sub_14001d8e0(void* arg1, int128_t* arg2, void** arg3)
{
    void** r15 = arg3;
    int128_t* var_100 = arg2;
    int32_t var_168 = 0;
    int128_t var_160;
    int64_t var_148;
    void** var_120;
    int64_t var_108;
    int128_t var_b8;
    int128_t var_a8;
    int32_t rbx;
    char* rdi_1;

    if (!*(arg1 + 0x29))
    {
        void var_58;
        int64_t* rax_1 = sub_140019960(&var_58, arg1 + 0x58);
        int64_t* var_100_1 = rax_1;
        int64_t r9_1 = sub_140019960(&var_120, rax_1);
        int64_t rdx_2 = rax_1[3];

        if (rdx_2 < 0x10)
            goto label_14001d9a0;

        void* rcx_3 = *rax_1;

        if (rdx_2 + 1 < 0x1000)
            goto label_14001d99b;

        void* r8 = *(rcx_3 - 8);

        if (rcx_3 - r8 - 8 <= 0x1f)
        {
            rcx_3 = r8;
            label_14001d99b:
            r9_1 = sub_14001e5e4(rcx_3);
            label_14001d9a0:
            rax_1[2] = 0;
            rax_1[3] = 0xf;
            *rax_1 = 0;
            int32_t var_168_1 = 0xe2;
            int64_t var_110;
            void** rax_7;
            int64_t r8_5;

            if (var_108 - var_110 < 3)
            {
                int64_t var_180_1 = 3;
                void* const var_188_1 = &data_140021f40;
                rax_7 = sub_14001ccc0(&var_120, 3, var_110, r9_1);
            }
            else
            {
                int64_t var_110_1 = var_110 + 3;
                void** rbx_2 = &var_120;

                if (var_108 >= 0x10)
                    rbx_2 = var_120;

                int64_t rsi_1;

                if (&data_140021f43 <= rbx_2 || &data_140021f40 > rbx_2 + var_110)
                    rsi_1 = 3;
                else if (rbx_2 > &data_140021f40)
                    rsi_1 = rbx_2 - &data_140021f40;
                else
                    rsi_1 = 0;

                memmove(rbx_2 + 3, rbx_2, var_110 + 1);
                memcpy(rbx_2, &data_140021f40, rsi_1);
                r8_5 = memcpy(rbx_2 + rsi_1, &data_140021f43 + rsi_1, 3 - rsi_1);
                rax_7 = &var_120;
            }

            int64_t var_150_1 = 0;
            var_148 = 0;
            var_160 = *rax_7;
            var_150_1 = *(rax_7 + 0x10);
            rax_7[2] = 0;
            rax_7[3] = 0xf;
            *rax_7 = nullptr;
            int32_t var_168_2 = 0x1e6;
            int128_t* rax_12;

            if (var_148 - var_150_1 < 1)
                rax_12 = sub_14001b1b0(&var_160, 1, r8_5, &data_140021f3c, 1);
            else
            {
                int64_t var_150_2 = var_150_1 + 1;
                int128_t* rax_11 = &var_160;

                if (var_148 >= 0x10)
                    rax_11 = var_160;

                *(rax_11 + var_150_1) = 0x5d;
                rax_12 = &var_160;
            }

            var_b8 = *rax_12;
            var_a8 = rax_12[1];
            rax_12[1] = 0;
            *(rax_12 + 0x18) = 0xf;
            *rax_12 = 0;
            rdi_1 = &var_b8;
            rbx = 0x3ee;
            goto label_14001db18;
        }
    }
    else
    {
        int64_t var_c8_1 = 0;
        int64_t var_c0 = 0xf;
        char var_d8 = 0;
        sub_140019e40(&var_d8, &data_140021570, nullptr);
        rdi_1 = &var_d8;
        rbx = 1;
        label_14001db18:
        int32_t var_168_3 = rbx;
        int64_t var_e8_1 = 0;
        int64_t var_e0_1 = 0xf;
        char var_f8 = 0;
        int64_t rdx_7;
        int64_t r8_6;
        rdx_7 = sub_140019e40(&var_f8, "string", 6);
        int32_t rbx_3 = rbx | 0x400;
        int32_t var_168_4 = rbx_3;
        void* rcx_13 = r15[2];

        if (0x7fffffffffffffff - rcx_13 < 2)
        {
            sub_1400011e0();
            /* no return */
        }

        if (r15[3] >= 0x10)
            r15 = *r15;

        int32_t rbx_4 = rbx_3 | 0x800;
        int32_t var_168_5 = rbx_4;
        int32_t rbx_5 = rbx_4 | 0x1000;
        int32_t var_168_6 = rbx_5;
        int64_t* var_140;
        void* var_98;
        void* var_78;
        int64_t r8_9 = sub_14001cff0(&var_140, sub_14001cff0(&var_98, sub_14001bda0(&var_78, rdx_7, r8_6, r15, rcx_13, &data_140021f44, 2), &var_78, &var_f8), &var_98, rdi_1);
        int32_t rbx_6 = rbx_5 | 0x2000;
        int32_t var_168_7 = rbx_6;
        int64_t var_130;
        int64_t var_128;
        int64_t** rax_18;

        if (var_128 - var_130 < 1)
            rax_18 = sub_14001b1b0(&var_140, 1, r8_9, &data_140021f38, 1);
        else
        {
            int64_t var_130_1 = var_130 + 1;
            int64_t* rax_17 = &var_140;

            if (var_128 >= 0x10)
                rax_17 = var_140;

            *(rax_17 + var_130) = 0x29;
            rax_18 = &var_140;
        }

        arg2[1] = 0;
        *(arg2 + 0x18) = 0;
        *arg2 = *rax_18;
        arg2[1] = *(rax_18 + 0x10);
        rax_18[2] = 0;
        rax_18[3] = 0xf;
        *rax_18 = nullptr;
        int32_t rbx_7 = rbx_6 | 0x4010;

        if (var_128 >= 0x10)
        {
            int64_t* rcx_19 = var_140;
            int64_t* rax_19 = rcx_19;

            if (var_128 + 1 >= 0x1000)
            {
                rcx_19 = rcx_19[-1];

                if (rax_19 - rcx_19 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_19);
        }

        int64_t var_130_2 = 0;
        int64_t var_128_1 = 0xf;
        var_140 = 0;
        int64_t var_80;

        if (var_80 >= 0x10)
        {
            void* rcx_20 = var_98;
            void* rax_22 = rcx_20;

            if (var_80 + 1 >= 0x1000)
            {
                rcx_20 = *(rcx_20 - 8);

                if (rax_22 - rcx_20 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_20);
        }

        int64_t var_60;

        if (var_60 >= 0x10)
        {
            void* rcx_21 = var_78;
            void* rax_25 = rcx_21;

            if (var_60 + 1 >= 0x1000)
            {
                rcx_21 = *(rcx_21 - 8);

                if (rax_25 - rcx_21 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_21);
        }

        if (var_e0_1 >= 0x10)
        {
            void* rcx_22 = var_f8;
            void* rax_28 = rcx_22;

            if (var_e0_1 + 1 >= 0x1000)
            {
                rcx_22 = *(rcx_22 - 8);

                if (rax_28 - rcx_22 - 8 > 0x1f)
                {
                    _invalid_parameter_noinfo_noreturn();
                    /* no return */
                }
            }

            sub_14001e5e4(rcx_22);
        }

        if (rbx_7 & 8)
        {
            rbx_7 &= 0xfffffff7;
            int64_t rdx_19 = *var_a8[8];

            if (rdx_19 >= 0x10)
            {
                void* rcx_23 = var_b8;
                void* rax_31 = rcx_23;

                if (rdx_19 + 1 >= 0x1000)
                {
                    rcx_23 = *(rcx_23 - 8);

                    if (rax_31 - rcx_23 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }
                }

                sub_14001e5e4(rcx_23);
            }
        }

        if (rbx_7 & 4)
        {
            rbx_7 &= 0xfffffffb;

            if (var_148 >= 0x10)
            {
                void* rcx_24 = var_160;
                void* rax_34 = rcx_24;

                if (var_148 + 1 >= 0x1000)
                {
                    rcx_24 = *(rcx_24 - 8);

                    if (rax_34 - rcx_24 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }
                }

                sub_14001e5e4(rcx_24);
            }

            int64_t var_150_3 = 0;
            int64_t var_148_1 = 0xf;
            var_160 = 0;
        }

        if (!(rbx_7 & 2))
            goto label_14001de69;

        rbx_7 &= 0xfffffffd;

        if (var_108 < 0x10)
            goto label_14001de4c;

        void** rcx_25 = var_120;
        void** rax_37 = rcx_25;

        if (var_108 + 1 >= 0x1000)
            rcx_25 = rcx_25[-1];

        if (var_108 + 1 < 0x1000 || rax_37 - rcx_25 - 8 <= 0x1f)
        {
            sub_14001e5e4(rcx_25);
            label_14001de4c:
            int64_t var_110_2 = 0;
            int64_t var_108_1 = 0xf;
            var_120 = 0;
            label_14001de69:

            if (rbx_7 & 1 && var_c0 >= 0x10)
            {
                void* rcx_26 = var_d8;
                void* rax_40 = rcx_26;

                if (var_c0 + 1 >= 0x1000)
                {
                    rcx_26 = *(rcx_26 - 8);

                    if (rax_40 - rcx_26 - 8 > 0x1f)
                    {
                        _invalid_parameter_noinfo_noreturn();
                        /* no return */
                    }
                }

                sub_14001e5e4(rcx_26);
            }

            return arg2;
        }
    }
    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

int64_t sub_14001ded0(int64_t* arg1)
{
    *(*(*arg1 + 4) + &arg1[0x12] - 0x90) = &std::istringstream::`vftable';
    int64_t rdx_1 = *(*arg1 + 4);
    *(rdx_1 + &arg1[0x12] - 0x94) = rdx_1 - 0x90;
    sub_1400192f0(&arg1[2]);
    std::istream::~istream<char, struct std::char_traits<char> >();
    /* tailcall */
    return std::ios::~ios<char, struct std::char_traits<char> >(&arg1[0x12]);
}

int64_t sub_14001df30(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t result = arg1[1] * arg1[2];

    if (arg2 == result)
    {
        arg1[1] = arg3;
        arg1[2] = arg4;
    }
    else
    {
        result = free(*arg1);

        if (!arg2)
        {
            *arg1 = 0;
            arg1[1] = arg3;
            arg1[2] = arg4;
        }
        else
        {
            result = sub_14001e050(arg2);
            *arg1 = result;
            arg1[1] = arg3;
            arg1[2] = arg4;
        }
    }

    return result;
}

void* sub_14001dfb0(class std::basic_ios<unsigned short>* arg1, char arg2)
{
    *(*(*(arg1 + -0x90) + 4) + arg1 - 0x90) = &std::istringstream::`vftable';
    int64_t r8_1 = *(*(arg1 + -0x90) + 4);
    *(r8_1 + arg1 - 0x94) = r8_1 - 0x90;
    sub_1400192f0(arg1 - 0x80);
    std::istream::~istream<char, struct std::char_traits<char> >();
    std::ios::~ios<char, struct std::char_traits<char> >(arg1);

    if (arg2 & 1)
        sub_14001e5e4(arg1 - 0x90);

    return arg1 - 0x90;
}

int64_t sub_14001e050(int64_t arg1)
{
    if (!arg1)
        return 0;

    if (arg1 <= 0x3fffffffffffffff)
    {
        int64_t _Size = arg1 << 2;
        int64_t result = malloc(_Size);

        if (result || !_Size)
            return result;
    }

    __scrt_throw_std_bad_alloc();
    /* no return */
}

int64_t* <lambda_532e024f4337e6fc7ad266c2bef9f4ed>::<lambda_532e024f4337e6fc7ad266c2bef9f4ed>(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)
{
    arg1[3] = arg5;
    *arg1 = arg2;
    arg1[1] = arg3;
    arg1[2] = arg4;
    return arg1;
}

void sub_14001e0c0(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg2 < arg3)
    {
        float* rcx = arg1[1];
        int64_t r9_1 = **arg1;

        if (arg3 - arg2 < 4)
        {
            label_14001e14d:

            do
            {
                *(r9_1 + (arg2 << 2)) = *(r9_1 + (arg2 << 2)) / *rcx;
                arg2 += 1;
            } while (arg2 < arg3);
        }
        else
        {
            do
            {
                float zmm1 = *(r9_1 + (arg2 << 2) + 4);
                *(r9_1 + (arg2 << 2)) = *(r9_1 + (arg2 << 2)) / *rcx;
                float zmm0 = *(r9_1 + (arg2 << 2) + 8);
                *(r9_1 + (arg2 << 2) + 4) = zmm1 / *rcx;
                zmm1 = *(r9_1 + (arg2 << 2) + 0xc);
                *(r9_1 + (arg2 << 2) + 8) = zmm0 / *rcx;
                *(r9_1 + (arg2 << 2) + 0xc) = zmm1 / *rcx;
                arg2 += 4;
            } while (arg2 < arg3 - 3);

            if (arg2 < arg3)
                goto label_14001e14d;
        }
    }
}

void sub_14001e150(int64_t* arg1, int64_t arg2, void* arg3)
{
    int64_t i = arg2;
    void* rbx_1 = arg3 - arg2;

    if (arg2 < arg3)
    {
        if (rbx_1 < 0x10)
        {
            label_14001e236:
            int64_t rcx_5 = **arg1;
            int64_t rdx_3 = *arg1[1];
            float zmm0[0x4];

            if (arg3 - i < 4)
            {
                label_14001e2c8:

                do
                {
                    zmm0 = *(rdx_3 + (i << 2));
                    zmm0[0] = zmm0[0] + *(rcx_5 + (i << 2));
                    *(rcx_5 + (i << 2)) = zmm0[0];
                    i += 1;
                } while (i < arg3);
            }
            else
            {
                do
                {
                    zmm0 = *(rdx_3 + (i << 2));
                    zmm0[0] = zmm0[0] + *(rcx_5 + (i << 2));
                    *(rcx_5 + (i << 2)) = zmm0[0];
                    float zmm1[0x4] = *(rdx_3 + (i << 2) + 4);
                    zmm1[0] = zmm1[0] + *(rcx_5 + (i << 2) + 4);
                    *(rcx_5 + (i << 2) + 4) = zmm1[0];
                    zmm0 = *(rdx_3 + (i << 2) + 8);
                    zmm0[0] = zmm0[0] + *(rcx_5 + (i << 2) + 8);
                    *(rcx_5 + (i << 2) + 8) = zmm0[0];
                    zmm1 = *(rdx_3 + (i << 2) + 0xc);
                    zmm1[0] = zmm1[0] + *(rcx_5 + (i << 2) + 0xc);
                    *(rcx_5 + (i << 2) + 0xc) = zmm1[0];
                    i += 4;
                } while (i < arg3 - 3);

                if (i < arg3)
                    goto label_14001e2c8;
            }
        }
        else
        {
            int64_t r10_1 = **arg1;
            int64_t rdi_1 = *arg1[1];

            if (r10_1 + (arg2 << 2) <= rdi_1 + ((arg3 - 1) << 2) && r10_1 + ((arg3 - 1) << 2) >= rdi_1 + (arg2 << 2))
                goto label_14001e236;

            int32_t rax_5;
            int32_t rdx_1;
            rdx_1 = HIGHQ(rbx_1);
            rax_5 = LOWQ(rbx_1);
            uint64_t rdx_2 = rdx_1 & 0xf;
            void* rax = (i << 2) + 0x20;

            do
            {
                i += 0x10;
                *(rax + r10_1 - 0x20) = _mm_add_ps(*(rax + rdi_1 - 0x20), *(rax + r10_1 - 0x20));
                *(rax + r10_1 - 0x10) = _mm_add_ps(*(rax + rdi_1 - 0x10), *(rax + r10_1 - 0x10));
                *(rax + r10_1) = _mm_add_ps(*(rax + rdi_1), *(rax + r10_1));
                *(rax + r10_1 + 0x10) = _mm_add_ps(*(rax + rdi_1 + 0x10), *(rax + r10_1 + 0x10));
                rax += 0x40;
            } while (i < arg3 - (((rax_5 + rdx_2) & 0xf) - rdx_2));

            if (i < arg3)
                goto label_14001e236;
        }
    }
}

void sub_14001e2e0(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    int64_t r10 = arg2;

    if (arg2 < arg3)
    {
        int32_t* rdx = arg1[1];
        int64_t r11_1 = **arg1;

        if (arg3 - arg2 >= 4)
        {
            void* rcx_1 = r11_1 + ((r10 + 2) << 2);
            int64_t i_3 = ((arg3 - r10 - 4) >> 2) + 1;
            r10 += i_3 << 2;
            int64_t i;

            do
            {
                *(rcx_1 - 8) = *rdx;
                rcx_1 += 0x10;
                *(rcx_1 - 0x14) = *rdx;
                *(rcx_1 - 0x10) = *rdx;
                *(rcx_1 - 0xc) = *rdx;
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
        }

        if (arg3 - arg2 < 4 || r10 < arg3)
        {
            int32_t* rcx_2 = r11_1 + (r10 << 2);
            int64_t i_2 = arg3 - r10;
            int64_t i_1;

            do
            {
                *rcx_2 = *rdx;
                rcx_2 = &rcx_2[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
        }
    }
}

void* sub_14001e360(void* arg1, void* arg2)
{
    int64_t* r8 = *(arg2 + 8);
    *(arg1 + 8) = *r8;
    *(arg1 + 0x10) = r8[1];
    *(arg1 + 0x18) = *(arg2 + 0x28);
    return arg1;
}

void sub_14001e380(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg2 < arg3)
    {
        void* r8 = arg1[1];
        int64_t r10_1 = **arg1;

        if (arg3 - arg2 < 4)
        {
            label_14001e4ee:

            do
            {
                *(r10_1 + (arg2 << 2)) = *(*(r8 + 0x30) + (arg2 << 2)) * *(r8 + 0x40) + (*(r8 + 0x10))[arg2] * *(r8 + 0x20);
                arg2 += 1;
            } while (arg2 < arg3);
        }
        else
        {
            void* rbx_2 = r10_1 + ((arg2 + 2) << 2);
            int64_t i_1 = ((arg3 - arg2 - 4) >> 2) + 1;
            arg2 += i_1 << 2;
            int64_t i;

            do
            {
                void* rcx = -8 - r10_1 + rbx_2;
                *(rbx_2 - 8) = *(*(r8 + 0x30) + rcx) * *(r8 + 0x40) + *(*(r8 + 0x10) + rcx) * *(r8 + 0x20);
                void* rcx_2 = rbx_2 - r10_1;
                *(rbx_2 - 4) = *(*(r8 + 0x30) + rcx + 4) * *(r8 + 0x40) + *(*(r8 + 0x10) + rcx + 4) * *(r8 + 0x20);
                void* rcx_3 = 4 - r10_1 + rbx_2;
                *rbx_2 = *(*(r8 + 0x10) + rcx_2) * *(r8 + 0x20) + *(*(r8 + 0x30) + rcx_2) * *(r8 + 0x40);
                *(rbx_2 + 4) = *(*(r8 + 0x30) + rcx_3) * *(r8 + 0x40) + *(*(r8 + 0x10) + rcx_3) * *(r8 + 0x20);
                rbx_2 += 0x10;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);

            if (arg2 < arg3)
                goto label_14001e4ee;
        }
    }
}

int64_t sub_14001e500(int64_t arg1)
{
    if (!arg1)
        return 0;

    if (arg1 <= 0x7fffffffffffffff)
    {
        uint64_t _Size = arg1 * 2;
        int64_t result = malloc(_Size);

        if (result || !_Size)
            return result;
    }

    __scrt_throw_std_bad_alloc();
    /* no return */
}

int64_t sub_14001e54c(void* arg1, char arg2)
{
    /* tailcall */
    return sub_140019a30(arg1 - *(arg1 - 4), arg2);
}

int64_t sub_14001e558(void* arg1, char arg2)
{
    /* tailcall */
    return sub_140019b10(arg1 - *(arg1 - 4), arg2);
}

int64_t sub_14001e564(void* arg1, char arg2)
{
    /* tailcall */
    return sub_14001dfb0(arg1 - *(arg1 - 4), arg2);
}

void std::streambuf::_Lock(void* arg1)
{
    /* tailcall */
    return std::streambuf::_Lock(arg1);
}

void std::streambuf::_Unlock(void* arg1)
{
    /* tailcall */
    return std::streambuf::_Unlock(arg1);
}

int64_t std::streambuf::showmanyc(class std::streambuf* this)
{
    /* tailcall */
    return std::streambuf::showmanyc(this);
}

int32_t std::streambuf::uflow()
{
    /* tailcall */
    return std::streambuf::uflow();
}

int64_t std::streambuf::xsgetn(char* arg1, int64_t arg2)
{
    /* tailcall */
    return std::streambuf::xsgetn(arg1, arg2);
}

int64_t std::streambuf::xsputn(class std::streambuf* this, char const* _Ptr, int64_t _Count)
{
    /* tailcall */
    return std::streambuf::xsputn(this, _Ptr, _Count);
}

struct std::_Crt_new_delete* std::streambuf::setbuf(struct std::_Crt_new_delete* this, struct std::_Crt_new_delete* __that)
{
    /* tailcall */
    return std::streambuf::setbuf(this, __that);
}

int64_t std::streambuf::sync(class std::streambuf* this)
{
    /* tailcall */
    return std::streambuf::sync(this);
}

void std::streambuf::imbue(void* arg1)
{
    /* tailcall */
    return std::streambuf::imbue(arg1);
}

int64_t __security_check_cookie(int64_t arg1)
{
    if (arg1 == __security_cookie)
    {
        int64_t rcx = ROLQ(arg1, 0x10);

        if (!(rcx & 0xffff))
            return;

        arg1 = RORQ(rcx, 0x10);
    }

    /* tailcall */
    return __report_gsfailure(arg1);
}

void sub_14001e5e4(void* _Block)
{
    /* tailcall */
    return sub_14001ea5c(_Block);
}

int64_t sub_14001e5ec()
{
    /* tailcall */
    return InitializeSListHead(&data_1400287a0);
}

int64_t operator new(uint64_t arg1)
{
    uint64_t _Size = arg1;

    while (true)
    {
        int64_t result = malloc(arg1);

        if (result)
            return result;

        if (!_callnewh(_Size))
            break;

        arg1 = _Size;
    }

    if (_Size != -1)
    {
        __scrt_throw_std_bad_alloc();
        /* no return */
    }

    stdext::threads::_Throw_lock_error();
    /* no return */
}

int64_t j_operator new(uint64_t arg1)
{
    /* tailcall */
    return operator new(arg1);
}

struct type_info::VTable** type_info::`scalar deleting destructor'(struct type_info::VTable** arg1, char arg2)
{
    *arg1 = &type_info::`vftable';

    if (arg2 & 1)
        sub_14001e5e4(arg1);

    return arg1;
}

int64_t pre_c_initialization()
{
    _set_app_type(_crt_console_app);
    _set_fmode(0x4000);
    *__p__commode() = 0;

    if (__scrt_initialize_onexit_tables(1))
    {
        _RTC_Initialize();
        atexit(_RTC_Terminate);

        if (!_configure_narrow_argv(_crt_argv_unexpanded_arguments))
        {
            sub_14001e5ec();

            if (sub_14001ed9c())
                __setusermatherr(sub_14001ed60);

            _configthreadlocale(0);

            if (sub_140016690())
                _initialize_narrow_environment();

            j_sub_14001ed60();
            return 0;
        }
    }

    __scrt_fastfail(7);
    breakpoint();
}

int64_t post_pgo_initialization()
{
    __scrt_initialize_default_local_stdio_options();
    return 0;
}

int64_t pre_cpp_initialization()
{
    sub_14001ef68();
    /* tailcall */
    return _set_new_mode(0);
}

int64_t __scrt_common_main_seh(int64_t arg1 @ rbx)
{
    arg_8 = arg1;

    if (!__scrt_initialize_crt(1))
    {
        __scrt_fastfail(7);
        __scrt_fastfail(7);
    }
    else
    {
        int64_t rsi;
        rsi = 0;
        char var_18_1 = 0;
        arg1 = __scrt_acquire_startup_lock();
        int32_t rcx_1 = data_140028d20;

        if (rcx_1 == 1)
            __scrt_fastfail(7);
        else
        {
            if (rcx_1)
            {
                rsi = 1;
                char var_18_2 = 1;
            }
            else
            {
                data_140028d20 = 1;

                if (_initterm_e(&data_140021448, &data_140021460))
                    return 0xff;

                _initterm(&data_140021430, &data_140021440);
                data_140028d20 = 2;
            }

            rcx_1 = arg1;
            __scrt_release_startup_lock(rcx_1);

            if (data_140028db8 && __scrt_is_nonwritable_in_current_image(&data_140028db8))
                data_140028db8(0, 2, 0);

            if (data_140028db0 && __scrt_is_nonwritable_in_current_image(&data_140028db0))
                _register_thread_local_exe_atexit_callback(data_140028db0);

            _get_initial_narrow_environment();
            char** rbx = *__p___argv();
            main(*__p___argc(), rbx);
            arg1 = 0;

            if (__scrt_is_managed_app())
            {
                if (!rsi)
                    _cexit();

                __scrt_uninitialize_crt(1, 0);
                return 0;
            }
        }
    }

    exit(arg1);
    /* no return */
}

uint64_t sub_14001e87e(int32_t arg1 @ rax, char arg2, int64_t arg3, int64_t arg4, int64_t arg5)
{
    if (!__scrt_is_managed_app())
    {
        _exit(arg1);
        /* no return */
    }

    if (!arg2)
        _c_exit();

    return arg1;
}

int64_t _start()
{
    __security_init_cookie();
    int64_t rbx;
    /* tailcall */
    return __scrt_common_main_seh(rbx);
}

void __raise_securityfailure(EXCEPTION_POINTERS* arg1) __noreturn
{
    SetUnhandledExceptionFilter(0);
    UnhandledExceptionFilter(arg1);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

void __report_gsfailure(uint64_t stack_cookie) __noreturn
{
    stack_cookie_1 = stack_cookie;

    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);

    capture_previous_context(&data_140028850);
    data_140028948 = __return_addr;
    data_1400288e8 = &stack_cookie_1;
    data_1400287c0 = data_140028948;
    data_1400288d0 = stack_cookie_1;
    data_1400287b0 = 0xc0000409;
    data_1400287b4 = 1;
    data_1400287c8 = 1;
    data_1400287d0 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_140028000;
    __raise_securityfailure(&data_1400214b0);
    /* no return */
}

int64_t sub_14001e9e0() __pure
{
    return;
}

IMAGE_RUNTIME_FUNCTION_ENTRY* capture_previous_context(CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry;

    for (int32_t i = 0; i < 2; i += 1)
    {
        FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);

        if (!FunctionEntry)
            break;

        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, &HandlerData, &EstablisherFrame, nullptr);
    }

    return FunctionEntry;
}

void sub_14001ea5c(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

int64_t __scrt_acquire_startup_lock()
{
    int64_t result;

    if (!sub_14001f1f0())
    {
        label_14001ea92:
        result = 0;
    }
    else
    {
        TEB* gsbase;
        void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;

        do
        {
            result = 0;
            bool z_1;

            if (0 == data_140028d28)
            {
                data_140028d28 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_140028d28;
                z_1 = false;
            }

            if (z_1)
                goto label_14001ea92;
        } while (StackBase != result);

        result = 1;
    }

    return result;
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    char rax = data_140028d30;

    if (!arg1)
        rax = 1;

    data_140028d30 = rax;
    int64_t xcr0;
    __isa_available_init(xcr0);

    if (sub_140016690() && sub_140016690())
        return 1;

    return 0;
}

int32_t __scrt_initialize_onexit_tables(int32_t arg1)
{
    int32_t result;

    if (data_140028d31)
        result = 1;
    else
    {
        if (arg1 > 1)
        {
            __scrt_fastfail(5);
            breakpoint();
        }

        if (!sub_14001f1f0() || arg1)
        {
            __builtin_memset(&data_140028d38, 0xff, 0x30);
            data_140028d31 = 1;
            result = 1;
        }
        else if (_initialize_onexit_table(&data_140028d38))
            result = 0;
        else if (!_initialize_onexit_table(&data_140028d50))
        {
            data_140028d31 = 1;
            result = 1;
        }
        else
            result = 0;
    }

    return result;
}

uint64_t __scrt_is_nonwritable_in_current_image(int64_t arg1)
{
    struct Section_Header* const rdx_1 = &__section_headers;

    while (true)
    {
        struct Section_Header* const var_18_1 = rdx_1;

        if (rdx_1 == &data_1400002f0)
        {
            rdx_1 = nullptr;
            break;
        }

        uint64_t virtualAddress = rdx_1->virtualAddress;

        if (arg1 - &__dos_header >= virtualAddress && arg1 - &__dos_header < rdx_1->virtualSize + virtualAddress)
            break;

        rdx_1 = &rdx_1[1];
    }

    uint64_t result;

    if (!rdx_1)
        result = 0;
    else if (rdx_1->characteristics >= 0)
        result = 1;
    else
        result = 0;

    return result;
}

int64_t __scrt_release_startup_lock(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    int32_t result = sub_14001f1f0();

    if (result && !rbx)
    {
        data_140028d28;
        data_140028d28 = 0;
    }

    return result;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    data_140028d30;
    int64_t result;
    result = 1;
    return result;
}

_onexit_t_1 _onexit(_PVFV arg1)
{
    _onexit_t_1 _Function = arg1;
    int32_t rax;

    if (data_140028d38 != -1)
        rax = _register_onexit_function(&data_140028d38, _Function);
    else
        rax = _crt_atexit(arg1);

    if (!rax)
        return _Function;

    return nullptr;
}

uint64_t atexit(_PVFV arg1)
{
    _onexit_t_1 rax = _onexit(arg1);
    int32_t rax_1 = -(rax);
    return -((rax_1 - rax_1)) - 1;
}

uint64_t __security_init_cookie()
{
    uint64_t __security_cookie_1 = __security_cookie;

    if (__security_cookie_1 == 0x2b992ddfa232)
    {
        lpSystemTimeAsFileTime = 0;
        GetSystemTimeAsFileTime(&lpSystemTimeAsFileTime);
        lpSystemTimeAsFileTime_1 = lpSystemTimeAsFileTime;
        uint64_t rax_2 = GetCurrentThreadId();
        lpSystemTimeAsFileTime_1 ^= rax_2;
        uint64_t rax_4 = GetCurrentProcessId();
        lpSystemTimeAsFileTime_1 ^= rax_4;
        QueryPerformanceCounter(&lpPerformanceCount);
        __security_cookie_1 = (lpPerformanceCount << 0x20 ^ lpPerformanceCount ^ lpSystemTimeAsFileTime_1 ^ &lpSystemTimeAsFileTime_1) & 0xffffffffffff;

        if (__security_cookie_1 == 0x2b992ddfa232)
            __security_cookie_1 = 0x2b992ddfa233;

        __security_cookie = __security_cookie_1;
    }

    uint64_t result = ~__security_cookie_1;
    data_140028000 = result;
    return result;
}

int64_t sub_14001ed60() __pure
{
    return 0;
}

int64_t sub_14001ed64() __pure
{
    return 1;
}

int64_t sub_14001ed6c() __pure
{
    return 0x4000;
}

void _guard_check_icall(void (* arg1)()) __pure
{
    return;
}

int64_t sub_14001ed78() __pure
{
    return &data_140028d68;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_140028da0 |= 0x24;
    data_140028d68 |= 2;
    return &data_140028d68;
}

int64_t sub_14001ed9c()
{
    int64_t result;
    result = !data_140028014;
    return result;
}

int64_t sub_14001eda8() __pure
{
    return &data_140028db8;
}

int64_t sub_14001edb0() __pure
{
    return &data_140028db0;
}

int64_t sub_14001edb8()
{
    data_140028d70 = 0;
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);

    sub_14001edb8();
    void ContextRecord;
    memset(&ContextRecord, 0, 0x4d0);
    RtlCaptureContext(&ContextRecord);
    uint64_t ControlPc;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(ControlPc, &ImageBase, nullptr);

    if (FunctionEntry)
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, nullptr);

    void* const __return_addr_2 = __return_addr;
    int64_t* var_440 = &__saved_rbx;
    int32_t var_578;
    memset(&var_578, 0, 0x98);
    void* const __return_addr_1 = __return_addr;
    var_578 = 0x40000015;
    int32_t var_574 = 1;
    bool cond:0 = IsDebuggerPresent() == 1;
    int32_t* ExceptionInfo = &var_578;
    uint64_t rbx_1;
    rbx_1 = cond:0;
    void* var_580 = &ContextRecord;
    SetUnhandledExceptionFilter(nullptr);
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo);

    if (!result && !rbx_1)
        sub_14001edb8();

    return result;
}

int64_t j_sub_14001ed60()
{
    /* tailcall */
    return sub_14001ed60();
}

HMODULE __scrt_is_managed_app()
{
    HMODULE result = GetModuleHandleW(nullptr);
    int32_t* rcx_2;

    if (result && result->unused == 0x5a4d)
        rcx_2 = *(result + 0x3c) + result;

    if (!result || result->unused != 0x5a4d || *rcx_2 != 0x4550 || rcx_2[6] != 0x20b || rcx_2[0x21] <= 0xe || !rcx_2[0x3e])
        result = 0;
    else
        result = 1;

    return result;
}

int64_t sub_14001ef68()
{
    /* tailcall */
    return SetUnhandledExceptionFilter(__scrt_unhandled_exception_filter);
}

int64_t __scrt_unhandled_exception_filter(int64_t* arg1)
{
    int32_t* rbx = *arg1;

    if (*rbx == 0xe06d7363 && rbx[6] == 4)
    {
        int32_t rdx_1 = rbx[8];

        if (rdx_1 - 0x19930520 <= 2 || rdx_1 == 0x1994000)
        {
            *__current_exception() = rbx;
            *__current_exception_context() = arg1[1];
            terminate();
            /* no return */
        }
    }

    return 0;
}

void _RTC_Initialize()
{
    for (void* const i = &data_140023fb0; i < &data_140023fb0; i += 8)
    {
        int64_t rax = *i;

        if (rax)
            rax();
    }
}

void _RTC_Terminate()
{
    for (void* const i = &data_140023fc0; i < &data_140023fc0; i += 8)
    {
        int64_t rax = *i;

        if (rax)
            rax();
    }
}

int64_t __isa_available_init(int64_t arg1 @ xcr0)
{
    int32_t temp0;
    temp0 = __cpuid(0, 0);
    int32_t r11 = 0;
    int32_t temp0_1;
    temp0_1 = __cpuid(1, 0);
    int32_t var_18 = temp0_1;
    int32_t temp1;
    int32_t var_14 = temp1;
    int32_t temp2;
    int32_t var_10 = temp2;
    int32_t temp3;
    int32_t var_c = temp3;
    int32_t rax_2;
    uint64_t rax_3;

    if (!((temp1 ^ 0x756e6547) | (temp2 ^ 0x6c65746e) | (temp3 ^ 0x49656e69)))
    {
        data_140028020 = -1;
        rax_2 = temp0_1 & 0xfff3ff0;

        if (rax_2 != 0x106c0 && rax_2 != 0x20660 && rax_2 != 0x20670)
            rax_3 = rax_2 - 0x30650;
    }

    int32_t r8_3;

    if ((temp1 ^ 0x756e6547) | (temp2 ^ 0x6c65746e) | (temp3 ^ 0x49656e69) || (rax_2 != 0x106c0 && rax_2 != 0x20660 && rax_2 != 0x20670 && (rax_3 > 0x20 || !TEST_BITQ(0x100010001, rax_3))))
        r8_3 = data_140028d80;
    else
    {
        r8_3 = data_140028d80 | 1;
        data_140028d80 = r8_3;
    }

    if (temp0 >= 7)
    {
        int32_t temp0_2;
        temp0_2 = __cpuid(7, 0);
        int32_t var_18_1 = temp0_2;
        r11 = temp1;
        int32_t var_14_1 = temp1;
        int32_t var_10_1 = temp2;
        int32_t var_c_1 = temp3;

        if (TEST_BITD(temp1, 9))
            data_140028d80 = r8_3 | 2;
    }

    data_140028018 = 1;
    data_14002801c = 2;

    if (TEST_BITD(temp2, 0x14))
    {
        data_140028018 = 2;
        data_14002801c = 6;

        if (TEST_BITD(temp2, 0x1b) && TEST_BITD(temp2, 0x1c))
        {
            int32_t temp0_3;
            temp0_3 = _xgetbv(0, arg1);
            char rdx_5 = temp0_3 << 0x20 | temp1;

            if ((rdx_5 & 6) == 6)
            {
                int32_t rax_8 = data_14002801c | 8;
                data_140028018 = 3;
                data_14002801c = rax_8;

                if (r11 & 0x20)
                {
                    data_140028018 = 5;
                    data_14002801c = rax_8 | 0x20;

                    if ((r11 & 0xd0030000) == 0xd0030000 && (rdx_5 & 0xe0) == 0xe0)
                    {
                        data_14002801c |= 0x40;
                        data_140028018 = 6;
                    }
                }
            }
        }
    }

    return 0;
}

int64_t sub_14001f1f0()
{
    int64_t result;
    result = data_140028030;
    return result;
}

enum _EXCEPTION_DISPOSITION __CxxFrameHandler4(struct EHExceptionRecord* pExcept, uint64_t RN, struct _CONTEXT* pContext, struct _xDISPATCHER_CONTEXT* pDC)
{
    /* tailcall */
    return __CxxFrameHandler4(pExcept, RN, pContext, pDC);
}

void _purecall() __noreturn
{
    /* tailcall */
    return _purecall();
}

void __std_terminate() __noreturn
{
    /* tailcall */
    return __std_terminate();
}

enum _EXCEPTION_DISPOSITION __C_specific_handler(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}

void _CxxThrowException(void* pExceptionObject, struct _s__ThrowInfo* pThrowInfo) __noreturn
{
    /* tailcall */
    return _CxxThrowException(pExceptionObject, pThrowInfo);
}

int64_t __current_exception()
{
    /* tailcall */
    return __current_exception();
}

int64_t __current_exception_context()
{
    /* tailcall */
    return __current_exception_context();
}

int64_t memset(void* dest, int32_t c, uint64_t count)
{
    /* tailcall */
    return memset(dest, c, count);
}

void exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return exit(_Except);
}

void free(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

int64_t malloc(uint64_t _Size)
{
    /* tailcall */
    return malloc(_Size);
}

int32_t _callnewh(uint64_t _Size)
{
    /* tailcall */
    return _callnewh(_Size);
}

int32_t _seh_filter_exe(uint32_t _ExceptionNum, struct _EXCEPTION_POINTERS* _ExceptionPtr)
{
    /* tailcall */
    return _seh_filter_exe(_ExceptionNum, _ExceptionPtr);
}

void _set_app_type(enum _crt_app_type _Type)
{
    /* tailcall */
    return _set_app_type(_Type);
}

void __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction)
{
    /* tailcall */
    return __setusermatherr(_UserMathErrorFunction);
}

errno_t _configure_narrow_argv(enum _crt_argv_mode mode)
{
    /* tailcall */
    return _configure_narrow_argv(mode);
}

int32_t _initialize_narrow_environment()
{
    /* tailcall */
    return _initialize_narrow_environment();
}

char** _get_initial_narrow_environment()
{
    /* tailcall */
    return _get_initial_narrow_environment();
}

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

int32_t _initterm_e(_PIFV* _First, _PIFV* _Last)
{
    /* tailcall */
    return _initterm_e(_First, _Last);
}

void _exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return _exit(_Except);
}

errno_t _set_fmode(int32_t _Value)
{
    /* tailcall */
    return _set_fmode(_Value);
}

int32_t* __p___argc()
{
    /* tailcall */
    return __p___argc();
}

char*** __p___argv()
{
    /* tailcall */
    return __p___argv();
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

void _c_exit()
{
    /* tailcall */
    return _c_exit();
}

void _register_thread_local_exe_atexit_callback(_tls_callback_type _Callback)
{
    /* tailcall */
    return _register_thread_local_exe_atexit_callback(_Callback);
}

int32_t _configthreadlocale(int32_t _Flag)
{
    /* tailcall */
    return _configthreadlocale(_Flag);
}

int32_t _set_new_mode(int32_t _NewMode)
{
    /* tailcall */
    return _set_new_mode(_NewMode);
}

int32_t* __p__commode()
{
    /* tailcall */
    return __p__commode();
}

int32_t _initialize_onexit_table(struct _onexit_table_t* _Table)
{
    /* tailcall */
    return _initialize_onexit_table(_Table);
}

int32_t _register_onexit_function(struct _onexit_table_t* _Table, _onexit_t_1 _Function)
{
    /* tailcall */
    return _register_onexit_function(_Table, _Function);
}

int32_t _crt_atexit(_PVFV _Function)
{
    /* tailcall */
    return _crt_atexit(_Function);
}

void terminate() __noreturn
{
    /* tailcall */
    return terminate();
}

BOOL IsProcessorFeaturePresent(enum PROCESSOR_FEATURE_ID ProcessorFeature)
{
    /* tailcall */
    return IsProcessorFeaturePresent(ProcessorFeature);
}

void sub_14001f2e0(int64_t* arg1, int32_t* arg2, int32_t* arg3, int512_t arg4 @ zmm1)
{
    int32_t rdx = *arg3;

    if (rdx > 0)
    {
        _vcomp_for_static_simple_init(0, rdx - 1, 1, 1, &arg_18, &arg_20);
        int64_t r8 = arg_18;
        uint64_t rcx = arg_20;

        if (r8 <= rcx)
        {
            int32_t j = *arg2;
            int64_t rdx_2 = r8;
            arg4 = {0};
            uint64_t i_1 = rcx - r8 + 1;
            uint64_t i;

            do
            {
                r8 = 0;
                rcx = 0;

                if (j > 0)
                {
                    do
                    {
                        int64_t r10_1 = arg1[1];
                        int64_t r9_1 = *arg1;
                        int32_t zmm0_1;

                        if (*(r9_1 + ((rcx * r10_1 + rdx_2) << 2)) <= 0f)
                            zmm0_1 = {0};
                        else
                            zmm0_1 = 0x437f0000;

                        r8 = r8 + 1;
                        int64_t rax_5 = rcx * r10_1;
                        rcx += 1;
                        *(r9_1 + ((rax_5 + rdx_2) << 2)) = zmm0_1;
                        j = *arg2;
                    } while (r8 < j);
                }

                rdx_2 += 1;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }

        _vcomp_for_static_end(rcx, arg4, r8);
    }
}

int64_t __GSHandlerCheck(int64_t arg1, int64_t arg2, int64_t arg3, void* arg4)
{
    __GSHandlerCheckCommon(arg2, arg4, *(arg4 + 0x38));
    return 1;
}

int64_t __GSHandlerCheckCommon(int64_t arg1, void* arg2, int32_t* arg3)
{
    int64_t r9 = arg1;
    int64_t r10 = arg1;

    if (*arg3 & 4)
        r10 = (arg3[1] + arg1) & -(arg3[2]);

    uint64_t rcx_1 = *(*(arg2 + 0x10) + 8);
    int64_t rax_5 = *(arg2 + 8);

    if (*(rcx_1 + rax_5 + 3) & 0xf)
        r9 += *(rcx_1 + rax_5 + 3) & 0xfffffff0;

    /* tailcall */
    return __security_check_cookie(r9 ^ *((*arg3 & 0xfffffff8) + r10));
}

char __GSHandlerCheck_EH4(struct EHExceptionRecord* arg1, uint64_t arg2, struct _CONTEXT* arg3, struct _xDISPATCHER_CONTEXT* arg4)
{
    void* HandlerData = arg4->HandlerData;
    __GSHandlerCheckCommon(arg2, arg4, HandlerData + 4);
    char result = arg1->ExceptionFlags & 0x66;

    if (!(*(HandlerData + 4) & (-(((HandlerData + 4) - (HandlerData + 4))) + 1)))
        return result;

    return __CxxFrameHandler4(arg1, arg2, arg3, arg4);
}

void __chkstk(int64_t arg1 @ rax)
{
    void* r10 = &arg_8 - arg1;

    if (&arg_8 < arg1)
        r10 = nullptr;

    TEB* gsbase;
    void* StackLimit = gsbase->NtTib.StackLimit;

    if (r10 < StackLimit)
    {
        r10 &= 0xf000;

        do
        {
            StackLimit -= 0x1000;
            *StackLimit = 0;
        } while (r10 != StackLimit);
    }
}

int64_t _vcomp_for_static_end()
{
    /* tailcall */
    return _vcomp_for_static_end();
}

int64_t _vcomp_for_static_simple_init()
{
    /* tailcall */
    return _vcomp_for_static_simple_init();
}

int64_t _vcomp_fork()
{
    /* tailcall */
    return _vcomp_fork();
}

int64_t __RTDynamicCast(void* inptr, int32_t VfDelta, void* srcVoid, void* targetVoid, int32_t isReference)
{
    /* tailcall */
    return __RTDynamicCast(inptr, VfDelta, srcVoid, targetVoid, isReference);
}

int32_t memcmp(void const* buffer1, void const* buffer2, uint64_t count)
{
    /* tailcall */
    return memcmp(buffer1, buffer2, count);
}

int64_t memcpy(void* dest, void const* src, uint32_t count)
{
    /* tailcall */
    return memcpy(dest, src, count);
}

int64_t memmove(void* dest, void const* src, uint32_t count)
{
    /* tailcall */
    return memmove(dest, src, count);
}

float powf(float _X, float _Y)
{
    /* tailcall */
    return powf(_X, _Y);
}

float sqrtf(float _X)
{
    /* tailcall */
    return sqrtf(_X);
}

int32_t strcmp(char const* _Str1, char const* _Str2)
{
    /* tailcall */
    return strcmp(_Str1, _Str2);
}

void _guard_dispatch_icall_nop(void (* arg1)())
{
    int64_t rax;
    /* jump -> rax */
}

int64_t sub_14001f590()
{
    int64_t rax;
    /* tailcall */
    return rax();
}

int64_t std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Fput::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400141b0(arg2 + 0x58);
}

int64_t std::num_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getffld::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400141b0(arg2 + 0x58);
}

int64_t Concurrency::details::WorkQueue::Steal::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400141b0(arg2 + 0x40);
}

int64_t Concurrency::propagator_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<uint64_t> >::dtor$0::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return std::exception::~exception(*(arg2 + 0x30));
}

int64_t Concurrency::details::SchedulerBase::ResetDefaultSchedulerPolicy::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x50);
}

int64_t std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Putmfld::dtor$7::dtor$7(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140016790(arg2 + 0x138);
}

int64_t std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld::dtor$4::dtor$4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001bec0(arg2 + 0x80);
}

int64_t Concurrency::details::_ScheduleFuncWithAutoInline::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x50);
}

int64_t std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x80);
}

int64_t sub_14001f61c(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Putmfld::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001bec0(arg2 + 0x80);
}

int64_t sub_14001f634(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t std::money_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Putmfld::dtor$4::dtor$4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t Concurrency::event::wait_for_multiple::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t sub_14001f658(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t sub_14001f664(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t sub_14001f670(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Putmfld::dtor$4::dtor$4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld::dtor$14::dtor$14(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xe0);
}

int64_t std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld::dtor$14::dtor$14(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t Concurrency::task_completion_event<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> >::set::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xa0);
}

int64_t std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Putmfld::dtor$7::dtor$7(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t __ExceptionPtr::_CopyException::dtor$5::dtor$5(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xc0);
}

int64_t std::num_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_get::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001bec0(arg2 + 0x80);
}

int64_t sub_14001f6d0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t sub_14001f6dc(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t sub_14001f6e8(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t sub_14001f6f4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x148);
}

int64_t std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getffldx::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xa0);
}

int64_t std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getmfld::dtor$14::dtor$14(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xc0);
}

int64_t std::basic_ios<char,struct std::char_traits<char> >::init::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t Concurrency::details::_Originator::_send<enum Concurrency::agent_status>::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x20);
}

int64_t std::time_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x60);
}

int64_t sub_14001f744(int64_t arg1, void* arg2)
{
    return sub_14001e5e4(*(arg2 + 0x60));
}

int64_t Concurrency::details::_TaskCollectionBase::_RethrowException::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140016650(*(arg2 + 0x60));
}

int64_t Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::dtor$0::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x60) + 8);
}

int64_t std::locale::name::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x20) & 1;

    if (!result)
        return result;

    *(arg2 + 0x20) &= 0xfffffffe;
    return sub_1400198c0(arg2 + 0x50);
}

int64_t sub_14001f7a6(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x20) & 2;

    if (!result)
        return result;

    *(arg2 + 0x20) &= 0xfffffffd;
    return sub_1400198c0(arg2 + 0x28);
}

int64_t Concurrency::details::_AsyncTaskCollection::_ScheduleWithAutoInline::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400167c0(arg2 + 0x50);
}

int64_t std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Fput::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x30);
}

int64_t sub_14001f7e8(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x20) & 4;

    if (!result)
        return result;

    *(arg2 + 0x20) &= 0xfffffffb;
    return sub_1400198c0(*(arg2 + 0x28));
}

int64_t x7b7936fb::dtor$1::operator[]::_Assign_seh_exception_ptr_from_record::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x20) & 1;

    if (!result)
        return result;

    *(arg2 + 0x20) &= 0xfffffffe;
    return sub_1400198c0(arg2 + 0x28);
}

int64_t Concurrency::details::_JoinAllTokens_Add::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x50);
}

int64_t <lambda_508dc996854572947a45292d62928d80>::operator()::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x28);
}

int64_t Concurrency::task_completion_event<uint8_t>::_CancelInternal::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x50);
}

int64_t Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint64_t> >,class Concurrency::ordered_message_processor<uint64_t> >::link_source::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x28);
}

int64_t std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Fput::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t std::locale::_Locimp::_Locimp_dtor::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t std::basic_filebuf<uint16_t,struct std::char_traits<uint16_t> >::overflow::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x60);
}

int64_t std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t> >::overflow::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x60);
}

int64_t std::basic_ios<uint16_t,struct std::char_traits<uint16_t> >::init::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Iput::dtor$3::dtor$3(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x80);
}

int64_t sub_14001f8c0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400143d0(arg2 + 0x370);
}

int64_t sub_14001f8cc(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1f8);
}

int64_t sub_14001f8d8(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1b0);
}

int64_t sub_14001f8e4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x1d0));
}

int64_t sub_14001f8f0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1f8);
}

int64_t sub_14001f8fc(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1b0);
}

int64_t sub_14001f908(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x1d0));
}

int64_t sub_14001f914(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1f8);
}

int64_t sub_14001f920(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1b0);
}

int64_t sub_14001f92c(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x1d0));
}

int64_t sub_14001f938(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1f8);
}

int64_t std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::_Fput::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t std::basic_ios<wchar_t,struct std::char_traits<wchar_t> >::init::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t sub_14001f95c(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1f8);
}

int64_t sub_14001f968(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x218);
}

int64_t sub_14001f974(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x2f8);
}

int64_t sub_14001f980(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1b0);
}

int64_t Concurrency::details::VirtualProcessor::StealLocalRunnableContext::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t sub_14001f998(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x218);
}

int64_t sub_14001f9a4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x2f8);
}

int64_t sub_14001f9b0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x338);
}

int64_t sub_14001f9bc(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1f8);
}

int64_t std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::do_get::dtor$4::dtor$4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t sub_14001f9d4(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x218);
}

int64_t sub_14001f9e0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x2f8);
}

int64_t sub_14001f9ec(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x338);
}

int64_t sub_14001f9f8(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x318);
}

int64_t std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::do_get::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t sub_14001fa10(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x218);
}

int64_t sub_14001fa1c(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x2f8);
}

int64_t sub_14001fa28(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x338);
}

int64_t sub_14001fa34(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0xc0) & 1;

    if (!result)
        return result;

    *(arg2 + 0xc0) &= 0xfffffffe;
    return std::ios::~ios<char, struct std::char_traits<char> >(arg2 + 0x4f8);
}

int64_t sub_14001fa6b(int64_t arg1, void* arg2)
{
    /* tailcall */
    return std::iostream::~iostream<char, struct std::char_traits<char> >(arg2 + 0x480);
}

int64_t sub_14001fa7d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140018c80(arg2 + 0x460);
}

int64_t sub_14001fa89(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x290);
}

int64_t sub_14001fa95(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140019630(arg2 + 0x250);
}

int64_t sub_14001faa1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140018d80(arg2 + 0x218);
}

int64_t sub_14001faad(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140018d00(arg2 + 0x2c8);
}

int64_t std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::do_get::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t sub_14001fac5(int64_t arg1, void* arg2)
{
    /* tailcall */
    return j_sub_140019bf0(arg2 + 0x2e0);
}

int64_t sub_14001fad1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return j_sub_140019bf0(arg2 + 0x2b0);
}

int64_t std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t> >::_Endwrite::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t sub_14001fae9(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x1d0);
}

int64_t sub_14001faf5(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140018ce0(arg2 + 0x238);
}

int64_t sub_14001fb01(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140018ce0(arg2 + 0x238);
}

int64_t sub_14001fb0d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140018ce0(arg2 + 0x268);
}

int64_t sub_14001fb20(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x38) & 1;

    if (!result)
        return result;

    *(arg2 + 0x38) &= 0xfffffffe;
    return std::ios::~ios<char, struct std::char_traits<char> >(*(arg2 + 0x30) + 0x88);
}

int64_t sub_14001fb4e(int64_t arg1, void* arg2)
{
    *(arg2 + 0x30);
    /* tailcall */
    return std::ostream::~ostream<char, struct std::char_traits<char> >();
}

int64_t Concurrency::details::_Originator::_send<uint64_t>::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001bec0(arg2 + 0x20);
}

int64_t sub_14001fb70(int64_t arg1, void* arg2)
{
    /* tailcall */
    return std::streambuf::~streambuf<char, struct std::char_traits<char> >(*(arg2 + 0x40));
}

int64_t Concurrency::task_completion_event<uint8_t>::set::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140019fa0(arg2 + 0x20);
}

int64_t Concurrency::details::_JoinAllTokens_Add::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140019bb0(arg2 + 0x20);
}

int64_t int `private: void __cdecl std::shared_ptr<class __ExceptionPtr>::_Resetp<class __ExceptionPtr, void (__cdecl *)(class __ExceptionPtr *), class _DebugMallocator<int>>(class __ExceptionPtr *, void (__cdecl *)(class __ExceptionPtr *), class _DebugMallocator<int>)'::`1'::catch$0(int64_t arg1, void* arg2)
{
    arg_10 = arg2;
    int64_t* rdx = *(arg2 + 0x60);
    std::ios::setstate(*(*rdx + 4) + rdx, 4, 1);
    return 0;
}

int64_t Concurrency::single_assignment<uint64_t>::propagate_message::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001bec0(arg2 + 0x20);
}

int64_t Concurrency::source_link_manager<class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> > >::add::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001bec0(arg2 + 0x20);
}

int64_t std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x88);
}

int64_t std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getifld::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::do_put::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x60);
}

int64_t Concurrency::details::_UnrealizedChore::_UnstructuredChoreWrapper::catch$2::catch$2() __pure
{
    int64_t rdx;
    arg_10 = rdx;
    return 0;
}

int64_t std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x60);
}

int64_t std::num_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getffldx::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x40);
}

int64_t std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x80);
}

int64_t Concurrency::agent::cancel::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140019fa0(arg2 + 0x30);
}

int64_t Concurrency::agent::done::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001ce40(arg2 + 0x30);
}

int64_t Concurrency::details::_TaskCollection::_Schedule::catch$0::catch$0(int64_t arg1, void* arg2)
{
    arg_10 = arg2;
    int64_t* rdx = *(arg2 + 0x28);
    std::ios::setstate(*(*rdx + 4) + rdx, 4, 1);
    return 0;
}

int64_t std::_Distance<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > > > >,uint64_t>::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x90));
}

int64_t std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::do_put::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x70);
}

int64_t sub_14001fcf8(int64_t arg1, void* arg2)
{
    return sub_14001e5e4(*(arg2 + 0x68));
}

int64_t int `public: __cdecl std::function<void __cdecl(class Concurrency::message<unsigned __int64> *)>::function<void __cdecl(class Concurrency::message<unsigned __int64> *)><class <lambda_deb3b1cc7f29cfa0f47c69f8f435afdd>>(class <lambda_deb3b1cc7f29cfa0f47c69f8f435afdd> &&)'::`1'::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x20));
}

int64_t Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint64_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint64_t> >,class Concurrency::ordered_message_processor<uint64_t> >::dtor$3::~dtor$3::~dtor$3(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140016650(*(arg2 + 0x68));
}

int64_t sub_14001fd2d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x68) + 8);
}

int64_t sub_14001fd3d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x68) + 0x30);
}

int64_t sub_14001fd4d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x68) + 0x58);
}

int64_t sub_14001fd5d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x68) + 0x78);
}

int64_t ReportError::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x30);
}

int64_t sub_14001fd7c(int64_t arg1, void* arg2)
{
    return sub_14001e5e4(*(arg2 + 0x20));
}

int64_t std::locale::_Locimp::_Makewloc::dtor$58::dtor$58(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140016650(*(arg2 + 0x20));
}

int64_t sub_14001fda5(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x20) + 8);
}

int64_t sub_14001fdb5(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0x20) + 0x30);
}

int64_t std::basic_ostream<uint16_t,struct std::char_traits<uint16_t> >::flush::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x20);
}

int64_t sub_14001fde0(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x20) & 1;

    if (!result)
        return result;

    *(arg2 + 0x20) &= 0xfffffffe;
    return std::ios::~ios<char, struct std::char_traits<char> >(arg2 + 0xd0);
}

int64_t sub_14001fe0e(int64_t arg1, int64_t arg2)
{
    /* tailcall */
    return std::istream::~istream<char, struct std::char_traits<char> >();
}

int64_t std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::do_get_year::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14001ded0(arg2 + 0x40);
}

int64_t sub_14001fe30(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 1;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffffe;
    return sub_1400198c0(arg2 + 0xa8);
}

int64_t sub_14001fe59(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400167c0(arg2 + 0x150);
}

int64_t sub_14001fe65(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 0x200;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffdff;
    return sub_1400198c0(arg2 + 0x48);
}

int64_t sub_14001fe90(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 2;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffffd;
    return sub_1400198c0(arg2 + 0x48);
}

int64_t sub_14001feb6(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 4;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffffb;
    return sub_1400198c0(arg2 + 0x68);
}

int64_t sub_14001fedc(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 8;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffff7;
    return sub_1400198c0(arg2 + 0xe8);
}

int64_t Concurrency::details::_Micro_queue::_Push::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xc8);
}

int64_t std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x130);
}

int64_t sub_14001ff1d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t boost::math::policies::detail::raise_error<class std::domain_error,long double>::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x88);
}

int64_t sub_14001ff40(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 1;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffffe;
    return sub_1400198c0(arg2 + 0xd0);
}

int64_t std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Putmfld::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(*(arg2 + 0xa8));
}

int64_t sub_14001ff75(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 2;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffffd;
    return sub_1400198c0(arg2 + 0x88);
}

int64_t sub_14001ff9e(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 4;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffffb;
    return sub_1400198c0(arg2 + 0x48);
}

int64_t sub_14001ffc4(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x40) & 8;

    if (!result)
        return result;

    *(arg2 + 0x40) &= 0xfffffff7;
    return sub_1400198c0(arg2 + 0xf0);
}

int64_t std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld::dtor$15::dtor$15(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0xb0);
}

int64_t std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x130);
}

int64_t sub_140020005(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x110);
}

int64_t std::use_facet<class std::codecvt<wchar_t,char,int32_t> >::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400198c0(arg2 + 0x68);
}

int64_t thread_start<uint32_t (__cdecl*)(void* __ptr64)>::filt$0::filt$0(int64_t* arg1)
{
    return _seh_filter_exe(**arg1, arg1);
}

uint64_t __scrt_is_nonwritable_in_current_image$filt$0(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}


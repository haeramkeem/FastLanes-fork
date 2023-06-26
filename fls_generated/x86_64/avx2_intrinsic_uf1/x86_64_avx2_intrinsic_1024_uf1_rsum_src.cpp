#include "fls_gen/rsum/rsum.hpp"
#include "fls_gen/macros.hpp"
#include <immintrin.h>
#define _mm128 _mm
#define _mm_set1_epi64 _mm_set1_epi64x
#define _mm256_set1_epi64 _mm256_set1_epi64x
namespace generated
{
	namespace rsum::x86_64
	{
		namespace avx2
		{
			void rsum(const uint8_t *__restrict a_in_p, uint8_t* __restrict a_out_p, const uint8_t* __restrict a_base_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<__m256i *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const __m256i *>(a_in_p);
				[[maybe_unused]] const auto base = reinterpret_cast<const __m256i *>(a_base_p);
				[[maybe_unused]] __m256i register_0;
				[[maybe_unused]] __m256i tmp_0;
				[[maybe_unused]] __m256i base_0;
				for(int i = 0; i < 4; ++i)
				{
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 0);
					tmp_0 = _mm256_loadu_si256(base + (0 * 2) + (i * 1));
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 0, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 4);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 4, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 8);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 8, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 12);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 12, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 16);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 16, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 20);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 20, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 24);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 24, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 28);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 28, tmp_0);
				}
			}
			void rsum(const uint16_t *__restrict a_in_p, uint16_t* __restrict a_out_p, const uint16_t* __restrict a_base_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<__m256i *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const __m256i *>(a_in_p);
				[[maybe_unused]] const auto base = reinterpret_cast<const __m256i *>(a_base_p);
				[[maybe_unused]] __m256i register_0;
				[[maybe_unused]] __m256i tmp_0;
				[[maybe_unused]] __m256i base_0;
				for(int i = 0; i < 4; ++i)
				{
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 0);
					tmp_0 = _mm256_loadu_si256(base + (0 * 2) + (i * 1));
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 0, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 8);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 8, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 16);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 16, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 24);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 24, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 32);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 32, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 40);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 40, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 48);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 48, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 56);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 56, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 4);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 4, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 12);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 12, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 20);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 20, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 28);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 28, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 36);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 36, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 44);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 44, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 52);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 52, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 60);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 60, tmp_0);
				}
			}
			void rsum(const uint32_t *__restrict a_in_p, uint32_t* __restrict a_out_p, const uint32_t* __restrict a_base_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<__m256i *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const __m256i *>(a_in_p);
				[[maybe_unused]] const auto base = reinterpret_cast<const __m256i *>(a_base_p);
				[[maybe_unused]] __m256i register_0;
				[[maybe_unused]] __m256i tmp_0;
				[[maybe_unused]] __m256i base_0;
				for(int i = 0; i < 4; ++i)
				{
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 0);
					tmp_0 = _mm256_loadu_si256(base + (0 * 2) + (i * 1));
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 0, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 16);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 16, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 32);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 32, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 48);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 48, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 64);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 64, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 80);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 80, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 96);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 96, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 112);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 112, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 8);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 8, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 24);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 24, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 40);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 40, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 56);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 56, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 72);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 72, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 88);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 88, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 104);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 104, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 120);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 120, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 4);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 4, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 20);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 20, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 36);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 36, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 52);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 52, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 68);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 68, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 84);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 84, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 100);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 100, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 116);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 116, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 12);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 12, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 28);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 28, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 44);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 44, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 60);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 60, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 76);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 76, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 92);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 92, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 108);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 108, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 124);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 124, tmp_0);
				}
			}
			void rsum(const uint64_t *__restrict a_in_p, uint64_t* __restrict a_out_p, const uint64_t* __restrict a_base_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<__m256i *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const __m256i *>(a_in_p);
				[[maybe_unused]] const auto base = reinterpret_cast<const __m256i *>(a_base_p);
				[[maybe_unused]] __m256i register_0;
				[[maybe_unused]] __m256i tmp_0;
				[[maybe_unused]] __m256i base_0;
				for(int i = 0; i < 4; ++i)
				{
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 0);
					tmp_0 = _mm256_loadu_si256(base + (0 * 2) + (i * 1));
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 0, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 32);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 32, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 64);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 64, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 96);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 96, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 128);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 128, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 160);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 160, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 192);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 192, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 224);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 224, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 16);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 16, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 48);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 48, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 80);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 80, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 112);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 112, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 144);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 144, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 176);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 176, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 208);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 208, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 240);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 240, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 8);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 8, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 40);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 40, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 72);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 72, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 104);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 104, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 136);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 136, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 168);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 168, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 200);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 200, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 232);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 232, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 24);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 24, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 56);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 56, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 88);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 88, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 120);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 120, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 152);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 152, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 184);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 184, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 216);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 216, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 248);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 248, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 4);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 4, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 36);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 36, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 68);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 68, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 100);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 100, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 132);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 132, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 164);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 164, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 196);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 196, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 228);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 228, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 20);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 20, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 52);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 52, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 84);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 84, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 116);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 116, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 148);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 148, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 180);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 180, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 212);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 212, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 244);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 244, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 12);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 12, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 44);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 44, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 76);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 76, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 108);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 108, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 140);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 140, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 172);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 172, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 204);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 204, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 236);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 236, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 28);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 28, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 60);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 60, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 92);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 92, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 124);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 124, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 156);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 156, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 188);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 188, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 220);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 220, tmp_0);
					register_0 = _mm256_loadu_si256(in + (0 * 2) + (i * 1) + 252);
					tmp_0 = tmp_0 + register_0;
					_mm256_storeu_si256(out + (i * 1) + (0 * 2) + 252, tmp_0);
				}
			}
		}
	}
}

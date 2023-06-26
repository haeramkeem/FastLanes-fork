#include "fls_gen/unrsum/unrsum.hpp"
#include "fls_gen/macros.hpp"
namespace generated
{
	namespace unrsum::helper
	{
		namespace scalar
		{
			void unrsum(const uint8_t* a_in_p, uint8_t*  a_out_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<uint8_t *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const uint8_t *>(a_in_p);
				[[maybe_unused]] uint8_t register_0_0;
				[[maybe_unused]] uint8_t register_0_1;
				[[maybe_unused]] uint8_t tmp_0;
				for(int i = 0; i < 128; ++i)
				{
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 0)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 1)];
					out[(0 * 128) + (i * 1) + (128 * 0)] = 0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 1)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 2)];
					out[(i * 1) + (0 * 128) + (128 * 1)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 2)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 3)];
					out[(i * 1) + (0 * 128) + (128 * 2)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 3)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 4)];
					out[(i * 1) + (0 * 128) + (128 * 3)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 4)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 5)];
					out[(i * 1) + (0 * 128) + (128 * 4)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 5)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 6)];
					out[(i * 1) + (0 * 128) + (128 * 5)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 6)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 7)];
					out[(i * 1) + (0 * 128) + (128 * 6)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 128) + (i * 1) + (128 * 7)];
					register_0_1 = in[(0 * 128) + (i * 1) + (128 * 8)];
					out[(i * 1) + (0 * 128) + (128 * 7)] = tmp_0;
				}
			}
			void unrsum_inplace(uint8_t* a_in_p)
			{
				unrsum(const_cast<const uint8_t *>(a_in_p), a_in_p);
			}
			void unrsum(const uint16_t* a_in_p, uint16_t*  a_out_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<uint16_t *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const uint16_t *>(a_in_p);
				[[maybe_unused]] uint16_t register_0_0;
				[[maybe_unused]] uint16_t register_0_1;
				[[maybe_unused]] uint16_t tmp_0;
				for(int i = 0; i < 64; ++i)
				{
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 0)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 1)];
					out[(0 * 64) + (i * 1) + (128 * 0)] = 0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 1)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 2)];
					out[(i * 1) + (0 * 64) + (128 * 1)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 2)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 3)];
					out[(i * 1) + (0 * 64) + (128 * 2)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 3)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 4)];
					out[(i * 1) + (0 * 64) + (128 * 3)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 4)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 5)];
					out[(i * 1) + (0 * 64) + (128 * 4)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 5)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 6)];
					out[(i * 1) + (0 * 64) + (128 * 5)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 6)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 7)];
					out[(i * 1) + (0 * 64) + (128 * 6)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 64) + (i * 1) + (128 * 7)];
					register_0_1 = in[(0 * 64) + (i * 1) + (128 * 8)];
					out[(i * 1) + (0 * 64) + (128 * 7)] = tmp_0;
					register_0_1 = in[64 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 0) + i];
					a_out_p[64 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 1) + i];
					a_out_p[64 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 2) + i];
					a_out_p[64 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 3) + i];
					a_out_p[64 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 4) + i];
					a_out_p[64 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 5) + i];
					a_out_p[64 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 6) + i];
					a_out_p[64 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 7) + i];
					a_out_p[64 + (128 * 7) + i] = tmp_0;
				}
			}
			void unrsum_inplace(uint16_t* a_in_p)
			{
				unrsum(const_cast<const uint16_t *>(a_in_p), a_in_p);
			}
			void unrsum(const uint32_t* a_in_p, uint32_t*  a_out_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<uint32_t *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const uint32_t *>(a_in_p);
				[[maybe_unused]] uint32_t register_0_0;
				[[maybe_unused]] uint32_t register_0_1;
				[[maybe_unused]] uint32_t tmp_0;
				for(int i = 0; i < 32; ++i)
				{
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 0)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 1)];
					out[(0 * 32) + (i * 1) + (128 * 0)] = 0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 1)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 2)];
					out[(i * 1) + (0 * 32) + (128 * 1)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 2)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 3)];
					out[(i * 1) + (0 * 32) + (128 * 2)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 3)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 4)];
					out[(i * 1) + (0 * 32) + (128 * 3)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 4)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 5)];
					out[(i * 1) + (0 * 32) + (128 * 4)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 5)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 6)];
					out[(i * 1) + (0 * 32) + (128 * 5)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 6)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 7)];
					out[(i * 1) + (0 * 32) + (128 * 6)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 32) + (i * 1) + (128 * 7)];
					register_0_1 = in[(0 * 32) + (i * 1) + (128 * 8)];
					out[(i * 1) + (0 * 32) + (128 * 7)] = tmp_0;
					register_0_1 = in[64 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 0) + i];
					a_out_p[64 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 1) + i];
					a_out_p[64 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 2) + i];
					a_out_p[64 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 3) + i];
					a_out_p[64 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 4) + i];
					a_out_p[64 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 5) + i];
					a_out_p[64 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 6) + i];
					a_out_p[64 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 7) + i];
					a_out_p[64 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 0) + i];
					a_out_p[32 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 1) + i];
					a_out_p[32 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 2) + i];
					a_out_p[32 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 3) + i];
					a_out_p[32 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 4) + i];
					a_out_p[32 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 5) + i];
					a_out_p[32 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 6) + i];
					a_out_p[32 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 7) + i];
					a_out_p[32 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 0) + i];
					a_out_p[96 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 1) + i];
					a_out_p[96 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 2) + i];
					a_out_p[96 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 3) + i];
					a_out_p[96 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 4) + i];
					a_out_p[96 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 5) + i];
					a_out_p[96 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 6) + i];
					a_out_p[96 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 7) + i];
					a_out_p[96 + (128 * 7) + i] = tmp_0;
				}
			}
			void unrsum_inplace(uint32_t* a_in_p)
			{
				unrsum(const_cast<const uint32_t *>(a_in_p), a_in_p);
			}
			void unrsum(const uint64_t* a_in_p, uint64_t*  a_out_p)
			{
				[[maybe_unused]] auto out = reinterpret_cast<uint64_t *>(a_out_p);
				[[maybe_unused]] const auto in = reinterpret_cast<const uint64_t *>(a_in_p);
				[[maybe_unused]] uint64_t register_0_0;
				[[maybe_unused]] uint64_t register_0_1;
				[[maybe_unused]] uint64_t tmp_0;
				for(int i = 0; i < 16; ++i)
				{
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 0)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 1)];
					out[(0 * 16) + (i * 1) + (128 * 0)] = 0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 1)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 2)];
					out[(i * 1) + (0 * 16) + (128 * 1)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 2)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 3)];
					out[(i * 1) + (0 * 16) + (128 * 2)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 3)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 4)];
					out[(i * 1) + (0 * 16) + (128 * 3)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 4)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 5)];
					out[(i * 1) + (0 * 16) + (128 * 4)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 5)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 6)];
					out[(i * 1) + (0 * 16) + (128 * 5)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 6)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 7)];
					out[(i * 1) + (0 * 16) + (128 * 6)] = tmp_0;
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[(0 * 16) + (i * 1) + (128 * 7)];
					register_0_1 = in[(0 * 16) + (i * 1) + (128 * 8)];
					out[(i * 1) + (0 * 16) + (128 * 7)] = tmp_0;
					register_0_1 = in[64 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 0) + i];
					a_out_p[64 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 1) + i];
					a_out_p[64 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 2) + i];
					a_out_p[64 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 3) + i];
					a_out_p[64 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 4) + i];
					a_out_p[64 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 5) + i];
					a_out_p[64 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 6) + i];
					a_out_p[64 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[64 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[64 + (128 * 7) + i];
					a_out_p[64 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 0) + i];
					a_out_p[32 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 1) + i];
					a_out_p[32 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 2) + i];
					a_out_p[32 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 3) + i];
					a_out_p[32 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 4) + i];
					a_out_p[32 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 5) + i];
					a_out_p[32 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 6) + i];
					a_out_p[32 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[32 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[32 + (128 * 7) + i];
					a_out_p[32 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 0) + i];
					a_out_p[96 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 1) + i];
					a_out_p[96 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 2) + i];
					a_out_p[96 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 3) + i];
					a_out_p[96 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 4) + i];
					a_out_p[96 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 5) + i];
					a_out_p[96 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 6) + i];
					a_out_p[96 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[96 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[96 + (128 * 7) + i];
					a_out_p[96 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 0) + i];
					a_out_p[16 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 1) + i];
					a_out_p[16 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 2) + i];
					a_out_p[16 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 3) + i];
					a_out_p[16 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 4) + i];
					a_out_p[16 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 5) + i];
					a_out_p[16 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 6) + i];
					a_out_p[16 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[16 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[16 + (128 * 7) + i];
					a_out_p[16 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 0) + i];
					a_out_p[80 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 1) + i];
					a_out_p[80 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 2) + i];
					a_out_p[80 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 3) + i];
					a_out_p[80 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 4) + i];
					a_out_p[80 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 5) + i];
					a_out_p[80 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 6) + i];
					a_out_p[80 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[80 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[80 + (128 * 7) + i];
					a_out_p[80 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 0) + i];
					a_out_p[48 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 1) + i];
					a_out_p[48 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 2) + i];
					a_out_p[48 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 3) + i];
					a_out_p[48 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 4) + i];
					a_out_p[48 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 5) + i];
					a_out_p[48 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 6) + i];
					a_out_p[48 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[48 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[48 + (128 * 7) + i];
					a_out_p[48 + (128 * 7) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 0) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 0) + i];
					a_out_p[112 + (128 * 0) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 1) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 1) + i];
					a_out_p[112 + (128 * 1) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 2) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 2) + i];
					a_out_p[112 + (128 * 2) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 3) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 3) + i];
					a_out_p[112 + (128 * 3) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 4) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 4) + i];
					a_out_p[112 + (128 * 4) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 5) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 5) + i];
					a_out_p[112 + (128 * 5) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 6) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 6) + i];
					a_out_p[112 + (128 * 6) + i] = tmp_0;
					register_0_1 = in[112 + (128 * 7) + i];
					tmp_0 =  register_0_1 - register_0_0;
					register_0_0 = in[112 + (128 * 7) + i];
					a_out_p[112 + (128 * 7) + i] = tmp_0;
				}
			}
			void unrsum_inplace(uint64_t* a_in_p)
			{
				unrsum(const_cast<const uint64_t *>(a_in_p), a_in_p);
			}
		}
	}
}

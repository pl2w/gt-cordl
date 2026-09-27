#pragma once
// IWYU pragma private; include "GlobalNamespace/m4x4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__m4x4__data_f_e__FixedBuffer_def.hpp"
#include "GlobalNamespace/zzzz__m4x4__data_h_e__FixedBuffer_def.hpp"
#include "GlobalNamespace/zzzz__m4x4__data_i_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(m4x4)
namespace GlobalNamespace {
struct m4x4__data_f_e__FixedBuffer;
}
namespace GlobalNamespace {
struct m4x4__data_h_e__FixedBuffer;
}
namespace GlobalNamespace {
struct m4x4__data_i_e__FixedBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct m4x4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::m4x4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::m4x4, "", "m4x4");
// Dependencies UnityEngine.Vector4, m4x4::<data_f>e__FixedBuffer, m4x4::<data_h>e__FixedBuffer, m4x4::<data_i>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: m4x4
#pragma pack(push, 0)
struct CORDL_TYPE m4x4 {
public:
// Declarations
using _data_f_e__FixedBuffer = ::GlobalNamespace::m4x4__data_f_e__FixedBuffer;

using _data_h_e__FixedBuffer = ::GlobalNamespace::m4x4__data_h_e__FixedBuffer;

using _data_i_e__FixedBuffer = ::GlobalNamespace::m4x4__data_i_e__FixedBuffer;

/// @brief Field data_f, offset 0x0, size 0x40 
 __declspec(property(get=__cordl_internal_get_data_f, put=__cordl_internal_set_data_f)) ::GlobalNamespace::m4x4__data_f_e__FixedBuffer  data_f;

/// @brief Field data_h, offset 0x0, size 0x40 
 __declspec(property(get=__cordl_internal_get_data_h, put=__cordl_internal_set_data_h)) ::GlobalNamespace::m4x4__data_h_e__FixedBuffer  data_h;

/// @brief Field data_i, offset 0x0, size 0x40 
 __declspec(property(get=__cordl_internal_get_data_i, put=__cordl_internal_set_data_i)) ::GlobalNamespace::m4x4__data_i_e__FixedBuffer  data_i;

/// @brief Field h00_a, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_h00_a, put=__cordl_internal_set_h00_a)) uint16_t  h00_a;

/// @brief Field h00_b, offset 0x2, size 0x2 
 __declspec(property(get=__cordl_internal_get_h00_b, put=__cordl_internal_set_h00_b)) uint16_t  h00_b;

/// @brief Field h01_a, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_h01_a, put=__cordl_internal_set_h01_a)) uint16_t  h01_a;

/// @brief Field h01_b, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_h01_b, put=__cordl_internal_set_h01_b)) uint16_t  h01_b;

/// @brief Field h02_a, offset 0x8, size 0x2 
 __declspec(property(get=__cordl_internal_get_h02_a, put=__cordl_internal_set_h02_a)) uint16_t  h02_a;

/// @brief Field h02_b, offset 0xa, size 0x2 
 __declspec(property(get=__cordl_internal_get_h02_b, put=__cordl_internal_set_h02_b)) uint16_t  h02_b;

/// @brief Field h03_a, offset 0xc, size 0x2 
 __declspec(property(get=__cordl_internal_get_h03_a, put=__cordl_internal_set_h03_a)) uint16_t  h03_a;

/// @brief Field h03_b, offset 0xe, size 0x2 
 __declspec(property(get=__cordl_internal_get_h03_b, put=__cordl_internal_set_h03_b)) uint16_t  h03_b;

/// @brief Field h10_a, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_h10_a, put=__cordl_internal_set_h10_a)) uint16_t  h10_a;

/// @brief Field h10_b, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get_h10_b, put=__cordl_internal_set_h10_b)) uint16_t  h10_b;

/// @brief Field h11_a, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get_h11_a, put=__cordl_internal_set_h11_a)) uint16_t  h11_a;

/// @brief Field h11_b, offset 0x16, size 0x2 
 __declspec(property(get=__cordl_internal_get_h11_b, put=__cordl_internal_set_h11_b)) uint16_t  h11_b;

/// @brief Field h12_a, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get_h12_a, put=__cordl_internal_set_h12_a)) uint16_t  h12_a;

/// @brief Field h12_b, offset 0x1a, size 0x2 
 __declspec(property(get=__cordl_internal_get_h12_b, put=__cordl_internal_set_h12_b)) uint16_t  h12_b;

/// @brief Field h13_a, offset 0x1c, size 0x2 
 __declspec(property(get=__cordl_internal_get_h13_a, put=__cordl_internal_set_h13_a)) uint16_t  h13_a;

/// @brief Field h13_b, offset 0x1e, size 0x2 
 __declspec(property(get=__cordl_internal_get_h13_b, put=__cordl_internal_set_h13_b)) uint16_t  h13_b;

/// @brief Field h20_a, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get_h20_a, put=__cordl_internal_set_h20_a)) uint16_t  h20_a;

/// @brief Field h20_b, offset 0x22, size 0x2 
 __declspec(property(get=__cordl_internal_get_h20_b, put=__cordl_internal_set_h20_b)) uint16_t  h20_b;

/// @brief Field h21_a, offset 0x24, size 0x2 
 __declspec(property(get=__cordl_internal_get_h21_a, put=__cordl_internal_set_h21_a)) uint16_t  h21_a;

/// @brief Field h21_b, offset 0x26, size 0x2 
 __declspec(property(get=__cordl_internal_get_h21_b, put=__cordl_internal_set_h21_b)) uint16_t  h21_b;

/// @brief Field h22_a, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get_h22_a, put=__cordl_internal_set_h22_a)) uint16_t  h22_a;

/// @brief Field h22_b, offset 0x2a, size 0x2 
 __declspec(property(get=__cordl_internal_get_h22_b, put=__cordl_internal_set_h22_b)) uint16_t  h22_b;

/// @brief Field h23_a, offset 0x2c, size 0x2 
 __declspec(property(get=__cordl_internal_get_h23_a, put=__cordl_internal_set_h23_a)) uint16_t  h23_a;

/// @brief Field h23_b, offset 0x2e, size 0x2 
 __declspec(property(get=__cordl_internal_get_h23_b, put=__cordl_internal_set_h23_b)) uint16_t  h23_b;

/// @brief Field h30_a, offset 0x30, size 0x2 
 __declspec(property(get=__cordl_internal_get_h30_a, put=__cordl_internal_set_h30_a)) uint16_t  h30_a;

/// @brief Field h30_b, offset 0x32, size 0x2 
 __declspec(property(get=__cordl_internal_get_h30_b, put=__cordl_internal_set_h30_b)) uint16_t  h30_b;

/// @brief Field h31_a, offset 0x34, size 0x2 
 __declspec(property(get=__cordl_internal_get_h31_a, put=__cordl_internal_set_h31_a)) uint16_t  h31_a;

/// @brief Field h31_b, offset 0x36, size 0x2 
 __declspec(property(get=__cordl_internal_get_h31_b, put=__cordl_internal_set_h31_b)) uint16_t  h31_b;

/// @brief Field h32_a, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get_h32_a, put=__cordl_internal_set_h32_a)) uint16_t  h32_a;

/// @brief Field h32_b, offset 0x3a, size 0x2 
 __declspec(property(get=__cordl_internal_get_h32_b, put=__cordl_internal_set_h32_b)) uint16_t  h32_b;

/// @brief Field h33_a, offset 0x3c, size 0x2 
 __declspec(property(get=__cordl_internal_get_h33_a, put=__cordl_internal_set_h33_a)) uint16_t  h33_a;

/// @brief Field h33_b, offset 0x3e, size 0x2 
 __declspec(property(get=__cordl_internal_get_h33_b, put=__cordl_internal_set_h33_b)) uint16_t  h33_b;

/// @brief Field i00, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_i00, put=__cordl_internal_set_i00)) int32_t  i00;

/// @brief Field i01, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_i01, put=__cordl_internal_set_i01)) int32_t  i01;

/// @brief Field i02, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_i02, put=__cordl_internal_set_i02)) int32_t  i02;

/// @brief Field i03, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_i03, put=__cordl_internal_set_i03)) int32_t  i03;

/// @brief Field i10, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_i10, put=__cordl_internal_set_i10)) int32_t  i10;

/// @brief Field i11, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_i11, put=__cordl_internal_set_i11)) int32_t  i11;

/// @brief Field i12, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_i12, put=__cordl_internal_set_i12)) int32_t  i12;

/// @brief Field i13, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_i13, put=__cordl_internal_set_i13)) int32_t  i13;

/// @brief Field i20, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_i20, put=__cordl_internal_set_i20)) int32_t  i20;

/// @brief Field i21, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_i21, put=__cordl_internal_set_i21)) int32_t  i21;

/// @brief Field i22, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_i22, put=__cordl_internal_set_i22)) int32_t  i22;

/// @brief Field i23, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_i23, put=__cordl_internal_set_i23)) int32_t  i23;

/// @brief Field i30, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_i30, put=__cordl_internal_set_i30)) int32_t  i30;

/// @brief Field i31, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_i31, put=__cordl_internal_set_i31)) int32_t  i31;

/// @brief Field i32, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_i32, put=__cordl_internal_set_i32)) int32_t  i32;

/// @brief Field i33, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_i33, put=__cordl_internal_set_i33)) int32_t  i33;

/// @brief Field m00, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m00, put=__cordl_internal_set_m00)) float_t  m00;

/// @brief Field m01, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m01, put=__cordl_internal_set_m01)) float_t  m01;

/// @brief Field m02, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m02, put=__cordl_internal_set_m02)) float_t  m02;

/// @brief Field m03, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m03, put=__cordl_internal_set_m03)) float_t  m03;

/// @brief Field m10, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m10, put=__cordl_internal_set_m10)) float_t  m10;

/// @brief Field m11, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m11, put=__cordl_internal_set_m11)) float_t  m11;

/// @brief Field m12, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m12, put=__cordl_internal_set_m12)) float_t  m12;

/// @brief Field m13, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m13, put=__cordl_internal_set_m13)) float_t  m13;

/// @brief Field m20, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m20, put=__cordl_internal_set_m20)) float_t  m20;

/// @brief Field m21, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m21, put=__cordl_internal_set_m21)) float_t  m21;

/// @brief Field m22, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m22, put=__cordl_internal_set_m22)) float_t  m22;

/// @brief Field m23, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m23, put=__cordl_internal_set_m23)) float_t  m23;

/// @brief Field m30, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m30, put=__cordl_internal_set_m30)) float_t  m30;

/// @brief Field m31, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m31, put=__cordl_internal_set_m31)) float_t  m31;

/// @brief Field m32, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m32, put=__cordl_internal_set_m32)) float_t  m32;

/// @brief Field m33, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m33, put=__cordl_internal_set_m33)) float_t  m33;

/// @brief Field r0, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_r0, put=__cordl_internal_set_r0)) ::UnityEngine::Vector4  r0;

/// @brief Field r1, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_r1, put=__cordl_internal_set_r1)) ::UnityEngine::Vector4  r1;

/// @brief Field r2, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_r2, put=__cordl_internal_set_r2)) ::UnityEngine::Vector4  r2;

/// @brief Field r3, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_r3, put=__cordl_internal_set_r3)) ::UnityEngine::Vector4  r3;

/// @brief Method Clear, addr 0x5a1d88c, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method From, addr 0x5a1dc1c, size 0x4, virtual false, abstract: false, final false
static inline ::by_ref<::GlobalNamespace::m4x4> From(::by_ref<::UnityEngine::Matrix4x4>  src) ;

/// @brief Method Push, addr 0x5a1db14, size 0x84, virtual false, abstract: false, final false
inline void Push(::by_ref<::UnityEngine::Matrix4x4>  x) ;

/// @brief Method PushTransposed, addr 0x5a1db98, size 0x84, virtual false, abstract: false, final false
inline void PushTransposed(::by_ref<::UnityEngine::Matrix4x4>  x) ;

/// @brief Method Set, addr 0x5a1d964, size 0x24, virtual false, abstract: false, final false
inline void Set(::by_ref<::UnityEngine::Vector4>  row0, ::by_ref<::UnityEngine::Vector4>  row1, ::by_ref<::UnityEngine::Vector4>  row2, ::by_ref<::UnityEngine::Vector4>  row3) ;

/// @brief Method Set, addr 0x5a1da0c, size 0x84, virtual false, abstract: false, final false
inline void Set(::by_ref<::UnityEngine::Matrix4x4>  x) ;

/// @brief Method SetRow0, addr 0x5a1d89c, size 0x24, virtual false, abstract: false, final false
inline void SetRow0(::by_ref<::UnityEngine::Vector4>  v) ;

/// @brief Method SetRow1, addr 0x5a1d8c0, size 0x24, virtual false, abstract: false, final false
inline void SetRow1(::by_ref<::UnityEngine::Vector4>  v) ;

/// @brief Method SetRow2, addr 0x5a1d8e4, size 0x24, virtual false, abstract: false, final false
inline void SetRow2(::by_ref<::UnityEngine::Vector4>  v) ;

/// @brief Method SetRow3, addr 0x5a1d908, size 0x24, virtual false, abstract: false, final false
inline void SetRow3(::by_ref<::UnityEngine::Vector4>  v) ;

/// @brief Method SetTransposed, addr 0x5a1d988, size 0x84, virtual false, abstract: false, final false
inline void SetTransposed(::by_ref<::UnityEngine::Vector4>  row0, ::by_ref<::UnityEngine::Vector4>  row1, ::by_ref<::UnityEngine::Vector4>  row2, ::by_ref<::UnityEngine::Vector4>  row3) ;

/// @brief Method SetTransposed, addr 0x5a1da90, size 0x84, virtual false, abstract: false, final false
inline void SetTransposed(::by_ref<::UnityEngine::Matrix4x4>  x) ;

/// @brief Method Transpose, addr 0x5a1d92c, size 0x38, virtual false, abstract: false, final false
inline void Transpose() ;

constexpr ::GlobalNamespace::m4x4__data_f_e__FixedBuffer const& __cordl_internal_get_data_f() const;

constexpr ::GlobalNamespace::m4x4__data_f_e__FixedBuffer& __cordl_internal_get_data_f() ;

constexpr ::GlobalNamespace::m4x4__data_h_e__FixedBuffer const& __cordl_internal_get_data_h() const;

constexpr ::GlobalNamespace::m4x4__data_h_e__FixedBuffer& __cordl_internal_get_data_h() ;

constexpr ::GlobalNamespace::m4x4__data_i_e__FixedBuffer const& __cordl_internal_get_data_i() const;

constexpr ::GlobalNamespace::m4x4__data_i_e__FixedBuffer& __cordl_internal_get_data_i() ;

constexpr uint16_t const& __cordl_internal_get_h00_a() const;

constexpr uint16_t& __cordl_internal_get_h00_a() ;

constexpr uint16_t const& __cordl_internal_get_h00_b() const;

constexpr uint16_t& __cordl_internal_get_h00_b() ;

constexpr uint16_t const& __cordl_internal_get_h01_a() const;

constexpr uint16_t& __cordl_internal_get_h01_a() ;

constexpr uint16_t const& __cordl_internal_get_h01_b() const;

constexpr uint16_t& __cordl_internal_get_h01_b() ;

constexpr uint16_t const& __cordl_internal_get_h02_a() const;

constexpr uint16_t& __cordl_internal_get_h02_a() ;

constexpr uint16_t const& __cordl_internal_get_h02_b() const;

constexpr uint16_t& __cordl_internal_get_h02_b() ;

constexpr uint16_t const& __cordl_internal_get_h03_a() const;

constexpr uint16_t& __cordl_internal_get_h03_a() ;

constexpr uint16_t const& __cordl_internal_get_h03_b() const;

constexpr uint16_t& __cordl_internal_get_h03_b() ;

constexpr uint16_t const& __cordl_internal_get_h10_a() const;

constexpr uint16_t& __cordl_internal_get_h10_a() ;

constexpr uint16_t const& __cordl_internal_get_h10_b() const;

constexpr uint16_t& __cordl_internal_get_h10_b() ;

constexpr uint16_t const& __cordl_internal_get_h11_a() const;

constexpr uint16_t& __cordl_internal_get_h11_a() ;

constexpr uint16_t const& __cordl_internal_get_h11_b() const;

constexpr uint16_t& __cordl_internal_get_h11_b() ;

constexpr uint16_t const& __cordl_internal_get_h12_a() const;

constexpr uint16_t& __cordl_internal_get_h12_a() ;

constexpr uint16_t const& __cordl_internal_get_h12_b() const;

constexpr uint16_t& __cordl_internal_get_h12_b() ;

constexpr uint16_t const& __cordl_internal_get_h13_a() const;

constexpr uint16_t& __cordl_internal_get_h13_a() ;

constexpr uint16_t const& __cordl_internal_get_h13_b() const;

constexpr uint16_t& __cordl_internal_get_h13_b() ;

constexpr uint16_t const& __cordl_internal_get_h20_a() const;

constexpr uint16_t& __cordl_internal_get_h20_a() ;

constexpr uint16_t const& __cordl_internal_get_h20_b() const;

constexpr uint16_t& __cordl_internal_get_h20_b() ;

constexpr uint16_t const& __cordl_internal_get_h21_a() const;

constexpr uint16_t& __cordl_internal_get_h21_a() ;

constexpr uint16_t const& __cordl_internal_get_h21_b() const;

constexpr uint16_t& __cordl_internal_get_h21_b() ;

constexpr uint16_t const& __cordl_internal_get_h22_a() const;

constexpr uint16_t& __cordl_internal_get_h22_a() ;

constexpr uint16_t const& __cordl_internal_get_h22_b() const;

constexpr uint16_t& __cordl_internal_get_h22_b() ;

constexpr uint16_t const& __cordl_internal_get_h23_a() const;

constexpr uint16_t& __cordl_internal_get_h23_a() ;

constexpr uint16_t const& __cordl_internal_get_h23_b() const;

constexpr uint16_t& __cordl_internal_get_h23_b() ;

constexpr uint16_t const& __cordl_internal_get_h30_a() const;

constexpr uint16_t& __cordl_internal_get_h30_a() ;

constexpr uint16_t const& __cordl_internal_get_h30_b() const;

constexpr uint16_t& __cordl_internal_get_h30_b() ;

constexpr uint16_t const& __cordl_internal_get_h31_a() const;

constexpr uint16_t& __cordl_internal_get_h31_a() ;

constexpr uint16_t const& __cordl_internal_get_h31_b() const;

constexpr uint16_t& __cordl_internal_get_h31_b() ;

constexpr uint16_t const& __cordl_internal_get_h32_a() const;

constexpr uint16_t& __cordl_internal_get_h32_a() ;

constexpr uint16_t const& __cordl_internal_get_h32_b() const;

constexpr uint16_t& __cordl_internal_get_h32_b() ;

constexpr uint16_t const& __cordl_internal_get_h33_a() const;

constexpr uint16_t& __cordl_internal_get_h33_a() ;

constexpr uint16_t const& __cordl_internal_get_h33_b() const;

constexpr uint16_t& __cordl_internal_get_h33_b() ;

constexpr int32_t const& __cordl_internal_get_i00() const;

constexpr int32_t& __cordl_internal_get_i00() ;

constexpr int32_t const& __cordl_internal_get_i01() const;

constexpr int32_t& __cordl_internal_get_i01() ;

constexpr int32_t const& __cordl_internal_get_i02() const;

constexpr int32_t& __cordl_internal_get_i02() ;

constexpr int32_t const& __cordl_internal_get_i03() const;

constexpr int32_t& __cordl_internal_get_i03() ;

constexpr int32_t const& __cordl_internal_get_i10() const;

constexpr int32_t& __cordl_internal_get_i10() ;

constexpr int32_t const& __cordl_internal_get_i11() const;

constexpr int32_t& __cordl_internal_get_i11() ;

constexpr int32_t const& __cordl_internal_get_i12() const;

constexpr int32_t& __cordl_internal_get_i12() ;

constexpr int32_t const& __cordl_internal_get_i13() const;

constexpr int32_t& __cordl_internal_get_i13() ;

constexpr int32_t const& __cordl_internal_get_i20() const;

constexpr int32_t& __cordl_internal_get_i20() ;

constexpr int32_t const& __cordl_internal_get_i21() const;

constexpr int32_t& __cordl_internal_get_i21() ;

constexpr int32_t const& __cordl_internal_get_i22() const;

constexpr int32_t& __cordl_internal_get_i22() ;

constexpr int32_t const& __cordl_internal_get_i23() const;

constexpr int32_t& __cordl_internal_get_i23() ;

constexpr int32_t const& __cordl_internal_get_i30() const;

constexpr int32_t& __cordl_internal_get_i30() ;

constexpr int32_t const& __cordl_internal_get_i31() const;

constexpr int32_t& __cordl_internal_get_i31() ;

constexpr int32_t const& __cordl_internal_get_i32() const;

constexpr int32_t& __cordl_internal_get_i32() ;

constexpr int32_t const& __cordl_internal_get_i33() const;

constexpr int32_t& __cordl_internal_get_i33() ;

constexpr float_t const& __cordl_internal_get_m00() const;

constexpr float_t& __cordl_internal_get_m00() ;

constexpr float_t const& __cordl_internal_get_m01() const;

constexpr float_t& __cordl_internal_get_m01() ;

constexpr float_t const& __cordl_internal_get_m02() const;

constexpr float_t& __cordl_internal_get_m02() ;

constexpr float_t const& __cordl_internal_get_m03() const;

constexpr float_t& __cordl_internal_get_m03() ;

constexpr float_t const& __cordl_internal_get_m10() const;

constexpr float_t& __cordl_internal_get_m10() ;

constexpr float_t const& __cordl_internal_get_m11() const;

constexpr float_t& __cordl_internal_get_m11() ;

constexpr float_t const& __cordl_internal_get_m12() const;

constexpr float_t& __cordl_internal_get_m12() ;

constexpr float_t const& __cordl_internal_get_m13() const;

constexpr float_t& __cordl_internal_get_m13() ;

constexpr float_t const& __cordl_internal_get_m20() const;

constexpr float_t& __cordl_internal_get_m20() ;

constexpr float_t const& __cordl_internal_get_m21() const;

constexpr float_t& __cordl_internal_get_m21() ;

constexpr float_t const& __cordl_internal_get_m22() const;

constexpr float_t& __cordl_internal_get_m22() ;

constexpr float_t const& __cordl_internal_get_m23() const;

constexpr float_t& __cordl_internal_get_m23() ;

constexpr float_t const& __cordl_internal_get_m30() const;

constexpr float_t& __cordl_internal_get_m30() ;

constexpr float_t const& __cordl_internal_get_m31() const;

constexpr float_t& __cordl_internal_get_m31() ;

constexpr float_t const& __cordl_internal_get_m32() const;

constexpr float_t& __cordl_internal_get_m32() ;

constexpr float_t const& __cordl_internal_get_m33() const;

constexpr float_t& __cordl_internal_get_m33() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_r0() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_r0() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_r1() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_r1() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_r2() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_r2() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_r3() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_r3() ;

constexpr void __cordl_internal_set_data_f(::GlobalNamespace::m4x4__data_f_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_data_h(::GlobalNamespace::m4x4__data_h_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_data_i(::GlobalNamespace::m4x4__data_i_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_h00_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h00_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h01_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h01_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h02_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h02_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h03_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h03_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h10_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h10_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h11_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h11_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h12_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h12_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h13_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h13_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h20_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h20_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h21_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h21_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h22_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h22_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h23_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h23_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h30_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h30_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h31_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h31_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h32_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h32_b(uint16_t  value) ;

constexpr void __cordl_internal_set_h33_a(uint16_t  value) ;

constexpr void __cordl_internal_set_h33_b(uint16_t  value) ;

constexpr void __cordl_internal_set_i00(int32_t  value) ;

constexpr void __cordl_internal_set_i01(int32_t  value) ;

constexpr void __cordl_internal_set_i02(int32_t  value) ;

constexpr void __cordl_internal_set_i03(int32_t  value) ;

constexpr void __cordl_internal_set_i10(int32_t  value) ;

constexpr void __cordl_internal_set_i11(int32_t  value) ;

constexpr void __cordl_internal_set_i12(int32_t  value) ;

constexpr void __cordl_internal_set_i13(int32_t  value) ;

constexpr void __cordl_internal_set_i20(int32_t  value) ;

constexpr void __cordl_internal_set_i21(int32_t  value) ;

constexpr void __cordl_internal_set_i22(int32_t  value) ;

constexpr void __cordl_internal_set_i23(int32_t  value) ;

constexpr void __cordl_internal_set_i30(int32_t  value) ;

constexpr void __cordl_internal_set_i31(int32_t  value) ;

constexpr void __cordl_internal_set_i32(int32_t  value) ;

constexpr void __cordl_internal_set_i33(int32_t  value) ;

constexpr void __cordl_internal_set_m00(float_t  value) ;

constexpr void __cordl_internal_set_m01(float_t  value) ;

constexpr void __cordl_internal_set_m02(float_t  value) ;

constexpr void __cordl_internal_set_m03(float_t  value) ;

constexpr void __cordl_internal_set_m10(float_t  value) ;

constexpr void __cordl_internal_set_m11(float_t  value) ;

constexpr void __cordl_internal_set_m12(float_t  value) ;

constexpr void __cordl_internal_set_m13(float_t  value) ;

constexpr void __cordl_internal_set_m20(float_t  value) ;

constexpr void __cordl_internal_set_m21(float_t  value) ;

constexpr void __cordl_internal_set_m22(float_t  value) ;

constexpr void __cordl_internal_set_m23(float_t  value) ;

constexpr void __cordl_internal_set_m30(float_t  value) ;

constexpr void __cordl_internal_set_m31(float_t  value) ;

constexpr void __cordl_internal_set_m32(float_t  value) ;

constexpr void __cordl_internal_set_m33(float_t  value) ;

constexpr void __cordl_internal_set_r0(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_r1(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_r2(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_r3(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x5a1d800, size 0x60, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33) ;

/// @brief Method .ctor, addr 0x5a1d860, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector4  row0, ::UnityEngine::Vector4  row1, ::UnityEngine::Vector4  row2, ::UnityEngine::Vector4  row3) ;

// Ctor Parameters []
// @brief default ctor
constexpr m4x4() ;

// Ctor Parameters [CppParam { name: "data_f", ty: "::GlobalNamespace::m4x4__data_f_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "data_i", ty: "::GlobalNamespace::m4x4__data_i_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "data_h", ty: "::GlobalNamespace::m4x4__data_h_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "r0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "r1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "r2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "r3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m22", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i00", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i01", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i02", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i03", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i10", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i11", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i12", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i13", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i20", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i21", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i22", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i23", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i30", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i31", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i32", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "i33", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h00_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h00_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h01_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h01_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h02_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h02_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h03_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h03_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h10_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h10_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h11_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h11_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h12_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h12_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h13_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h13_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h20_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h20_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h21_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h21_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h22_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h22_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h23_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h23_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h30_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h30_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h31_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h31_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h32_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h32_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h33_a", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h33_b", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr m4x4(::GlobalNamespace::m4x4__data_f_e__FixedBuffer  data_f, ::GlobalNamespace::m4x4__data_i_e__FixedBuffer  data_i, ::GlobalNamespace::m4x4__data_h_e__FixedBuffer  data_h, ::UnityEngine::Vector4  r0, ::UnityEngine::Vector4  r1, ::UnityEngine::Vector4  r2, ::UnityEngine::Vector4  r3, float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23, float_t  m30, float_t  m31, float_t  m32, float_t  m33, int32_t  i00, int32_t  i01, int32_t  i02, int32_t  i03, int32_t  i10, int32_t  i11, int32_t  i12, int32_t  i13, int32_t  i20, int32_t  i21, int32_t  i22, int32_t  i23, int32_t  i30, int32_t  i31, int32_t  i32, int32_t  i33, uint16_t  h00_a, uint16_t  h00_b, uint16_t  h01_a, uint16_t  h01_b, uint16_t  h02_a, uint16_t  h02_b, uint16_t  h03_a, uint16_t  h03_b, uint16_t  h10_a, uint16_t  h10_b, uint16_t  h11_a, uint16_t  h11_b, uint16_t  h12_a, uint16_t  h12_b, uint16_t  h13_a, uint16_t  h13_b, uint16_t  h20_a, uint16_t  h20_b, uint16_t  h21_a, uint16_t  h21_b, uint16_t  h22_a, uint16_t  h22_b, uint16_t  h23_a, uint16_t  h23_b, uint16_t  h30_a, uint16_t  h30_b, uint16_t  h31_a, uint16_t  h31_b, uint16_t  h32_a, uint16_t  h32_b, uint16_t  h33_a, uint16_t  h33_b) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___data_f_padding[0x0];
/// [FixedBuffer(typeof(System.Single), 16)]
/// @brief Field data_f, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::m4x4__data_f_e__FixedBuffer  ___data_f;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___data_f_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Single), 16)]
/// @brief Field data_f, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::m4x4__data_f_e__FixedBuffer  ___data_f_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___data_i_padding[0x0];
/// [FixedBuffer(typeof(System.Int32), 16)]
/// @brief Field data_i, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::m4x4__data_i_e__FixedBuffer  ___data_i;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___data_i_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Int32), 16)]
/// @brief Field data_i, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::m4x4__data_i_e__FixedBuffer  ___data_i_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___data_h_padding[0x0];
/// [FixedBuffer(typeof(System.UInt16), 32)]
/// @brief Field data_h, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::m4x4__data_h_e__FixedBuffer  ___data_h;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___data_h_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.UInt16), 32)]
/// @brief Field data_h, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::m4x4__data_h_e__FixedBuffer  ___data_h_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___r0_padding[0x0];
/// @brief Field r0, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___r0_padding_forAlignment[0x0];
/// @brief Field r0, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___r1_padding[0x10];
/// @brief Field r1, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___r1_padding_forAlignment[0x10];
/// @brief Field r1, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___r2_padding[0x20];
/// @brief Field r2, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___r2_padding_forAlignment[0x20];
/// @brief Field r2, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___r3_padding[0x30];
/// @brief Field r3, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___r3_padding_forAlignment[0x30];
/// @brief Field r3, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___r3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m00_padding[0x0];
/// @brief Field m00, offset: 0x0, size: 0x4, def value: None
 float_t  ___m00;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m00_padding_forAlignment[0x0];
/// @brief Field m00, offset: 0x0, size: 0x4, def value: None
 float_t  ___m00_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___m01_padding[0x4];
/// @brief Field m01, offset: 0x4, size: 0x4, def value: None
 float_t  ___m01;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___m01_padding_forAlignment[0x4];
/// @brief Field m01, offset: 0x4, size: 0x4, def value: None
 float_t  ___m01_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___m02_padding[0x8];
/// @brief Field m02, offset: 0x8, size: 0x4, def value: None
 float_t  ___m02;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___m02_padding_forAlignment[0x8];
/// @brief Field m02, offset: 0x8, size: 0x4, def value: None
 float_t  ___m02_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___m03_padding[0xc];
/// @brief Field m03, offset: 0xc, size: 0x4, def value: None
 float_t  ___m03;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___m03_padding_forAlignment[0xc];
/// @brief Field m03, offset: 0xc, size: 0x4, def value: None
 float_t  ___m03_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___m10_padding[0x10];
/// @brief Field m10, offset: 0x10, size: 0x4, def value: None
 float_t  ___m10;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___m10_padding_forAlignment[0x10];
/// @brief Field m10, offset: 0x10, size: 0x4, def value: None
 float_t  ___m10_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___m11_padding[0x14];
/// @brief Field m11, offset: 0x14, size: 0x4, def value: None
 float_t  ___m11;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___m11_padding_forAlignment[0x14];
/// @brief Field m11, offset: 0x14, size: 0x4, def value: None
 float_t  ___m11_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___m12_padding[0x18];
/// @brief Field m12, offset: 0x18, size: 0x4, def value: None
 float_t  ___m12;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___m12_padding_forAlignment[0x18];
/// @brief Field m12, offset: 0x18, size: 0x4, def value: None
 float_t  ___m12_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___m13_padding[0x1c];
/// @brief Field m13, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m13;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___m13_padding_forAlignment[0x1c];
/// @brief Field m13, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m13_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___m20_padding[0x20];
/// @brief Field m20, offset: 0x20, size: 0x4, def value: None
 float_t  ___m20;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___m20_padding_forAlignment[0x20];
/// @brief Field m20, offset: 0x20, size: 0x4, def value: None
 float_t  ___m20_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___m21_padding[0x24];
/// @brief Field m21, offset: 0x24, size: 0x4, def value: None
 float_t  ___m21;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___m21_padding_forAlignment[0x24];
/// @brief Field m21, offset: 0x24, size: 0x4, def value: None
 float_t  ___m21_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___m22_padding[0x28];
/// @brief Field m22, offset: 0x28, size: 0x4, def value: None
 float_t  ___m22;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___m22_padding_forAlignment[0x28];
/// @brief Field m22, offset: 0x28, size: 0x4, def value: None
 float_t  ___m22_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___m23_padding[0x2c];
/// @brief Field m23, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m23;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___m23_padding_forAlignment[0x2c];
/// @brief Field m23, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m23_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___m30_padding[0x30];
/// @brief Field m30, offset: 0x30, size: 0x4, def value: None
 float_t  ___m30;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___m30_padding_forAlignment[0x30];
/// @brief Field m30, offset: 0x30, size: 0x4, def value: None
 float_t  ___m30_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ___m31_padding[0x34];
/// @brief Field m31, offset: 0x34, size: 0x4, def value: None
 float_t  ___m31;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ___m31_padding_forAlignment[0x34];
/// @brief Field m31, offset: 0x34, size: 0x4, def value: None
 float_t  ___m31_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___m32_padding[0x38];
/// @brief Field m32, offset: 0x38, size: 0x4, def value: None
 float_t  ___m32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___m32_padding_forAlignment[0x38];
/// @brief Field m32, offset: 0x38, size: 0x4, def value: None
 float_t  ___m32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ___m33_padding[0x3c];
/// @brief Field m33, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m33;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ___m33_padding_forAlignment[0x3c];
/// @brief Field m33, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m33_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___i00_padding[0x0];
/// [HideInInspector]
/// @brief Field i00, offset: 0x0, size: 0x4, def value: None
 int32_t  ___i00;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___i00_padding_forAlignment[0x0];
/// [HideInInspector]
/// @brief Field i00, offset: 0x0, size: 0x4, def value: None
 int32_t  ___i00_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___i01_padding[0x4];
/// [HideInInspector]
/// @brief Field i01, offset: 0x4, size: 0x4, def value: None
 int32_t  ___i01;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___i01_padding_forAlignment[0x4];
/// [HideInInspector]
/// @brief Field i01, offset: 0x4, size: 0x4, def value: None
 int32_t  ___i01_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___i02_padding[0x8];
/// [HideInInspector]
/// @brief Field i02, offset: 0x8, size: 0x4, def value: None
 int32_t  ___i02;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___i02_padding_forAlignment[0x8];
/// [HideInInspector]
/// @brief Field i02, offset: 0x8, size: 0x4, def value: None
 int32_t  ___i02_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___i03_padding[0xc];
/// [HideInInspector]
/// @brief Field i03, offset: 0xc, size: 0x4, def value: None
 int32_t  ___i03;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___i03_padding_forAlignment[0xc];
/// [HideInInspector]
/// @brief Field i03, offset: 0xc, size: 0x4, def value: None
 int32_t  ___i03_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___i10_padding[0x10];
/// [HideInInspector]
/// @brief Field i10, offset: 0x10, size: 0x4, def value: None
 int32_t  ___i10;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___i10_padding_forAlignment[0x10];
/// [HideInInspector]
/// @brief Field i10, offset: 0x10, size: 0x4, def value: None
 int32_t  ___i10_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___i11_padding[0x14];
/// [HideInInspector]
/// @brief Field i11, offset: 0x14, size: 0x4, def value: None
 int32_t  ___i11;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___i11_padding_forAlignment[0x14];
/// [HideInInspector]
/// @brief Field i11, offset: 0x14, size: 0x4, def value: None
 int32_t  ___i11_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___i12_padding[0x18];
/// [HideInInspector]
/// @brief Field i12, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i12;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___i12_padding_forAlignment[0x18];
/// [HideInInspector]
/// @brief Field i12, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i12_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___i13_padding[0x1c];
/// [HideInInspector]
/// @brief Field i13, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___i13;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___i13_padding_forAlignment[0x1c];
/// [HideInInspector]
/// @brief Field i13, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___i13_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___i20_padding[0x20];
/// [HideInInspector]
/// @brief Field i20, offset: 0x20, size: 0x4, def value: None
 int32_t  ___i20;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___i20_padding_forAlignment[0x20];
/// [HideInInspector]
/// @brief Field i20, offset: 0x20, size: 0x4, def value: None
 int32_t  ___i20_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___i21_padding[0x24];
/// [HideInInspector]
/// @brief Field i21, offset: 0x24, size: 0x4, def value: None
 int32_t  ___i21;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___i21_padding_forAlignment[0x24];
/// [HideInInspector]
/// @brief Field i21, offset: 0x24, size: 0x4, def value: None
 int32_t  ___i21_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___i22_padding[0x28];
/// [HideInInspector]
/// @brief Field i22, offset: 0x28, size: 0x4, def value: None
 int32_t  ___i22;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___i22_padding_forAlignment[0x28];
/// [HideInInspector]
/// @brief Field i22, offset: 0x28, size: 0x4, def value: None
 int32_t  ___i22_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___i23_padding[0x2c];
/// [HideInInspector]
/// @brief Field i23, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___i23;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___i23_padding_forAlignment[0x2c];
/// [HideInInspector]
/// @brief Field i23, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___i23_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___i30_padding[0x30];
/// [HideInInspector]
/// @brief Field i30, offset: 0x30, size: 0x4, def value: None
 int32_t  ___i30;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___i30_padding_forAlignment[0x30];
/// [HideInInspector]
/// @brief Field i30, offset: 0x30, size: 0x4, def value: None
 int32_t  ___i30_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ___i31_padding[0x34];
/// [HideInInspector]
/// @brief Field i31, offset: 0x34, size: 0x4, def value: None
 int32_t  ___i31;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ___i31_padding_forAlignment[0x34];
/// [HideInInspector]
/// @brief Field i31, offset: 0x34, size: 0x4, def value: None
 int32_t  ___i31_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___i32_padding[0x38];
/// [HideInInspector]
/// @brief Field i32, offset: 0x38, size: 0x4, def value: None
 int32_t  ___i32;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___i32_padding_forAlignment[0x38];
/// [HideInInspector]
/// @brief Field i32, offset: 0x38, size: 0x4, def value: None
 int32_t  ___i32_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ___i33_padding[0x3c];
/// [HideInInspector]
/// @brief Field i33, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___i33;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ___i33_padding_forAlignment[0x3c];
/// [HideInInspector]
/// @brief Field i33, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___i33_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___h00_a_padding[0x0];
/// @brief Field h00_a, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___h00_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___h00_a_padding_forAlignment[0x0];
/// @brief Field h00_a, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___h00_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___h00_b_padding[0x2];
/// @brief Field h00_b, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___h00_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___h00_b_padding_forAlignment[0x2];
/// @brief Field h00_b, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___h00_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___h01_a_padding[0x4];
/// @brief Field h01_a, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___h01_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___h01_a_padding_forAlignment[0x4];
/// @brief Field h01_a, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___h01_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___h01_b_padding[0x6];
/// @brief Field h01_b, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___h01_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___h01_b_padding_forAlignment[0x6];
/// @brief Field h01_b, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___h01_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___h02_a_padding[0x8];
/// @brief Field h02_a, offset: 0x8, size: 0x2, def value: None
 uint16_t  ___h02_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___h02_a_padding_forAlignment[0x8];
/// @brief Field h02_a, offset: 0x8, size: 0x2, def value: None
 uint16_t  ___h02_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa
 uint8_t  ___h02_b_padding[0xa];
/// @brief Field h02_b, offset: 0xa, size: 0x2, def value: None
 uint16_t  ___h02_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa for alignment
 uint8_t  ___h02_b_padding_forAlignment[0xa];
/// @brief Field h02_b, offset: 0xa, size: 0x2, def value: None
 uint16_t  ___h02_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___h03_a_padding[0xc];
/// @brief Field h03_a, offset: 0xc, size: 0x2, def value: None
 uint16_t  ___h03_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___h03_a_padding_forAlignment[0xc];
/// @brief Field h03_a, offset: 0xc, size: 0x2, def value: None
 uint16_t  ___h03_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe
 uint8_t  ___h03_b_padding[0xe];
/// @brief Field h03_b, offset: 0xe, size: 0x2, def value: None
 uint16_t  ___h03_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe for alignment
 uint8_t  ___h03_b_padding_forAlignment[0xe];
/// @brief Field h03_b, offset: 0xe, size: 0x2, def value: None
 uint16_t  ___h03_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___h10_a_padding[0x10];
/// @brief Field h10_a, offset: 0x10, size: 0x2, def value: None
 uint16_t  ___h10_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___h10_a_padding_forAlignment[0x10];
/// @brief Field h10_a, offset: 0x10, size: 0x2, def value: None
 uint16_t  ___h10_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x12
 uint8_t  ___h10_b_padding[0x12];
/// @brief Field h10_b, offset: 0x12, size: 0x2, def value: None
 uint16_t  ___h10_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x12 for alignment
 uint8_t  ___h10_b_padding_forAlignment[0x12];
/// @brief Field h10_b, offset: 0x12, size: 0x2, def value: None
 uint16_t  ___h10_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___h11_a_padding[0x14];
/// @brief Field h11_a, offset: 0x14, size: 0x2, def value: None
 uint16_t  ___h11_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___h11_a_padding_forAlignment[0x14];
/// @brief Field h11_a, offset: 0x14, size: 0x2, def value: None
 uint16_t  ___h11_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x16
 uint8_t  ___h11_b_padding[0x16];
/// @brief Field h11_b, offset: 0x16, size: 0x2, def value: None
 uint16_t  ___h11_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x16 for alignment
 uint8_t  ___h11_b_padding_forAlignment[0x16];
/// @brief Field h11_b, offset: 0x16, size: 0x2, def value: None
 uint16_t  ___h11_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___h12_a_padding[0x18];
/// @brief Field h12_a, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___h12_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___h12_a_padding_forAlignment[0x18];
/// @brief Field h12_a, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___h12_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1a
 uint8_t  ___h12_b_padding[0x1a];
/// @brief Field h12_b, offset: 0x1a, size: 0x2, def value: None
 uint16_t  ___h12_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1a for alignment
 uint8_t  ___h12_b_padding_forAlignment[0x1a];
/// @brief Field h12_b, offset: 0x1a, size: 0x2, def value: None
 uint16_t  ___h12_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___h13_a_padding[0x1c];
/// @brief Field h13_a, offset: 0x1c, size: 0x2, def value: None
 uint16_t  ___h13_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___h13_a_padding_forAlignment[0x1c];
/// @brief Field h13_a, offset: 0x1c, size: 0x2, def value: None
 uint16_t  ___h13_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1e
 uint8_t  ___h13_b_padding[0x1e];
/// @brief Field h13_b, offset: 0x1e, size: 0x2, def value: None
 uint16_t  ___h13_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1e for alignment
 uint8_t  ___h13_b_padding_forAlignment[0x1e];
/// @brief Field h13_b, offset: 0x1e, size: 0x2, def value: None
 uint16_t  ___h13_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___h20_a_padding[0x20];
/// @brief Field h20_a, offset: 0x20, size: 0x2, def value: None
 uint16_t  ___h20_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___h20_a_padding_forAlignment[0x20];
/// @brief Field h20_a, offset: 0x20, size: 0x2, def value: None
 uint16_t  ___h20_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x22
 uint8_t  ___h20_b_padding[0x22];
/// @brief Field h20_b, offset: 0x22, size: 0x2, def value: None
 uint16_t  ___h20_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x22 for alignment
 uint8_t  ___h20_b_padding_forAlignment[0x22];
/// @brief Field h20_b, offset: 0x22, size: 0x2, def value: None
 uint16_t  ___h20_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___h21_a_padding[0x24];
/// @brief Field h21_a, offset: 0x24, size: 0x2, def value: None
 uint16_t  ___h21_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___h21_a_padding_forAlignment[0x24];
/// @brief Field h21_a, offset: 0x24, size: 0x2, def value: None
 uint16_t  ___h21_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x26
 uint8_t  ___h21_b_padding[0x26];
/// @brief Field h21_b, offset: 0x26, size: 0x2, def value: None
 uint16_t  ___h21_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x26 for alignment
 uint8_t  ___h21_b_padding_forAlignment[0x26];
/// @brief Field h21_b, offset: 0x26, size: 0x2, def value: None
 uint16_t  ___h21_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___h22_a_padding[0x28];
/// @brief Field h22_a, offset: 0x28, size: 0x2, def value: None
 uint16_t  ___h22_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___h22_a_padding_forAlignment[0x28];
/// @brief Field h22_a, offset: 0x28, size: 0x2, def value: None
 uint16_t  ___h22_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2a
 uint8_t  ___h22_b_padding[0x2a];
/// @brief Field h22_b, offset: 0x2a, size: 0x2, def value: None
 uint16_t  ___h22_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2a for alignment
 uint8_t  ___h22_b_padding_forAlignment[0x2a];
/// @brief Field h22_b, offset: 0x2a, size: 0x2, def value: None
 uint16_t  ___h22_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___h23_a_padding[0x2c];
/// @brief Field h23_a, offset: 0x2c, size: 0x2, def value: None
 uint16_t  ___h23_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___h23_a_padding_forAlignment[0x2c];
/// @brief Field h23_a, offset: 0x2c, size: 0x2, def value: None
 uint16_t  ___h23_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2e
 uint8_t  ___h23_b_padding[0x2e];
/// @brief Field h23_b, offset: 0x2e, size: 0x2, def value: None
 uint16_t  ___h23_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2e for alignment
 uint8_t  ___h23_b_padding_forAlignment[0x2e];
/// @brief Field h23_b, offset: 0x2e, size: 0x2, def value: None
 uint16_t  ___h23_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___h30_a_padding[0x30];
/// @brief Field h30_a, offset: 0x30, size: 0x2, def value: None
 uint16_t  ___h30_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___h30_a_padding_forAlignment[0x30];
/// @brief Field h30_a, offset: 0x30, size: 0x2, def value: None
 uint16_t  ___h30_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x32
 uint8_t  ___h30_b_padding[0x32];
/// @brief Field h30_b, offset: 0x32, size: 0x2, def value: None
 uint16_t  ___h30_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x32 for alignment
 uint8_t  ___h30_b_padding_forAlignment[0x32];
/// @brief Field h30_b, offset: 0x32, size: 0x2, def value: None
 uint16_t  ___h30_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ___h31_a_padding[0x34];
/// @brief Field h31_a, offset: 0x34, size: 0x2, def value: None
 uint16_t  ___h31_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ___h31_a_padding_forAlignment[0x34];
/// @brief Field h31_a, offset: 0x34, size: 0x2, def value: None
 uint16_t  ___h31_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x36
 uint8_t  ___h31_b_padding[0x36];
/// @brief Field h31_b, offset: 0x36, size: 0x2, def value: None
 uint16_t  ___h31_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x36 for alignment
 uint8_t  ___h31_b_padding_forAlignment[0x36];
/// @brief Field h31_b, offset: 0x36, size: 0x2, def value: None
 uint16_t  ___h31_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___h32_a_padding[0x38];
/// @brief Field h32_a, offset: 0x38, size: 0x2, def value: None
 uint16_t  ___h32_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___h32_a_padding_forAlignment[0x38];
/// @brief Field h32_a, offset: 0x38, size: 0x2, def value: None
 uint16_t  ___h32_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3a
 uint8_t  ___h32_b_padding[0x3a];
/// @brief Field h32_b, offset: 0x3a, size: 0x2, def value: None
 uint16_t  ___h32_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3a for alignment
 uint8_t  ___h32_b_padding_forAlignment[0x3a];
/// @brief Field h32_b, offset: 0x3a, size: 0x2, def value: None
 uint16_t  ___h32_b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ___h33_a_padding[0x3c];
/// @brief Field h33_a, offset: 0x3c, size: 0x2, def value: None
 uint16_t  ___h33_a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ___h33_a_padding_forAlignment[0x3c];
/// @brief Field h33_a, offset: 0x3c, size: 0x2, def value: None
 uint16_t  ___h33_a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3e
 uint8_t  ___h33_b_padding[0x3e];
/// @brief Field h33_b, offset: 0x3e, size: 0x2, def value: None
 uint16_t  ___h33_b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3e for alignment
 uint8_t  ___h33_b_padding_forAlignment[0x3e];
/// @brief Field h33_b, offset: 0x3e, size: 0x2, def value: None
 uint16_t  ___h33_b_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::m4x4) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

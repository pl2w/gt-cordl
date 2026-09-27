#pragma once
// IWYU pragma private; include "GlobalNamespace/Id128.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Id128)
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace GlobalNamespace {
struct Id128;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Id128);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Id128, "", "Id128");
// Dependencies System.Guid, UnityEngine.Hash128
namespace GlobalNamespace {
// Is value type: true
// CS Name: Id128
struct CORDL_TYPE Id128 {
public:
// Declarations
/// @brief Field Empty, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::GlobalNamespace::Id128  Empty;

/// @brief Field a, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_a, put=__cordl_internal_set_a)) int32_t  a;

/// @brief Field b, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_b, put=__cordl_internal_set_b)) int32_t  b;

/// @brief Field c, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_c, put=__cordl_internal_set_c)) int32_t  c;

/// @brief Field d, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_d, put=__cordl_internal_set_d)) int32_t  d;

/// @brief Field guid, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::System::Guid  guid;

/// @brief Field h128, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_h128, put=__cordl_internal_set_h128)) ::UnityEngine::Hash128  h128;

/// @brief Field x, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int64_t  x;

/// @brief Field y, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) int64_t  y;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::Id128>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::Id128>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Id128>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Id128>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
constexpr operator  ::System::IEquatable_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Hash128>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Hash128>*() ;

/// @brief Method CompareTo, addr 0x5a1c91c, size 0x40, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::Id128  id) ;

/// @brief Method CompareTo, addr 0x5a1c95c, size 0x13c, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Method ComputeMD5, addr 0x5a1caa0, size 0x1c8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 ComputeMD5(::StringW  s) ;

/// @brief Method ComputeSHV2, addr 0x5a1cc6c, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 ComputeSHV2(::StringW  s) ;

/// @brief Method Equals, addr 0x5a1c70c, size 0x1c, virtual true, abstract: false, final true
inline bool Equals(::System::Guid  g) ;

/// @brief Method Equals, addr 0x5a1c728, size 0x1c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Hash128  h) ;

/// @brief Method Equals, addr 0x5a1c6e8, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::Id128  id) ;

/// @brief Method Equals, addr 0x5a1c744, size 0x110, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x5a1c85c, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method NewId, addr 0x5a1ca98, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 NewId() ;

/// @brief Method ToByteArray, addr 0x5a1c6e0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToInts, addr 0x5a1c67c, size 0x64, virtual false, abstract: false, final false
inline ::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t> ToInts() ;

/// @brief Method ToLongs, addr 0x5a1c61c, size 0x60, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int64_t,int64_t> ToLongs() ;

/// @brief Method ToString, addr 0x5a1c854, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_a() const;

constexpr int32_t& __cordl_internal_get_a() ;

constexpr int32_t const& __cordl_internal_get_b() const;

constexpr int32_t& __cordl_internal_get_b() ;

constexpr int32_t const& __cordl_internal_get_c() const;

constexpr int32_t& __cordl_internal_get_c() ;

constexpr int32_t const& __cordl_internal_get_d() const;

constexpr int32_t& __cordl_internal_get_d() ;

constexpr ::System::Guid const& __cordl_internal_get_guid() const;

constexpr ::System::Guid& __cordl_internal_get_guid() ;

constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_h128() const;

constexpr ::UnityEngine::Hash128& __cordl_internal_get_h128() ;

constexpr int64_t const& __cordl_internal_get_x() const;

constexpr int64_t& __cordl_internal_get_x() ;

constexpr int64_t const& __cordl_internal_get_y() const;

constexpr int64_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_a(int32_t  value) ;

constexpr void __cordl_internal_set_b(int32_t  value) ;

constexpr void __cordl_internal_set_c(int32_t  value) ;

constexpr void __cordl_internal_set_d(int32_t  value) ;

constexpr void __cordl_internal_set_guid(::System::Guid  value) ;

constexpr void __cordl_internal_set_h128(::UnityEngine::Hash128  value) ;

constexpr void __cordl_internal_set_x(int64_t  value) ;

constexpr void __cordl_internal_set_y(int64_t  value) ;

/// @brief Method .ctor, addr 0x5a1c37c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(int32_t  a, int32_t  b, int32_t  c, int32_t  d) ;

/// @brief Method .ctor, addr 0x5a1c540, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  bytes) ;

/// @brief Method .ctor, addr 0x5a1c4b8, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  guid) ;

/// @brief Method .ctor, addr 0x5a1c4b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  guid) ;

/// @brief Method .ctor, addr 0x5a1c448, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Hash128  hash) ;

/// @brief Method .ctor, addr 0x5a1c3e0, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int64_t  x, int64_t  y) ;

static inline ::GlobalNamespace::Id128 getStaticF_Empty() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::Id128>"
constexpr ::System::IComparable_1<::GlobalNamespace::Id128>* i___System__IComparable_1___GlobalNamespace__Id128_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Id128>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Id128>* i___System__IEquatable_1___GlobalNamespace__Id128_() ;

/// @brief Convert to "::System::IEquatable_1<::System::Guid>"
constexpr ::System::IEquatable_1<::System::Guid>* i___System__IEquatable_1___System__Guid_() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Hash128>"
constexpr ::System::IEquatable_1<::UnityEngine::Hash128>* i___System__IEquatable_1___UnityEngine__Hash128_() ;

/// @brief Method op_Equality, addr 0x5a1cd4c, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_Equality, addr 0x5a1cd6c, size 0x8, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::Id128  j, ::System::Guid  k) ;

/// @brief Method op_Equality, addr 0x5a1cdf4, size 0x8, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::Id128  j, ::UnityEngine::Hash128  k) ;

/// @brief Method op_Equality, addr 0x5a1cd90, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Guid  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_Equality, addr 0x5a1ce18, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Hash128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_Explicit, addr 0x5a1cfc0, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 op_Explicit___GlobalNamespace__Id128(::StringW  s) ;

/// @brief Method op_GreaterThan, addr 0x5a1cec8, size 0x50, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x5a1cf68, size 0x50, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_Implicit, addr 0x5a1cc68, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 op_Implicit___GlobalNamespace__Id128(::System::Guid  guid) ;

/// @brief Method op_Implicit, addr 0x5a1cd08, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Id128 op_Implicit___GlobalNamespace__Id128(::UnityEngine::Hash128  h) ;

/// @brief Method op_Implicit, addr 0x5a1cfb8, size 0x4, virtual false, abstract: false, final false
static inline ::System::Guid op_Implicit___System__Guid(::GlobalNamespace::Id128  id) ;

/// @brief Method op_Implicit, addr 0x5a1cfbc, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 op_Implicit___UnityEngine__Hash128(::GlobalNamespace::Id128  id) ;

/// @brief Method op_Inequality, addr 0x5a1cd5c, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_Inequality, addr 0x5a1cd74, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::Id128  j, ::System::Guid  k) ;

/// @brief Method op_Inequality, addr 0x5a1cdfc, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::Id128  j, ::UnityEngine::Hash128  k) ;

/// @brief Method op_Inequality, addr 0x5a1cdc0, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Guid  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_Inequality, addr 0x5a1ce48, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Hash128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_LessThan, addr 0x5a1ce7c, size 0x4c, virtual false, abstract: false, final false
static inline bool op_LessThan(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k) ;

/// @brief Method op_LessThanOrEqual, addr 0x5a1cf18, size 0x50, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::GlobalNamespace::Id128  j, ::GlobalNamespace::Id128  k) ;

static inline void setStaticF_Empty(::GlobalNamespace::Id128  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Id128() ;

// Ctor Parameters [CppParam { name: "x", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "a", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "c", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "d", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "h128", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None, comment: None }]
constexpr Id128(int64_t  x, int64_t  y, int32_t  a, int32_t  b, int32_t  c, int32_t  d, ::System::Guid  guid, ::UnityEngine::Hash128  h128) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___x_padding[0x0];
/// [SerializeField]
/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 int64_t  ___x;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___x_padding_forAlignment[0x0];
/// [SerializeField]
/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 int64_t  ___x_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___y_padding[0x8];
/// [SerializeField]
/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 int64_t  ___y;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___y_padding_forAlignment[0x8];
/// [SerializeField]
/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 int64_t  ___y_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___a_padding[0x0];
/// @brief Field a, offset: 0x0, size: 0x4, def value: None
 int32_t  ___a;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___a_padding_forAlignment[0x0];
/// @brief Field a, offset: 0x0, size: 0x4, def value: None
 int32_t  ___a_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___b_padding[0x4];
/// @brief Field b, offset: 0x4, size: 0x4, def value: None
 int32_t  ___b;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___b_padding_forAlignment[0x4];
/// @brief Field b, offset: 0x4, size: 0x4, def value: None
 int32_t  ___b_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___c_padding[0x8];
/// @brief Field c, offset: 0x8, size: 0x4, def value: None
 int32_t  ___c;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___c_padding_forAlignment[0x8];
/// @brief Field c, offset: 0x8, size: 0x4, def value: None
 int32_t  ___c_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___d_padding[0xc];
/// @brief Field d, offset: 0xc, size: 0x4, def value: None
 int32_t  ___d;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___d_padding_forAlignment[0xc];
/// @brief Field d, offset: 0xc, size: 0x4, def value: None
 int32_t  ___d_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___guid_padding[0x0];
/// @brief Field guid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  ___guid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___guid_padding_forAlignment[0x0];
/// @brief Field guid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  ___guid_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___h128_padding[0x0];
/// @brief Field h128, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Hash128  ___h128;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___h128_padding_forAlignment[0x0];
/// @brief Field h128, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Hash128  ___h128_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2816};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Id128) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

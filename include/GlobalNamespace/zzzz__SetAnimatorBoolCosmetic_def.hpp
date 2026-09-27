#pragma once
// IWYU pragma private; include "GlobalNamespace/SetAnimatorBoolCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SetAnimatorBoolCosmetic)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class SetAnimatorBoolCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetAnimatorBoolCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetAnimatorBoolCosmetic*, "", "SetAnimatorBoolCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetAnimatorBoolCosmetic
class CORDL_TYPE SetAnimatorBoolCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field bool1Hash, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_bool1Hash, put=__cordl_internal_set_bool1Hash)) int32_t  bool1Hash;

/// @brief Field bool2Hash, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_bool2Hash, put=__cordl_internal_set_bool2Hash)) int32_t  bool2Hash;

/// @brief Field bool2ParameterName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bool2ParameterName, put=__cordl_internal_set_bool2ParameterName)) ::StringW  bool2ParameterName;

/// @brief Field bool3Hash, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_bool3Hash, put=__cordl_internal_set_bool3Hash)) int32_t  bool3Hash;

/// @brief Field bool3ParameterName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bool3ParameterName, put=__cordl_internal_set_bool3ParameterName)) ::StringW  bool3ParameterName;

/// @brief Field bool4Hash, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bool4Hash, put=__cordl_internal_set_bool4Hash)) int32_t  bool4Hash;

/// @brief Field bool4ParameterName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bool4ParameterName, put=__cordl_internal_set_bool4ParameterName)) ::StringW  bool4ParameterName;

/// @brief Field bool5Hash, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bool5Hash, put=__cordl_internal_set_bool5Hash)) int32_t  bool5Hash;

/// @brief Field bool5ParameterName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bool5ParameterName, put=__cordl_internal_set_bool5ParameterName)) ::StringW  bool5ParameterName;

/// @brief Field boolParameterName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_boolParameterName, put=__cordl_internal_set_boolParameterName)) ::StringW  boolParameterName;

/// @brief Field float1Hash, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_float1Hash, put=__cordl_internal_set_float1Hash)) int32_t  float1Hash;

/// @brief Field float1ParameterName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_float1ParameterName, put=__cordl_internal_set_float1ParameterName)) ::StringW  float1ParameterName;

/// @brief Field float2Hash, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_float2Hash, put=__cordl_internal_set_float2Hash)) int32_t  float2Hash;

/// @brief Field float2ParameterName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_float2ParameterName, put=__cordl_internal_set_float2ParameterName)) ::StringW  float2ParameterName;

/// @brief Field float3Hash, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_float3Hash, put=__cordl_internal_set_float3Hash)) int32_t  float3Hash;

/// @brief Field float3ParameterName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_float3ParameterName, put=__cordl_internal_set_float3ParameterName)) ::StringW  float3ParameterName;

/// @brief Field float4Hash, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_float4Hash, put=__cordl_internal_set_float4Hash)) int32_t  float4Hash;

/// @brief Field float4ParameterName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_float4ParameterName, put=__cordl_internal_set_float4ParameterName)) ::StringW  float4ParameterName;

/// @brief Field int1Hash, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_int1Hash, put=__cordl_internal_set_int1Hash)) int32_t  int1Hash;

/// @brief Field int1ParameterName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_int1ParameterName, put=__cordl_internal_set_int1ParameterName)) ::StringW  int1ParameterName;

/// @brief Field int2Hash, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_int2Hash, put=__cordl_internal_set_int2Hash)) int32_t  int2Hash;

/// @brief Field int2ParameterName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_int2ParameterName, put=__cordl_internal_set_int2ParameterName)) ::StringW  int2ParameterName;

/// @brief Field int3Hash, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_int3Hash, put=__cordl_internal_set_int3Hash)) int32_t  int3Hash;

/// @brief Field int3ParameterName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_int3ParameterName, put=__cordl_internal_set_int3ParameterName)) ::StringW  int3ParameterName;

/// @brief Field int4Hash, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_int4Hash, put=__cordl_internal_set_int4Hash)) int32_t  int4Hash;

/// @brief Field int4ParameterName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_int4ParameterName, put=__cordl_internal_set_int4ParameterName)) ::StringW  int4ParameterName;

static inline ::GlobalNamespace::SetAnimatorBoolCosmetic* New_ctor() ;

/// @brief Method OnAnimatorValueChanged, addr 0x57f05a8, size 0x4, virtual false, abstract: false, final false
inline void OnAnimatorValueChanged() ;

/// @brief Method Reset, addr 0x57f09c4, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetAnimatorBool, addr 0x57f05ac, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorBool(bool  value) ;

/// @brief Method SetAnimatorBool2, addr 0x57f05fc, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorBool2(bool  value) ;

/// @brief Method SetAnimatorBool3, addr 0x57f064c, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorBool3(bool  value) ;

/// @brief Method SetAnimatorBool4, addr 0x57f069c, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorBool4(bool  value) ;

/// @brief Method SetAnimatorBool5, addr 0x57f06ec, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorBool5(bool  value) ;

/// @brief Method SetAnimatorFloat1, addr 0x57f087c, size 0x4c, virtual false, abstract: false, final false
inline void SetAnimatorFloat1(float_t  value) ;

/// @brief Method SetAnimatorFloat2, addr 0x57f08c8, size 0x4c, virtual false, abstract: false, final false
inline void SetAnimatorFloat2(float_t  value) ;

/// @brief Method SetAnimatorFloat3, addr 0x57f0914, size 0x4c, virtual false, abstract: false, final false
inline void SetAnimatorFloat3(float_t  value) ;

/// @brief Method SetAnimatorFloat4, addr 0x57f0960, size 0x4c, virtual false, abstract: false, final false
inline void SetAnimatorFloat4(float_t  value) ;

/// @brief Method SetAnimatorInteger1, addr 0x57f073c, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorInteger1(int32_t  value) ;

/// @brief Method SetAnimatorInteger2, addr 0x57f078c, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorInteger2(int32_t  value) ;

/// @brief Method SetAnimatorInteger3, addr 0x57f07dc, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorInteger3(int32_t  value) ;

/// @brief Method SetAnimatorInteger4, addr 0x57f082c, size 0x50, virtual false, abstract: false, final false
inline void SetAnimatorInteger4(int32_t  value) ;

/// @brief Method SetAnimatorTrigger, addr 0x57f09ac, size 0x18, virtual false, abstract: false, final false
inline void SetAnimatorTrigger(::StringW  triggerName) ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr int32_t const& __cordl_internal_get_bool1Hash() const;

constexpr int32_t& __cordl_internal_get_bool1Hash() ;

constexpr int32_t const& __cordl_internal_get_bool2Hash() const;

constexpr int32_t& __cordl_internal_get_bool2Hash() ;

constexpr ::StringW const& __cordl_internal_get_bool2ParameterName() const;

constexpr ::StringW& __cordl_internal_get_bool2ParameterName() ;

constexpr int32_t const& __cordl_internal_get_bool3Hash() const;

constexpr int32_t& __cordl_internal_get_bool3Hash() ;

constexpr ::StringW const& __cordl_internal_get_bool3ParameterName() const;

constexpr ::StringW& __cordl_internal_get_bool3ParameterName() ;

constexpr int32_t const& __cordl_internal_get_bool4Hash() const;

constexpr int32_t& __cordl_internal_get_bool4Hash() ;

constexpr ::StringW const& __cordl_internal_get_bool4ParameterName() const;

constexpr ::StringW& __cordl_internal_get_bool4ParameterName() ;

constexpr int32_t const& __cordl_internal_get_bool5Hash() const;

constexpr int32_t& __cordl_internal_get_bool5Hash() ;

constexpr ::StringW const& __cordl_internal_get_bool5ParameterName() const;

constexpr ::StringW& __cordl_internal_get_bool5ParameterName() ;

constexpr ::StringW const& __cordl_internal_get_boolParameterName() const;

constexpr ::StringW& __cordl_internal_get_boolParameterName() ;

constexpr int32_t const& __cordl_internal_get_float1Hash() const;

constexpr int32_t& __cordl_internal_get_float1Hash() ;

constexpr ::StringW const& __cordl_internal_get_float1ParameterName() const;

constexpr ::StringW& __cordl_internal_get_float1ParameterName() ;

constexpr int32_t const& __cordl_internal_get_float2Hash() const;

constexpr int32_t& __cordl_internal_get_float2Hash() ;

constexpr ::StringW const& __cordl_internal_get_float2ParameterName() const;

constexpr ::StringW& __cordl_internal_get_float2ParameterName() ;

constexpr int32_t const& __cordl_internal_get_float3Hash() const;

constexpr int32_t& __cordl_internal_get_float3Hash() ;

constexpr ::StringW const& __cordl_internal_get_float3ParameterName() const;

constexpr ::StringW& __cordl_internal_get_float3ParameterName() ;

constexpr int32_t const& __cordl_internal_get_float4Hash() const;

constexpr int32_t& __cordl_internal_get_float4Hash() ;

constexpr ::StringW const& __cordl_internal_get_float4ParameterName() const;

constexpr ::StringW& __cordl_internal_get_float4ParameterName() ;

constexpr int32_t const& __cordl_internal_get_int1Hash() const;

constexpr int32_t& __cordl_internal_get_int1Hash() ;

constexpr ::StringW const& __cordl_internal_get_int1ParameterName() const;

constexpr ::StringW& __cordl_internal_get_int1ParameterName() ;

constexpr int32_t const& __cordl_internal_get_int2Hash() const;

constexpr int32_t& __cordl_internal_get_int2Hash() ;

constexpr ::StringW const& __cordl_internal_get_int2ParameterName() const;

constexpr ::StringW& __cordl_internal_get_int2ParameterName() ;

constexpr int32_t const& __cordl_internal_get_int3Hash() const;

constexpr int32_t& __cordl_internal_get_int3Hash() ;

constexpr ::StringW const& __cordl_internal_get_int3ParameterName() const;

constexpr ::StringW& __cordl_internal_get_int3ParameterName() ;

constexpr int32_t const& __cordl_internal_get_int4Hash() const;

constexpr int32_t& __cordl_internal_get_int4Hash() ;

constexpr ::StringW const& __cordl_internal_get_int4ParameterName() const;

constexpr ::StringW& __cordl_internal_get_int4ParameterName() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_bool1Hash(int32_t  value) ;

constexpr void __cordl_internal_set_bool2Hash(int32_t  value) ;

constexpr void __cordl_internal_set_bool2ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_bool3Hash(int32_t  value) ;

constexpr void __cordl_internal_set_bool3ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_bool4Hash(int32_t  value) ;

constexpr void __cordl_internal_set_bool4ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_bool5Hash(int32_t  value) ;

constexpr void __cordl_internal_set_bool5ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_boolParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_float1Hash(int32_t  value) ;

constexpr void __cordl_internal_set_float1ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_float2Hash(int32_t  value) ;

constexpr void __cordl_internal_set_float2ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_float3Hash(int32_t  value) ;

constexpr void __cordl_internal_set_float3ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_float4Hash(int32_t  value) ;

constexpr void __cordl_internal_set_float4ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_int1Hash(int32_t  value) ;

constexpr void __cordl_internal_set_int1ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_int2Hash(int32_t  value) ;

constexpr void __cordl_internal_set_int2ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_int3Hash(int32_t  value) ;

constexpr void __cordl_internal_set_int3ParameterName(::StringW  value) ;

constexpr void __cordl_internal_set_int4Hash(int32_t  value) ;

constexpr void __cordl_internal_set_int4ParameterName(::StringW  value) ;

/// @brief Method .ctor, addr 0x57f0a1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetAnimatorBoolCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetAnimatorBoolCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetAnimatorBoolCosmetic(SetAnimatorBoolCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetAnimatorBoolCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetAnimatorBoolCosmetic(SetAnimatorBoolCosmetic const& ) = delete;

/// @brief Field MAX_BOOLS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_BOOLS{static_cast<int32_t>(0x5)};

/// @brief Field MAX_FLOATS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_FLOATS{static_cast<int32_t>(0x4)};

/// @brief Field MAX_INTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_INTS{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{189};

/// [SerializeField]
/// @brief Field animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [SerializeField]
/// @brief Field boolParameterName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___boolParameterName;

/// [SerializeField]
/// @brief Field bool2ParameterName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___bool2ParameterName;

/// [SerializeField]
/// @brief Field bool3ParameterName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___bool3ParameterName;

/// [SerializeField]
/// @brief Field bool4ParameterName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___bool4ParameterName;

/// [SerializeField]
/// @brief Field bool5ParameterName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___bool5ParameterName;

/// [SerializeField]
/// @brief Field int1ParameterName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___int1ParameterName;

/// [SerializeField]
/// @brief Field int2ParameterName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___int2ParameterName;

/// [SerializeField]
/// @brief Field int3ParameterName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___int3ParameterName;

/// [SerializeField]
/// @brief Field int4ParameterName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___int4ParameterName;

/// [SerializeField]
/// @brief Field float1ParameterName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___float1ParameterName;

/// [SerializeField]
/// @brief Field float2ParameterName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___float2ParameterName;

/// [SerializeField]
/// @brief Field float3ParameterName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___float3ParameterName;

/// [SerializeField]
/// @brief Field float4ParameterName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___float4ParameterName;

/// @brief Field bool1Hash, offset: 0x90, size: 0x4, def value: None
 int32_t  ___bool1Hash;

/// @brief Field bool2Hash, offset: 0x94, size: 0x4, def value: None
 int32_t  ___bool2Hash;

/// @brief Field bool3Hash, offset: 0x98, size: 0x4, def value: None
 int32_t  ___bool3Hash;

/// @brief Field bool4Hash, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___bool4Hash;

/// @brief Field bool5Hash, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___bool5Hash;

/// @brief Field int1Hash, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___int1Hash;

/// @brief Field int2Hash, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___int2Hash;

/// @brief Field int3Hash, offset: 0xac, size: 0x4, def value: None
 int32_t  ___int3Hash;

/// @brief Field int4Hash, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___int4Hash;

/// @brief Field float1Hash, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___float1Hash;

/// @brief Field float2Hash, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___float2Hash;

/// @brief Field float3Hash, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___float3Hash;

/// @brief Field float4Hash, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___float4Hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___boolParameterName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool2ParameterName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool3ParameterName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool4ParameterName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool5ParameterName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int1ParameterName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int2ParameterName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int3ParameterName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int4ParameterName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float1ParameterName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float2ParameterName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float3ParameterName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float4ParameterName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool1Hash) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool2Hash) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool3Hash) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool4Hash) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___bool5Hash) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int1Hash) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int2Hash) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int3Hash) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___int4Hash) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float1Hash) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float2Hash) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float3Hash) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetAnimatorBoolCosmetic, ___float4Hash) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetAnimatorBoolCosmetic) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace

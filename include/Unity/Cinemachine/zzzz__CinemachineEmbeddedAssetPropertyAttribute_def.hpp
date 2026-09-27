#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineEmbeddedAssetPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(CinemachineEmbeddedAssetPropertyAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineEmbeddedAssetPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute*, "Unity.Cinemachine", "CinemachineEmbeddedAssetPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineEmbeddedAssetPropertyAttribute
class CORDL_TYPE CinemachineEmbeddedAssetPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field WarnIfNull, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_WarnIfNull, put=__cordl_internal_set_WarnIfNull)) bool  WarnIfNull;

static inline ::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute* New_ctor(bool  warnIfNull) ;

constexpr bool const& __cordl_internal_get_WarnIfNull() const;

constexpr bool& __cordl_internal_get_WarnIfNull() ;

constexpr void __cordl_internal_set_WarnIfNull(bool  value) ;

/// @brief Method .ctor, addr 0xaeb36fc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  warnIfNull) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineEmbeddedAssetPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineEmbeddedAssetPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineEmbeddedAssetPropertyAttribute(CinemachineEmbeddedAssetPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineEmbeddedAssetPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineEmbeddedAssetPropertyAttribute(CinemachineEmbeddedAssetPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22299};

/// @brief Field WarnIfNull, offset: 0x15, size: 0x1, def value: None
 bool  ___WarnIfNull;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute, ___WarnIfNull) == 0x15, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine

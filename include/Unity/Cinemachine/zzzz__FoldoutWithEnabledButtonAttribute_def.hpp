#pragma once
// IWYU pragma private; include "Unity/Cinemachine/FoldoutWithEnabledButtonAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FoldoutWithEnabledButtonAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class FoldoutWithEnabledButtonAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute*, "Unity.Cinemachine", "FoldoutWithEnabledButtonAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.FoldoutWithEnabledButtonAttribute
class CORDL_TYPE FoldoutWithEnabledButtonAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field EnabledPropertyName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnabledPropertyName, put=__cordl_internal_set_EnabledPropertyName)) ::StringW  EnabledPropertyName;

static inline ::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute* New_ctor(::StringW  enabledProperty) ;

constexpr ::StringW const& __cordl_internal_get_EnabledPropertyName() const;

constexpr ::StringW& __cordl_internal_get_EnabledPropertyName() ;

constexpr void __cordl_internal_set_EnabledPropertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0xaeb3618, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  enabledProperty) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoldoutWithEnabledButtonAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoldoutWithEnabledButtonAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FoldoutWithEnabledButtonAttribute(FoldoutWithEnabledButtonAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoldoutWithEnabledButtonAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoldoutWithEnabledButtonAttribute(FoldoutWithEnabledButtonAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22292};

/// @brief Field EnabledPropertyName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EnabledPropertyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute, ___EnabledPropertyName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::FoldoutWithEnabledButtonAttribute) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine

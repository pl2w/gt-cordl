#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/UnityObjectReferenceCache_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityObjectReferenceCache_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class UnityObjectReferenceCache_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "UnityObjectReferenceCache`1");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`1<T>
class CORDL_TYPE UnityObjectReferenceCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field m_CapturedField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CapturedField, put=__cordl_internal_set_m_CapturedField)) T  m_CapturedField;

/// @brief Field m_FieldOrNull, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FieldOrNull, put=__cordl_internal_set_m_FieldOrNull)) T  m_FieldOrNull;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<T>* New_ctor() ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(T  field, ::by_ref<T>  fieldOrNull) ;

constexpr T const& __cordl_internal_get_m_CapturedField() const;

constexpr T& __cordl_internal_get_m_CapturedField() ;

constexpr T const& __cordl_internal_get_m_FieldOrNull() const;

constexpr T& __cordl_internal_get_m_FieldOrNull() ;

constexpr void __cordl_internal_set_m_CapturedField(T  value) ;

constexpr void __cordl_internal_set_m_FieldOrNull(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectReferenceCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectReferenceCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectReferenceCache_1(UnityObjectReferenceCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectReferenceCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectReferenceCache_1(UnityObjectReferenceCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11223};

/// @brief Field m_CapturedField, offset: 0x10, size: 0x8, def value: None
 T  ___m_CapturedField;

/// @brief Field m_FieldOrNull, offset: 0x18, size: 0x8, def value: None
 T  ___m_FieldOrNull;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities

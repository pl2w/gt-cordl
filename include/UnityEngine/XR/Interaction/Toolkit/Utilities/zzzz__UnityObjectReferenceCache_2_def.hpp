#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/UnityObjectReferenceCache_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityObjectReferenceCache_2)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2, "UnityEngine.XR.Interaction.Toolkit.Utilities", "UnityObjectReferenceCache`2");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template<typename TInterface,typename TObject>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.UnityObjectReferenceCache`2<TInterface,TObject>
class CORDL_TYPE UnityObjectReferenceCache_2 : public ::System::Object {
public:
// Declarations
/// @brief Field m_CapturedObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CapturedObject, put=__cordl_internal_set_m_CapturedObject)) TObject  m_CapturedObject;

/// @brief Field m_Interface, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interface, put=__cordl_internal_set_m_Interface)) TInterface  m_Interface;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TInterface Get(TObject  field) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>* New_ctor() ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Set(::by_ref<TObject>  field, TInterface  value) ;

constexpr TObject const& __cordl_internal_get_m_CapturedObject() const;

constexpr TObject& __cordl_internal_get_m_CapturedObject() ;

constexpr TInterface const& __cordl_internal_get_m_Interface() const;

constexpr TInterface& __cordl_internal_get_m_Interface() ;

constexpr void __cordl_internal_set_m_CapturedObject(TObject  value) ;

constexpr void __cordl_internal_set_m_Interface(TInterface  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectReferenceCache_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectReferenceCache_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectReferenceCache_2(UnityObjectReferenceCache_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectReferenceCache_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectReferenceCache_2(UnityObjectReferenceCache_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11224};

/// @brief Field m_CapturedObject, offset: 0x10, size: 0x8, def value: None
 TObject  ___m_CapturedObject;

/// @brief Field m_Interface, offset: 0x18, size: 0x8, def value: None
 TInterface  ___m_Interface;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities

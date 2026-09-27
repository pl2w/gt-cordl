#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/BindingsGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BindingsGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Bindings::BindingsGroup*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Bindings::BindingsGroup*, "Unity.XR.CoreUtils.Bindings", "BindingsGroup");
// Dependencies System.Object
namespace Unity::XR::CoreUtils::Bindings {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Bindings.BindingsGroup
class CORDL_TYPE BindingsGroup : public ::System::Object {
public:
// Declarations
/// @brief Field m_Bindings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Bindings, put=__cordl_internal_set_m_Bindings)) ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>*  m_Bindings;

/// @brief Method AddBinding, addr 0xb3fd7ac, size 0xac, virtual false, abstract: false, final false
inline void AddBinding(::Unity::XR::CoreUtils::Bindings::IEventBinding*  binding) ;

/// @brief Method Bind, addr 0xb3fd930, size 0x108, virtual false, abstract: false, final false
inline void Bind() ;

/// @brief Method Clear, addr 0xb3fdb40, size 0x144, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearBinding, addr 0xb3fd858, size 0xd8, virtual false, abstract: false, final false
inline void ClearBinding(::Unity::XR::CoreUtils::Bindings::IEventBinding*  binding) ;

static inline ::Unity::XR::CoreUtils::Bindings::BindingsGroup* New_ctor() ;

/// @brief Method Unbind, addr 0xb3fda38, size 0x108, virtual false, abstract: false, final false
inline void Unbind() ;

constexpr ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>* const& __cordl_internal_get_m_Bindings() const;

constexpr ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>*& __cordl_internal_get_m_Bindings() ;

constexpr void __cordl_internal_set_m_Bindings(::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>*  value) ;

/// @brief Method .ctor, addr 0xb3fdc84, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindingsGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindingsGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindingsGroup(BindingsGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindingsGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindingsGroup(BindingsGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30459};

/// @brief Field m_Bindings, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::Bindings::IEventBinding*>*  ___m_Bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::Bindings::BindingsGroup, ___m_Bindings) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::Bindings::BindingsGroup) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Bindings

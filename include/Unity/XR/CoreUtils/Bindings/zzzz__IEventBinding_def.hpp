#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/IEventBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventBinding)
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Bindings::IEventBinding*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Bindings::IEventBinding*, "Unity.XR.CoreUtils.Bindings", "IEventBinding");
// Dependencies 
namespace Unity::XR::CoreUtils::Bindings {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Bindings.IEventBinding
class CORDL_TYPE IEventBinding {
public:
// Declarations
 __declspec(property(get=get_IsBound)) bool  IsBound;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Bind() ;

/// @brief Method ClearBinding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearBinding() ;

/// @brief Method Unbind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unbind() ;

/// @brief Method get_IsBound, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsBound() ;

// Ctor Parameters [CppParam { name: "", ty: "IEventBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEventBinding(IEventBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils::Bindings

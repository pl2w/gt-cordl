#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ChannelBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelBinding)
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ChannelBinding;
}
// Write type traits
MARK_REF_T(::System::Security::Authentication::ExtendedProtection::ChannelBinding*);
DEFINE_IL2CPP_CLASS(::System::Security::Authentication::ExtendedProtection::ChannelBinding*, "System.Security.Authentication.ExtendedProtection", "ChannelBinding");
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// CS Name: System.Security.Authentication.ExtendedProtection.ChannelBinding
class CORDL_TYPE ChannelBinding : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Method get_Size, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelBinding(ChannelBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelBinding(ChannelBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Authentication::ExtendedProtection::ChannelBinding) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Authentication::ExtendedProtection

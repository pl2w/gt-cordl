#pragma once
// IWYU pragma private; include "System/Net/NegotiationInfoClass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NegotiationInfoClass)
// Forward declare root types
namespace System::Net {
class NegotiationInfoClass;
}
// Write type traits
MARK_REF_T(::System::Net::NegotiationInfoClass*);
DEFINE_IL2CPP_CLASS(::System::Net::NegotiationInfoClass*, "System.Net", "NegotiationInfoClass");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NegotiationInfoClass
class CORDL_TYPE NegotiationInfoClass : public ::System::Object {
public:
// Declarations
static inline ::System::Net::NegotiationInfoClass* New_ctor() ;

/// @brief Method .ctor, addr 0xadace18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NegotiationInfoClass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NegotiationInfoClass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NegotiationInfoClass(NegotiationInfoClass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NegotiationInfoClass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NegotiationInfoClass(NegotiationInfoClass const& ) = delete;

/// @brief Field Basic offset 0xffffffff size 0x8
static constexpr ::ConstString  Basic{u"Basic"};

/// @brief Field Kerberos offset 0xffffffff size 0x8
static constexpr ::ConstString  Kerberos{u"Kerberos"};

/// @brief Field NTLM offset 0xffffffff size 0x8
static constexpr ::ConstString  NTLM{u"NTLM"};

/// @brief Field Negotiate offset 0xffffffff size 0x8
static constexpr ::ConstString  Negotiate{u"Negotiate"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NegotiationInfoClass) == 0x10, "Size mismatch!");

} // namespace end def System::Net

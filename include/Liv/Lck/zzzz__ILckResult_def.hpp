#pragma once
// IWYU pragma private; include "Liv/Lck/ILckResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckResult)
namespace Liv::Lck {
struct LckError;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Liv::Lck {
class ILckResult;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckResult*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckResult*, "Liv.Lck", "ILckResult");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckResult
class CORDL_TYPE ILckResult {
public:
// Declarations
 __declspec(property(get=get_Error)) ::System::Nullable_1<::Liv::Lck::LckError>  Error;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Success)) bool  Success;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Nullable_1<::Liv::Lck::LckError> get_Error() ;

/// @brief Method get_Message, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Message() ;

/// @brief Method get_Success, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Success() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckResult(ILckResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck

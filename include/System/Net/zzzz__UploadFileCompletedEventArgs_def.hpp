#pragma once
// IWYU pragma private; include "System/Net/UploadFileCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadFileCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class UploadFileCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::UploadFileCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::UploadFileCompletedEventArgs*, "System.Net", "UploadFileCompletedEventArgs");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UploadFileCompletedEventArgs
class CORDL_TYPE UploadFileCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Result)) ::ArrayW<uint8_t>  Result;

/// @brief Field _result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::ArrayW<uint8_t>  _result;

static inline ::System::Net::UploadFileCompletedEventArgs* New_ctor() ;

static inline ::System::Net::UploadFileCompletedEventArgs* New_ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__result() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__result(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xac549f0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4d4cc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

/// @brief Method get_Result, addr 0xac533f4, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Result() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadFileCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadFileCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadFileCompletedEventArgs(UploadFileCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadFileCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadFileCompletedEventArgs(UploadFileCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10478};

/// @brief Field _result, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::UploadFileCompletedEventArgs, ____result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::UploadFileCompletedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::Net

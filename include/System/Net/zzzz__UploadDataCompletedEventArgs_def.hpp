#pragma once
// IWYU pragma private; include "System/Net/UploadDataCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadDataCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class UploadDataCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::UploadDataCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::UploadDataCompletedEventArgs*, "System.Net", "UploadDataCompletedEventArgs");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UploadDataCompletedEventArgs
class CORDL_TYPE UploadDataCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Result)) ::ArrayW<uint8_t>  Result;

/// @brief Field _result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::ArrayW<uint8_t>  _result;

static inline ::System::Net::UploadDataCompletedEventArgs* New_ctor() ;

static inline ::System::Net::UploadDataCompletedEventArgs* New_ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__result() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__result(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xac549b8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4d014, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

/// @brief Method get_Result, addr 0xac53398, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Result() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadDataCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadDataCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadDataCompletedEventArgs(UploadDataCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadDataCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadDataCompletedEventArgs(UploadDataCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10477};

/// @brief Field _result, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::UploadDataCompletedEventArgs, ____result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::UploadDataCompletedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::Net

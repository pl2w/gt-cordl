#pragma once
// IWYU pragma private; include "System/Net/DownloadStringCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DownloadStringCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class DownloadStringCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::DownloadStringCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::DownloadStringCompletedEventArgs*, "System.Net", "DownloadStringCompletedEventArgs");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DownloadStringCompletedEventArgs
class CORDL_TYPE DownloadStringCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Result)) ::StringW  Result;

/// @brief Field _result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::StringW  _result;

static inline ::System::Net::DownloadStringCompletedEventArgs* New_ctor() ;

static inline ::System::Net::DownloadStringCompletedEventArgs* New_ctor(::StringW  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

constexpr ::StringW const& __cordl_internal_get__result() const;

constexpr ::StringW& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__result(::StringW  value) ;

/// @brief Method .ctor, addr 0xac54910, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4be24, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

/// @brief Method get_Result, addr 0xac531ac, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_Result() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadStringCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadStringCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadStringCompletedEventArgs(DownloadStringCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadStringCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadStringCompletedEventArgs(DownloadStringCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10474};

/// @brief Field _result, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DownloadStringCompletedEventArgs, ____result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::DownloadStringCompletedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::Net

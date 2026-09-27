#pragma once
// IWYU pragma private; include "System/Net/UploadValuesCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadValuesCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class UploadValuesCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::UploadValuesCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::UploadValuesCompletedEventArgs*, "System.Net", "UploadValuesCompletedEventArgs");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UploadValuesCompletedEventArgs
class CORDL_TYPE UploadValuesCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Result)) ::ArrayW<uint8_t>  Result;

/// @brief Field _result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::ArrayW<uint8_t>  _result;

static inline ::System::Net::UploadValuesCompletedEventArgs* New_ctor() ;

static inline ::System::Net::UploadValuesCompletedEventArgs* New_ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__result() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__result(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xac54a28, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4d918, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

/// @brief Method get_Result, addr 0xac53450, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Result() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadValuesCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadValuesCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadValuesCompletedEventArgs(UploadValuesCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadValuesCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadValuesCompletedEventArgs(UploadValuesCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10479};

/// @brief Field _result, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::UploadValuesCompletedEventArgs, ____result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::UploadValuesCompletedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::Net

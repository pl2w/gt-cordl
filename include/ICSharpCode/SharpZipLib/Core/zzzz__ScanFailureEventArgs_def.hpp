#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ScanFailureEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScanFailureEventArgs)
namespace System {
class Exception;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class ScanFailureEventArgs;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs*, "ICSharpCode.SharpZipLib.Core", "ScanFailureEventArgs");
// Dependencies System.EventArgs
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs
class CORDL_TYPE ScanFailureEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_ContinueRunning, put=set_ContinueRunning)) bool  ContinueRunning;

 __declspec(property(get=get_Exception)) ::System::Exception*  Exception;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field continueRunning_, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueRunning_, put=__cordl_internal_set_continueRunning_)) bool  continueRunning_;

/// @brief Field exception_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception_, put=__cordl_internal_set_exception_)) ::System::Exception*  exception_;

/// @brief Field name_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name_, put=__cordl_internal_set_name_)) ::StringW  name_;

static inline ::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs* New_ctor(::StringW  name, ::System::Exception*  e) ;

constexpr bool const& __cordl_internal_get_continueRunning_() const;

constexpr bool& __cordl_internal_get_continueRunning_() ;

constexpr ::System::Exception* const& __cordl_internal_get_exception_() const;

constexpr ::System::Exception*& __cordl_internal_get_exception_() ;

constexpr ::StringW const& __cordl_internal_get_name_() const;

constexpr ::StringW& __cordl_internal_get_name_() ;

constexpr void __cordl_internal_set_continueRunning_(bool  value) ;

constexpr void __cordl_internal_set_exception_(::System::Exception*  value) ;

constexpr void __cordl_internal_set_name_(::StringW  value) ;

/// @brief Method .ctor, addr 0x9ff9c7c, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Exception*  e) ;

/// @brief Method get_ContinueRunning, addr 0x9ff9d20, size 0x8, virtual false, abstract: false, final false
inline bool get_ContinueRunning() ;

/// @brief Method get_Exception, addr 0x9ff9d18, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// @brief Method get_Name, addr 0x9ff9d10, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method set_ContinueRunning, addr 0x9ff9d28, size 0x8, virtual false, abstract: false, final false
inline void set_ContinueRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScanFailureEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScanFailureEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScanFailureEventArgs(ScanFailureEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScanFailureEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScanFailureEventArgs(ScanFailureEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17421};

/// @brief Field name_, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name_;

/// @brief Field exception_, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ___exception_;

/// @brief Field continueRunning_, offset: 0x20, size: 0x1, def value: None
 bool  ___continueRunning_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs, ___name_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs, ___exception_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs, ___continueRunning_) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::ScanFailureEventArgs) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

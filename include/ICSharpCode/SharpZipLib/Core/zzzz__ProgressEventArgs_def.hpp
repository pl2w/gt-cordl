#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/ProgressEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressEventArgs)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class ProgressEventArgs;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs*, "ICSharpCode.SharpZipLib.Core", "ProgressEventArgs");
// Dependencies System.EventArgs
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.ProgressEventArgs
class CORDL_TYPE ProgressEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_ContinueRunning, put=set_ContinueRunning)) bool  ContinueRunning;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_Processed)) int64_t  Processed;

 __declspec(property(get=get_Target)) int64_t  Target;

/// @brief Field continueRunning_, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueRunning_, put=__cordl_internal_set_continueRunning_)) bool  continueRunning_;

/// @brief Field name_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name_, put=__cordl_internal_set_name_)) ::StringW  name_;

/// @brief Field processed_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_processed_, put=__cordl_internal_set_processed_)) int64_t  processed_;

/// @brief Field target_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target_, put=__cordl_internal_set_target_)) int64_t  target_;

static inline ::ICSharpCode::SharpZipLib::Core::ProgressEventArgs* New_ctor(::StringW  name, int64_t  processed, int64_t  target) ;

constexpr bool const& __cordl_internal_get_continueRunning_() const;

constexpr bool& __cordl_internal_get_continueRunning_() ;

constexpr ::StringW const& __cordl_internal_get_name_() const;

constexpr ::StringW& __cordl_internal_get_name_() ;

constexpr int64_t const& __cordl_internal_get_processed_() const;

constexpr int64_t& __cordl_internal_get_processed_() ;

constexpr int64_t const& __cordl_internal_get_target_() const;

constexpr int64_t& __cordl_internal_get_target_() ;

constexpr void __cordl_internal_set_continueRunning_(bool  value) ;

constexpr void __cordl_internal_set_name_(::StringW  value) ;

constexpr void __cordl_internal_set_processed_(int64_t  value) ;

constexpr void __cordl_internal_set_target_(int64_t  value) ;

/// @brief Method .ctor, addr 0x9ff9b60, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int64_t  processed, int64_t  target) ;

/// @brief Method get_ContinueRunning, addr 0x9ff9bfc, size 0x8, virtual false, abstract: false, final false
inline bool get_ContinueRunning() ;

/// @brief Method get_Name, addr 0x9ff9bf4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_PercentComplete, addr 0x9ff9c0c, size 0x34, virtual false, abstract: false, final false
inline float_t get_PercentComplete() ;

/// @brief Method get_Processed, addr 0x9ff9c40, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Processed() ;

/// @brief Method get_Target, addr 0x9ff9c48, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Target() ;

/// @brief Method set_ContinueRunning, addr 0x9ff9c04, size 0x8, virtual false, abstract: false, final false
inline void set_ContinueRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressEventArgs(ProgressEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressEventArgs(ProgressEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17419};

/// @brief Field name_, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name_;

/// @brief Field processed_, offset: 0x18, size: 0x8, def value: None
 int64_t  ___processed_;

/// @brief Field target_, offset: 0x20, size: 0x8, def value: None
 int64_t  ___target_;

/// @brief Field continueRunning_, offset: 0x28, size: 0x1, def value: None
 bool  ___continueRunning_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs, ___name_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs, ___processed_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs, ___target_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs, ___continueRunning_) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::ProgressEventArgs) == 0x30, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core

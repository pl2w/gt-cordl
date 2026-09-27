#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/StaticDiskDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StaticDiskDataSource)
namespace ICSharpCode::SharpZipLib::Zip {
class IStaticDataSource;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class StaticDiskDataSource;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource*, "ICSharpCode.SharpZipLib.Zip", "StaticDiskDataSource");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource
class CORDL_TYPE StaticDiskDataSource : public ::System::Object {
public:
// Declarations
/// @brief Field fileName_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName_, put=__cordl_internal_set_fileName_)) ::StringW  fileName_;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::IStaticDataSource"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*() noexcept;

/// @brief Method GetSource, addr 0x9f8ea24, size 0x18, virtual true, abstract: false, final true
inline ::System::IO::Stream* GetSource() ;

static inline ::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource* New_ctor(::StringW  fileName) ;

constexpr ::StringW const& __cordl_internal_get_fileName_() const;

constexpr ::StringW& __cordl_internal_get_fileName_() ;

constexpr void __cordl_internal_set_fileName_(::StringW  value) ;

/// @brief Method .ctor, addr 0x9f8e9f4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName) ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::IStaticDataSource"
constexpr ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* i___ICSharpCode__SharpZipLib__Zip__IStaticDataSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticDiskDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticDiskDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticDiskDataSource(StaticDiskDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticDiskDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticDiskDataSource(StaticDiskDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17355};

/// @brief Field fileName_, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___fileName_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource, ___fileName_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::StaticDiskDataSource) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip

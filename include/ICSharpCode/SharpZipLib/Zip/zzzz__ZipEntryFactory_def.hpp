#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntryFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntryFactory_TimeSetting_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntryFactory)
namespace GlobalNamespace {
struct ZipEntryFactory_TimeSetting;
}
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IEntryFactory;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntryFactory;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory*, "ICSharpCode.SharpZipLib.Zip", "ZipEntryFactory");
// Dependencies ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::TimeSetting, System.DateTime, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipEntryFactory
class CORDL_TYPE ZipEntryFactory : public ::System::Object {
public:
// Declarations
using TimeSetting = ::GlobalNamespace::ZipEntryFactory_TimeSetting;

 __declspec(property(get=get_FixedDateTime, put=set_FixedDateTime)) ::System::DateTime  FixedDateTime;

 __declspec(property(get=get_GetAttributes, put=set_GetAttributes)) int32_t  GetAttributes;

 __declspec(property(get=get_IsUnicodeText, put=set_IsUnicodeText)) bool  IsUnicodeText;

 __declspec(property(get=get_NameTransform, put=set_NameTransform)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  NameTransform;

 __declspec(property(get=get_SetAttributes, put=set_SetAttributes)) int32_t  SetAttributes;

 __declspec(property(get=get_Setting, put=set_Setting)) ::GlobalNamespace::ZipEntryFactory_TimeSetting  Setting;

/// @brief Field fixedDateTime_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fixedDateTime_, put=__cordl_internal_set_fixedDateTime_)) ::System::DateTime  fixedDateTime_;

/// @brief Field getAttributes_, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_getAttributes_, put=__cordl_internal_set_getAttributes_)) int32_t  getAttributes_;

/// @brief Field isUnicodeText_, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUnicodeText_, put=__cordl_internal_set_isUnicodeText_)) bool  isUnicodeText_;

/// @brief Field nameTransform_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTransform_, put=__cordl_internal_set_nameTransform_)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  nameTransform_;

/// @brief Field setAttributes_, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setAttributes_, put=__cordl_internal_set_setAttributes_)) int32_t  setAttributes_;

/// @brief Field timeSetting_, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSetting_, put=__cordl_internal_set_timeSetting_)) ::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting_;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::IEntryFactory"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*() noexcept;

/// @brief Method MakeDirectoryEntry, addr 0x9f80fec, size 0x8, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeDirectoryEntry(::StringW  directoryName) ;

/// @brief Method MakeDirectoryEntry, addr 0x9f80ff4, size 0x2c0, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeDirectoryEntry(::StringW  directoryName, bool  useFileSystem) ;

/// @brief Method MakeFileEntry, addr 0x9f80ce8, size 0xc, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::StringW  fileName) ;

/// @brief Method MakeFileEntry, addr 0x9f80cf4, size 0x2ec, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::StringW  fileName, ::StringW  entryName, bool  useFileSystem) ;

/// @brief Method MakeFileEntry, addr 0x9f80fe0, size 0xc, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::StringW  fileName, bool  useFileSystem) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory* New_ctor(::System::DateTime  time) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory* New_ctor(::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting) ;

constexpr ::System::DateTime const& __cordl_internal_get_fixedDateTime_() const;

constexpr ::System::DateTime& __cordl_internal_get_fixedDateTime_() ;

constexpr int32_t const& __cordl_internal_get_getAttributes_() const;

constexpr int32_t& __cordl_internal_get_getAttributes_() ;

constexpr bool const& __cordl_internal_get_isUnicodeText_() const;

constexpr bool& __cordl_internal_get_isUnicodeText_() ;

constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* const& __cordl_internal_get_nameTransform_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform*& __cordl_internal_get_nameTransform_() ;

constexpr int32_t const& __cordl_internal_get_setAttributes_() const;

constexpr int32_t& __cordl_internal_get_setAttributes_() ;

constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting const& __cordl_internal_get_timeSetting_() const;

constexpr ::GlobalNamespace::ZipEntryFactory_TimeSetting& __cordl_internal_get_timeSetting_() ;

constexpr void __cordl_internal_set_fixedDateTime_(::System::DateTime  value) ;

constexpr void __cordl_internal_set_getAttributes_(int32_t  value) ;

constexpr void __cordl_internal_set_isUnicodeText_(bool  value) ;

constexpr void __cordl_internal_set_nameTransform_(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

constexpr void __cordl_internal_set_setAttributes_(int32_t  value) ;

constexpr void __cordl_internal_set_timeSetting_(::GlobalNamespace::ZipEntryFactory_TimeSetting  value) ;

/// @brief Method .ctor, addr 0x9f7bb78, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7be08, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  time) ;

/// @brief Method .ctor, addr 0x9f7bd14, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting) ;

/// @brief Method get_FixedDateTime, addr 0x9f80cb0, size 0x8, virtual true, abstract: false, final true
inline ::System::DateTime get_FixedDateTime() ;

/// @brief Method get_GetAttributes, addr 0x9f80cb8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GetAttributes() ;

/// @brief Method get_IsUnicodeText, addr 0x9f80cd8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsUnicodeText() ;

/// @brief Method get_NameTransform, addr 0x9f80c30, size 0x8, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform() ;

/// @brief Method get_SetAttributes, addr 0x9f80cc8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SetAttributes() ;

/// @brief Method get_Setting, addr 0x9f80ca0, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::ZipEntryFactory_TimeSetting get_Setting() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::IEntryFactory"
constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* i___ICSharpCode__SharpZipLib__Zip__IEntryFactory() noexcept;

/// @brief Method set_FixedDateTime, addr 0x9f80b5c, size 0xd4, virtual false, abstract: false, final false
inline void set_FixedDateTime(::System::DateTime  value) ;

/// @brief Method set_GetAttributes, addr 0x9f80cc0, size 0x8, virtual false, abstract: false, final false
inline void set_GetAttributes(int32_t  value) ;

/// @brief Method set_IsUnicodeText, addr 0x9f80ce0, size 0x8, virtual false, abstract: false, final false
inline void set_IsUnicodeText(bool  value) ;

/// @brief Method set_NameTransform, addr 0x9f80c38, size 0x68, virtual true, abstract: false, final true
inline void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

/// @brief Method set_SetAttributes, addr 0x9f80cd0, size 0x8, virtual false, abstract: false, final false
inline void set_SetAttributes(int32_t  value) ;

/// @brief Method set_Setting, addr 0x9f80ca8, size 0x8, virtual false, abstract: false, final false
inline void set_Setting(::GlobalNamespace::ZipEntryFactory_TimeSetting  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipEntryFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipEntryFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipEntryFactory(ZipEntryFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipEntryFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipEntryFactory(ZipEntryFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17328};

/// @brief Field nameTransform_, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::INameTransform*  ___nameTransform_;

/// @brief Field fixedDateTime_, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ___fixedDateTime_;

/// @brief Field timeSetting_, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ZipEntryFactory_TimeSetting  ___timeSetting_;

/// @brief Field isUnicodeText_, offset: 0x24, size: 0x1, def value: None
 bool  ___isUnicodeText_;

/// @brief Field getAttributes_, offset: 0x28, size: 0x4, def value: None
 int32_t  ___getAttributes_;

/// @brief Field setAttributes_, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___setAttributes_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory, ___nameTransform_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory, ___fixedDateTime_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory, ___timeSetting_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory, ___isUnicodeText_) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory, ___getAttributes_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory, ___setAttributes_) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory) == 0x30, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip

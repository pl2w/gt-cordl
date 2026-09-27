#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipNameTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ZipNameTransform)
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipNameTransform;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipNameTransform*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipNameTransform*, "ICSharpCode.SharpZipLib.Zip", "ZipNameTransform");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipNameTransform
class CORDL_TYPE ZipNameTransform : public ::System::Object {
public:
// Declarations
/// @brief Field InvalidEntryChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidEntryChars, put=setStaticF_InvalidEntryChars)) ::ArrayW<char16_t>  InvalidEntryChars;

/// @brief Field InvalidEntryCharsRelaxed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidEntryCharsRelaxed, put=setStaticF_InvalidEntryCharsRelaxed)) ::ArrayW<char16_t>  InvalidEntryCharsRelaxed;

 __declspec(property(get=get_TrimPrefix, put=set_TrimPrefix)) ::StringW  TrimPrefix;

/// @brief Field trimPrefix_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trimPrefix_, put=__cordl_internal_set_trimPrefix_)) ::StringW  trimPrefix_;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr operator  ::ICSharpCode::SharpZipLib::Core::INameTransform*() noexcept;

/// @brief Method IsValidName, addr 0x9fce108, size 0x90, virtual false, abstract: false, final false
static inline bool IsValidName(::StringW  name) ;

/// @brief Method IsValidName, addr 0x9fce048, size 0xc0, virtual false, abstract: false, final false
static inline bool IsValidName(::StringW  name, bool  relaxed) ;

/// @brief Method MakeValidName, addr 0x9fcdedc, size 0x164, virtual false, abstract: false, final false
static inline ::StringW MakeValidName(::StringW  name, char16_t  replacement) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipNameTransform* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipNameTransform* New_ctor(::StringW  trimPrefix) ;

/// @brief Method TransformDirectory, addr 0x9fcdc74, size 0xe4, virtual true, abstract: false, final true
inline ::StringW TransformDirectory(::StringW  name) ;

/// @brief Method TransformFile, addr 0x9fcdd58, size 0x184, virtual true, abstract: false, final true
inline ::StringW TransformFile(::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get_trimPrefix_() const;

constexpr ::StringW& __cordl_internal_get_trimPrefix_() ;

constexpr void __cordl_internal_set_trimPrefix_(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fcda20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fcda28, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  trimPrefix) ;

static inline ::ArrayW<char16_t> getStaticF_InvalidEntryChars() ;

static inline ::ArrayW<char16_t> getStaticF_InvalidEntryCharsRelaxed() ;

/// @brief Method get_TrimPrefix, addr 0x9fce040, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TrimPrefix() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* i___ICSharpCode__SharpZipLib__Core__INameTransform() noexcept;

static inline void setStaticF_InvalidEntryChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_InvalidEntryCharsRelaxed(::ArrayW<char16_t>  value) ;

/// @brief Method set_TrimPrefix, addr 0x9fcda54, size 0x40, virtual false, abstract: false, final false
inline void set_TrimPrefix(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipNameTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipNameTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipNameTransform(ZipNameTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipNameTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipNameTransform(ZipNameTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17366};

/// @brief Field trimPrefix_, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___trimPrefix_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipNameTransform, ___trimPrefix_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipNameTransform) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip

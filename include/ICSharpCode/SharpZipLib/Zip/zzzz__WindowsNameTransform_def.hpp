#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/WindowsNameTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsNameTransform)
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class WindowsNameTransform;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform*, "ICSharpCode.SharpZipLib.Zip", "WindowsNameTransform");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.WindowsNameTransform
class CORDL_TYPE WindowsNameTransform : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AllowParentTraversal, put=set_AllowParentTraversal)) bool  AllowParentTraversal;

 __declspec(property(get=get_BaseDirectory, put=set_BaseDirectory)) ::StringW  BaseDirectory;

/// @brief Field InvalidEntryChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidEntryChars, put=setStaticF_InvalidEntryChars)) ::ArrayW<char16_t>  InvalidEntryChars;

 __declspec(property(get=get_Replacement, put=set_Replacement)) char16_t  Replacement;

 __declspec(property(get=get_TrimIncomingPaths, put=set_TrimIncomingPaths)) bool  TrimIncomingPaths;

/// @brief Field _allowParentTraversal, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowParentTraversal, put=__cordl_internal_set__allowParentTraversal)) bool  _allowParentTraversal;

/// @brief Field _baseDirectory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseDirectory, put=__cordl_internal_set__baseDirectory)) ::StringW  _baseDirectory;

/// @brief Field _replacementChar, offset 0x1a, size 0x2 
 __declspec(property(get=__cordl_internal_get__replacementChar, put=__cordl_internal_set__replacementChar)) char16_t  _replacementChar;

/// @brief Field _trimIncomingPaths, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__trimIncomingPaths, put=__cordl_internal_set__trimIncomingPaths)) bool  _trimIncomingPaths;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr operator  ::ICSharpCode::SharpZipLib::Core::INameTransform*() noexcept;

/// @brief Method IsValidName, addr 0x9f7f070, size 0x90, virtual false, abstract: false, final false
static inline bool IsValidName(::StringW  name) ;

/// @brief Method MakeValidName, addr 0x9f7ec88, size 0x3e8, virtual false, abstract: false, final false
static inline ::StringW MakeValidName(::StringW  name, char16_t  replacement) ;

static inline ::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform* New_ctor(::StringW  baseDirectory, bool  allowParentTraversal) ;

/// @brief Method TransformDirectory, addr 0x9f7e94c, size 0x12c, virtual true, abstract: false, final true
inline ::StringW TransformDirectory(::StringW  name) ;

/// @brief Method TransformFile, addr 0x9f7ea78, size 0x210, virtual true, abstract: false, final true
inline ::StringW TransformFile(::StringW  name) ;

constexpr bool const& __cordl_internal_get__allowParentTraversal() const;

constexpr bool& __cordl_internal_get__allowParentTraversal() ;

constexpr ::StringW const& __cordl_internal_get__baseDirectory() const;

constexpr ::StringW& __cordl_internal_get__baseDirectory() ;

constexpr char16_t const& __cordl_internal_get__replacementChar() const;

constexpr char16_t& __cordl_internal_get__replacementChar() ;

constexpr bool const& __cordl_internal_get__trimIncomingPaths() const;

constexpr bool& __cordl_internal_get__trimIncomingPaths() ;

constexpr void __cordl_internal_set__allowParentTraversal(bool  value) ;

constexpr void __cordl_internal_set__baseDirectory(::StringW  value) ;

constexpr void __cordl_internal_set__replacementChar(char16_t  value) ;

constexpr void __cordl_internal_set__trimIncomingPaths(bool  value) ;

/// @brief Method .ctor, addr 0x9f7e914, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7cdfc, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::StringW  baseDirectory, bool  allowParentTraversal) ;

static inline ::ArrayW<char16_t> getStaticF_InvalidEntryChars() ;

/// @brief Method get_AllowParentTraversal, addr 0x9f7e92c, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowParentTraversal() ;

/// @brief Method get_BaseDirectory, addr 0x9f7e924, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_BaseDirectory() ;

/// @brief Method get_Replacement, addr 0x9f7f100, size 0x8, virtual false, abstract: false, final false
inline char16_t get_Replacement() ;

/// @brief Method get_TrimIncomingPaths, addr 0x9f7e93c, size 0x8, virtual false, abstract: false, final false
inline bool get_TrimIncomingPaths() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* i___ICSharpCode__SharpZipLib__Core__INameTransform() noexcept;

static inline void setStaticF_InvalidEntryChars(::ArrayW<char16_t>  value) ;

/// @brief Method set_AllowParentTraversal, addr 0x9f7e934, size 0x8, virtual false, abstract: false, final false
inline void set_AllowParentTraversal(bool  value) ;

/// @brief Method set_BaseDirectory, addr 0x9f7e85c, size 0xb8, virtual false, abstract: false, final false
inline void set_BaseDirectory(::StringW  value) ;

/// @brief Method set_Replacement, addr 0x9f7f108, size 0x184, virtual false, abstract: false, final false
inline void set_Replacement(char16_t  value) ;

/// @brief Method set_TrimIncomingPaths, addr 0x9f7e944, size 0x8, virtual false, abstract: false, final false
inline void set_TrimIncomingPaths(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsNameTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsNameTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsNameTransform(WindowsNameTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsNameTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsNameTransform(WindowsNameTransform const& ) = delete;

/// @brief Field MaxPath offset 0xffffffff size 0x4
static constexpr int32_t  MaxPath{static_cast<int32_t>(0x104)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17316};

/// @brief Field _baseDirectory, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____baseDirectory;

/// @brief Field _trimIncomingPaths, offset: 0x18, size: 0x1, def value: None
 bool  ____trimIncomingPaths;

/// @brief Field _replacementChar, offset: 0x1a, size: 0x2, def value: None
 char16_t  ____replacementChar;

/// @brief Field _allowParentTraversal, offset: 0x1c, size: 0x1, def value: None
 bool  ____allowParentTraversal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform, ____baseDirectory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform, ____trimIncomingPaths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform, ____replacementChar) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform, ____allowParentTraversal) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::WindowsNameTransform) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip

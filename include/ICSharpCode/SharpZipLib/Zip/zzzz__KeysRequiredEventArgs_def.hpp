#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/KeysRequiredEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeysRequiredEventArgs)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class KeysRequiredEventArgs;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*, "ICSharpCode.SharpZipLib.Zip", "KeysRequiredEventArgs");
// Dependencies System.EventArgs
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
class CORDL_TYPE KeysRequiredEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_FileName)) ::StringW  FileName;

 __declspec(property(get=get_Key, put=set_Key)) ::ArrayW<uint8_t>  Key;

/// @brief Field fileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName, put=__cordl_internal_set_fileName)) ::StringW  fileName;

/// @brief Field key, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::ArrayW<uint8_t>  key;

static inline ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs* New_ctor(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs* New_ctor(::StringW  name, ::ArrayW<uint8_t>  keyValue) ;

constexpr ::StringW const& __cordl_internal_get_fileName() const;

constexpr ::StringW& __cordl_internal_get_fileName() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_key() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_key() ;

constexpr void __cordl_internal_set_fileName(::StringW  value) ;

constexpr void __cordl_internal_set_key(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9f8397c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x9f839f0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<uint8_t>  keyValue) ;

/// @brief Method get_FileName, addr 0x9f83a78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// @brief Method get_Key, addr 0x9f83a80, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key, addr 0x9f83a88, size 0x8, virtual false, abstract: false, final false
inline void set_Key(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeysRequiredEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeysRequiredEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KeysRequiredEventArgs(KeysRequiredEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeysRequiredEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeysRequiredEventArgs(KeysRequiredEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17337};

/// @brief Field fileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___fileName;

/// @brief Field key, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs, ___fileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs, ___key) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip

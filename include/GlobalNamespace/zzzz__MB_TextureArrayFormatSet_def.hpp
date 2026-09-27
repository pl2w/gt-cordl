#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayFormatSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_def.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_TextureArrayFormatSet)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB_TextureCompressionQuality;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_TextureArrayFormatSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TextureArrayFormatSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TextureArrayFormatSet*, "", "MB_TextureArrayFormatSet");
// Dependencies DigitalOpus.MB.Core.MB_TextureCompressionQuality, MB_TextureArrayFormat, System.Object, UnityEngine.TextureFormat
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TextureArrayFormatSet
class CORDL_TYPE MB_TextureArrayFormatSet : public ::System::Object {
public:
// Declarations
/// @brief Field defaultCompressionQuality, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultCompressionQuality, put=__cordl_internal_set_defaultCompressionQuality)) ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  defaultCompressionQuality;

/// @brief Field defaultFormat, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultFormat, put=__cordl_internal_set_defaultFormat)) ::UnityEngine::TextureFormat  defaultFormat;

/// @brief Field formatOverrides, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_formatOverrides, put=__cordl_internal_set_formatOverrides)) ::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*>  formatOverrides;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method GetFormatForProperty, addr 0x9d72eac, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat GetFormatForProperty(::StringW  propName, ::by_ref<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>  compressionQuality) ;

static inline ::GlobalNamespace::MB_TextureArrayFormatSet* New_ctor() ;

/// @brief Method ValidateTextureImporterFormatsExistsForTextureFormats, addr 0x9d72ab8, size 0x3f4, virtual false, abstract: false, final false
inline bool ValidateTextureImporterFormatsExistsForTextureFormats(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, int32_t  idx) ;

constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality const& __cordl_internal_get_defaultCompressionQuality() const;

constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality& __cordl_internal_get_defaultCompressionQuality() ;

constexpr ::UnityEngine::TextureFormat const& __cordl_internal_get_defaultFormat() const;

constexpr ::UnityEngine::TextureFormat& __cordl_internal_get_defaultFormat() ;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*> const& __cordl_internal_get_formatOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*>& __cordl_internal_get_formatOverrides() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_defaultCompressionQuality(::DigitalOpus::MB::Core::MB_TextureCompressionQuality  value) ;

constexpr void __cordl_internal_set_defaultFormat(::UnityEngine::TextureFormat  value) ;

constexpr void __cordl_internal_set_formatOverrides(::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d72f60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureArrayFormatSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayFormatSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrayFormatSet(MB_TextureArrayFormatSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayFormatSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrayFormatSet(MB_TextureArrayFormatSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22557};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field defaultFormat, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::TextureFormat  ___defaultFormat;

/// [Tooltip("The ammount of time Unity takes exploring different compression options to find the compressed version of a texture that most closely matches the original art.This is only used For iOS (and some Android formats)")]
/// @brief Field defaultCompressionQuality, offset: 0x1c, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  ___defaultCompressionQuality;

/// [NonReorderable]
/// @brief Field formatOverrides, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_TextureArrayFormat*>  ___formatOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormatSet, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormatSet, ___defaultFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormatSet, ___defaultCompressionQuality) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormatSet, ___formatOverrides) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TextureArrayFormatSet) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

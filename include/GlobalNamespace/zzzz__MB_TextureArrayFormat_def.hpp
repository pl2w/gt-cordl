#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_TextureArrayFormat)
// Forward declare root types
namespace GlobalNamespace {
class MB_TextureArrayFormat;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TextureArrayFormat*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TextureArrayFormat*, "", "MB_TextureArrayFormat");
// Dependencies DigitalOpus.MB.Core.MB_TextureCompressionQuality, System.Object, UnityEngine.TextureFormat
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TextureArrayFormat
class CORDL_TYPE MB_TextureArrayFormat : public ::System::Object {
public:
// Declarations
/// @brief Field compressionQuality, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressionQuality, put=__cordl_internal_set_compressionQuality)) ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  compressionQuality;

/// @brief Field format, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_format, put=__cordl_internal_set_format)) ::UnityEngine::TextureFormat  format;

/// @brief Field propertyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyName, put=__cordl_internal_set_propertyName)) ::StringW  propertyName;

static inline ::GlobalNamespace::MB_TextureArrayFormat* New_ctor() ;

constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality const& __cordl_internal_get_compressionQuality() const;

constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality& __cordl_internal_get_compressionQuality() ;

constexpr ::UnityEngine::TextureFormat const& __cordl_internal_get_format() const;

constexpr ::UnityEngine::TextureFormat& __cordl_internal_get_format() ;

constexpr ::StringW const& __cordl_internal_get_propertyName() const;

constexpr ::StringW& __cordl_internal_get_propertyName() ;

constexpr void __cordl_internal_set_compressionQuality(::DigitalOpus::MB::Core::MB_TextureCompressionQuality  value) ;

constexpr void __cordl_internal_set_format(::UnityEngine::TextureFormat  value) ;

constexpr void __cordl_internal_set_propertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d72aa8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureArrayFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayFormat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrayFormat(MB_TextureArrayFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayFormat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrayFormat(MB_TextureArrayFormat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22556};

/// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___propertyName;

/// @brief Field format, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::TextureFormat  ___format;

/// [Tooltip("The ammount of time Unity takes exploring different compression options to find the compressed version of a texture that most closely matches the original art.This is only used For iOS (and some Android formats)")]
/// @brief Field compressionQuality, offset: 0x1c, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  ___compressionQuality;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormat, ___propertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormat, ___format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureArrayFormat, ___compressionQuality) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TextureArrayFormat) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

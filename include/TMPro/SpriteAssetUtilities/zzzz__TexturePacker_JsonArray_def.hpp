#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_Meta_def.hpp"
CORDL_MODULE_EXPORT(TexturePacker_JsonArray)
namespace GlobalNamespace {
struct TexturePacker_JsonArray_Frame;
}
namespace GlobalNamespace {
struct TexturePacker_JsonArray_Meta;
}
namespace GlobalNamespace {
struct TexturePacker_JsonArray_SpriteFrame;
}
namespace GlobalNamespace {
struct TexturePacker_JsonArray_SpriteSize;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray_SpriteDataObject;
}
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray;
}
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray_SpriteDataObject;
}
// Write type traits
MARK_REF_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*);
MARK_REF_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*);
DEFINE_IL2CPP_CLASS(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray");
DEFINE_IL2CPP_CLASS(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteDataObject");
// Dependencies System.Object
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray
class CORDL_TYPE TexturePacker_JsonArray : public ::System::Object {
public:
// Declarations
using Frame = ::GlobalNamespace::TexturePacker_JsonArray_Frame;

using Meta = ::GlobalNamespace::TexturePacker_JsonArray_Meta;

using SpriteFrame = ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame;

using SpriteSize = ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize;

using SpriteDataObject = ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject;

static inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* New_ctor() ;

/// @brief Method .ctor, addr 0xb3aea24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TexturePacker_JsonArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TexturePacker_JsonArray(TexturePacker_JsonArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TexturePacker_JsonArray(TexturePacker_JsonArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23061};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray) == 0x10, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities
// Dependencies System.Object, TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::Meta
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteDataObject
class CORDL_TYPE TexturePacker_JsonArray_SpriteDataObject : public ::System::Object {
public:
// Declarations
/// @brief Field frames, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_frames, put=__cordl_internal_set_frames)) ::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>*  frames;

/// @brief Field meta, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_meta, put=__cordl_internal_set_meta)) ::GlobalNamespace::TexturePacker_JsonArray_Meta  meta;

static inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>* const& __cordl_internal_get_frames() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>*& __cordl_internal_get_frames() ;

constexpr ::GlobalNamespace::TexturePacker_JsonArray_Meta const& __cordl_internal_get_meta() const;

constexpr ::GlobalNamespace::TexturePacker_JsonArray_Meta& __cordl_internal_get_meta() ;

constexpr void __cordl_internal_set_frames(::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>*  value) ;

constexpr void __cordl_internal_set_meta(::GlobalNamespace::TexturePacker_JsonArray_Meta  value) ;

/// @brief Method .ctor, addr 0xb3aece0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TexturePacker_JsonArray_SpriteDataObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray_SpriteDataObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TexturePacker_JsonArray_SpriteDataObject(TexturePacker_JsonArray_SpriteDataObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray_SpriteDataObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TexturePacker_JsonArray_SpriteDataObject(TexturePacker_JsonArray_SpriteDataObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23060};

/// @brief Field frames, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TexturePacker_JsonArray_Frame>*  ___frames;

/// @brief Field meta, offset: 0x18, size: 0x38, def value: None
 ::GlobalNamespace::TexturePacker_JsonArray_Meta  ___meta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject, ___frames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject, ___meta) == 0x18, "Offset mismatch!");

static_assert(sizeof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject) == 0x50, "Size mismatch!");

} // namespace end def TMPro::SpriteAssetUtilities

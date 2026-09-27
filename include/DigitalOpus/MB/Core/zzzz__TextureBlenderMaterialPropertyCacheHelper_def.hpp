#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderMaterialPropertyCacheHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextureBlenderMaterialPropertyCacheHelper)
namespace GlobalNamespace {
struct TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class TextureBlenderMaterialPropertyCacheHelper;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*, "DigitalOpus.MB.Core", "TextureBlenderMaterialPropertyCacheHelper");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper
class CORDL_TYPE TextureBlenderMaterialPropertyCacheHelper : public ::System::Object {
public:
// Declarations
using MaterialPropertyPair = ::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair;

/// @brief Field nonTexturePropertyValuesForSourceMaterials, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonTexturePropertyValuesForSourceMaterials, put=__cordl_internal_set_nonTexturePropertyValuesForSourceMaterials)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>*  nonTexturePropertyValuesForSourceMaterials;

/// @brief Method AllNonTexturePropertyValuesAreEqual, addr 0x9df52f8, size 0x23c, virtual false, abstract: false, final false
inline bool AllNonTexturePropertyValuesAreEqual(::StringW  prop) ;

/// @brief Method CacheMaterialProperty, addr 0x9df5534, size 0xa0, virtual false, abstract: false, final false
inline void CacheMaterialProperty(::UnityEngine::Material*  m, ::StringW  property, ::System::Object*  value) ;

/// @brief Method GetValueIfAllSourceAreTheSameOrDefault, addr 0x9df5604, size 0x1dc, virtual false, abstract: false, final false
inline ::System::Object* GetValueIfAllSourceAreTheSameOrDefault(::StringW  property, ::System::Object*  defaultValue) ;

static inline ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>* const& __cordl_internal_get_nonTexturePropertyValuesForSourceMaterials() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>*& __cordl_internal_get_nonTexturePropertyValuesForSourceMaterials() ;

constexpr void __cordl_internal_set_nonTexturePropertyValuesForSourceMaterials(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x9df57e0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderMaterialPropertyCacheHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderMaterialPropertyCacheHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlenderMaterialPropertyCacheHelper(TextureBlenderMaterialPropertyCacheHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlenderMaterialPropertyCacheHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlenderMaterialPropertyCacheHelper(TextureBlenderMaterialPropertyCacheHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22854};

/// @brief Field nonTexturePropertyValuesForSourceMaterials, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,::System::Object*>*  ___nonTexturePropertyValuesForSourceMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper, ___nonTexturePropertyValuesForSourceMaterials) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core

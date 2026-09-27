#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITokenPack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Monetization/zzzz__PortalSku_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUITokenPack)
namespace Modio::Monetization {
struct PortalSku;
}
namespace Modio::Unity::UI::Components {
class ModioUITokenPack_ValueImageMap;
}
namespace Modio::Unity::UI::Components {
class ModioUITokenPack___c;
}
namespace Modio {
class Error;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUITokenPack;
}
namespace Modio::Unity::UI::Components {
class ModioUITokenPack_ValueImageMap;
}
namespace Modio::Unity::UI::Components {
class ModioUITokenPack___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITokenPack*);
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*);
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITokenPack___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITokenPack*, "Modio.Unity.UI.Components", "ModioUITokenPack");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*, "Modio.Unity.UI.Components", "ModioUITokenPack/ValueImageMap");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITokenPack___c*, "Modio.Unity.UI.Components", "ModioUITokenPack/<>c");
// Dependencies Modio.Monetization.PortalSku, Modio.Unity.UI.Components.ModioUITokenPack::ValueImageMap, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITokenPack
class CORDL_TYPE ModioUITokenPack : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ValueImageMap = ::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap;

using __c = ::Modio::Unity::UI::Components::ModioUITokenPack___c;

/// @brief Field _amount, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__amount, put=__cordl_internal_set__amount)) ::UnityW<::TMPro::TMP_Text>  _amount;

/// @brief Field _icon, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image>  _icon;

/// @brief Field _name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TMP_Text>  _name;

/// @brief Field _price, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__price, put=__cordl_internal_set__price)) ::UnityW<::TMPro::TMP_Text>  _price;

/// @brief Field _tokenPack, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get__tokenPack, put=__cordl_internal_set__tokenPack)) ::Modio::Monetization::PortalSku  _tokenPack;

/// @brief Field _valuesToImages, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__valuesToImages, put=__cordl_internal_set__valuesToImages)) ::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>  _valuesToImages;

/// @brief Method GetImageForValue, addr 0x9fbd148, size 0x148, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> GetImageForValue(int32_t  amount) ;

static inline ::Modio::Unity::UI::Components::ModioUITokenPack* New_ctor() ;

/// @brief Method OnPressedPurchase, addr 0x9fbd290, size 0x250, virtual false, abstract: false, final false
inline void OnPressedPurchase() ;

/// @brief Method SetPack, addr 0x9fbcfa8, size 0x1a0, virtual false, abstract: false, final false
inline void SetPack(::Modio::Monetization::PortalSku  sku) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__amount() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__amount() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__name() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__price() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__price() ;

constexpr ::Modio::Monetization::PortalSku const& __cordl_internal_get__tokenPack() const;

constexpr ::Modio::Monetization::PortalSku& __cordl_internal_get__tokenPack() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*> const& __cordl_internal_get__valuesToImages() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>& __cordl_internal_get__valuesToImages() ;

constexpr void __cordl_internal_set__amount(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__price(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__tokenPack(::Modio::Monetization::PortalSku  value) ;

constexpr void __cordl_internal_set__valuesToImages(::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>  value) ;

/// @brief Method .ctor, addr 0x9fbd4e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITokenPack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITokenPack(ModioUITokenPack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITokenPack(ModioUITokenPack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27161};

/// [SerializeField]
/// @brief Field _amount, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____amount;

/// [SerializeField]
/// @brief Field _price, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____price;

/// [SerializeField]
/// @brief Field _name, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____name;

/// [SerializeField]
/// @brief Field _icon, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____icon;

/// @brief Field _tokenPack, offset: 0x40, size: 0x28, def value: None
 ::Modio::Monetization::PortalSku  ____tokenPack;

/// [SerializeField]
/// @brief Field _valuesToImages, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap*>  ____valuesToImages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack, ____amount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack, ____price) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack, ____name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack, ____icon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack, ____tokenPack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack, ____valuesToImages) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITokenPack) == 0x70, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITokenPack/<>c
class CORDL_TYPE ModioUITokenPack___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Components::ModioUITokenPack___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Action_1<::Modio::Error*>*  __9__7_0;

static inline ::Modio::Unity::UI::Components::ModioUITokenPack___c* New_ctor() ;

/// @brief Method <OnPressedPurchase>b__7_0, addr 0x9fbd560, size 0xd8, virtual false, abstract: false, final false
inline void _OnPressedPurchase_b__7_0(::Modio::Error*  error) ;

/// @brief Method .ctor, addr 0x9fbd558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Components::ModioUITokenPack___c* getStaticF___9() ;

static inline ::System::Action_1<::Modio::Error*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Components::ModioUITokenPack___c*  value) ;

static inline void setStaticF___9__7_0(::System::Action_1<::Modio::Error*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITokenPack___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPack___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITokenPack___c(ModioUITokenPack___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPack___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITokenPack___c(ModioUITokenPack___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITokenPack___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITokenPack/ValueImageMap
class CORDL_TYPE ModioUITokenPack_ValueImageMap : public ::System::Object {
public:
// Declarations
/// @brief Field image, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_image, put=__cordl_internal_set_image)) ::UnityW<::UnityEngine::Sprite>  image;

/// @brief Field value, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) int32_t  value;

static inline ::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_image() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_image() ;

constexpr int32_t const& __cordl_internal_get_value() const;

constexpr int32_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_value(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fbd4e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITokenPack_ValueImageMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPack_ValueImageMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITokenPack_ValueImageMap(ModioUITokenPack_ValueImageMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPack_ValueImageMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITokenPack_ValueImageMap(ModioUITokenPack_ValueImageMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27159};

/// @brief Field value, offset: 0x10, size: 0x4, def value: None
 int32_t  ___value;

/// @brief Field image, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___image;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap, ___image) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITokenPack_ValueImageMap) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components

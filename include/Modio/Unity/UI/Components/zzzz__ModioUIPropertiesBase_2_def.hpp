#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIPropertiesBase_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUIPropertiesBase_2)
namespace Modio::Unity::UI::Components {
template<typename TOwner,typename TProperty>
class ModioUIPropertiesBase_2___c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
template<typename TOwner,typename TProperty>
class ModioUIPropertiesBase_2;
}
namespace Modio::Unity::UI::Components {
template<typename TOwner,typename TProperty>
class ModioUIPropertiesBase_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::Unity::UI::Components::ModioUIPropertiesBase_2);
MARK_GEN_REF_T_PTR(::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Unity::UI::Components::ModioUIPropertiesBase_2, "Modio.Unity.UI.Components", "ModioUIPropertiesBase`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c, "Modio.Unity.UI.Components", "ModioUIPropertiesBase`2/<>c");
// Dependencies Modio.Unity.UI.Components.IPropertyMonoBehaviourEvents, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// cpp template
template<typename TOwner,typename TProperty>
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIPropertiesBase`2<TOwner,TProperty>
class CORDL_TYPE ModioUIPropertiesBase_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner, TProperty>;

/// @brief Field Owner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Owner, put=__cordl_internal_set_Owner)) TOwner  Owner;

 __declspec(property(get=get_Properties)) ::ArrayW<TProperty>  Properties;

/// @brief Field _monoBehaviourEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__monoBehaviourEvents, put=__cordl_internal_set__monoBehaviourEvents)) ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  _monoBehaviourEvents;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2<TOwner,TProperty>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateProperties() ;

constexpr TOwner const& __cordl_internal_get_Owner() const;

constexpr TOwner& __cordl_internal_get_Owner() ;

constexpr ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*> const& __cordl_internal_get__monoBehaviourEvents() const;

constexpr ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>& __cordl_internal_get__monoBehaviourEvents() ;

constexpr void __cordl_internal_set_Owner(TOwner  value) ;

constexpr void __cordl_internal_set__monoBehaviourEvents(::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<TProperty> get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIPropertiesBase_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPropertiesBase_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIPropertiesBase_2(ModioUIPropertiesBase_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPropertiesBase_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIPropertiesBase_2(ModioUIPropertiesBase_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27138};

/// @brief Field Owner, offset: 0x20, size: 0x8, def value: None
 TOwner  ___Owner;

/// @brief Field _monoBehaviourEvents, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>  ____monoBehaviourEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components {
// cpp template
template<typename TOwner,typename TProperty>
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIPropertiesBase`2/<>c<TOwner,TProperty>
class CORDL_TYPE ModioUIPropertiesBase_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<TProperty,bool>*  __9__4_0;

static inline ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>* New_ctor() ;

/// @brief Method <Awake>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _Awake_b__4_0(TProperty  property) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>* getStaticF___9() ;

static inline ::System::Func_2<TProperty,bool>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Components::ModioUIPropertiesBase_2___c<TOwner,TProperty>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<TProperty,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIPropertiesBase_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPropertiesBase_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIPropertiesBase_2___c(ModioUIPropertiesBase_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIPropertiesBase_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIPropertiesBase_2___c(ModioUIPropertiesBase_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components

#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Message.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Message)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Pseudo {
class MessageFragment;
}
namespace UnityEngine::Localization::Pseudo {
class Message___c;
}
namespace UnityEngine::Localization::Pseudo {
class ReadOnlyMessageFragment;
}
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class Message;
}
namespace UnityEngine::Localization::Pseudo {
class Message___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::Message*);
MARK_REF_T(::UnityEngine::Localization::Pseudo::Message___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::Message*, "UnityEngine.Localization.Pseudo", "Message");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::Message___c*, "UnityEngine.Localization.Pseudo", "Message/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.Message
class CORDL_TYPE Message : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::Pseudo::Message___c;

 __declspec(property(get=get_Fragments, put=set_Fragments)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  Fragments;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Original, put=set_Original)) ::StringW  Original;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>*  Pool;

/// @brief Field <Fragments>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Fragments_k__BackingField, put=__cordl_internal_set__Fragments_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  _Fragments_k__BackingField;

/// @brief Field <Original>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Original_k__BackingField, put=__cordl_internal_set__Original_k__BackingField)) ::StringW  _Original_k__BackingField;

/// @brief Method CreateMessage, addr 0xb022af4, size 0x118, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Pseudo::Message* CreateMessage(::StringW  text) ;

/// @brief Method CreateReadonlyTextFragment, addr 0xb022804, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* CreateReadonlyTextFragment(::StringW  original) ;

/// @brief Method CreateReadonlyTextFragment, addr 0xb022748, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* CreateReadonlyTextFragment(::StringW  original, int32_t  start, int32_t  end) ;

/// @brief Method CreateTextFragment, addr 0xb0226a4, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* CreateTextFragment(::StringW  original) ;

/// @brief Method CreateTextFragment, addr 0xb0225e8, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* CreateTextFragment(::StringW  original, int32_t  start, int32_t  end) ;

static inline ::UnityEngine::Localization::Pseudo::Message* New_ctor() ;

/// @brief Method Release, addr 0xb022c0c, size 0x1bc, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ReleaseFragment, addr 0xb0229d0, size 0x124, virtual false, abstract: false, final false
inline void ReleaseFragment(::UnityEngine::Localization::Pseudo::MessageFragment*  fragment) ;

/// @brief Method ReplaceFragment, addr 0xb0228a8, size 0x128, virtual false, abstract: false, final false
inline void ReplaceFragment(::UnityEngine::Localization::Pseudo::MessageFragment*  original, ::UnityEngine::Localization::Pseudo::MessageFragment*  replacement) ;

/// @brief Method ToString, addr 0xb022dc8, size 0x228, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>* const& __cordl_internal_get__Fragments_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*& __cordl_internal_get__Fragments_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Original_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Original_k__BackingField() ;

constexpr void __cordl_internal_set__Fragments_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  value) ;

constexpr void __cordl_internal_set__Original_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb022ff0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>* getStaticF_Pool() ;

/// [CompilerGenerated]
/// @brief Method get_Fragments, addr 0xb022474, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>* get_Fragments() ;

/// @brief Method get_Length, addr 0xb022484, size 0x164, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_Original, addr 0xb022464, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Original() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::Message*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Fragments, addr 0xb02247c, size 0x8, virtual false, abstract: false, final false
inline void set_Fragments(::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Original, addr 0xb02246c, size 0x8, virtual false, abstract: false, final false
inline void set_Original(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Message() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Message(Message && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message(Message const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25120};

/// [CompilerGenerated]
/// @brief Field <Original>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Original_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Fragments>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Pseudo::MessageFragment*>*  ____Fragments_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::Message, ____Original_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::Message, ____Fragments_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::Message) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.Message/<>c
class CORDL_TYPE Message___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Pseudo::Message___c*  __9;

static inline ::UnityEngine::Localization::Pseudo::Message___c* New_ctor() ;

/// @brief Method <.cctor>b__21_0, addr 0xb023224, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::Message* __cctor_b__21_0() ;

/// @brief Method .ctor, addr 0xb02321c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Pseudo::Message___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Pseudo::Message___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Message___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Message___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Message___c(Message___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message___c(Message___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::Message___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo

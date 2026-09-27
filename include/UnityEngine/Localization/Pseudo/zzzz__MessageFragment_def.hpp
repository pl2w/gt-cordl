#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/MessageFragment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageFragment)
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::Localization::Pseudo {
class Message;
}
namespace UnityEngine::Localization::Pseudo {
class ReadOnlyMessageFragment;
}
namespace UnityEngine::Localization::Pseudo {
class WritableMessageFragment;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class MessageFragment;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::MessageFragment*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::MessageFragment*, "UnityEngine.Localization.Pseudo", "MessageFragment");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.MessageFragment
class CORDL_TYPE MessageFragment : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) char16_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Message, put=set_Message)) ::UnityEngine::Localization::Pseudo::Message*  Message;

/// @brief Field <Message>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message_k__BackingField, put=__cordl_internal_set__Message_k__BackingField)) ::UnityEngine::Localization::Pseudo::Message*  _Message_k__BackingField;

/// @brief Field m_CachedToString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedToString, put=__cordl_internal_set_m_CachedToString)) ::StringW  m_CachedToString;

/// @brief Field m_EndIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndIndex, put=__cordl_internal_set_m_EndIndex)) int32_t  m_EndIndex;

/// @brief Field m_OriginalString, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalString, put=__cordl_internal_set_m_OriginalString)) ::StringW  m_OriginalString;

/// @brief Field m_StartIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartIndex, put=__cordl_internal_set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Method BuildString, addr 0xb021fa4, size 0x54, virtual false, abstract: false, final false
inline void BuildString(::System::Text::StringBuilder*  builder) ;

/// @brief Method CreateReadonlyTextFragment, addr 0xb021e88, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* CreateReadonlyTextFragment(int32_t  start, int32_t  end) ;

/// @brief Method CreateTextFragment, addr 0xb021dcc, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::WritableMessageFragment* CreateTextFragment(int32_t  start, int32_t  end) ;

/// @brief Method Initialize, addr 0xb021d30, size 0x54, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::Localization::Pseudo::Message*  parent, ::StringW  original, int32_t  start, int32_t  end) ;

/// @brief Method Initialize, addr 0xb021d84, size 0x48, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::Localization::Pseudo::Message*  parent, ::StringW  text) ;

static inline ::UnityEngine::Localization::Pseudo::MessageFragment* New_ctor() ;

/// @brief Method ToString, addr 0xb021f44, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::Localization::Pseudo::Message* const& __cordl_internal_get__Message_k__BackingField() const;

constexpr ::UnityEngine::Localization::Pseudo::Message*& __cordl_internal_get__Message_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_CachedToString() const;

constexpr ::StringW& __cordl_internal_get_m_CachedToString() ;

constexpr int32_t const& __cordl_internal_get_m_EndIndex() const;

constexpr int32_t& __cordl_internal_get_m_EndIndex() ;

constexpr ::StringW const& __cordl_internal_get_m_OriginalString() const;

constexpr ::StringW& __cordl_internal_get_m_OriginalString() ;

constexpr int32_t const& __cordl_internal_get_m_StartIndex() const;

constexpr int32_t& __cordl_internal_get_m_StartIndex() ;

constexpr void __cordl_internal_set__Message_k__BackingField(::UnityEngine::Localization::Pseudo::Message*  value) ;

constexpr void __cordl_internal_set_m_CachedToString(::StringW  value) ;

constexpr void __cordl_internal_set_m_EndIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_OriginalString(::StringW  value) ;

constexpr void __cordl_internal_set_m_StartIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb022024, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xb021ff8, size 0x2c, virtual false, abstract: false, final false
inline char16_t get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0xb021cf0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_Message, addr 0xb021d20, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::Message* get_Message() ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0xb021d28, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::UnityEngine::Localization::Pseudo::Message*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageFragment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageFragment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageFragment(MessageFragment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageFragment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageFragment(MessageFragment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25114};

/// @brief Field m_OriginalString, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_OriginalString;

/// @brief Field m_StartIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_StartIndex;

/// @brief Field m_EndIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_EndIndex;

/// @brief Field m_CachedToString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_CachedToString;

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::Pseudo::Message*  ____Message_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::MessageFragment, ___m_OriginalString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::MessageFragment, ___m_StartIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::MessageFragment, ___m_EndIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::MessageFragment, ___m_CachedToString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::MessageFragment, ____Message_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::MessageFragment) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo

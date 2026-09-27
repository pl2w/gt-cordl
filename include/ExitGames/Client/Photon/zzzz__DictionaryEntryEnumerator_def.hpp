#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DictionaryEntryEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DictionaryEntryEnumerator)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
struct DictionaryEntryEnumerator;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::DictionaryEntryEnumerator);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::DictionaryEntryEnumerator, "ExitGames.Client.Photon", "DictionaryEntryEnumerator");
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.DictionaryEntryEnumerator
struct CORDL_TYPE DictionaryEntryEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Collections::DictionaryEntry  Current;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xa6b8818, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xa6b8728, size 0x48, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xa6b8770, size 0xa8, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa6b8594, size 0x94, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xa6b7f54, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Dictionary_2_Enumerator<::System::Object*,::System::Object*>  original) ;

/// @brief Method get_Current, addr 0xa6b8628, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry get_Current() ;

/// @brief Method get_Key, addr 0xa6b8698, size 0x48, virtual false, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Method get_Value, addr 0xa6b86e0, size 0x48, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>* i___System__Collections__Generic__IEnumerator_1___System__Collections__DictionaryEntry_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DictionaryEntryEnumerator() ;

// Ctor Parameters [CppParam { name: "enumerator", ty: "::GlobalNamespace::Dictionary_2_Enumerator<::System::Object*,::System::Object*>", modifiers: "", def_value: None, comment: None }]
constexpr DictionaryEntryEnumerator(::GlobalNamespace::Dictionary_2_Enumerator<::System::Object*,::System::Object*>  enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field enumerator, offset: 0x0, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::System::Object*,::System::Object*>  enumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::DictionaryEntryEnumerator, enumerator) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::DictionaryEntryEnumerator) == 0x28, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon

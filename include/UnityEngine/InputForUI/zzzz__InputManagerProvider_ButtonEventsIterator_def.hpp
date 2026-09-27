#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputManagerProvider_ButtonEventsIterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManagerProvider_ButtonEventsIterator)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputManagerProvider_ButtonEventsIterator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManagerProvider_ButtonEventsIterator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManagerProvider_ButtonEventsIterator, "UnityEngine.InputForUI", "InputManagerProvider/ButtonEventsIterator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.InputManagerProvider/ButtonEventsIterator
struct CORDL_TYPE InputManagerProvider_ButtonEventsIterator {
public:
// Declarations
 __declspec(property(get=get_Current)) bool  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Method FromState, addr 0xb664d68, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator FromState(bool  previous, bool  down, bool  up, bool  current) ;

/// @brief Method MoveNext, addr 0xb664e70, size 0x34, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xb665998, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb6659a4, size 0x30, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current, addr 0xb664d88, size 0x10, virtual false, abstract: false, final false
inline bool get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputManagerProvider_ButtonEventsIterator() ;

// Ctor Parameters [CppParam { name: "_mask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputManagerProvider_ButtonEventsIterator(uint32_t  _mask, int32_t  _bit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _mask, offset: 0x0, size: 0x4, def value: None
 uint32_t  _mask;

/// @brief Field _bit, offset: 0x4, size: 0x4, def value: None
 int32_t  _bit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManagerProvider_ButtonEventsIterator, _mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManagerProvider_ButtonEventsIterator, _bit) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManagerProvider_ButtonEventsIterator) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

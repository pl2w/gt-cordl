#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventBuffer)
namespace GlobalNamespace {
struct InputEventBuffer_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class ICloneable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventBuffer
struct CORDL_TYPE InputEventBuffer {
public:
// Declarations
using Enumerator = ::GlobalNamespace::InputEventBuffer_Enumerator;

 __declspec(property(get=get_bufferPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  bufferPtr;

 __declspec(property(get=get_capacityInBytes)) int64_t  capacityInBytes;

 __declspec(property(get=get_data)) ::Unity::Collections::NativeArray_1<uint8_t>  data;

 __declspec(property(get=get_eventCount)) int32_t  eventCount;

 __declspec(property(get=get_sizeInBytes)) int64_t  sizeInBytes;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AdvanceToNextEvent, addr 0xaff02b8, size 0xbc, virtual false, abstract: false, final false
inline void AdvanceToNextEvent(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>  currentReadPos, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>  currentWritePos, ::by_ref<int32_t>  numEventsRetainedInBuffer, ::by_ref<int32_t>  numRemainingEvents, bool  leaveEventInBuffer) ;

/// @brief Method AllocateEvent, addr 0xafeffcc, size 0x2d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* AllocateEvent(int32_t  sizeInBytes, int32_t  capacityIncrementInBytes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method AppendEvent, addr 0xafeff50, size 0x7c, virtual false, abstract: false, final false
inline void AppendEvent(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr, int32_t  capacityIncrementInBytes, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Clone, addr 0xaff048c, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone() ;

/// @brief Method Contains, addr 0xafefafc, size 0x80, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr) ;

/// @brief Method Dispose, addr 0xaff042c, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0xaff0374, size 0x7c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator() ;

/// @brief Method Reset, addr 0xaff02a0, size 0x18, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaff0428, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.ICloneable.Clone, addr 0xaff0564, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method .ctor, addr 0xafefe30, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t>  buffer, int32_t  eventCount, int32_t  sizeInBytes, bool  transferNativeArrayOwnership) ;

/// @brief Method .ctor, addr 0xafefc80, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr, int32_t  eventCount, int32_t  sizeInBytes, int32_t  capacityInBytes) ;

/// @brief Method get_bufferPtr, addr 0xafefc38, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr() ;

/// @brief Method get_capacityInBytes, addr 0xafefbe0, size 0x4c, virtual false, abstract: false, final false
inline int64_t get_capacityInBytes() ;

/// @brief Method get_data, addr 0xafefc2c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint8_t> get_data() ;

/// @brief Method get_eventCount, addr 0xafefbd0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_eventCount() ;

/// @brief Method get_sizeInBytes, addr 0xafefbd8, size 0x8, virtual false, abstract: false, final false
inline int64_t get_sizeInBytes() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputEventBuffer() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SizeInBytes", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WeOwnTheBuffer", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputEventBuffer(::Unity::Collections::NativeArray_1<uint8_t>  m_Buffer, int64_t  m_SizeInBytes, int32_t  m_EventCount, bool  m_WeOwnTheBuffer) noexcept;

/// @brief Field BufferSizeUnknown offset 0xffffffff size 0x8
static constexpr int64_t  BufferSizeUnknown{static_cast<int64_t>(0xffffffffffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Buffer, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  m_Buffer;

/// @brief Field m_SizeInBytes, offset: 0x10, size: 0x8, def value: None
 int64_t  m_SizeInBytes;

/// @brief Field m_EventCount, offset: 0x18, size: 0x4, def value: None
 int32_t  m_EventCount;

/// @brief Field m_WeOwnTheBuffer, offset: 0x1c, size: 0x1, def value: None
 bool  m_WeOwnTheBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_SizeInBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_EventCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_WeOwnTheBuffer) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel

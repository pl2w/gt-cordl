#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory`1_Record.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory`1_Record)
namespace GlobalNamespace {
struct InputStateHistory_RecordHeader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct InputStateHistory_1_Record;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::InputStateHistory_1_Record);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::InputStateHistory_1_Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Record");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1/Record<TValue>
struct CORDL_TYPE InputStateHistory_1_Record {
public:
// Declarations
 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl_1<TValue>*  control;

 __declspec(property(get=get_header)) ::GlobalNamespace::InputStateHistory_RecordHeader*  header;

 __declspec(property(get=get_index)) int32_t  index;

 __declspec(property(get=get_next)) ::GlobalNamespace::InputStateHistory_1_Record<TValue>  next;

 __declspec(property(get=get_owner)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  owner;

 __declspec(property(get=get_previous)) ::GlobalNamespace::InputStateHistory_1_Record<TValue>  previous;

 __declspec(property(get=get_recordIndex)) int32_t  recordIndex;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() ;

/// @brief Method CheckValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckValid() ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyFrom(::GlobalNamespace::InputStateHistory_1_Record<TValue>  record) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::InputStateHistory_1_Record<TValue>  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetUnsafeExtraMemoryPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void* GetUnsafeExtraMemoryPtr() ;

/// @brief Method GetUnsafeExtraMemoryPtrUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void* GetUnsafeExtraMemoryPtrUnchecked() ;

/// @brief Method GetUnsafeMemoryPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void* GetUnsafeMemoryPtr() ;

/// @brief Method GetUnsafeMemoryPtrUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void* GetUnsafeMemoryPtrUnchecked() ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue ReadValue() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  owner, int32_t  index) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  owner, int32_t  index, ::GlobalNamespace::InputStateHistory_RecordHeader*  header) ;

/// @brief Method get_control, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl_1<TValue>* get_control() ;

/// @brief Method get_header, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_RecordHeader* get_header() ;

/// @brief Method get_index, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_index() ;

/// @brief Method get_next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> get_next() ;

/// @brief Method get_owner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* get_owner() ;

/// @brief Method get_previous, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> get_previous() ;

/// @brief Method get_recordIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_recordIndex() ;

/// @brief Method get_time, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_valid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* i___System__IEquatable_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStateHistory_1_Record() ;

// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputStateHistory_1_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  m_Owner, int32_t  m_IndexPlusOne, uint32_t  m_Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*  m_Owner;

/// @brief Field m_IndexPlusOne, offset: 0x8, size: 0x4, def value: None
 int32_t  m_IndexPlusOne;

/// @brief Field m_Version, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace

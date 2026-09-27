#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_Record.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory_Record)
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
class InputStateHistory;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputStateHistory_Record;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputStateHistory_Record);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputStateHistory_Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Record");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/Record
struct CORDL_TYPE InputStateHistory_Record {
public:
// Declarations
 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_header)) ::GlobalNamespace::InputStateHistory_RecordHeader*  header;

 __declspec(property(get=get_index)) int32_t  index;

 __declspec(property(get=get_next)) ::GlobalNamespace::InputStateHistory_Record  next;

 __declspec(property(get=get_owner)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory*  owner;

 __declspec(property(get=get_previous)) ::GlobalNamespace::InputStateHistory_Record  previous;

 __declspec(property(get=get_recordIndex)) int32_t  recordIndex;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_valid)) bool  valid;

 __declspec(property(get=get_version)) uint32_t  version;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>*() ;

/// @brief Method CheckValid, addr 0xaffd3e8, size 0xa8, virtual false, abstract: false, final false
inline void CheckValid() ;

/// @brief Method CopyFrom, addr 0xaffbb24, size 0x36c, virtual false, abstract: false, final false
inline void CopyFrom(::GlobalNamespace::InputStateHistory_Record  record) ;

/// @brief Method Equals, addr 0xaffd888, size 0x98, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaffd854, size 0x34, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::InputStateHistory_Record  other) ;

/// @brief Method GetHashCode, addr 0xaffd920, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetUnsafeExtraMemoryPtr, addr 0xaffd76c, size 0x18, virtual false, abstract: false, final false
inline void* GetUnsafeExtraMemoryPtr() ;

/// @brief Method GetUnsafeExtraMemoryPtrUnchecked, addr 0xaffd784, size 0xd0, virtual false, abstract: false, final false
inline void* GetUnsafeExtraMemoryPtrUnchecked() ;

/// @brief Method GetUnsafeMemoryPtr, addr 0xaffd6d4, size 0x18, virtual false, abstract: false, final false
inline void* GetUnsafeMemoryPtr() ;

/// @brief Method GetUnsafeMemoryPtrUnchecked, addr 0xaffd6ec, size 0x80, virtual false, abstract: false, final false
inline void* GetUnsafeMemoryPtrUnchecked() ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue ReadValue() ;

/// @brief Method ReadValueAsObject, addr 0xaffd69c, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* ReadValueAsObject() ;

/// @brief Method ToString, addr 0xaffd968, size 0xc4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaffb9b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory*  owner, int32_t  index, ::GlobalNamespace::InputStateHistory_RecordHeader*  header) ;

/// @brief Method get_control, addr 0xaffd4b8, size 0xb4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_header, addr 0xaffd328, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_RecordHeader* get_header() ;

/// @brief Method get_index, addr 0xaffd3ac, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_index() ;

/// @brief Method get_next, addr 0xaffd56c, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_Record get_next() ;

/// @brief Method get_owner, addr 0xaffd3a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory* get_owner() ;

/// @brief Method get_previous, addr 0xaffd608, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_Record get_previous() ;

/// @brief Method get_recordIndex, addr 0xaffd348, size 0xc, virtual false, abstract: false, final false
inline int32_t get_recordIndex() ;

/// @brief Method get_time, addr 0xaffd490, size 0x28, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_valid, addr 0xaffd35c, size 0x48, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Method get_version, addr 0xaffd354, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_version() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>"
constexpr ::System::IEquatable_1<::GlobalNamespace::InputStateHistory_Record>* i___System__IEquatable_1___GlobalNamespace__InputStateHistory_Record_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStateHistory_Record() ;

// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputStateHistory_Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory*  m_Owner, int32_t  m_IndexPlusOne, uint32_t  m_Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13797};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Owner, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputStateHistory*  m_Owner;

/// @brief Field m_IndexPlusOne, offset: 0x8, size: 0x4, def value: None
 int32_t  m_IndexPlusOne;

/// @brief Field m_Version, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputStateHistory_Record, m_Owner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputStateHistory_Record, m_IndexPlusOne) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputStateHistory_Record, m_Version) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputStateHistory_Record) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory_1)
namespace GlobalNamespace {
template<typename TValue>
struct InputStateHistory_1_Enumerator;
}
namespace GlobalNamespace {
template<typename TValue>
struct InputStateHistory_1_Record;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1");
// [DefaultMember("Item")]
// Dependencies UnityEngine.InputSystem.LowLevel.InputStateHistory
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1<TValue>
class CORDL_TYPE InputStateHistory_1 : public ::UnityEngine::InputSystem::LowLevel::InputStateHistory {
public:
// Declarations
using Enumerator = ::GlobalNamespace::InputStateHistory_1_Enumerator<TValue>;

using Record = ::GlobalNamespace::InputStateHistory_1_Record<TValue>;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::InputStateHistory_1_Record<TValue>  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AddRecord, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> AddRecord(::GlobalNamespace::InputStateHistory_1_Record<TValue>  record) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* GetEnumerator() ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* New_ctor(::UnityEngine::InputSystem::InputControl_1<TValue>*  control) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* New_ctor(::System::Nullable_1<int32_t>  maxStateSizeInBytes) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* New_ctor(::StringW  path) ;

/// @brief Method RecordStateChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> RecordStateChange(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, double_t  time) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputControl_1<TValue>*  control) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Nullable_1<int32_t>  maxStateSizeInBytes) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::GlobalNamespace::InputStateHistory_1_Record<TValue> get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* i___System__Collections__Generic__IReadOnlyCollection_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::InputStateHistory_1_Record<TValue>>* i___System__Collections__Generic__IReadOnlyList_1___GlobalNamespace__InputStateHistory_1_Record_TValue__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::GlobalNamespace::InputStateHistory_1_Record<TValue>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputStateHistory_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputStateHistory_1(InputStateHistory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputStateHistory_1(InputStateHistory_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13801};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel

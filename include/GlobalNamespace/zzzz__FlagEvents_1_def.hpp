#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagEvents_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FlagEvents_1)
namespace GlobalNamespace {
template<typename T>
class FlagEvents_1_FlagEvent;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class FlagEvents_1;
}
namespace GlobalNamespace {
template<typename T>
class FlagEvents_1_FlagEvent;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::FlagEvents_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::FlagEvents_1_FlagEvent);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::FlagEvents_1, "", "FlagEvents`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::FlagEvents_1_FlagEvent, "", "FlagEvents`1/FlagEvent");
// Dependencies FlagEvents`1::FlagEvent<T>, System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: FlagEvents`1<T>
class CORDL_TYPE FlagEvents_1 : public ::System::Object {
public:
// Declarations
using FlagEvent = ::GlobalNamespace::FlagEvents_1_FlagEvent<T>;

/// @brief Field list, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_list, put=__cordl_internal_set_list)) ::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>  list;

/// @brief Method InvokeAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeAll(T  test, bool  isLocal) ;

static inline ::GlobalNamespace::FlagEvents_1<T>* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*> const& __cordl_internal_get_list() const;

constexpr ::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>& __cordl_internal_get_list() ;

constexpr void __cordl_internal_set_list(::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagEvents_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagEvents_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagEvents_1(FlagEvents_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagEvents_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagEvents_1(FlagEvents_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1427};

/// [SerializeField]
/// @brief Field list, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FlagEvents_1_FlagEvent<T>*>  ___list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: FlagEvents`1/FlagEvent<T>
class CORDL_TYPE FlagEvents_1_FlagEvent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FlagsLabel)) ::StringW  FlagsLabel;

/// @brief Field anyFlagTrue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_anyFlagTrue, put=__cordl_internal_set_anyFlagTrue)) ::UnityEngine::Events::UnityEvent*  anyFlagTrue;

/// @brief Field debugName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugName, put=__cordl_internal_set_debugName)) ::StringW  debugName;

/// @brief Field flags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) T  flags;

/// @brief Field flagsAsInt, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_flagsAsInt, put=__cordl_internal_set_flagsAsInt)) int32_t  flagsAsInt;

/// @brief Field runOnlyLocally, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_runOnlyLocally, put=__cordl_internal_set_runOnlyLocally)) bool  runOnlyLocally;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::GlobalNamespace::FlagEvents_1_FlagEvent<T>* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_anyFlagTrue() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_anyFlagTrue() ;

constexpr ::StringW const& __cordl_internal_get_debugName() const;

constexpr ::StringW& __cordl_internal_get_debugName() ;

constexpr T const& __cordl_internal_get_flags() const;

constexpr T& __cordl_internal_get_flags() ;

constexpr int32_t const& __cordl_internal_get_flagsAsInt() const;

constexpr int32_t& __cordl_internal_get_flagsAsInt() ;

constexpr bool const& __cordl_internal_get_runOnlyLocally() const;

constexpr bool& __cordl_internal_get_runOnlyLocally() ;

constexpr void __cordl_internal_set_anyFlagTrue(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_debugName(::StringW  value) ;

constexpr void __cordl_internal_set_flags(T  value) ;

constexpr void __cordl_internal_set_flagsAsInt(int32_t  value) ;

constexpr void __cordl_internal_set_runOnlyLocally(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FlagsLabel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_FlagsLabel() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagEvents_1_FlagEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagEvents_1_FlagEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagEvents_1_FlagEvent(FlagEvents_1_FlagEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagEvents_1_FlagEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagEvents_1_FlagEvent(FlagEvents_1_FlagEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1426};

/// @brief Field debugName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___debugName;

/// [Tooltip("Check this box if only the local player is supposed to run this event.")]
/// @brief Field runOnlyLocally, offset: 0x18, size: 0x1, def value: None
 bool  ___runOnlyLocally;

/// @brief Field flags, offset: 0x20, size: 0x8, def value: None
 T  ___flags;

/// [HideInInspector]
/// @brief Field flagsAsInt, offset: 0x28, size: 0x4, def value: None
 int32_t  ___flagsAsInt;

/// @brief Field anyFlagTrue, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___anyFlagTrue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

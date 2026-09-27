#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDateTimeSerializable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDateTimeSerializable)
namespace System {
struct DateTime;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTDateTimeSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTDateTimeSerializable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDateTimeSerializable, "", "GTDateTimeSerializable");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTDateTimeSerializable
struct CORDL_TYPE GTDateTimeSerializable {
public:
// Declarations
 __declspec(property(get=get_dateTime, put=set_dateTime)) ::System::DateTime  dateTime;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method FormatDateTime, addr 0x566d83c, size 0x74, virtual false, abstract: false, final false
static inline ::StringW FormatDateTime(::System::DateTime  dateTime) ;

/// @brief Method TryParseDateTime, addr 0x566d908, size 0x1f4, virtual false, abstract: false, final false
static inline bool TryParseDateTime(::StringW  value, ::by_ref<::System::DateTime>  result) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x566d8d4, size 0x34, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x566d8b0, size 0x24, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0x566dafc, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(int32_t  dummyValue) ;

/// @brief Method get_dateTime, addr 0x566d80c, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_dateTime() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method set_dateTime, addr 0x566d814, size 0x28, virtual false, abstract: false, final false
inline void set_dateTime(::System::DateTime  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTDateTimeSerializable() ;

// Ctor Parameters [CppParam { name: "_dateTimeString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dateTime", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr GTDateTimeSerializable(::StringW  _dateTimeString, ::System::DateTime  _dateTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _dateTimeString, offset: 0x0, size: 0x8, def value: None
 ::StringW  _dateTimeString;

/// @brief Field _dateTime, offset: 0x8, size: 0x8, def value: None
 ::System::DateTime  _dateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTDateTimeSerializable, _dateTimeString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTDateTimeSerializable, _dateTime) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTDateTimeSerializable) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

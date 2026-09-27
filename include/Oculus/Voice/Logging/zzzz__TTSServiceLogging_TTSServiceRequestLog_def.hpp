#pragma once
// IWYU pragma private; include "Oculus/Voice/Logging/TTSServiceLogging_TTSServiceRequestLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TTSServiceLogging_TTSServiceRequestLog)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct TTSServiceLogging_TTSServiceRequestLog;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog, "Oculus.Voice.Logging", "TTSServiceLogging/TTSServiceRequestLog");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Voice.Logging.TTSServiceLogging/TTSServiceRequestLog
struct CORDL_TYPE TTSServiceLogging_TTSServiceRequestLog {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TTSServiceLogging_TTSServiceRequestLog() ;

// Ctor Parameters [CppParam { name: "startTime", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "annotations", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr TTSServiceLogging_TTSServiceRequestLog(::System::DateTime  startTime, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  annotations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field startTime, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  startTime;

/// @brief Field annotations, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  annotations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog, startTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog, annotations) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

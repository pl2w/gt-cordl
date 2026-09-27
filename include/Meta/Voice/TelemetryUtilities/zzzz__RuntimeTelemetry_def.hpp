#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/RuntimeTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RuntimeTelemetry)
namespace Meta::Voice::TelemetryUtilities {
class ITelemetryWriter;
}
namespace Meta::Voice::TelemetryUtilities {
struct OperationID;
}
namespace Meta::Voice::TelemetryUtilities {
struct RuntimeTelemetryPoint;
}
namespace Meta::Voice::TelemetryUtilities {
struct TerminationReason;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::Voice::TelemetryUtilities {
class RuntimeTelemetry;
}
// Write type traits
MARK_REF_T(::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*, "Meta.Voice.TelemetryUtilities", "RuntimeTelemetry");
// Dependencies System.Object
namespace Meta::Voice::TelemetryUtilities {
// Is value type: false
// CS Name: Meta.Voice.TelemetryUtilities.RuntimeTelemetry
class CORDL_TYPE RuntimeTelemetry : public ::System::Object {
public:
// Declarations
/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*  _Instance_k__BackingField;

/// @brief Field _writers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__writers, put=__cordl_internal_set__writers)) ::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>*  _writers;

/// @brief Convert operator to "::Meta::Voice::TelemetryUtilities::ITelemetryWriter"
constexpr operator  ::Meta::Voice::TelemetryUtilities::ITelemetryWriter*() noexcept;

/// @brief Method LogEventTermination, addr 0xb94e3d4, size 0x1bc, virtual true, abstract: false, final true
inline void LogEventTermination(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::TerminationReason  reason, ::StringW  message) ;

/// @brief Method LogPoint, addr 0xb94e590, size 0x1b8, virtual true, abstract: false, final true
inline void LogPoint(::Meta::Voice::TelemetryUtilities::OperationID  operationId, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  point) ;

/// @brief Method LogPoint, addr 0xb94e748, size 0x38, virtual false, abstract: false, final false
inline void LogPoint(::StringW  operationId, ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  point) ;

static inline ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>* const& __cordl_internal_get__writers() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>*& __cordl_internal_get__writers() ;

constexpr void __cordl_internal_set__writers(::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>*  value) ;

/// @brief Method .ctor, addr 0xb94e2f4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0xb94e37c, size 0x58, virtual false, abstract: false, final false
static inline ::Meta::Voice::TelemetryUtilities::RuntimeTelemetry* get_Instance() ;

/// @brief Convert to "::Meta::Voice::TelemetryUtilities::ITelemetryWriter"
constexpr ::Meta::Voice::TelemetryUtilities::ITelemetryWriter* i___Meta__Voice__TelemetryUtilities__ITelemetryWriter() noexcept;

static inline void setStaticF__Instance_k__BackingField(::Meta::Voice::TelemetryUtilities::RuntimeTelemetry*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeTelemetry(RuntimeTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeTelemetry(RuntimeTelemetry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33056};

/// @brief Field _writers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Voice::TelemetryUtilities::ITelemetryWriter*>*  ____writers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::TelemetryUtilities::RuntimeTelemetry, ____writers) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::TelemetryUtilities::RuntimeTelemetry) == 0x18, "Size mismatch!");

} // namespace end def Meta::Voice::TelemetryUtilities

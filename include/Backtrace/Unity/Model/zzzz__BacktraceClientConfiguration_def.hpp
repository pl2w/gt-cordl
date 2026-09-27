#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceClientConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceClientConfiguration)
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceClientConfiguration;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceClientConfiguration*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceClientConfiguration*, "Backtrace.Unity.Model", "BacktraceClientConfiguration");
// Dependencies Backtrace.Unity.Types.MiniDumpType, UnityEngine.ScriptableObject
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceClientConfiguration
class CORDL_TYPE BacktraceClientConfiguration : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field DestroyOnLoad, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_DestroyOnLoad, put=__cordl_internal_set_DestroyOnLoad)) bool  DestroyOnLoad;

/// @brief Field GameObjectDepth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_GameObjectDepth, put=__cordl_internal_set_GameObjectDepth)) int32_t  GameObjectDepth;

/// @brief Field HandleANR, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandleANR, put=__cordl_internal_set_HandleANR)) bool  HandleANR;

/// @brief Field HandleUnhandledExceptions, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandleUnhandledExceptions, put=__cordl_internal_set_HandleUnhandledExceptions)) bool  HandleUnhandledExceptions;

/// @brief Field IgnoreSslValidation, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreSslValidation, put=__cordl_internal_set_IgnoreSslValidation)) bool  IgnoreSslValidation;

/// @brief Field MinidumpType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinidumpType, put=__cordl_internal_set_MinidumpType)) ::Backtrace::Unity::Types::MiniDumpType  MinidumpType;

/// @brief Field OomReports, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_OomReports, put=__cordl_internal_set_OomReports)) bool  OomReports;

/// @brief Field ReportPerMin, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReportPerMin, put=__cordl_internal_set_ReportPerMin)) int32_t  ReportPerMin;

/// @brief Field ServerUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerUrl, put=__cordl_internal_set_ServerUrl)) ::StringW  ServerUrl;

static inline ::Backtrace::Unity::Model::BacktraceClientConfiguration* New_ctor() ;

/// @brief Method UpdateServerUrl, addr 0x5f0fddc, size 0x200, virtual false, abstract: false, final false
inline void UpdateServerUrl() ;

/// @brief Method ValidateServerUrl, addr 0x5f0ffdc, size 0x224, virtual false, abstract: false, final false
inline bool ValidateServerUrl() ;

constexpr bool const& __cordl_internal_get_DestroyOnLoad() const;

constexpr bool& __cordl_internal_get_DestroyOnLoad() ;

constexpr int32_t const& __cordl_internal_get_GameObjectDepth() const;

constexpr int32_t& __cordl_internal_get_GameObjectDepth() ;

constexpr bool const& __cordl_internal_get_HandleANR() const;

constexpr bool& __cordl_internal_get_HandleANR() ;

constexpr bool const& __cordl_internal_get_HandleUnhandledExceptions() const;

constexpr bool& __cordl_internal_get_HandleUnhandledExceptions() ;

constexpr bool const& __cordl_internal_get_IgnoreSslValidation() const;

constexpr bool& __cordl_internal_get_IgnoreSslValidation() ;

constexpr ::Backtrace::Unity::Types::MiniDumpType const& __cordl_internal_get_MinidumpType() const;

constexpr ::Backtrace::Unity::Types::MiniDumpType& __cordl_internal_get_MinidumpType() ;

constexpr bool const& __cordl_internal_get_OomReports() const;

constexpr bool& __cordl_internal_get_OomReports() ;

constexpr int32_t const& __cordl_internal_get_ReportPerMin() const;

constexpr int32_t& __cordl_internal_get_ReportPerMin() ;

constexpr ::StringW const& __cordl_internal_get_ServerUrl() const;

constexpr ::StringW& __cordl_internal_get_ServerUrl() ;

constexpr void __cordl_internal_set_DestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set_GameObjectDepth(int32_t  value) ;

constexpr void __cordl_internal_set_HandleANR(bool  value) ;

constexpr void __cordl_internal_set_HandleUnhandledExceptions(bool  value) ;

constexpr void __cordl_internal_set_IgnoreSslValidation(bool  value) ;

constexpr void __cordl_internal_set_MinidumpType(::Backtrace::Unity::Types::MiniDumpType  value) ;

constexpr void __cordl_internal_set_OomReports(bool  value) ;

constexpr void __cordl_internal_set_ReportPerMin(int32_t  value) ;

constexpr void __cordl_internal_set_ServerUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f10200, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceClientConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClientConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceClientConfiguration(BacktraceClientConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClientConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceClientConfiguration(BacktraceClientConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27589};

/// @brief Field ServerUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ServerUrl;

/// @brief Field ReportPerMin, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ReportPerMin;

/// @brief Field HandleUnhandledExceptions, offset: 0x24, size: 0x1, def value: None
 bool  ___HandleUnhandledExceptions;

/// @brief Field IgnoreSslValidation, offset: 0x25, size: 0x1, def value: None
 bool  ___IgnoreSslValidation;

/// @brief Field DestroyOnLoad, offset: 0x26, size: 0x1, def value: None
 bool  ___DestroyOnLoad;

/// @brief Field HandleANR, offset: 0x27, size: 0x1, def value: None
 bool  ___HandleANR;

/// @brief Field OomReports, offset: 0x28, size: 0x1, def value: None
 bool  ___OomReports;

/// @brief Field GameObjectDepth, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___GameObjectDepth;

/// @brief Field MinidumpType, offset: 0x30, size: 0x4, def value: None
 ::Backtrace::Unity::Types::MiniDumpType  ___MinidumpType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___ServerUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___ReportPerMin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___HandleUnhandledExceptions) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___IgnoreSslValidation) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___DestroyOnLoad) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___HandleANR) == 0x27, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___OomReports) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___GameObjectDepth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceClientConfiguration, ___MinidumpType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceClientConfiguration) == 0x38, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model

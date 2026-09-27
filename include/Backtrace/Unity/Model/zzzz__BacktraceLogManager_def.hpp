#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceLogManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceLogManager)
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace Backtrace::Unity::Model {
class BacktraceUnityMessage;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceLogManager;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceLogManager*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceLogManager*, "Backtrace.Unity.Model", "BacktraceLogManager");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceLogManager
class CORDL_TYPE BacktraceLogManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Disabled)) bool  Disabled;

/// @brief Field LogQueue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogQueue, put=__cordl_internal_set_LogQueue)) ::System::Collections::Generic::Queue_1<::StringW>*  LogQueue;

 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Field _limit, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__limit, put=__cordl_internal_set__limit)) uint32_t  _limit;

/// @brief Field lockObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockObject, put=__cordl_internal_set_lockObject)) ::System::Object*  lockObject;

/// @brief Method Enqueue, addr 0x5f11fb4, size 0x80, virtual false, abstract: false, final false
inline bool Enqueue(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method Enqueue, addr 0x5eff9b8, size 0x68, virtual false, abstract: false, final false
inline bool Enqueue(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method Enqueue, addr 0x5f017a8, size 0x18c, virtual false, abstract: false, final false
inline bool Enqueue(::Backtrace::Unity::Model::BacktraceUnityMessage*  unityMessage) ;

static inline ::Backtrace::Unity::Model::BacktraceLogManager* New_ctor(uint32_t  numberOfLogs) ;

/// @brief Method ToSourceCode, addr 0x5f00334, size 0xe4, virtual false, abstract: false, final false
inline ::StringW ToSourceCode() ;

constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& __cordl_internal_get_LogQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __cordl_internal_get_LogQueue() ;

constexpr uint32_t const& __cordl_internal_get__limit() const;

constexpr uint32_t& __cordl_internal_get__limit() ;

constexpr ::System::Object* const& __cordl_internal_get_lockObject() const;

constexpr ::System::Object*& __cordl_internal_get_lockObject() ;

constexpr void __cordl_internal_set_LogQueue(::System::Collections::Generic::Queue_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__limit(uint32_t  value) ;

constexpr void __cordl_internal_set_lockObject(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5f01128, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(uint32_t  numberOfLogs) ;

/// @brief Method get_Disabled, addr 0x5f00324, size 0x10, virtual false, abstract: false, final false
inline bool get_Disabled() ;

/// @brief Method get_Size, addr 0x5f11f6c, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceLogManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceLogManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceLogManager(BacktraceLogManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceLogManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceLogManager(BacktraceLogManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27597};

/// @brief Field LogQueue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::StringW>*  ___LogQueue;

/// @brief Field lockObject, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___lockObject;

/// @brief Field _limit, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____limit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceLogManager, ___LogQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceLogManager, ___lockObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceLogManager, ____limit) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceLogManager) == 0x28, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model

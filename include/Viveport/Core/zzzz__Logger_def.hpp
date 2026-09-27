#pragma once
// IWYU pragma private; include "Viveport/Core/Logger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace System {
class Type;
}
// Forward declare root types
namespace Viveport::Core {
class Logger;
}
// Write type traits
MARK_REF_T(::Viveport::Core::Logger*);
DEFINE_IL2CPP_CLASS(::Viveport::Core::Logger*, "Viveport.Core", "Logger");
// Dependencies System.Object
namespace Viveport::Core {
// Is value type: false
// CS Name: Viveport.Core.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief Field _hasDetected, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasDetected, put=setStaticF__hasDetected)) bool  _hasDetected;

/// @brief Field _unityLogType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityLogType, put=setStaticF__unityLogType)) ::System::Type*  _unityLogType;

/// @brief Field _usingUnityLog, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__usingUnityLog, put=setStaticF__usingUnityLog)) bool  _usingUnityLog;

/// @brief Method ConsoleLog, addr 0x5b5a8c0, size 0x90, virtual false, abstract: false, final false
static inline void ConsoleLog(::StringW  message) ;

/// @brief Method GetType, addr 0x5b5a950, size 0x138, virtual false, abstract: false, final false
static inline ::System::Type* GetType(::StringW  typeName) ;

/// @brief Method Log, addr 0x5b52c88, size 0xa8, virtual false, abstract: false, final false
static inline void Log(::StringW  message) ;

static inline ::Viveport::Core::Logger* New_ctor() ;

/// @brief Method UnityLog, addr 0x5b5a590, size 0x330, virtual false, abstract: false, final false
static inline void UnityLog(::StringW  message) ;

/// @brief Method .ctor, addr 0x5b5aa88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__hasDetected() ;

static inline ::System::Type* getStaticF__unityLogType() ;

static inline bool getStaticF__usingUnityLog() ;

static inline void setStaticF__hasDetected(bool  value) ;

static inline void setStaticF__unityLogType(::System::Type*  value) ;

static inline void setStaticF__usingUnityLog(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Logger(Logger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logger(Logger const& ) = delete;

/// @brief Field LoggerTypeNameUnity offset 0xffffffff size 0x8
static constexpr ::ConstString  LoggerTypeNameUnity{u"UnityEngine.Debug"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Core::Logger) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Core

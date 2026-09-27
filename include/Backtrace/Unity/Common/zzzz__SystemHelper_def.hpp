#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/SystemHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemHelper)
namespace Backtrace::Unity::Common {
class SystemHelper___c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
class SystemHelper;
}
namespace Backtrace::Unity::Common {
class SystemHelper___c;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::SystemHelper*);
MARK_REF_T(::Backtrace::Unity::Common::SystemHelper___c*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::SystemHelper*, "Backtrace.Unity.Common", "SystemHelper");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::SystemHelper___c*, "Backtrace.Unity.Common", "SystemHelper/<>c");
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.SystemHelper
class CORDL_TYPE SystemHelper : public ::System::Object {
public:
// Declarations
using __c = ::Backtrace::Unity::Common::SystemHelper___c;

/// @brief Method CpuArchitecture, addr 0x5f21e4c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW CpuArchitecture() ;

/// @brief Method GetCurrentThreadId, addr 0x5f26a7c, size 0x68, virtual false, abstract: false, final false
static inline uint32_t GetCurrentThreadId() ;

/// @brief Method IsLibraryAvailable, addr 0x5f26ba0, size 0x118, virtual false, abstract: false, final false
static inline bool IsLibraryAvailable(::ArrayW<::StringW>  libraries) ;

/// @brief Method IsLibraryAvailable, addr 0x5f270a8, size 0xa8, virtual false, abstract: false, final false
static inline bool IsLibraryAvailable(::StringW  libraryName) ;

/// @brief Method LoadLibrary, addr 0x5f27010, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadLibrary(::StringW  lpFileName) ;

/// @brief Method Name, addr 0x5f21ea8, size 0x204, virtual false, abstract: false, final false
static inline ::StringW Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemHelper(SystemHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemHelper(SystemHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::SystemHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.SystemHelper/<>c
class CORDL_TYPE SystemHelper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::Common::SystemHelper___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::StringW,bool>*  __9__3_0;

static inline ::Backtrace::Unity::Common::SystemHelper___c* New_ctor() ;

/// @brief Method <IsLibraryAvailable>b__3_0, addr 0x5f271c0, size 0x1c, virtual false, abstract: false, final false
inline bool _IsLibraryAvailable_b__3_0(::StringW  n) ;

/// @brief Method .ctor, addr 0x5f271b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::Common::SystemHelper___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Backtrace::Unity::Common::SystemHelper___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemHelper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemHelper___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemHelper___c(SystemHelper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemHelper___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemHelper___c(SystemHelper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::SystemHelper___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common

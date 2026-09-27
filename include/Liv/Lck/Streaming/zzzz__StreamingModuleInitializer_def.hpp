#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/StreamingModuleInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StreamingModuleInitializer)
namespace Liv::Lck::DependencyInjection {
class LckDiContainer;
}
namespace Liv::Lck::Streaming {
class StreamingModuleInitializer___c;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class StreamingModuleInitializer;
}
namespace Liv::Lck::Streaming {
class StreamingModuleInitializer___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::StreamingModuleInitializer*);
MARK_REF_T(::Liv::Lck::Streaming::StreamingModuleInitializer___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::StreamingModuleInitializer*, "Liv.Lck.Streaming", "StreamingModuleInitializer");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::StreamingModuleInitializer___c*, "Liv.Lck.Streaming", "StreamingModuleInitializer/<>c");
// Dependencies System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.StreamingModuleInitializer
class CORDL_TYPE StreamingModuleInitializer : public ::System::Object {
public:
// Declarations
using __c = ::Liv::Lck::Streaming::StreamingModuleInitializer___c;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method Initialize, addr 0x9cfd06c, size 0x118, virtual false, abstract: false, final false
static inline void Initialize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamingModuleInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamingModuleInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamingModuleInitializer(StreamingModuleInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamingModuleInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamingModuleInitializer(StreamingModuleInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32680};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::StreamingModuleInitializer) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.StreamingModuleInitializer/<>c
class CORDL_TYPE StreamingModuleInitializer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Streaming::StreamingModuleInitializer___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  __9__0_0;

static inline ::Liv::Lck::Streaming::StreamingModuleInitializer___c* New_ctor() ;

/// @brief Method <Initialize>b__0_0, addr 0x9cfd1f4, size 0xf8, virtual false, abstract: false, final false
inline void _Initialize_b__0_0(::Liv::Lck::DependencyInjection::LckDiContainer*  container) ;

/// @brief Method .ctor, addr 0x9cfd1ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Streaming::StreamingModuleInitializer___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Liv::Lck::Streaming::StreamingModuleInitializer___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamingModuleInitializer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamingModuleInitializer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamingModuleInitializer___c(StreamingModuleInitializer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamingModuleInitializer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamingModuleInitializer___c(StreamingModuleInitializer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32679};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::StreamingModuleInitializer___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming

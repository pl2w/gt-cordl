#pragma once
// IWYU pragma private; include "Liv/Lck/LckServiceInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckServiceInitializer)
namespace Liv::Lck::Core {
class ILckCore;
}
namespace Liv::Lck::DependencyInjection {
class LckDiContainer;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider;
}
namespace Liv::Lck {
class ILckQualityConfig;
}
namespace Liv::Lck {
class LckQualityConfig;
}
namespace Liv::Lck {
class LckServiceInitializer___c;
}
namespace Liv::NativeAudioBridge {
class INativeAudioPlayer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Liv::Lck {
class LckServiceInitializer;
}
namespace Liv::Lck {
class LckServiceInitializer___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckServiceInitializer*);
MARK_REF_T(::Liv::Lck::LckServiceInitializer___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckServiceInitializer*, "Liv.Lck", "LckServiceInitializer");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckServiceInitializer___c*, "Liv.Lck", "LckServiceInitializer/<>c");
// [DefaultExecutionOrder(-900)]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckServiceInitializer
class CORDL_TYPE LckServiceInitializer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Liv::Lck::LckServiceInitializer___c;

/// @brief Field _qualityConfig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualityConfig, put=__cordl_internal_set__qualityConfig)) ::UnityW<::Liv::Lck::LckQualityConfig>  _qualityConfig;

/// @brief Method Awake, addr 0x9d323c0, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConfigureServices, addr 0x9d32644, size 0x588, virtual false, abstract: false, final false
static inline void ConfigureServices(::Liv::Lck::DependencyInjection::LckDiContainer*  container, ::Liv::Lck::ILckQualityConfig*  qualityConfig, ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  overrides) ;

static inline ::Liv::Lck::LckServiceInitializer* New_ctor() ;

constexpr ::UnityW<::Liv::Lck::LckQualityConfig> const& __cordl_internal_get__qualityConfig() const;

constexpr ::UnityW<::Liv::Lck::LckQualityConfig>& __cordl_internal_get__qualityConfig() ;

constexpr void __cordl_internal_set__qualityConfig(::UnityW<::Liv::Lck::LckQualityConfig>  value) ;

/// @brief Method .ctor, addr 0x9d32be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckServiceInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckServiceInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckServiceInitializer(LckServiceInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckServiceInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckServiceInitializer(LckServiceInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24800};

/// [SerializeReference]
/// @brief Field _qualityConfig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckQualityConfig>  ____qualityConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckServiceInitializer, ____qualityConfig) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckServiceInitializer) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckServiceInitializer/<>c
class CORDL_TYPE LckServiceInitializer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::LckServiceInitializer___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>*  __9__2_1;

static inline ::Liv::Lck::LckServiceInitializer___c* New_ctor() ;

/// @brief Method <ConfigureServices>b__2_0, addr 0x9d32c5c, size 0x54, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::ILckCore* _ConfigureServices_b__2_0(::Liv::Lck::DependencyInjection::LckServiceProvider*  provider) ;

/// @brief Method <ConfigureServices>b__2_1, addr 0x9d32cb0, size 0x54, virtual false, abstract: false, final false
inline ::Liv::NativeAudioBridge::INativeAudioPlayer* _ConfigureServices_b__2_1(::Liv::Lck::DependencyInjection::LckServiceProvider*  provider) ;

/// @brief Method .ctor, addr 0x9d32c54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::LckServiceInitializer___c* getStaticF___9() ;

static inline ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>* getStaticF___9__2_0() ;

static inline ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>* getStaticF___9__2_1() ;

static inline void setStaticF___9(::Liv::Lck::LckServiceInitializer___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>*  value) ;

static inline void setStaticF___9__2_1(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckServiceInitializer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckServiceInitializer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckServiceInitializer___c(LckServiceInitializer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckServiceInitializer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckServiceInitializer___c(LckServiceInitializer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckServiceInitializer___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck

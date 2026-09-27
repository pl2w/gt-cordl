#pragma once
// IWYU pragma private; include "Fusion/Behaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Behaviour)
namespace Fusion {
class ILogDumpable;
}
namespace Fusion {
class ILogSource;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Fusion {
class Behaviour;
}
// Write type traits
MARK_REF_T(::Fusion::Behaviour*);
DEFINE_IL2CPP_CLASS(::Fusion::Behaviour*, "Fusion", "Behaviour");
// [ScriptHelp]
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Behaviour
class CORDL_TYPE Behaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DebugNameThreadSafe)) ::StringW  DebugNameThreadSafe;

/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr operator  ::Fusion::ILogDumpable*() noexcept;

/// @brief Convert operator to "::Fusion::ILogSource"
constexpr operator  ::Fusion::ILogSource*() noexcept;

/// @brief Method AddBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T AddBehaviour() ;

/// @brief Method DestroyBehaviour, addr 0x5f97334, size 0x58, virtual false, abstract: false, final false
static inline void DestroyBehaviour(::Fusion::Behaviour*  behaviour) ;

/// @brief Method Fusion.ILogDumpable.Dump, addr 0x5f9738c, size 0xc, virtual true, abstract: false, final true
inline void Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder) ;

/// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetBehaviour() ;

/// @brief Method GetDumpString, addr 0x5f97398, size 0x94, virtual true, abstract: false, final false
inline void GetDumpString(::System::Text::StringBuilder*  builder) ;

static inline ::Fusion::Behaviour* New_ctor() ;

/// @brief Method TryGetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetBehaviour(::by_ref<T>  behaviour) ;

/// @brief Method .ctor, addr 0x5f92034, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DebugNameThreadSafe, addr 0x5f9742c, size 0x108, virtual false, abstract: false, final false
inline ::StringW get_DebugNameThreadSafe() ;

/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* i___Fusion__ILogDumpable() noexcept;

/// @brief Convert to "::Fusion::ILogSource"
constexpr ::Fusion::ILogSource* i___Fusion__ILogSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Behaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Behaviour(Behaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Behaviour(Behaviour const& ) = delete;

/// @brief Field NameDestroyed offset 0xffffffff size 0x8
static constexpr ::ConstString  NameDestroyed{u"(destroyed)"};

/// @brief Field NameUnavailable offset 0xffffffff size 0x8
static constexpr ::ConstString  NameUnavailable{u"(unavailable)"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Behaviour) == 0x20, "Size mismatch!");

} // namespace end def Fusion

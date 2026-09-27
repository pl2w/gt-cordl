#pragma once
// IWYU pragma private; include "Modio/Unity/ModioImageTexture2DExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModioImageTexture2DExtensions)
namespace Modio::Images {
struct ImageReference;
}
namespace Modio::Images {
template<typename TResolution>
class ModioImageSource_1;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Modio::Unity {
class ModioImageTexture2DExtensions;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioImageTexture2DExtensions*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioImageTexture2DExtensions*, "Modio.Unity", "ModioImageTexture2DExtensions");
// [Extension]
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioImageTexture2DExtensions
class CORDL_TYPE ModioImageTexture2DExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method DownloadAsTexture2D, addr 0x9f8fdb4, size 0x80, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* DownloadAsTexture2D(::Modio::Images::ImageReference  imageReference) ;

/// [Extension]
/// @brief Method DownloadAsTexture2D, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResolution>
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* DownloadAsTexture2D(::Modio::Images::ModioImageSource_1<TResolution>*  imageSource, TResolution  resolution) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioImageTexture2DExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioImageTexture2DExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioImageTexture2DExtensions(ModioImageTexture2DExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioImageTexture2DExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioImageTexture2DExtensions(ModioImageTexture2DExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ModioImageTexture2DExtensions) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity

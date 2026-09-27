#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/IClippedSurface_1.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IClippedSurface_1_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
template<typename TClipper>
inline ::System::Collections::Generic::IReadOnlyList_1<TClipper>* Oculus::Interaction::Surfaces::IClippedSurface_1<TClipper>::GetClippers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::IClippedSurface_1<TClipper>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<TClipper>*>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
template<typename TClipper>
constexpr  Oculus::Interaction::Surfaces::IClippedSurface_1<TClipper>::operator ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
template<typename TClipper>
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* Oculus::Interaction::Surfaces::IClippedSurface_1<TClipper>::i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
template<typename TClipper>
constexpr  Oculus::Interaction::Surfaces::IClippedSurface_1<TClipper>::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
template<typename TClipper>
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::IClippedSurface_1<TClipper>::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}

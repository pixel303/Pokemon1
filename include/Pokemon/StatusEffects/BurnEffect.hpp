#pragma once

#include "IStatusEffect.hpp"

namespace N_Pokemon {
    class BurnEffect : public IStatusEffect {
    public:
        void applyEffect(Pokemon* target) override {
            // Apply burn effect logic
        }

        std::string getEffectName() override {
            return "Burned";
        }

        bool turnEndEffect(Pokemon* target) override {
            // Reduce health due to burn
            target->takeDamage(10);  // Example damage value
            return true;  // Burn does not prevent movement
        }

        void clearEffect(Pokemon* target) override {
            // Logic to clear the burn effect
        }
    };
} 
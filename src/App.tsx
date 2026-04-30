import { useState } from 'react';
import './App.css';

const cheats = [
  { category: 'Level Cheats', id: 1, name: 'God Mode', description: 'Become invincible to all damage' },
  { category: 'Level Cheats', id: 2, name: 'Infinite Orbs', description: 'Never run out of orbs' },
  { category: 'Level Cheats', id: 3, name: 'Super Speed', description: 'Move at incredible speeds' },
  { category: 'Level Cheats', id: 4, name: 'Slow Motion', description: 'Slow down time' },
  { category: 'Level Cheats', id: 5, name: 'Freeze Time', description: 'Freeze time completely' },
  { category: 'Level Cheats', id: 6, name: 'Flip Gravity', description: 'Reverse gravity direction' },
  { category: 'Level Cheats', id: 7, name: 'Teleport', description: 'Instantly teleport anywhere' },
  { category: 'Level Cheats', id: 8, name: 'Warp to %', description: 'Jump to any percentage' },
  { category: 'Level Cheats', id: 9, name: 'Skip Obstacles', description: 'Automatically skip obstacles' },
  { category: 'Level Cheats', id: 10, name: 'Webhook Skip', description: 'Skip using webhook API' },
  { category: 'Level Cheats', id: 11, name: 'Infinite Ships', description: 'Unlimited ships' },
  { category: 'Level Cheats', id: 12, name: 'Ball Mode', description: 'Force ball mode' },
  { category: 'Level Cheats', id: 13, name: 'UFO Mode', description: 'Force UFO mode' },
  { category: 'Level Cheats', id: 14, name: 'Spider Mode', description: 'Force spider mode' },
  { category: 'Level Cheats', id: 15, name: 'Robot Mode', description: 'Force robot mode' },
  
  { category: 'Player Cheats', id: 16, name: 'Infinite Jump', description: 'Jump infinitely' },
  { category: 'Player Cheats', id: 17, name: 'High Jump', description: 'Jump higher' },
  { category: 'Player Cheats', id: 18, name: 'Low Jump', description: 'Jump lower' },
  { category: 'Player Cheats', id: 19, name: 'Fast Jump', description: 'Faster jump speed' },
  { category: 'Player Cheats', id: 20, name: 'Slow Jump', description: 'Slower jump speed' },
  { category: 'Player Cheats', id: 21, name: 'Fly Mode', description: 'Fly through levels' },
  { category: 'Player Cheats', id: 22, name: 'Phase Through', description: 'Phase through objects' },
  { category: 'Player Cheats', id: 23, name: 'Size Change', description: 'Change player size' },
  { category: 'Player Cheats', id: 24, name: 'Speed Change', description: 'Change player speed' },
  { category: 'Player Cheats', id: 25, name: 'Invincibility', description: 'Become invincible' },
  { category: 'Player Cheats', id: 26, name: 'Unbreakable', description: 'Cannot be destroyed' },
  { category: 'Player Cheats', id: 27, name: 'No Death', description: 'Never die' },
  { category: 'Player Cheats', id: 28, name: 'Auto Restart', description: 'Automatic restart on death' },
  { category: 'Player Cheats', id: 29, name: 'Quick Restart', description: 'Faster restart' },
  { category: 'Player Cheats', id: 30, name: 'Instant Restart', description: 'No restart delay' },
  
  { category: 'Object Cheats', id: 31, name: 'Destroy All', description: 'Destroy all objects' },
  { category: 'Object Cheats', id: 32, name: 'Destroy Spikes', description: 'Remove all spikes' },
  { category: 'Object Cheats', id: 33, name: 'Destroy Blocks', description: 'Remove all blocks' },
  { category: 'Object Cheats', id: 34, name: 'Destroy Orbs', description: 'Remove all orbs' },
  { category: 'Object Cheats', id: 35, name: 'Destroy Portals', description: 'Remove all portals' },
  { category: 'Object Cheats', id: 36, name: 'Destroy Shaders', description: 'Remove all shaders' },
  { category: 'Object Cheats', id: 37, name: 'Destroy Particles', description: 'Remove all particles' },
  { category: 'Object Cheats', id: 38, name: 'Destroy Triggers', description: 'Remove all triggers' },
  { category: 'Object Cheats', id: 39, name: 'Destroy Decals', description: 'Remove all decals' },
  { category: 'Object Cheats', id: 40, name: 'Destroy Text', description: 'Remove all text' },
  { category: 'Object Cheats', id: 41, name: 'Hide Objects', description: 'Hide all objects' },
  { category: 'Object Cheats', id: 42, name: 'Show Hidden', description: 'Show hidden objects' },
  { category: 'Object Cheats', id: 43, name: 'Select All', description: 'Select all objects' },
  { category: 'Object Cheats', id: 44, name: 'Copy All', description: 'Copy all objects' },
  { category: 'Object Cheats', id: 45, name: 'Paste All', description: 'Paste all objects' },
  
  { category: 'Visual Cheats', id: 46, name: 'Show Hitboxes', description: 'Display hitboxes' },
  { category: 'Visual Cheats', id: 47, name: 'Show Collision', description: 'Display collision boxes' },
  { category: 'Visual Cheats', id: 48, name: 'Show Triggers', description: 'Display trigger zones' },
  { category: 'Visual Cheats', id: 49, name: 'Show Portals', description: 'Display portal destinations' },
  { category: 'Visual Cheats', id: 50, name: 'Show IDs', description: 'Display object IDs' },
  { category: 'Visual Cheats', id: 51, name: 'Show FPS', description: 'Display FPS counter' },
  { category: 'Visual Cheats', id: 52, name: 'Show Coords', description: 'Display coordinates' },
  { category: 'Visual Cheats', id: 53, name: 'Show Speed', description: 'Display current speed' },
  { category: 'Visual Cheats', id: 54, name: 'Show %', description: 'Display level percentage' },
  { category: 'Visual Cheats', id: 55, name: 'Show Time', description: 'Display elapsed time' },
  { category: 'Visual Cheats', id: 56, name: 'Show Distance', description: 'Display distance traveled' },
  { category: 'Visual Cheats', id: 57, name: 'Show Rotation', description: 'Display rotation' },
  { category: 'Visual Cheats', id: 58, name: 'Show Size', description: 'Display size' },
  { category: 'Visual Cheats', id: 59, name: 'Custom Colors', description: 'Use custom colors' },
  { category: 'Visual Cheats', id: 60, name: 'Custom Effects', description: 'Use custom effects' },
  
  { category: 'Audio Cheats', id: 61, name: 'Mute Music', description: 'Mute background music' },
  { category: 'Audio Cheats', id: 62, name: 'Mute SFX', description: 'Mute sound effects' },
  { category: 'Audio Cheats', id: 63, name: 'Custom Music', description: 'Play custom music' },
  { category: 'Audio Cheats', id: 64, name: 'Custom SFX', description: 'Use custom sound effects' },
  { category: 'Audio Cheats', id: 65, name: 'Volume Boost', description: 'Increase volume' },
  { category: 'Audio Cheats', id: 66, name: 'Bass Boost', description: 'Boost bass' },
  { category: 'Audio Cheats', id: 67, name: 'Treble Boost', description: 'Boost treble' },
  { category: 'Audio Cheats', id: 68, name: 'Equalizer', description: 'Custom equalizer' },
  { category: 'Audio Cheats', id: 69, name: 'Audio Speed', description: 'Change audio speed' },
  { category: 'Audio Cheats', id: 70, name: 'No Audio Delay', description: 'Remove audio delay' },
  
  { category: 'Shop Cheats', id: 71, name: 'Infinite Gems', description: 'Unlimited gems' },
  { category: 'Shop Cheats', id: 72, name: 'Infinite Credits', description: 'Unlimited credits' },
  { category: 'Shop Cheats', id: 73, name: 'Infinite Stars', description: 'Unlimited stars' },
  { category: 'Shop Cheats', id: 74, name: 'Unlock Ships', description: 'Unlock all ships' },
  { category: 'Shop Cheats', id: 75, name: 'Unlock Balls', description: 'Unlock all balls' },
  { category: 'Shop Cheats', id: 76, name: 'Unlock Colors', description: 'Unlock all colors' },
  { category: 'Shop Cheats', id: 77, name: 'Unlock Glow', description: 'Unlock all glow colors' },
  { category: 'Shop Cheats', id: 78, name: 'Unlock Shaders', description: 'Unlock all shaders' },
  { category: 'Shop Cheats', id: 79, name: 'Unlock Effects', description: 'Unlock all effects' },
  { category: 'Shop Cheats', id: 80, name: 'Unlock ALL', description: 'Unlock everything' },
  
  { category: 'Editor Cheats', id: 81, name: 'Unlimited Objects', description: 'No object limit' },
  { category: 'Editor Cheats', id: 82, name: 'Unlimited Portals', description: 'No portal limit' },
  { category: 'Editor Cheats', id: 83, name: 'Unlimited Triggers', description: 'No trigger limit' },
  { category: 'Editor Cheats', id: 84, name: 'Unlimited Decals', description: 'No decal limit' },
  { category: 'Editor Cheats', id: 85, name: 'Unlimited Text', description: 'No text limit' },
  { category: 'Editor Cheats', id: 86, name: 'Unlimited Layers', description: 'No layer limit' },
  { category: 'Editor Cheats', id: 87, name: 'Unlimited Groups', description: 'No group limit' },
  { category: 'Editor Cheats', id: 88, name: 'Unlimited Cameras', description: 'No camera limit' },
  { category: 'Editor Cheats', id: 89, name: 'Unlimited Shaders', description: 'No shader limit' },
  { category: 'Editor Cheats', id: 90, name: 'Unlimited Particles', description: 'No particle limit' },
  
  { category: 'Advanced Cheats', id: 91, name: 'Custom Level Data', description: 'Modify level data' },
  { category: 'Advanced Cheats', id: 92, name: 'Custom Player Data', description: 'Modify player data' },
  { category: 'Advanced Cheats', id: 93, name: 'Custom User Data', description: 'Modify user data' },
  { category: 'Advanced Cheats', id: 94, name: 'Custom Settings', description: 'Custom settings' },
  { category: 'Advanced Cheats', id: 95, name: 'Custom Colors+', description: 'Advanced color customization' },
  { category: 'Advanced Cheats', id: 96, name: 'Custom Effects+', description: 'Advanced effect customization' },
  { category: 'Advanced Cheats', id: 97, name: 'Custom Animations', description: 'Custom animations' },
  { category: 'Advanced Cheats', id: 98, name: 'Custom Particles+', description: 'Advanced particle customization' },
  { category: 'Advanced Cheats', id: 99, name: 'Custom Shaders+', description: 'Advanced shader customization' },
  { category: 'Advanced Cheats', id: 100, name: 'God Mode+', description: 'Ultimate invincibility' },
];

const categories = [
  'Level Cheats',
  'Player Cheats',
  'Object Cheats',
  'Visual Cheats',
  'Audio Cheats',
  'Shop Cheats',
  'Editor Cheats',
  'Advanced Cheats'
];

function App() {
  const [selectedCategory, setSelectedCategory] = useState('All');
  const [enabledCheats, setEnabledCheats] = useState<Set<number>>(new Set());

  const filteredCheats = selectedCategory === 'All' 
    ? cheats 
    : cheats.filter(c => c.category === selectedCategory);

  const toggleCheat = (id: number) => {
    setEnabledCheats(prev => {
      const newSet = new Set(prev);
      if (newSet.has(id)) {
        newSet.delete(id);
      } else {
        newSet.add(id);
      }
      return newSet;
    });
  };

  const enableAll = () => {
    setEnabledCheats(new Set(cheats.map(c => c.id)));
  };

  const disableAll = () => {
    setEnabledCheats(new Set());
  };

  return (
    <div className="app">
      <header className="header">
        <div className="logo-container">
          <img src="/logo.png" alt="UltimateCheatMod Logo" className="logo" />
        </div>
        <h1>UltimateCheatMod</h1>
        <p className="subtitle">The Most Comprehensive Geometry Dash Mod</p>
        <div className="badges">
          <span className="badge version">v1.0.0</span>
          <span className="badge geode">Geode 2.0+</span>
          <span className="badge gd">GD 2.2+</span>
        </div>
      </header>

      <div className="stats">
        <div className="stat-card">
          <div className="stat-number">{cheats.length}+</div>
          <div className="stat-label">Cheats</div>
        </div>
        <div className="stat-card">
          <div className="stat-number">{categories.length}</div>
          <div className="stat-label">Categories</div>
        </div>
        <div className="stat-card">
          <div className="stat-number">{enabledCheats.size}</div>
          <div className="stat-label">Enabled</div>
        </div>
      </div>

      <div className="controls">
        <button className="btn btn-primary" onClick={enableAll}>Enable All</button>
        <button className="btn btn-secondary" onClick={disableAll}>Disable All</button>
        <button className="btn btn-success">Save Settings</button>
        <button className="btn btn-warning">Load Settings</button>
      </div>

      <nav className="category-nav">
        <button 
          className={`category-btn ${selectedCategory === 'All' ? 'active' : ''}`}
          onClick={() => setSelectedCategory('All')}
        >
          All
        </button>
        {categories.map(cat => (
          <button 
            key={cat}
            className={`category-btn ${selectedCategory === cat ? 'active' : ''}`}
            onClick={() => setSelectedCategory(cat)}
          >
            {cat}
          </button>
        ))}
      </nav>

      <div className="cheats-grid">
        {filteredCheats.map(cheat => (
          <div 
            key={cheat.id} 
            className={`cheat-card ${enabledCheats.has(cheat.id) ? 'enabled' : ''}`}
            onClick={() => toggleCheat(cheat.id)}
          >
            <div className="cheat-header">
              <span className="cheat-id">#{cheat.id}</span>
              <span className={`status ${enabledCheats.has(cheat.id) ? 'on' : 'off'}`}>
                {enabledCheats.has(cheat.id) ? 'ON' : 'OFF'}
              </span>
            </div>
            <h3 className="cheat-name">{cheat.name}</h3>
            <p className="cheat-desc">{cheat.description}</p>
            <span className="cheat-category">{cheat.category}</span>
          </div>
        ))}
      </div>

      <footer className="footer">
        <div className="footer-content">
          <div className="footer-section">
            <h4>About</h4>
            <p>UltimateCheatMod is the most comprehensive cheat mod for Geometry Dash with 100+ features.</p>
          </div>
          <div className="footer-section">
            <h4>Links</h4>
            <a href="https://github.com/ultimate/ultimatecheatmod" target="_blank" rel="noopener noreferrer">GitHub</a>
            <a href="https://geode-sdk.org/" target="_blank" rel="noopener noreferrer">Geode SDK</a>
            <a href="https://discord.gg/ultimate" target="_blank" rel="noopener noreferrer">Discord</a>
          </div>
          <div className="footer-section">
            <h4>Requirements</h4>
            <p>Geometry Dash 2.2+</p>
            <p>Geode 2.0+</p>
          </div>
        </div>
        <div className="footer-bottom">
          <p>© 2024 UltimateCheatMod. All rights reserved.</p>
        </div>
      </footer>
    </div>
  );
}

export default App;
